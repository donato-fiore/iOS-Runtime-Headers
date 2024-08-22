// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STKSIMTOOLKITALERTSESSIONMANAGER_H
#define STKSIMTOOLKITALERTSESSIONMANAGER_H

@class CoreTelephonyClient, UNUserNotificationCenter, NSString;
@protocol SBSRemoteAlertHandleObserver, STKUserEventMonitorDelegate, STKIncomingCallUIStateObserver, STKDeviceLockStatusObserver, OS_dispatch_queue, OS_dispatch_group, BSInvalidatable, STKAlertSessionResponseProvider, STKTelephonyListItemsProvider;


#import "STKAlertSessionManager.h"
#import "STKIncomingCallUIStateMonitor.h"
#import "STKDeviceLockMonitor.h"
#import "STKUserEventMonitor.h"
#import "STKSIMToolkitAlertSession.h"
#import "STKCarrierSubscriptionMonitor.h"

@interface STKSIMToolkitAlertSessionManager : STKAlertSessionManager <SBSRemoteAlertHandleObserver, STKUserEventMonitorDelegate, STKIncomingCallUIStateObserver, STKDeviceLockStatusObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_telephonyClient;
    *__CTServerConnection _serverConnection;
    STKIncomingCallUIStateMonitor *_incomingCallUIStateMonitor;
    UNUserNotificationCenter *_userNotificationCenter;
    STKDeviceLockMonitor *_deviceLockMonitor;
    os_unfair_lock_s _lock;
    BOOL _lock_deviceLocked;
    NSObject<OS_dispatch_group> *_notificationGroup;
    id<BSInvalidatable> *_haltEventQueueProcessingAssertion;
    int _atHomeScreenNotifyToken;
    STKUserEventMonitor *_userEventMonitor;
    id<STKAlertSessionResponseProvider> *_userEventResponder;
}


@property (retain, nonatomic, setter=_setListItemsProvider:) NSObject<STKTelephonyListItemsProvider> *_listItemsProvider; // ivar: _listItemsProvider
@property (retain, nonatomic, setter=_queue_setCurrentSession:) STKSIMToolkitAlertSession *currentSession; // ivar: _currentSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) STKCarrierSubscriptionMonitor *subscriptionMonitor; // ivar: _subscriptionMonitor
@property (readonly) Class superclass;


-(BOOL)_showAfterDeviceUnlock:(NSUInteger)arg0 ;
-(id)_listItemsFromCTItems:(id)arg0 ;
-(id)_newSessionBehaviorFromOptions:(id)arg0 ;
-(id)initWithSubscriptionMonitor:(id)arg0 ;
-(id)remoteAlertDescriptorForSession:(id)arg0 ;
-(void)_queue_handleSIMToolkitEvent:(NSInteger)arg0 responder:(id)arg1 userInfo:(id)arg2 ;
-(void)_queue_startListening;
-(void)_removeNotification;
-(void)_showNotification;
-(void)deviceLockStateChanged:(BOOL)arg0 ;
-(void)handleSIMToolkitEvent:(NSInteger)arg0 responder:(id)arg1 userInfo:(id)arg2 ;
-(void)incomingCallUIStateDidChange:(BOOL)arg0 ;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;
-(void)userEventDidOccur:(id)arg0 ;


@end


#endif