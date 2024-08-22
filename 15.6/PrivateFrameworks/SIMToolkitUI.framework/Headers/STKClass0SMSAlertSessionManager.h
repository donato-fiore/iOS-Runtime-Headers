// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STKCLASS0SMSALERTSESSIONMANAGER_H
#define STKCLASS0SMSALERTSESSIONMANAGER_H

@class CoreTelephonyClient, NSMutableArray, NSString;
@protocol CoreTelephonyClientSMSDelegate, SBSRemoteAlertHandleObserver, STKIncomingCallUIStateObserver, OS_dispatch_queue;


#import "STKAlertSessionManager.h"
#import "STKIncomingCallUIStateMonitor.h"
#import "STKClass0SMSAlertSession.h"
#import "STKCarrierSubscriptionMonitor.h"

@interface STKClass0SMSAlertSessionManager : STKAlertSessionManager <CoreTelephonyClientSMSDelegate, SBSRemoteAlertHandleObserver, STKIncomingCallUIStateObserver>

 {
    CoreTelephonyClient *_telephonyClient;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_pendingAlertSessionsDueToInCallUI;
    STKIncomingCallUIStateMonitor *_queue_incomingCallStateMonitor;
}


@property (retain, nonatomic, setter=_queue_setCurrentSession:) STKClass0SMSAlertSession *currentSession; // ivar: _currentSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) STKCarrierSubscriptionMonitor *subscriptionMonitor; // ivar: _subscriptionMonitor
@property (readonly) Class superclass;


-(id)initWithSubscriptionMonitor:(id)arg0 ;
-(id)remoteAlertDescriptorForSession:(id)arg0 ;
-(void)_queue_enqueueSession:(id)arg0 ;
-(void)_queue_handleClass0SMSBody:(id)arg0 address:(id)arg1 responder:(id)arg2 forSlot:(NSInteger)arg3 ;
-(void)handleClass0SMSBody:(id)arg0 address:(id)arg1 responder:(id)arg2 forSlot:(NSInteger)arg3 ;
-(void)incomingCallUIStateDidChange:(BOOL)arg0 ;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;
-(void)smsMessageClass0Received:(id)arg0 body:(id)arg1 address:(id)arg2 ;


@end


#endif