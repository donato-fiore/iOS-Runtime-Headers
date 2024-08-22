// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHRAFIBBURDENSEVENDAYANALYSISSCHEDULERXPCALARM_H
#define HKHRAFIBBURDENSEVENDAYANALYSISSCHEDULERXPCALARM_H

@class HDRestorableAlarm, HDProfile, NSUserDefaults;
@protocol HDProfileReadyObserver, HKHRAFibBurdenSevenDayAnalysisSchedulerAlarm, OS_dispatch_queue, HKHRAFibBurdenSevenDayAnalysisSchedulerAlarmDelegate;

#import <Foundation/Foundation.h>


@interface HKHRAFibBurdenSevenDayAnalysisSchedulerXPCAlarm : NSObject <HDProfileReadyObserver, HKHRAFibBurdenSevenDayAnalysisSchedulerAlarm>

 {
    NSObject<OS_dispatch_queue> *_queue;
    HDRestorableAlarm *_scheduler;
    HDProfile *_profile;
    NSUserDefaults *_defaults;
    id *_dateGenerator;
}


@property (weak, nonatomic) NSObject<HKHRAFibBurdenSevenDayAnalysisSchedulerAlarmDelegate> *delegate; // ivar: delegate


-(id)initWithProfile:(id)arg0 ;
// -(id)initWithScheduler:(id)arg0 profile:(id)arg1 userDefaults:(id)arg2 queue:(id)arg3 dateGenerator:(id)arg4 shouldAutomaticallyStart:(unk)arg5  ;
-(void)_beginReceivingAlarmEvents;
-(void)_queue_alarm:(id)arg0 didReceiveDueEvents:(id)arg1 ;
-(void)_queue_scheduleEvent;
-(void)_stop;
-(void)_unitTest_start;
-(void)profileDidBecomeReady:(id)arg0 ;


@end


#endif