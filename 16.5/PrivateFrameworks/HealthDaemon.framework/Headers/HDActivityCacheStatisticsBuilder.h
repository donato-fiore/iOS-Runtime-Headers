// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDACTIVITYCACHESTATISTICSBUILDER_H
#define HDACTIVITYCACHESTATISTICSBUILDER_H

@class HKQuantity, NSNumber, NSString;
@protocol HDActivityCacheStatisticsBuilderSourceDelegate;

#import <Foundation/Foundation.h>


@interface HDActivityCacheStatisticsBuilder : NSObject {
    vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> _workouts;
    vector<HDActivityCacheStatisticsBuilderStandHourSample, std::allocator<HDActivityCacheStatisticsBuilderStandHourSample>> _standHourSamples;
    ? _activationLogSamples;
    HKQuantity *_lastActiveEnergyValue;
    NSNumber *_lastMoveMinuteValue;
    HKQuantity *_lastDistanceWalkingValue;
    NSNumber *_lastFlightsClimbedValue;
    NSNumber *_lastStepCountValue;
    NSNumber *_lastPushCountValue;
    NSNumber *_lastStandHourValue;
    NSNumber *_lastExerciseMinuteValue;
    CGFloat _deepBreathingDurationValue;
    ? _activeSourcesList;
    map<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>, std::less<_HKDataTypeCode>, std::allocator<std::pair<const _HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>>> _sourceTotalsByIntervalIndexByTypeCode;
    CGFloat _builderStartTime;
    CGFloat _builderEndTime;
    NSString *_loggingName;
}


@property (nonatomic) CGFloat intervalDuration; // ivar: _intervalDuration
@property (weak, nonatomic) NSObject<HDActivityCacheStatisticsBuilderSourceDelegate> *sourceDelegate; // ivar: _sourceDelegate


-(CGFloat)deepBreathingDurationValue;
-(NSInteger)exerciseMinuteValue;
-(NSInteger)flightsClimbedValue;
-(NSInteger)moveMinuteValue;
-(NSInteger)pushCountValue;
-(NSInteger)standHourValue;
-(NSInteger)stepCountValue;
-(id)activeEnergyValue;
-(id)createExerciseStatisticsWithIntervalComponents:(id)arg0 calendar:(id)arg1 ;
-(id)createMoveMinuteStatisticsWithIntervalComponents:(id)arg0 calendar:(id)arg1 ;
-(id)createMoveStatisticsWithIntervalComponents:(id)arg0 calendar:(id)arg1 ;
-(id)createStandStatisticsWithCalendar:(id)arg0 ;
-(id)createStatisticsCollectionWithType:(id)arg0 intervalComponents:(id)arg1 calendar:(id)arg2 ;
-(id)distanceWalkingValue;
-(id)init;
-(id)initWithDateInterval:(id)arg0 loggingName:(id)arg1 ;
-(id)workoutSamplesWithSourceManager:(id)arg0 ;
-(void)addActivationLogSamples:(*void)arg0 ;
-(void)addDeepBreathingSessionDuration:(CGFloat)arg0 ;
-(void)addDeviceSample:(struct HDActivityCacheStatisticsBuilderSample )arg0 typeCode:(NSInteger)arg1 ;
-(void)addDeviceSamples:(*void)arg0 typeCode:(NSInteger)arg1 ;
-(void)addStandHourSamples:(*void)arg0 ;
-(void)addWorkoutSample:(struct HDActivityCacheStatisticsBuilderSample )arg0 typeCode:(NSInteger)arg1 ;
-(void)addWorkouts:(*void)arg0 ;


@end


#endif