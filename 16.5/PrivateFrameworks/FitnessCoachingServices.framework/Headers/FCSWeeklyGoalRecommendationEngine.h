// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCSWEEKLYGOALRECOMMENDATIONENGINE_H
#define FCSWEEKLYGOALRECOMMENDATIONENGINE_H


#import <Foundation/Foundation.h>


@interface FCSWeeklyGoalRecommendationEngine : NSObject



+(BOOL)_isMoveGoalAchievedForActivitySummary:(id)arg0 ;
+(CGFloat)_averageMoveFromActivitySummaries:(id)arg0 forNumberOfSamples:(NSInteger)arg1 ;
+(CGFloat)_minThresholdForActivityMoveMode:(NSInteger)arg0 ;
+(CGFloat)recommendedNewWeeklyGoalForActivitySummaries:(id)arg0 ;
+(NSInteger)_numberOfDaysGoalAchievedInSummaries:(id)arg0 ;
+(NSUInteger)_numSamplesWithMoveGreaterThanTheGoalByPercent:(CGFloat)arg0 forSummaries:(id)arg1 ;
+(NSUInteger)_numberOfDaysInMostRecentWinningStreakForSummariesOrderedByDate:(id)arg0 ;
+(NSUInteger)_numberOfInvalidDaysFromActivitySummaries:(id)arg0 forExpectedNumberOfSamples:(NSUInteger)arg1 ;
+(id)_activitySummariesSortedByEnergyBurn:(id)arg0 ;
+(id)_activitySummariesSortedByMoveMinutes:(id)arg0 ;
+(id)_activitySummariesSortedByMoveValue:(id)arg0 activityMoveMode:(NSInteger)arg1 ;


@end


#endif