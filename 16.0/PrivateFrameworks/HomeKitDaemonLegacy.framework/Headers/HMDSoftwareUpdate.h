// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSOFTWAREUPDATE_H
#define HMDSOFTWAREUPDATE_H

@class HMFObject, NSArray, NSString, HMSoftwareUpdateDocumentationMetadata, NSUUID, HMFMessageDispatcher, NSSet, NSDate, HMFSoftwareVersion;
@protocol HMFLogging, HMFObject, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, NSSecureCoding, OS_dispatch_queue, HMDSoftwareUpdateDataSource;


#import "HMDAccessory.h"
#import "HMDSoftwareUpdateModel.h"

@interface HMDSoftwareUpdate : HMFObject <HMFLogging, HMFObject, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (weak) HMDAccessory *accessory; // ivar: _accessory
@property BOOL allowExtraUpdate; // ivar: _allowExtraUpdate
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (weak) NSObject<HMDSoftwareUpdateDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMSoftwareUpdateDocumentationMetadata *documentationMetadata; // ivar: _documentationMetadata
@property (readonly) NSUInteger downloadSize; // ivar: _downloadSize
@property (readonly) NSUInteger hash;
@property (copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) CGFloat installDuration; // ivar: _installDuration
@property (retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy) HMDSoftwareUpdateModel *model;
@property NSUInteger needsAttentionReasons; // ivar: _needsAttentionReasons
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) NSDate *releaseDate; // ivar: _releaseDate
@property (readonly, copy) NSString *shortDescription;
@property (readonly) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly) NSUInteger updateType; // ivar: _updateType
@property (readonly, copy) HMFSoftwareVersion *version; // ivar: _version


+(BOOL)hasMessageReceiverChildren;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModel:(id)arg0 ;
-(id)initWithVersion:(id)arg0 downloadSize:(NSUInteger)arg1 state:(NSInteger)arg2 installDuration:(CGFloat)arg3 documentationMetadata:(id)arg4 releaseDate:(id)arg5 ;
-(id)logIdentifier;
-(id)messageDestination;
-(id)transactionWithObjectChangeType:(NSUInteger)arg0 ;
-(id)transactionWithObjectChangeType:(NSUInteger)arg0 forAccessoryUUID:(id)arg1 ;
-(void)_handleDocumentationRequest:(id)arg0 ;
-(void)_handleDocumentationStateNotification:(id)arg0 ;
-(void)_handleNeedsAttentionReasonsRequest:(id)arg0 ;
-(void)_handleUpdateDocumentationMetadata:(id)arg0 ;
-(void)_handleUpdateState:(id)arg0 ;
-(void)_updateState:(NSInteger)arg0 message:(id)arg1 options:(id)arg2 ;
-(void)configureWithAccessory:(id)arg0 dataSource:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)registerForMessages;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)updateLocalState:(NSInteger)arg0 ;


@end


#endif