// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDLOGEVENTCOUNTINGANALYZER_H
#define HMDLOGEVENTCOUNTINGANALYZER_H

@class NSMutableDictionary, NSString;
@protocol HMDLogEventDailyTaskRunner, OS_dispatch_queue;


#import "HMDLogEventAnalyzer.h"
#import "HMDEventCountersManager.h"
#import "HMDEventCounterGroup.h"
#import "HMDMetricsDateProvider.h"

@interface HMDLogEventCountingAnalyzer : HMDLogEventAnalyzer <HMDLogEventDailyTaskRunner>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) HMDEventCountersManager *countersManager; // ivar: _countersManager
@property (retain, nonatomic) HMDEventCounterGroup *currentDayCountersGroup; // ivar: _currentDayCountersGroup
@property (readonly, nonatomic) NSMutableDictionary *currentPeriodCounters; // ivar: _currentPeriodCounters
@property (readonly, nonatomic) HMDMetricsDateProvider *dateProvider; // ivar: _dateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger loggingPeriodicitySeconds; // ivar: _loggingPeriodicitySeconds
@property (readonly, nonatomic) id *periodicCountersSnapshotBlock; // ivar: _periodicCountersSnapshotBlock
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger tickSecondsLastLogged; // ivar: _tickSecondsLastLogged
@property (readonly, nonatomic) id *tickSecondsProviderBlock; // ivar: _tickSecondsProviderBlock


-(id)initWithEventCountersManager:(id)arg0 dailyScheduler:(id)arg1 dateProvider:(id)arg2 systemInfo:(id)arg3 queue:(id)arg4 ;
// -(id)initWithEventCountersManager:(id)arg0 dailyScheduler:(id)arg1 dateProvider:(id)arg2 systemInfo:(id)arg3 queue:(id)arg4 loggingPeriodicitySeconds:(NSUInteger)arg5 tickSecondsProviderBlock:(id)arg6 periodicCountersLoggingBlock:(unk)arg7  ;
-(id)periodicSnapshotAtCurrentTickSeconds:(NSUInteger)arg0 ;
-(void)deleteCountersAfterDate:(id)arg0 ;
-(void)deleteCountersBeforeDate:(id)arg0 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 withCurrentTickSeconds:(NSUInteger)arg1 ;
-(void)incrementDailyCountersForEventName:(id)arg0 ;
-(void)incrementPeriodicCountersForEventName:(id)arg0 ;
-(void)runDailyTask;


@end


#endif