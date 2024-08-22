// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTEDEVICEMONITOR_H
#define HMDREMOTEDEVICEMONITOR_H

@class HMFObject, NSOperationQueue, NSMapTable, IDSService, IDSAccount, HMFNetMonitor, HMFTimer, NSString, NSArray;
@protocol HMFLogging, HMFTimerDelegate, IDSServiceDelegate, IDSAccountDelegate, IDSAccountRegistrationDelegate, HMDIDSActivityMonitorObserverDelegate, HMFNetMonitorDelegate, HMDRemoteDeviceMonitorTimerFactory, HMDRemoteDeviceMonitorOperationFactory, HMFLocking, OS_dispatch_queue;


#import "HMDIDSActivityMonitorObserver.h"
#import "HMDAppleAccountManager.h"
#import "HMDRemoteAccountManager.h"
#import "HMDAccountRegistry.h"

@interface HMDRemoteDeviceMonitor : HMFObject <HMFLogging, HMFTimerDelegate, IDSServiceDelegate, IDSAccountDelegate, IDSAccountRegistrationDelegate, HMDIDSActivityMonitorObserverDelegate, HMFNetMonitorDelegate, HMDRemoteDeviceMonitorTimerFactory, HMDRemoteDeviceMonitorOperationFactory>

 {
    id<HMFLocking> *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    NSMapTable *_devices;
    BOOL _started;
    IDSService *_service;
    IDSAccount *_iCloudAccount;
    HMDIDSActivityMonitorObserver *_activityObserver;
    HMDAppleAccountManager *_accountManager;
    HMDRemoteAccountManager *_remoteAccountManager;
    HMFNetMonitor *_netMonitor;
    id<HMDRemoteDeviceMonitorTimerFactory> *_timerFactory;
    id<HMDRemoteDeviceMonitorOperationFactory> *_operationFactory;
    HMFTimer *_deviceHealthTimer;
}


@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry; // ivar: _accountRegistry
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isReachable) BOOL reachable; // ivar: _reachable
@property (readonly) Class superclass;
@property (readonly) NSArray *unreachableDevices;


+(id)logCategory;
+(id)pingMessageForDevice:(id)arg0 timeout:(CGFloat)arg1 restriction:(NSUInteger)arg2 ;
-(id)dumpState;
-(id)init;
-(id)initWithAccountRegistry:(id)arg0 activityObserver:(id)arg1 ;
-(id)initWithAccountRegistry:(id)arg0 activityObserver:(id)arg1 queue:(id)arg2 IDSService:(id)arg3 accountManager:(id)arg4 remoteAccountManager:(id)arg5 netMonitor:(id)arg6 timerFactory:(id)arg7 operationFactory:(id)arg8 ;
-(id)newConfirmationHandlerOperationWithTimeout:(CGFloat)arg0 ;
-(id)newDeviceHealthTimer;
-(id)newDeviceMonitoringTimer;
-(id)newSendMessageOperationWithMessage:(id)arg0 ;
-(void)_handleGlobalReachabilityChange;
-(void)_handleIncomingMessageForDevice:(id)arg0 ;
-(void)account:(id)arg0 isActiveChanged:(BOOL)arg1 ;
-(void)account:(id)arg0 loginChanged:(id)arg1 ;
-(void)confirmDevice:(id)arg0 timeout:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)handleAccountRemoved:(id)arg0 ;
-(void)handleCurrentDeviceUpdate:(id)arg0 ;
-(void)handleDeviceRemovedFromAccount:(id)arg0 ;
-(void)networkMonitorIsReachable:(id)arg0 ;
-(void)networkMonitorIsUnreachable:(id)arg0 ;
-(void)observer:(id)arg0 didUpdateDevice:(id)arg1 isOnline:(BOOL)arg2 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 activeAccountsChanged:(id)arg1 ;
-(void)start;
-(void)startMonitoringDevice:(id)arg0 ;
-(void)stopMonitoringDevice:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif