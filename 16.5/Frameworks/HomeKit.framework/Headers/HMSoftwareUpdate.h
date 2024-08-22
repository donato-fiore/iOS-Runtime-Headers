// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMSOFTWAREUPDATE_H
#define HMSOFTWAREUPDATE_H

@class NSString, NSUUID, NSDate, HMFSoftwareVersion;
@protocol HMFMessageReceiver, HMFLogging, HMObjectMerge, NSSecureCoding, HMSoftwareUpdateDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMAccessory.h"
#import "_HMContext.h"
#import "HMSoftwareUpdateDocumentation.h"
#import "HMSoftwareUpdateDocumentationMetadata.h"

@interface HMSoftwareUpdate : NSObject <HMFMessageReceiver, HMFLogging, HMObjectMerge, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
}


@property (weak) HMAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMSoftwareUpdateDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) HMSoftwareUpdateDocumentation *documentation; // ivar: _documentation
@property (readonly, getter=isDocumentationAvailable) BOOL documentationAvailable;
@property (readonly) HMSoftwareUpdateDocumentationMetadata *documentationMetadata; // ivar: _documentationMetadata
@property (readonly) NSUInteger downloadSize; // ivar: _downloadSize
@property (readonly) NSUInteger hash;
@property (copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) CGFloat installDuration; // ivar: _installDuration
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (nonatomic) NSUInteger needsAttentionReasons; // ivar: _needsAttentionReasons
@property (readonly) NSDate *releaseDate; // ivar: _releaseDate
@property (readonly) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly) NSUInteger updateType; // ivar: _updateType
@property (readonly, copy) HMFSoftwareVersion *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVersion:(id)arg0 downloadSize:(NSUInteger)arg1 ;
-(id)initWithVersion:(id)arg0 downloadSize:(NSUInteger)arg1 state:(NSInteger)arg2 ;
-(id)initWithVersion:(id)arg0 downloadSize:(NSUInteger)arg1 state:(NSInteger)arg2 documentationMetadata:(id)arg3 ;
-(id)initWithVersion:(id)arg0 downloadSize:(NSUInteger)arg1 state:(NSInteger)arg2 installDuration:(CGFloat)arg3 documentationMetadata:(id)arg4 ;
-(id)initWithVersion:(id)arg0 downloadSize:(NSUInteger)arg1 state:(NSInteger)arg2 installDuration:(CGFloat)arg3 documentationMetadata:(id)arg4 releaseDate:(id)arg5 ;
-(id)logIdentifier;
-(id)messageDestination;
-(void)_handleUpdatedDocumentation:(id)arg0 ;
-(void)_handleUpdatedDocumentationMetadata:(id)arg0 ;
-(void)_handleUpdatedNeedsAttentionReasonsMessage:(id)arg0 ;
-(void)_handleUpdatedState:(id)arg0 ;
-(void)_registerNotificationHandlers;
-(void)_requestNeedsAttentionReasonsWithCompletionHandler:(id)arg0 ;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)configureWithContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchNeedsAttentionReasonsWithCompletionHandler:(id)arg0 ;
-(void)requestDocumentation;
-(void)updateDocumentationMetadata:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateState:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif