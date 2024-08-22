// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSTIMERMONITOR_H
#define CSTIMERMONITOR_H

@class MTTimerManager;
@protocol OS_dispatch_queue;


#import "CSEventMonitor.h"

@interface CSTimerMonitor : CSEventMonitor {
    NSInteger _timerFiringState;
    NSObject<OS_dispatch_queue> *_queue;
    MTTimerManager *_timerManager;
}




+(id)sharedInstance;
-(BOOL)_isSleepTimer:(id)arg0 ;
-(NSInteger)timerState;
-(id)init;
-(void)_notifyObserver:(id)arg0 timerIsFiringState:(NSInteger)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)_timerDismissed:(id)arg0 ;
-(void)_timerIsFiring:(id)arg0 ;
-(void)_timerStateReset:(id)arg0 ;
-(void)initializeTimerState;


@end


#endif