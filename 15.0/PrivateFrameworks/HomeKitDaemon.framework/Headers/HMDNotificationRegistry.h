// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNOTIFICATIONREGISTRY_H
#define HMDNOTIFICATIONREGISTRY_H

@class HMFObject, HMFUnfairLock, NSString, NSHashTable, NSMutableDictionary, NSMutableSet, HMFTimer;
@protocol HMFLogging, HMFTimerDelegate, NSSecureCoding, OS_dispatch_queue;


#import "HMDHome.h"

@interface HMDNotificationRegistry : HMFObject <HMFLogging, HMFTimerDelegate, NSSecureCoding>

 {
    HMFUnfairLock *_lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSHashTable *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMDHome *home; // ivar: _home
@property (readonly, nonatomic) NSMutableDictionary *notificationRegistry; // ivar: _notificationRegistry
@property (readonly) NSMutableSet *pendingRequests; // ivar: _pendingRequests
@property (readonly) HMFTimer *pendingRequestsRetryTimer; // ivar: _pendingRequestsRetryTimer
@property (readonly) Class superclass;
@property (retain) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)doesKey:(id)arg0 matchMediaProfile:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_createCharacteristicsMapForCharacteristics:(id)arg0 ;
+(id)_reachabilityEventNotificationRegistryKeyForAccessoryUUID:(id)arg0 ;
+(id)_reachabilityEventNotificationRegistryKeysForAccessoryUUIDs:(id)arg0 ;
+(id)keyForCharacteristic:(id)arg0 ;
+(id)keyForProperty:(id)arg0 mediaProfile:(id)arg1 ;
+(id)logCategory;
-(BOOL)_processCharacteristicsRequests:(id)arg0 ;
-(BOOL)_processMediaPropertiesRequests:(id)arg0 ;
-(BOOL)disableNotificationForCharacteristics:(id)arg0 forUser:(id)arg1 characteristicsToDisableEvents:(*id)arg2 ;
-(BOOL)disableNotificationForMediaProfile:(id)arg0 mediaProperties:(id)arg1 userID:(id)arg2 ;
-(BOOL)disableReachabilityEventNotificationForAccessoryUUIDs:(id)arg0 forUserID:(id)arg1 ;
-(BOOL)enableNotificationForCharacteristics:(id)arg0 forUser:(id)arg1 ;
-(BOOL)enableNotificationForMediaProfile:(id)arg0 mediaProperties:(id)arg1 userID:(id)arg2 ;
-(BOOL)enableReachabilityEventNotificationForAccessoryUUIDs:(id)arg0 forUserID:(id)arg1 ;
-(BOOL)removeRegistrationsForMediaProfile:(id)arg0 ;
-(id)_delayedBlocksCollectedWhileDeregisteringUsers:(id)arg0 forHome:(id)arg1 isiOS:(BOOL)arg2 isResident:(BOOL)arg3 ;
-(id)allCharacteristicIdentifiers;
-(id)filterCharacteristics:(id)arg0 forUser:(id)arg1 ;
-(id)filterProperties:(id)arg0 forUser:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPendingRequestsRetryTimer:(id)arg0 ;
-(id)logIdentifier;
-(id)shortDescription;
-(id)userIDsRegisteredForReachabilityEventNotificationsForAccessoryUUIDs:(id)arg0 ;
-(id)usersRegisteredForNotificationsForCharacteristics:(id)arg0 ;
-(id)usersRegisteredForNotificationsForProperties:(id)arg0 ;
-(void)_addPendingRequests:(id)arg0 ;
-(void)_processPendingRequests;
-(void)_removePendingRequestMatchingCharacteristicRequest:(id)arg0 ;
-(void)_removePendingRequestMatchingMediaPropertiesRequest:(id)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)auditUsersForNotifications:(id)arg0 forHome:(id)arg1 ;
-(void)clearAllRegistrations;
-(void)configureWithHome:(id)arg0 ;
-(void)deregisterUsers:(id)arg0 forHome:(id)arg1 ;
-(void)disableNotification:(id)arg0 user:(id)arg1 ignoreLockReq:(BOOL)arg2 home:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)notifyDelegatesOfRegistryUpdates;
-(void)removeAllReachabilityEventNotificationRegistrations;
-(void)removeRegistrationsForCharacteristics:(id)arg0 ;
-(void)setNotificationsEnabled:(BOOL)arg0 forUserID:(id)arg1 characteristicsPayload:(id)arg2 mediaPropertiesPayload:(id)arg3 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif