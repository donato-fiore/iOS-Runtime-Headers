// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIUIWORKOUTSTATISTICS_H
#define FIUIWORKOUTSTATISTICS_H

@class NSArray, HKQuantity, NSDate;

#import <Foundation/Foundation.h>


@interface FIUIWorkoutStatistics : NSObject {
    NSArray *_workouts;
    NSInteger _numberOfWalkRunWorkouts;
    NSInteger _numberOfCyclingWorkouts;
    BOOL _isAllOutdoorCycling;
    BOOL _isAllRunning;
}


@property (readonly, nonatomic) HKQuantity *averageActiveEnergyBurn; // ivar: _averageActiveEnergyBurn
@property (readonly, nonatomic) HKQuantity *averageCyclingDistance; // ivar: _averageCyclingDistance
@property (readonly, nonatomic) HKQuantity *averageWalkRunDistance; // ivar: _averageWalkRunDistance
@property (readonly, nonatomic) CGFloat averageWorkoutDuration; // ivar: _averageWorkoutDuration
@property (readonly, nonatomic) NSDate *startOfMonth; // ivar: _startOfMonth
@property (readonly, nonatomic) HKQuantity *totalActiveEnergyBurn; // ivar: _totalActiveEnergyBurn
@property (readonly, nonatomic) HKQuantity *totalCyclingDistance; // ivar: _totalCyclingDistance
@property (readonly, nonatomic) CGFloat totalCyclingDuration; // ivar: _totalCyclingDuration
@property (readonly, nonatomic) HKQuantity *totalWalkRunDistance; // ivar: _totalWalkRunDistance
@property (readonly, nonatomic) CGFloat totalWalkRunDuration; // ivar: _totalWalkRunDuration
@property (readonly, nonatomic) CGFloat totalWorkoutDuration; // ivar: _totalWorkoutDuration
@property (readonly, nonatomic) NSUInteger workoutCount;
@property (readonly, nonatomic) NSUInteger workoutsWithEnergyBurned; // ivar: _workoutsWithEnergyBurned


+(id)_monthFormatter;
-(id)_formattedCyclingDistance:(id)arg0 formattingManager:(id)arg1 ;
-(id)_formattedDuration:(CGFloat)arg0 formattingManager:(id)arg1 ;
-(id)_formattedEnergyBurn:(id)arg0 formattingManager:(id)arg1 ;
-(id)_formattedWalkRunDistance:(id)arg0 formattingManager:(id)arg1 ;
-(id)formattedActiveEnergyBurnWithFormattingManager:(id)arg0 ;
-(id)formattedAverageActiveEnergyBurnWithFormattingManager:(id)arg0 ;
-(id)formattedAverageCyclingDistanceWithFormattingManager:(id)arg0 ;
-(id)formattedAverageWalkRunDistanceWithFormattingManager:(id)arg0 ;
-(id)formattedAverageWorkoutDurationWithFormattingManager:(id)arg0 ;
-(id)formattedCyclingDistanceWithFormattingManager:(id)arg0 ;
-(id)formattedMonth;
-(id)formattedPaceWithFormattingManager:(id)arg0 ;
-(id)formattedSpeedWithFormattingManager:(id)arg0 ;
-(id)formattedTotalActiveEnergyBurnWithFormattingManager:(id)arg0 ;
-(id)formattedTotalCyclingDistanceWithFormattingManager:(id)arg0 ;
-(id)formattedTotalWalkRunDistanceWithFormattingManager:(id)arg0 ;
-(id)formattedTotalWorkoutDurationWithFormattingManager:(id)arg0 ;
-(id)formattedWalkRunDistanceWithFormattingManager:(id)arg0 ;
-(id)formattedWorkoutCount;
-(id)formattedWorkoutDurationWithFormattingManager:(id)arg0 ;
-(id)init;
-(id)initWithWorkouts:(id)arg0 ;
-(id)simpleWorkoutCount;
-(void)_calculateAverages;
-(void)_calculateStats;


@end


#endif