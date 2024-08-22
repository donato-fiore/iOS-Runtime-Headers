// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKWORKOUT_H
#define HKWORKOUT_H

@class NSArray, NSDictionary;


#import "HKSample.h"
#import "HKQuantity.h"
#import "HKWorkoutActivity.h"

@interface HKWorkout : HKSample {
    NSUInteger _workoutActivityType;
    CGFloat _duration;
    NSArray *_workoutEvents;
}


@property (readonly, nonatomic, getter=_activityMoveMode) NSInteger activityMoveMode;
@property (readonly, copy) NSDictionary *allStatistics;
@property (readonly) CGFloat duration;
@property (retain, nonatomic, getter=_goal, setter=_setGoal:) HKQuantity *goal; // ivar: _goal
@property (nonatomic, getter=_goalType, setter=_setGoalType:) NSUInteger goalType; // ivar: _goalType
@property (nonatomic, getter=_isWatchWorkout, setter=_setIsWatchWorkout:) BOOL isWatchWorkout; // ivar: _isWatchWorkout
@property (retain, nonatomic, getter=_primaryActivity, setter=_setPrimaryActivity:) HKWorkoutActivity *primaryActivity; // ivar: _primaryActivity
@property (retain, nonatomic, getter=_subActivities, setter=_setSubActivities:) NSArray *subActivities; // ivar: _subActivities
@property (retain, nonatomic, getter=_totalBasalEnergyBurned, setter=_setTotalBasalEnergyBurned:) HKQuantity *totalBasalEnergyBurned;
@property (readonly) HKQuantity *totalDistance;
@property (readonly) HKQuantity *totalEnergyBurned;
@property (readonly) HKQuantity *totalFlightsClimbed;
@property (readonly) HKQuantity *totalSwimmingStrokeCount;
@property (readonly, copy) NSArray *workoutActivities;
@property (readonly) NSUInteger workoutActivityType;
@property (readonly, copy) NSArray *workoutEvents;


+(BOOL)_isConcreteObjectClass;
+(BOOL)_workoutWithActivityType:(NSUInteger)arg0 acceptsSubActivityType:(NSUInteger)arg1 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)_workoutActivityTypeFromString:(id)arg0 ;
+(id)_activityTypeMappings;
+(id)_allWorkoutActivityTypes;
+(id)_allWorkoutTypeNames;
+(id)_statisticsFromTotalActiveEnergyBurned:(id)arg0 totalBasalEnergyBurned:(id)arg1 totalDistance:(id)arg2 totalSwimmingStrokeCount:(id)arg3 totalFlightsClimbed:(id)arg4 workoutActivityType:(NSUInteger)arg5 startDate:(id)arg6 endDate:(id)arg7 ;
+(id)_stringFromWorkoutActivityType:(NSUInteger)arg0 ;
+(id)_workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 workoutEvents:(id)arg3 duration:(CGFloat)arg4 totalActiveEnergyBurned:(id)arg5 totalBasalEnergyBurned:(id)arg6 totalDistance:(id)arg7 goalType:(NSUInteger)arg8 goal:(id)arg9 device:(id)arg10 metadata:(id)arg11 ;
+(id)_workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 workoutEvents:(id)arg3 workoutActivities:(id)arg4 duration:(CGFloat)arg5 statistics:(id)arg6 goalType:(NSUInteger)arg7 goal:(id)arg8 device:(id)arg9 metadata:(id)arg10 ;
+(id)_workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 workoutEvents:(id)arg3 workoutActivities:(id)arg4 duration:(CGFloat)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 totalSwimmingStrokeCount:(id)arg9 totalFlightsClimbed:(id)arg10 goalType:(NSUInteger)arg11 goal:(id)arg12 device:(id)arg13 metadata:(id)arg14 ;
+(id)workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
+(id)workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 duration:(CGFloat)arg3 totalEnergyBurned:(id)arg4 totalDistance:(id)arg5 device:(id)arg6 metadata:(id)arg7 ;
+(id)workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 duration:(CGFloat)arg3 totalEnergyBurned:(id)arg4 totalDistance:(id)arg5 metadata:(id)arg6 ;
+(id)workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 workoutEvents:(id)arg3 totalEnergyBurned:(id)arg4 totalDistance:(id)arg5 device:(id)arg6 metadata:(id)arg7 ;
+(id)workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 workoutEvents:(id)arg3 totalEnergyBurned:(id)arg4 totalDistance:(id)arg5 metadata:(id)arg6 ;
+(id)workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 workoutEvents:(id)arg3 totalEnergyBurned:(id)arg4 totalDistance:(id)arg5 totalFlightsClimbed:(id)arg6 device:(id)arg7 metadata:(id)arg8 ;
+(id)workoutWithActivityType:(NSUInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 workoutEvents:(id)arg3 totalEnergyBurned:(id)arg4 totalDistance:(id)arg5 totalSwimmingStrokeCount:(id)arg6 device:(id)arg7 metadata:(id)arg8 ;
-(CGFloat)_totalDistanceIncludingAllTypesForUnit:(id)arg0 ;
-(NSInteger)hk_integerValue;
-(id)_deepCopy;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)_validateWorkoutActivities:(id)arg0 withConfiguration:(struct HKObjectValidationConfiguration )arg1 ;
-(id)_validateWorkoutEvents:(id)arg0 withConfiguration:(struct HKObjectValidationConfiguration )arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)statisticsForType:(id)arg0 ;
-(void)_enumerateActiveTimePeriods:(id)arg0 ;
-(void)_enumerateTimePeriodsWithBlock:(id)arg0 ;
-(void)_setUUID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif