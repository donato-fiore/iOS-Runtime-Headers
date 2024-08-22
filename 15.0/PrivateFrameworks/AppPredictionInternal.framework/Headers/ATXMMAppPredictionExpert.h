// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMMAPPPREDICTIONEXPERT_H
#define ATXMMAPPPREDICTIONEXPERT_H


#import <Foundation/Foundation.h>


@interface ATXMMAppPredictionExpert : NSObject



+(BOOL)isExpertEnabledForPredictions;
+(BOOL)shouldHandleTriggerEventWithRateLimiter:(id)arg0 ;
+(BOOL)shouldPredicateOnStartDateForTrigger;
+(Class)supportedAnchorClass;
+(NSInteger)dateBufferForTriggerEvent;
+(id)anchorTypeForExpert;
+(id)correlateTriggerEvents:(id)arg0 withAppLaunches:(id)arg1 ;
+(id)createTrainingDataForSubExpertsWithCorrelatedEvents:(id)arg0 ;
+(id)fetchAnchorOccurrences;
+(id)fetchPredictionsForTriggerEvent:(id)arg0 ;
+(id)notificationIdentifier;
+(id)pathToPredictionTable;
+(id)predictionTable;
+(id)predictionTableFromCache;
+(id)sampleEventForExpert;
+(id)trainSubExpertWithCorrelatedEvents:(id)arg0 appLaunchCountedSet:(id)arg1 ;
+(int)mmAnchorTypeToMMProtobufAnchor:(NSInteger)arg0 ;
+(unsigned int)predictionReasonForExpert;
+(void)broadcastMMPredictionsForEvent:(id)arg0 predictions:(id)arg1 ;
+(void)fetchAndHandleTriggerEvent;
+(void)logPredictedCountMMMetricsEntryForAnchorType:(NSInteger)arg0 numPredictions:(int)arg1 ;
+(void)logPredictedScoreMMMetricsEntryForBundle:(id)arg0 anchorType:(NSInteger)arg1 score:(CGFloat)arg2 ;
+(void)logTriggeredMMMetricsEntryForAnchorType:(NSInteger)arg0 ;
+(void)serializeAndWritePredictionTable:(id)arg0 ;
+(void)setupEventListenerForInferenceWithContext:(id)arg0 rateLimiter:(id)arg1 ;
+(void)tagEventWithLOIForEvent:(id)arg0 ;
+(void)trainExpertWithAppLaunchEvents:(id)arg0 appLaunchCountedSet:(id)arg1 ;
+(void)trainSubExpertWithCorrelatedEvents:(id)arg0 indices:(id)arg1 predicates:(id)arg2 appLaunchCountedSet:(id)arg3 predictionTable:(id)arg4 ;
+(void)trainSubExpertsWithTrainingData:(id)arg0 correlatedEvents:(id)arg1 appLaunchCountedSet:(id)arg2 ;
-(id)init;


@end


#endif