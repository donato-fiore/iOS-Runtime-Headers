// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STKUSSDALERTSESSIONMANAGER_H
#define STKUSSDALERTSESSIONMANAGER_H

@class CoreTelephonyClient, NSMutableArray, NSString;
@protocol SBSRemoteAlertHandleObserver, CoreTelephonyClientSuppServicesDelegate, OS_dispatch_queue;


#import "STKAlertSessionManager.h"
#import "STKUSSDAlertSession.h"
#import "STKCarrierSubscriptionMonitor.h"

@interface STKUSSDAlertSessionManager : STKAlertSessionManager <SBSRemoteAlertHandleObserver, CoreTelephonyClientSuppServicesDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    *__CTServerConnection _serverConnection;
    CoreTelephonyClient *_telephonyClient;
    NSMutableArray *_activeUSSDSessions;
    NSMutableArray *_finishedUSSDSessions;
    STKUSSDAlertSession *_coalescingUSSDSession;
    NSMutableArray *_activeSupplementaryServicesSessions;
    NSMutableArray *_finishedSupplementaryServicesSessions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) STKCarrierSubscriptionMonitor *subscriptionMonitor; // ivar: _subscriptionMonitor
@property (readonly) Class superclass;


-(id)_supplementaryServicesResponder;
-(id)initWithSubscriptionMonitor:(id)arg0 ;
-(id)remoteAlertDescriptorForSession:(id)arg0 ;
-(void)_executeOnQueue:(id)arg0 ;
-(void)_queue_handleUSSDEvent:(NSInteger)arg0 responder:(id)arg1 userInfo:(id)arg2 ;
-(void)_queue_startListening;
-(void)_willPresentAlertHandle:(id)arg0 ;
-(void)handleUSSDEvent:(NSInteger)arg0 responder:(id)arg1 userInfo:(id)arg2 ;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;
-(void)suppServicesCompleted:(id)arg0 ;
-(void)suppServicesError:(id)arg0 error:(id)arg1 ;
-(void)suppServicesEvent:(id)arg0 event:(int)arg1 settingsType:(int)arg2 data:(id)arg3 ;
-(void)suppServicesStarted:(id)arg0 ;


@end


#endif