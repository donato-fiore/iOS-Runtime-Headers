// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOREDATALOGEVENTSANALYZER_H
#define HMDCOREDATALOGEVENTSANALYZER_H

@class NSString;
@protocol HMDAggregationAnalysisEventContributing, HMDLogEventDailyTaskRunner, HMMLogEventSubmitting;


#import "HMDLogEventAnalyzer.h"
#import "HMDEventCounterGroup.h"
#import "HMDEventCountersManager.h"

@interface HMDCoreDataLogEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing, HMDLogEventDailyTaskRunner>



@property (readonly, nonatomic) HMDEventCounterGroup *aggregationEventGroup; // ivar: _aggregationEventGroup
@property (readonly, nonatomic) HMDEventCounterGroup *cloudStoreReasonsEventGroup; // ivar: _cloudStoreReasonsEventGroup
@property (readonly, nonatomic) HMDEventCountersManager *countersManager; // ivar: _countersManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) Class superclass;


+(id)managedEventCounterRequestGroups;
-(id)initWithEventCountersManager:(id)arg0 logEventSubmitter:(id)arg1 dailyScheduler:(id)arg2 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)handleCloudKitOperationEvent:(id)arg0 ;
-(void)handleCloudStoreTransactionEvent:(id)arg0 ;
-(void)handleWorkingStoreTransactionEvent:(id)arg0 ;
-(void)populateAggregationAnalysisLogEvent:(id)arg0 ;
-(void)resetAggregationAnalysisContext;
-(void)runDailyTask;


@end


#endif