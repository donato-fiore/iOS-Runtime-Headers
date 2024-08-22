// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ATXAGGREGATELOGGER_H
#define _ATXAGGREGATELOGGER_H

@class PETScalarEventTracker, PETDistributionEventTracker;

#import <Foundation/Foundation.h>

#import "_ATXBundleIdSet.h"

@interface _ATXAggregateLogger : NSObject {
    _ATXBundleIdSet *_bundleIdSet;
    NSInteger _buildType;
    PETScalarEventTracker *_allLaunchesPredictionTracker;
    PETScalarEventTracker *_predictionTracker;
    PETScalarEventTracker *_conversionTracker;
    PETScalarEventTracker *_outcomeTracker;
    PETScalarEventTracker *_outcomeConsumerTracker;
    PETDistributionEventTracker *_outcomeConsumerTrackerWithCacheAge;
    PETDistributionEventTracker *_consumerOutcomeCacheAgeHistogram;
    PETScalarEventTracker *_appOutcomeTracker;
    PETScalarEventTracker *_conversionPositionTracker;
    PETScalarEventTracker *_itemsShownTracker;
    PETScalarEventTracker *_expertOutcomeTracker;
    PETScalarEventTracker *_predictUninstalledAppsTracker;
    PETScalarEventTracker *_widgetBackgroundRefreshTracker;
    PETDistributionEventTracker *_inputsTracker;
    PETDistributionEventTracker *_scoreTracker;
    PETScalarEventTracker *_quietingSuggestionOutcomeTracker;
    PETScalarEventTracker *_promotingSuggestionOutcomeTracker;
    PETScalarEventTracker *_notificationOutcomeTracker;
    PETScalarEventTracker *_suggestionsCountTracker;
    PETScalarEventTracker *_limitedAppLaunchTracker;
}




+(BOOL)isConversionOutcome:(NSUInteger)arg0 ;
+(BOOL)yesWithProbability:(CGFloat)arg0 ;
+(NSInteger)getBuildType;
+(id)notificationOutcomesMapping;
+(id)predictedItemOutcomesMapping;
+(id)predictionOutcomesMapping;
+(id)propertyStringForLaunchReason:(id)arg0 ;
+(id)quietingSuggestionOutcomesMapping;
+(id)sharedInstance;
+(id)stringForPredictedItemOutcome:(NSUInteger)arg0 ;
+(id)stringForPredictionOutcome:(NSUInteger)arg0 ;
+(id)suggestionCountsArray;
+(void)yesWithProbabilityAlwaysSays:(BOOL)arg0 ;
+(void)yesWithProbabilityStopMocking;
-(id)init;
-(void)logAppLaunch:(id)arg0 bundleId:(id)arg1 ;
-(void)logInputs:(*float)arg0 andScore:(float)arg1 withOutcome:(NSUInteger)arg2 ;
-(void)logLaunchEventWithLaunchReason:(id)arg0 predicted:(BOOL)arg1 position:(NSInteger)arg2 ;
-(void)logNotificationInteraction:(NSInteger)arg0 orbed:(BOOL)arg1 onscreen:(BOOL)arg2 ;
-(void)logPredictUninstalledApps:(NSUInteger)arg0 consumerSubType:(unsigned char)arg1 ;
-(void)logPredictionEventWith:(id)arg0 outcome:(NSUInteger)arg1 forABGroup:(id)arg2 consumerType:(NSUInteger)arg3 andSubType:(unsigned char)arg4 ;
-(void)logPredictionOfAppWithBundleId:(id)arg0 inputs:(*float)arg1 outcome:(NSUInteger)arg2 rank:(NSUInteger)arg3 score:(float)arg4 forABGroup:(id)arg5 ;
-(void)logPromotingSuggestionOutcome:(NSInteger)arg0 ;
-(void)logQuietingSuggestionOutcome:(NSInteger)arg0 ;
-(void)logRefreshedWidgetInBackground;
-(void)logSuggestionCounts:(id)arg0 ;


@end


#endif