// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKWORKOUT_H
#define HKWORKOUT_H

@class NSArray;


#import "HKSample.h"
#import "HKQuantity.h"

@interface HKWorkout : HKSample {
    NSUInteger _workoutActivityType;
    CGFloat _duration;
    NSArray *_workoutEvents;
    HKQuantity *_totalEnergyBurned;
    HKQuantity *_totalBasalEnergyBurned;
    HKQuantity *_totalDistance;
    HKQuantity *_totalElevation;
    HKQuantity *_totalSwimmingStrokeCount;
}


@property (readonly, nonatomic, getter=_activityMoveMode) NSInteger activityMoveMode;
@property (readonly) CGFloat duration;
@property (retain, nonatomic, getter=_goal, setter=_setGoal:) HKQuantity *goal; // ivar: _goal
@property (nonatomic, getter=_goalType, setter=_setGoalType:) NSUInteger goalType; // ivar: _goalType
@property (nonatomic, getter=_isWatchWorkout, setter=_setIsWatchWorkout:) BOOL isWatchWorkout; // ivar: _isWatchWorkout
@property (retain, nonatomic, getter=_totalBasalEnergyBurned, setter=_setTotalBasalEnergyBurned:) HKQuantity *totalBasalEnergyBurned;
@property (readonly) HKQuantity *totalDistance;
@property (readonly) HKQuantity *totalEnergyBurned;
@property (readonly) HKQuantity *totalFlightsClimbed; // ivar: _totalFlightsClimbed
@property (readonly) HKQuantity *totalSwimmingStrokeCount;
@property (readonly) NSUInteger workoutActivityType;
@property (readonly, copy) NSArray *workoutEvents;


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsSecureCoding;
+(NSUInteger)_workoutActivityTypeFromString:(id)arg0 ;
+(id)_activityTypeMappings;
+(id)_allWorkoutActivityTypes;
+(id)_allWorkoutTypeNames;
+(id)_stringFromWorkoutActivityType:(NSUInteger)arg0 ;
+(id)_workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 workoutEvents:(id)arg3 duration:(CGFloat)arg4 statistics:(id)arg5 goalType:(NSUInteger)arg6 goal:(id)arg7 device:(id)arg8 metadata:(id)arg9 ;
+(id)_workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 workoutEvents:(id)arg3 duration:(CGFloat)arg4 totalActiveEnergyBurned:(id)arg5 totalBasalEnergyBurned:(id)arg6 totalDistance:(id)arg7 goalType:(NSUInteger)arg8 goal:(id)arg9 device:(id)arg10 metadata:(id)arg11 ;
+(id)_workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 workoutEvents:(id)arg3 duration:(CGFloat)arg4 totalActiveEnergyBurned:(id)arg5 totalBasalEnergyBurned:(id)arg6 totalDistance:(id)arg7 totalSwimmingStrokeCount:(id)arg8 totalFlightsClimbed:(id)arg9 goalType:(NSUInteger)arg10 goal:(id)arg11 device:(id)arg12 metadata:(id)arg13 config:(id)arg14 ;
+(id)workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
+(id)workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 duration:(CGFloat)arg3 totalEnergyBurned:(id)arg4 totalDistance:(id)arg5 device:(id)arg6 metadata:(id)arg7 ;
+(id)workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 duration:(CGFloat)arg3 totalEnergyBurned:(id)arg4 totalDistance:(id)arg5 metadata:(id)arg6 ;
+(id)workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 workoutEvents:(id)arg3 totalEnergyBurned:(id)arg4 totalDistance:(id)arg5 device:(id)arg6 metadata:(id)arg7 ;
+(id)workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 workoutEvents:(id)arg3 totalEnergyBurned:(id)arg4 totalDistance:(id)arg5 metadata:(id)arg6 ;
+(id)workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 workoutEvents:(id)arg3 totalEnergyBurned:(id)arg4 totalDistance:(id)arg5 totalFlightsClimbed:(id)arg6 device:(id)arg7 metadata:(id)arg8 ;
+(id)workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 workoutEvents:(id)arg3 totalEnergyBurned:(id)arg4 totalDistance:(id)arg5 totalSwimmingStrokeCount:(id)arg6 device:(id)arg7 metadata:(id)arg8 ;
-(NSInteger)hk_integerValue;
-(id)_deepCopy;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)_validateWorkoutEvents:(id)arg0 withConfiguration:(struct HKObjectValidationConfiguration )arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)_enumerateActiveTimePeriods:(id)arg0 ;
-(void)_enumerateTimePeriodsWithBlock:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif