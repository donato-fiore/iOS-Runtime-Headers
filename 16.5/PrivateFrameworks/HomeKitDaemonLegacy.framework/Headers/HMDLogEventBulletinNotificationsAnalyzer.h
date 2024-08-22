// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDLOGEVENTBULLETINNOTIFICATIONSANALYZER_H
#define HMDLOGEVENTBULLETINNOTIFICATIONSANALYZER_H

@class NSString;
@protocol HMDAggregationAnalysisEventContributing, HMDLogEventDailyTaskRunner, HMMLogEventSubmitting;


#import "HMDLogEventAnalyzer.h"
#import "HMDEventCounterGroup.h"
#import "HMDCounterThresholdTTRTrigger.h"

@interface HMDLogEventBulletinNotificationsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing, HMDLogEventDailyTaskRunner>



@property (readonly, nonatomic) HMDEventCounterGroup *aggregationEventGroup; // ivar: _aggregationEventGroup
@property (readonly, nonatomic) HMDCounterThresholdTTRTrigger *cameraReachabilityTTRTrigger; // ivar: _cameraReachabilityTTRTrigger
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDCounterThresholdTTRTrigger *homeHubReachabilityTTRTrigger; // ivar: _homeHubReachabilityTTRTrigger
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMDEventCounterGroup *topicEventGroup; // ivar: _topicEventGroup


+(id)managedEventCounterRequestGroups;
-(NSInteger)cameraReachabilityThresholdFromConfiguration:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 ;
-(void)configurationChanged:(id)arg0 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;
-(void)populateAggregationAnalysisLogEvent:(id)arg0 ;
-(void)resetAggregationAnalysisContext;
-(void)runDailyTask;


@end


#endif