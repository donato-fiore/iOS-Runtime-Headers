// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSALARMMONITOR_H
#define CSALARMMONITOR_H

@class MTAlarmManager;
@protocol OS_dispatch_queue;


#import "CSEventMonitor.h"

@interface CSAlarmMonitor : CSEventMonitor {
    NSInteger _alarmFiringState;
    NSObject<OS_dispatch_queue> *_queue;
    MTAlarmManager *_alarmManager;
}




+(id)sharedInstance;
-(NSInteger)alarmState;
-(id)init;
-(void)_alarmDismissed:(id)arg0 ;
-(void)_alarmIsFiring:(id)arg0 ;
-(void)_alarmStateReset:(id)arg0 ;
-(void)_notifyObserver:(id)arg0 alarmIsFiringState:(NSInteger)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)initializeAlarmState;


@end


#endif