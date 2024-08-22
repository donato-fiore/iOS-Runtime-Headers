// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKACTIVITYCACHE_H
#define HKACTIVITYCACHE_H

@class NSDateComponents, NSDate, NSArray;
@protocol NSCopying;


#import "HKSample.h"
#import "HKQuantity.h"

@interface HKActivityCache : HKSample <NSCopying>

 {
    NSInteger _cacheIndex;
    NSDateComponents *_dateComponents;
    NSInteger _stepCount;
    NSInteger _pushCount;
    NSInteger _wheelchairUse;
    CGFloat _deepBreathingDuration;
    HKQuantity *_energyBurned;
    CGFloat _moveMinutes;
    CGFloat _briskMinutes;
    CGFloat _activeHours;
    HKQuantity *_energyBurnedGoal;
    NSDate *_energyBurnedGoalDate;
    HKQuantity *_moveMinutesGoal;
    NSDate *_moveMinutesGoalDate;
    HKQuantity *_briskMinutesGoal;
    HKQuantity *_activeHoursGoal;
    HKQuantity *_walkingAndRunningDistance;
    NSInteger _flightsClimbed;
    NSArray *_dailyEnergyBurnedStatistics;
    NSArray *_dailyMoveMinutesStatistics;
    NSArray *_dailyBriskMinutesStatistics;
    NSInteger _activityMoveMode;
    NSInteger _version;
    NSUInteger _knownFields;
}


@property (setter=_setActiveHours:) CGFloat activeHours;
@property (retain, setter=_setActiveHoursGoal:) HKQuantity *activeHoursGoal;
@property (readonly) NSDate *activeHoursGoalDate; // ivar: _activeHoursGoalDate
@property (setter=_setActivityMoveMode:) NSInteger activityMoveMode;
@property (setter=_setBriskMinutes:) CGFloat briskMinutes;
@property (retain, setter=_setBriskMinutesGoal:) HKQuantity *briskMinutesGoal;
@property (readonly) NSDate *briskMinutesGoalDate; // ivar: _briskMinutesGoalDate
@property (setter=_setCacheIndex:) NSInteger cacheIndex;
@property (copy, setter=_setDailyBriskMinutesStatistics:) NSArray *dailyBriskMinutesStatistics;
@property (copy, setter=_setDailyEnergyBurnedStatistics:) NSArray *dailyEnergyBurnedStatistics;
@property (copy, setter=_setDailyMoveMinutesStatistics:) NSArray *dailyMoveMinutesStatistics;
@property (readonly) NSDateComponents *dateComponents;
@property (setter=_setDeepBreathingDuration:) CGFloat deepBreathingDuration;
@property (retain, setter=_setEnergyBurned:) HKQuantity *energyBurned;
@property (retain, setter=_setEnergyBurnedGoal:) HKQuantity *energyBurnedGoal;
@property (readonly) NSDate *energyBurnedGoalDate;
@property (setter=_setFlightsClimbed:) NSInteger flightsClimbed;
@property (readonly) BOOL hasActiveHours;
@property (readonly) BOOL hasActiveHoursGoal;
@property (readonly) BOOL hasActiveHoursGoalDate;
@property (readonly) BOOL hasBriskMinutes;
@property (readonly) BOOL hasBriskMinutesGoal;
@property (readonly) BOOL hasBriskMinutesGoalDate;
@property (readonly) BOOL hasDailyBriskMinutesStatistics;
@property (readonly) BOOL hasDailyEnergyBurnedStatistics;
@property (readonly) BOOL hasDailyMoveMinutesStatistics;
@property (readonly) BOOL hasDateComponents;
@property (readonly) BOOL hasDeepBreathingDuration;
@property (readonly) BOOL hasEnergyBurned;
@property (readonly) BOOL hasEnergyBurnedGoal;
@property (readonly) BOOL hasFlightsClimbed;
@property (readonly) BOOL hasMoveMinutes;
@property (readonly) BOOL hasMoveMinutesGoal;
@property (readonly) BOOL hasPushCount;
@property (readonly) BOOL hasStepCount;
@property (readonly) BOOL hasWalkingAndRunningDistance;
@property (readonly) BOOL hasWheelchairUse;
@property (readonly) NSUInteger knownFields;
@property (setter=_setMoveMinutes:) CGFloat moveMinutes;
@property (retain, setter=_setMoveMinutesGoal:) HKQuantity *moveMinutesGoal;
@property (readonly) NSDate *moveMinutesGoalDate;
@property (setter=_setPushCount:) NSInteger pushCount;
@property (setter=_setSequence:) NSInteger sequence; // ivar: _sequence
@property (setter=_setStepCount:) NSInteger stepCount;
@property (setter=_setVersion:) NSInteger version;
@property (retain, setter=_setWalkingAndRunningDistance:) HKQuantity *walkingAndRunningDistance;
@property (setter=_setWheelchairUse:) NSInteger wheelchairUse;


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsSecureCoding;
+(id)_activityCacheWithStartDate:(id)arg0 endDate:(id)arg1 dateComponents:(id)arg2 sequence:(NSInteger)arg3 energyBurned:(id)arg4 energyBurnedGoal:(id)arg5 walkingAndRunningDistance:(id)arg6 metadata:(id)arg7 ;
+(id)_activityCacheWithStartDate:(id)arg0 endDate:(id)arg1 dateComponents:(id)arg2 sequence:(NSInteger)arg3 metadata:(id)arg4 ;
+(id)_activityCacheWithUUID:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 dateComponents:(id)arg3 sequence:(NSInteger)arg4 ;
-(BOOL)_isEqualToActivityCache:(id)arg0 ;
-(id)_fallbackActiveHoursGoal;
-(id)_fallbackBriskMinutesGoal;
-(id)_valueDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_setActiveHoursGoalOnly:(id)arg0 ;
-(void)_setBriskMinutesGoalOnly:(id)arg0 ;
-(void)_setEnergyBurnedGoalOnly:(id)arg0 ;
-(void)_setMoveMinutesGoalOnly:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reset;


@end


#endif