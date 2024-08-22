// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDACTIVITYCACHEHEARTRATESTATISTICSBUILDER_H
#define HDACTIVITYCACHEHEARTRATESTATISTICSBUILDER_H

@class NSDateInterval, HKQuantity, HKHeartRateSummaryStatistics, NSMutableArray, NSMutableDictionary, NSDateComponents, HKHeartRateSummary;

#import <Foundation/Foundation.h>


@interface HDActivityCacheHeartRateStatisticsBuilder : NSObject {
    NSDateInterval *_dateInterval;
    NSInteger _activityCacheIndex;
    vector<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample, std::allocator<HDActivityCacheHeartRateStatisticsBuilderHeartRateSample>> _heartRateSamples;
    vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> _workouts;
    HKQuantity *_restingHeartRate;
    HKQuantity *_walkingAverageHeartRate;
    HKHeartRateSummaryStatistics *_allDayStatistics;
    NSMutableArray *_workoutStatistics;
    NSMutableArray *_workoutRecoveryStatistics;
    NSMutableArray *_breatheStatistics;
    NSMutableDictionary *_averageCalculatorsByWorkoutUUID;
    NSMutableDictionary *_recoveryReadingsByWorkoutUUID;
    NSMutableDictionary *_breatheSessionReadingsBySessionUUID;
    NSMutableDictionary *_breatheSessionDateIntervalBySessionUUID;
    NSDateComponents *_dateOfBirthComponents;
}


@property (readonly, nonatomic) HKHeartRateSummary *heartRateSummary;


-(id)initWithDateInterval:(id)arg0 activityCacheIndex:(NSInteger)arg1 ;
-(void)addBreatheSessions:(*void)arg0 ;
-(void)addHeartRateSamples:(*void)arg0 ;
-(void)addWorkouts:(*void)arg0 ;
-(void)reportDailyAnalyticsWithProfile:(id)arg0 ;
-(void)setDateOfBirthComponents:(id)arg0 ;


@end


#endif