// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDNOTIFICATIONREGISTRY_H
#define HMDNOTIFICATIONREGISTRY_H

@class HMFObject, NSMutableDictionary, NSHashTable, HMFTimer, NSMutableSet, NSString;
@protocol HMFLogging, HMFTimerDelegate, NSSecureCoding, OS_dispatch_queue;


#import "HMDHome.h"

@interface HMDNotificationRegistry : HMFObject <HMFLogging, HMFTimerDelegate, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_notificationRegistry;
    NSHashTable *_delegates;
    HMFTimer *_pendingRequestsRetryTimer;
    NSMutableSet *_pendingRequests;
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_workQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)disableNotificationForAudioAnalysisEventNotificationOption:(NSUInteger)arg0 user:(id)arg1 accessory:(id)arg2 ;
-(BOOL)disableReachabilityEventNotificationForAccessoryUUIDs:(id)arg0 forUserID:(id)arg1 ;
-(BOOL)enableNotificationForAudioAnalysisEventNotificationOption:(NSUInteger)arg0 user:(id)arg1 accessory:(id)arg2 ;
-(BOOL)enableReachabilityEventNotificationForAccessoryUUIDs:(id)arg0 forUserID:(id)arg1 ;
-(BOOL)removeRegistrationsForMediaProfile:(id)arg0 ;
-(BOOL)setNotificationsEnabled:(BOOL)arg0 forUserID:(id)arg1 characteristicsPayload:(id)arg2 mediaPropertiesPayload:(id)arg3 ;
-(id)filterCharacteristics:(id)arg0 forUser:(id)arg1 ;
-(id)filterProperties:(id)arg0 forUser:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPendingRequestsRetryTimer:(id)arg0 ;
-(id)logIdentifier;
-(id)propertiesRegisteredForMediaProfileUniqueIdentifier:(id)arg0 ;
-(id)shortDescription;
-(id)userIDsRegisteredForReachabilityEventNotificationsForAccessoryUUIDs:(id)arg0 ;
-(id)usersRegisteredForNotificationsForAudioAnalysisEventNotificationOption:(NSUInteger)arg0 accessory:(id)arg1 ;
-(id)usersRegisteredForNotificationsForCharacteristics:(id)arg0 ;
-(id)usersRegisteredForNotificationsForProperties:(id)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)auditUsersForNotifications:(id)arg0 forHome:(id)arg1 ;
-(void)clearAllRegistrations;
-(void)configureWithHome:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeAllReachabilityEventNotificationRegistrations;
-(void)removeRegistrationsForCharacteristics:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif