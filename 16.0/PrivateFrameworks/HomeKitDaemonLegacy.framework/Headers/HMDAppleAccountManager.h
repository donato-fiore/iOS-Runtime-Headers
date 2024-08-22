// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDAPPLEACCOUNTMANAGER_H
#define HMDAPPLEACCOUNTMANAGER_H

@class HMFObject, HMFExponentialBackoffTimer, ACAccountStore, NSString, HMFTimer, NSUUID, NSData;
@protocol HMDAPSConnectionDelegate, HMDAccountManager, HMFLogging, HMFMessageReceiver, HMFTimerDelegate, IDSAccountDelegate, IDSAccountRegistrationDelegate, HMDIDSServiceDelegate, OS_dispatch_queue, HMDAPSConnection, HMDIDSService;


#import "HMDBackingStore.h"
#import "HMDAccount.h"
#import "HMDAppleAccountContext.h"
#import "HMDIDSActivityMonitorBroadcaster.h"
#import "HMDCloudCache.h"
#import "HMDDevice.h"
#import "HMDAppleAccountSettings.h"

@interface HMDAppleAccountManager : HMFObject <HMDAPSConnectionDelegate, HMDAccountManager, HMFLogging, HMFMessageReceiver, HMFTimerDelegate, IDSAccountDelegate, IDSAccountRegistrationDelegate, HMDIDSServiceDelegate>

 {
    os_unfair_recursive_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMDBackingStore *_backingStore;
}


@property (retain) HMDAccount *account; // ivar: _account
@property (readonly, nonatomic) HMFExponentialBackoffTimer *accountChangeBackoffTimer; // ivar: _accountChangeBackoffTimer
@property (readonly) HMDAppleAccountContext *accountContext; // ivar: _accountContext
@property (readonly) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, nonatomic) HMDIDSActivityMonitorBroadcaster *activityBroadcaster; // ivar: _activityBroadcaster
@property (readonly) HMDBackingStore *backingStore;
@property (retain, nonatomic) HMDCloudCache *cloudCache; // ivar: _cloudCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device;
@property (readonly, nonatomic) HMFTimer *devicesChangeBackoffTimer; // ivar: _devicesChangeBackoffTimer
@property (readonly) NSUInteger hash;
@property (readonly, getter=isLoggedInToPrimaryAccount) BOOL loggedIn; // ivar: _loggedIn
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (nonatomic, getter=isMonitoring) BOOL monitoring; // ivar: _monitoring
@property (retain, nonatomic) NSData *pendingPushToken; // ivar: _pendingPushToken
@property (readonly, nonatomic) NSObject<HMDAPSConnection> *pushConnection; // ivar: _pushConnection
@property (nonatomic) int rapportIdentitiesChangedNotificationToken; // ivar: _rapportIdentitiesChangedNotificationToken
@property (nonatomic, getter=isRapportIdentitiesChangedNotificationTokenValid) BOOL rapportIdentitiesChangedNotificationTokenValid; // ivar: _rapportIdentitiesChangedNotificationTokenValid
@property (readonly, nonatomic) NSObject<HMDIDSService> *service; // ivar: _service
@property (readonly, nonatomic) HMDAppleAccountSettings *settings;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)sharedManager;
-(BOOL)isModelCurrentAccount:(id)arg0 ;
-(BOOL)shouldAccount:(id)arg0 pushbackModel:(id)arg1 actions:(id)arg2 ;
-(BOOL)shouldCacheAccount:(id)arg0 ;
-(BOOL)shouldDevice:(id)arg0 processModel:(id)arg1 actions:(id)arg2 ;
-(BOOL)shouldSyncAccount:(id)arg0 ;
-(BOOL)shouldSyncDevice:(id)arg0 ;
-(id)init;
-(id)initWithIDSService:(id)arg0 activityBroadcaster:(id)arg1 ;
-(id)initWithIDSService:(id)arg0 activityBroadcaster:(id)arg1 queue:(id)arg2 pushConnection:(id)arg3 ;
-(id)primaryHandleForAccount:(id)arg0 ;
-(void)__deviceAddedToCurrentAccount:(id)arg0 ;
-(void)__deviceRemovedFromCurrentAccount:(id)arg0 ;
-(void)__handleMigrationUpdated:(id)arg0 ;
-(void)__handleModifiedAccount:(id)arg0 ;
-(void)__handleRemovedAccount:(id)arg0 ;
-(void)__handleUpdatedName:(id)arg0 ;
-(void)__localDataReset:(id)arg0 ;
-(void)__updateMergeIDOnAccount;
-(void)_deregisterForRapportNotifications;
-(void)_registerForRapportNotifications;
-(void)_updatePushToken:(id)arg0 ;
-(void)account:(id)arg0 aliasesChanged:(id)arg1 ;
-(void)account:(id)arg0 isActiveChanged:(BOOL)arg1 ;
-(void)configureWithBackingStore:(id)arg0 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)processAccountModel:(id)arg0 message:(id)arg1 ;
-(void)processAccountModelRemove:(id)arg0 message:(id)arg1 ;
-(void)service:(id)arg0 activeAccountsChanged:(id)arg1 ;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)timerDidFire:(id)arg0 ;
-(void)updateSenderCorrelationIdentifier:(id)arg0 ;


@end


#endif