// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNOTIFICATIONREGISTRY_H
#define HMDNOTIFICATIONREGISTRY_H

@class HMFObject, NSHashTable, HMFTimer, NSMutableSet, NSString;
@protocol HMFLogging, HMFTimerDelegate, OS_dispatch_queue;


#import "HMDNotificationRegistryCoreDataAdapter.h"
#import "HMDHome.h"

@interface HMDNotificationRegistry : HMFObject <HMFLogging, HMFTimerDelegate>

 {
    os_unfair_lock_s _lock;
    NSHashTable *_delegates;
    HMDNotificationRegistryCoreDataAdapter *_coreDataAdapter;
    HMFTimer *_pendingRequestsRetryTimer;
    NSMutableSet *_pendingRequests;
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_workQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)removeRegistrationsForMediaProfile:(id)arg0 ;
-(BOOL)setNotificationsEnabled:(BOOL)arg0 user:(id)arg1 deviceIdsDestination:(id)arg2 characteristicsPayload:(id)arg3 mediaPropertiesPayload:(id)arg4 ;
-(id)destinationsRegisteredForNotificationsForCharacteristics:(id)arg0 ;
-(id)destinationsRegisteredForNotificationsForProperties:(id)arg0 ;
-(id)filterCharacteristics:(id)arg0 deviceIdsDestination:(id)arg1 ;
-(id)filterProperties:(id)arg0 deviceIdsDestination:(id)arg1 ;
-(id)init;
-(id)initWithPendingRequestsRetryTimer:(id)arg0 ;
-(id)logIdentifier;
-(id)propertiesRegisteredForMediaProfileUniqueIdentifier:(id)arg0 ;
-(id)shortDescription;
-(void)addDelegate:(id)arg0 ;
-(void)auditNotificationDestinations:(id)arg0 home:(id)arg1 ;
-(void)clearAllRegistrations;
-(void)clearAllremoteRegistrations;
-(void)configureWithHome:(id)arg0 ;
-(void)configureWithHome:(id)arg0 coreDataAdapter:(id)arg1 ;
-(void)removeRegistrationsForCharacteristics:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif