// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DADMAIN_H
#define DADMAIN_H

@class DADisableableObject, NSTimer, NSString, NSArray;
@protocol UMUserSwitchStakeholder, DATransactionMonitorDelegate, OS_dispatch_queue, OS_dispatch_source;



@interface DADMain : DADisableableObject <UMUserSwitchStakeholder, DATransactionMonitorDelegate>

 {
    NSTimer *_delayedShutdownTimer;
    NSTimer *_forceShutdownTimer;
    *BOOL _runLoopStoppedRef;
    NSObject<OS_dispatch_queue> *_analyticsQueue;
    NSObject<OS_dispatch_source> *_analyticsSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *userSwitchTasks; // ivar: _userSwitchTasks


+(id)sharedMain;
-(id)init;
-(void)_configureAnalyticsLogging;
-(void)_forceShutdownDaemonOnLogoutInTimeInterval:(int)arg0 ;
-(void)_forceShutdownTimerFired:(id)arg0 ;
-(void)_setRunLoopStopped:(BOOL)arg0 ;
-(void)_shutdownDaemon;
-(void)addLanguageChangeHandler;
-(void)addSignalHandler;
// -(void)addToOperationsQueueDisabledCheckAndGoBlock:(id)arg0 wrappedBlock:(unk)arg1  ;
-(void)agentsStarted;
-(void)dealloc;
-(void)didFinishAllXPCTransactions;
-(void)disable;
-(void)evaluateConnectedStartupActivityStatus;
-(void)setRunLoopStoppedRef:(*BOOL)arg0 ;
-(void)shutdownDAD;
-(void)waitForSystemAvailability;
-(void)willSwitchUser;
-(void)xpc_checkin;


@end


#endif