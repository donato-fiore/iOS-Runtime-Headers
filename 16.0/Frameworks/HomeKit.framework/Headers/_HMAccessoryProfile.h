// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HMACCESSORYPROFILE_H
#define _HMACCESSORYPROFILE_H

@class NSString, NSUUID, NSArray;
@protocol HMObjectMerge, HMFMessageReceiver, NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMAccessory.h"
#import "_HMContext.h"
#import "HMHome.h"

@interface _HMAccessoryProfile : NSObject <HMObjectMerge, HMFMessageReceiver, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, weak, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (copy, nonatomic) NSString *assistantIdentifier; // ivar: _assistantIdentifier
@property (readonly, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier; // ivar: _profileUniqueIdentifier
@property (readonly, nonatomic) NSArray *services; // ivar: _services
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 services:(id)arg1 ;
-(void)__configureWithContext:(id)arg0 accessory:(id)arg1 ;
-(void)_recomputeAssistantIdentifier;
-(void)_registerNotificationHandlers;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleRuntimeStateUpdate:(id)arg0 ;
-(void)recomputeAssistantIdentifier;


@end


#endif