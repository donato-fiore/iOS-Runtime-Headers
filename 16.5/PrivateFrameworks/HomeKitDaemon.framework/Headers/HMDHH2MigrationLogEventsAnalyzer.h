// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHH2MIGRATIONLOGEVENTSANALYZER_H
#define HMDHH2MIGRATIONLOGEVENTSANALYZER_H

@class NSString;
@protocol HMDLogEventDailyTaskRunner, OS_dispatch_queue;


#import "HMDLogEventAnalyzer.h"
#import "HMDEventCounterGroup.h"

@interface HMDHH2MigrationLogEventsAnalyzer : HMDLogEventAnalyzer <HMDLogEventDailyTaskRunner>



@property (readonly, nonatomic) HMDEventCounterGroup *counterGroup; // ivar: _counterGroup
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)initWithEventCountersManager:(id)arg0 dailyScheduler:(id)arg1 queue:(id)arg2 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)runDailyTask;


@end


#endif