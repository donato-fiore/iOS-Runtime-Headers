// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDLOGEVENTUSERACTIVITYANALYZER_H
#define HMDLOGEVENTUSERACTIVITYANALYZER_H

@protocol HMDAggregationAnalysisEventContributing;


#import "HMDHouseholdDataLogEventContributor.h"
#import "HMDEventCounterGroup.h"
#import "HMDTimeBasedFlagsManager.h"

@interface HMDLogEventUserActivityAnalyzer : HMDHouseholdDataLogEventContributor <HMDAggregationAnalysisEventContributing>



@property (readonly, nonatomic) HMDEventCounterGroup *counterGroup; // ivar: _counterGroup
@property (readonly, nonatomic) HMDTimeBasedFlagsManager *flagsManager; // ivar: _flagsManager


+(id)managedEventCounterRequestGroups;
-(BOOL)_isTriggerSource:(NSUInteger)arg0 ;
-(BOOL)_isUserSource:(NSUInteger)arg0 ;
-(id)initWithEventCountersManager:(id)arg0 flagsManager:(id)arg1 dateProvider:(id)arg2 ;
-(void)_handleAccessoryPairingLogEvent:(id)arg0 ;
-(void)_handleActionSetRunLogEvent:(id)arg0 ;
-(void)_handleAddActionSetLogEvent:(id)arg0 ;
-(void)_handleAddTriggerLogEvent:(id)arg0 ;
-(void)_handleCameraClipRequestLogEvent:(id)arg0 ;
-(void)_handleCameraStreamLogEvent:(id)arg0 ;
-(void)_handleReadWriteLogEvent:(id)arg0 ;
-(void)_markUserActivityEventForEventName:(id)arg0 logEvent:(id)arg1 ;
-(void)coalesceHouseholdDataLogEvent:(id)arg0 fromSourceEvent:(id)arg1 ;
-(void)contributeHouseholdMetricLogEvent:(id)arg0 toSerializedMetric:(id)arg1 ;
-(void)contributeHouseholdMetricsLogEvent:(id)arg0 toCoreAnalyticsEvent:(id)arg1 ;
-(void)deserializeHouseholdMetricsLogEvent:(id)arg0 fromSerializedMetric:(id)arg1 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)finishCoalescingHouseholdDataLogEvent:(id)arg0 ;
-(void)populateAggregationAnalysisLogEvent:(id)arg0 ;
-(void)populateHouseholdMetricLogEvent:(id)arg0 forHomeWithUUID:(id)arg1 associatedToDate:(id)arg2 ;
-(void)resetAggregationAnalysisContext;


@end


#endif