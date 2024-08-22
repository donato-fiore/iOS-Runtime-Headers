// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDLOGEVENTERROREVENTSANALYZER_H
#define HMDLOGEVENTERROREVENTSANALYZER_H

@class NSString;
@protocol HMDLogEventDailyTaskRunner, HMMLogEventSubmitting;


#import "HMDLogEventAnalyzer.h"
#import "HMDEventCountersManager.h"

@interface HMDLogEventErrorEventsAnalyzer : HMDLogEventAnalyzer <HMDLogEventDailyTaskRunner>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // ivar: _eventCountersManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) Class superclass;


+(id)errorEventsRequestGroupKeys;
+(id)eventCounterNameForError:(id)arg0 ;
+(id)managedEventCounterRequestGroups;
-(id)currentErrorEventsAnalyzedSummary;
-(id)eventCounterRequestGroupNameForLogEvent:(id)arg0 ;
-(id)initWithEventCountersManager:(id)arg0 logEventSubmitter:(id)arg1 dailyScheduler:(id)arg2 ;
-(void)_handleAdditionalErrorsForAccessoryPairingLogEvent:(id)arg0 logEventUnderlyingErrorGroupName:(id)arg1 ;
-(void)_handleAdditionalErrorsForCloudShareTrustManagerFailureLogEvent:(id)arg0 logEventUnderlyingErrorGroupName:(id)arg1 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)resetEventCountersForAllErrorEventRequestGroups;
-(void)runDailyTask;
-(void)submitAllFormattedErrorAggregationLogEvents;
-(void)submitErrorAggregationLogEventsForErrorEventGroup:(id)arg0 ;


@end


#endif