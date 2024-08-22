// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDASSISTANTACCESSCONTROL_H
#define HMDASSISTANTACCESSCONTROL_H

@class HMFObject, NSMutableSet, NSArray, NSString, NSUUID;
@protocol HMFLogging, HMFObject, NSSecureCoding, HMDBackingStoreObjectProtocol, OS_dispatch_queue;


#import "HMDAssistantAccessControlModel.h"
#import "HMDUser.h"

@interface HMDAssistantAccessControl : HMFObject <HMFLogging, HMFObject, NSSecureCoding, HMDBackingStoreObjectProtocol>

 {
    os_unfair_lock_s _lock;
    NSMutableSet *_appleMediaAccessories;
    NSMutableSet *_hapAccessoryIdentifiers;
}


@property (readonly, copy) NSArray *accessories;
@property (getter=areActivityNotificationsEnabledForPersonalRequests) BOOL activityNotificationsEnabledForPersonalRequests; // ivar: _activityNotificationsEnabledForPersonalRequests
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) NSUInteger cachedHash; // ivar: _cachedHash
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, copy) HMDAssistantAccessControlModel *model;
@property (readonly, copy) NSUUID *modelID;
@property NSUInteger options; // ivar: _options
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (weak) HMDUser *user; // ivar: _user


+(BOOL)isAccessorySupported:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)accessControlWithMessage:(id)arg0 user:(id)arg1 error:(*id)arg2 ;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)assistantAccessControlModelWithRemovedAccessories:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUser:(id)arg0 ;
-(id)initWithUser:(id)arg0 appleAccessories:(id)arg1 enabled:(BOOL)arg2 ;
-(id)initWithUser:(id)arg0 appleAccessories:(id)arg1 hapAccessoryIdentifiers:(id)arg2 enabled:(BOOL)arg3 activityNotificationsEnabledForPersonalRequests:(BOOL)arg4 ;
-(id)initWithUser:(id)arg0 model:(id)arg1 ;
-(id)logIdentifier;
-(id)transactionWithObjectChangeType:(NSUInteger)arg0 ;
-(void)addAccessory:(id)arg0 ;
-(void)configure;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleRemovedAccessory:(id)arg0 ;
-(void)notifyClientOfUpdateWithMessage:(id)arg0 ;
-(void)removeAccessoriesAddedByOldController:(id)arg0 ;
-(void)removeAccessory:(id)arg0 ;
-(void)setAppleMediaAccessories:(id)arg0 ;
-(void)setHapAccessoryIdentifiers:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif