// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKACTIVITYSUMMARY_H
#define HKACTIVITYSUMMARY_H

@class NSDateComponents, NSDate, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKQuantity.h"

@interface HKActivitySummary : NSObject <NSSecureCoding, NSCopying>

 {
    NSInteger _activitySummaryIndex;
    NSDateComponents *_dateComponents;
    HKQuantity *_activeEnergyBurned;
    HKQuantity *_appleMoveTime;
    HKQuantity *_appleExerciseTime;
    HKQuantity *_appleStandHours;
    HKQuantity *_distanceWalkingRunning;
    HKQuantity *_stepCount;
    HKQuantity *_activeEnergyBurnedGoal;
    HKQuantity *_appleMoveTimeGoal;
    HKQuantity *_appleExerciseTimeGoal;
    HKQuantity *_appleStandHoursGoal;
    HKQuantity *_deepBreathingDuration;
    HKQuantity *_pushCount;
    HKQuantity *_flightsClimbed;
    NSInteger _wheelchairUse;
    NSInteger _activityMoveMode;
}


@property (retain, nonatomic) HKQuantity *activeEnergyBurned;
@property (retain, nonatomic) HKQuantity *activeEnergyBurnedGoal;
@property (readonly, nonatomic, getter=_activeEnergyCompletionPercentage) CGFloat activeEnergyCompletionPercentage;
@property (retain, nonatomic, getter=_activeHoursGoalDate, setter=_setActiveHoursGoalDate:) NSDate *activeHoursGoalDate; // ivar: _activeHoursGoalDate
@property (nonatomic) NSInteger activityMoveMode;
@property (nonatomic, getter=_activitySummaryIndex, setter=_setActivitySummaryIndex:) NSInteger activitySummaryIndex;
@property (retain, nonatomic) HKQuantity *appleExerciseTime;
@property (retain, nonatomic) HKQuantity *appleExerciseTimeGoal;
@property (retain, nonatomic) HKQuantity *appleMoveMinutes;
@property (retain, nonatomic) HKQuantity *appleMoveMinutesGoal;
@property (retain, nonatomic) HKQuantity *appleMoveTime;
@property (retain, nonatomic) HKQuantity *appleMoveTimeGoal;
@property (retain, nonatomic) HKQuantity *appleStandHours;
@property (retain, nonatomic) HKQuantity *appleStandHoursGoal;
@property (retain, nonatomic, getter=_briskMinutesGoalDate, setter=_setBriskMinutesGoalDate:) NSDate *briskMinutesGoalDate; // ivar: _briskMinutesGoalDate
@property (retain, nonatomic, getter=_creationDate, setter=_setCreationDate:) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic, getter=_dailyBriskMinutesStatistics, setter=_setDailyBriskMinutesStatistics:) NSArray *dailyBriskMinutesStatistics; // ivar: _dailyBriskMinutesStatistics
@property (retain, nonatomic, getter=_dailyEnergyBurnedStatistics, setter=_setDailyEnergyBurnedStatistics:) NSArray *dailyEnergyBurnedStatistics; // ivar: _dailyEnergyBurnedStatistics
@property (retain, nonatomic, getter=_dailyMoveMinutesStatistics, setter=_setDailyMoveMinutesStatistics:) NSArray *dailyMoveMinuteStatistics; // ivar: _dailyMoveMinuteStatistics
@property (retain, nonatomic, getter=_dailyMoveTimeStatistics, setter=_setDailyMoveTimeStatistics:) NSArray *dailyMoveTimeStatistics; // ivar: _dailyMoveTimeStatistics
@property (nonatomic, getter=_isDataLoading, setter=_setDataLoading:) BOOL dataLoading; // ivar: _dataLoading
@property (retain, nonatomic, getter=_deepBreathingDuration, setter=_setDeepBreathingDuration:) HKQuantity *deepBreathingDuration;
@property (retain, nonatomic) HKQuantity *distanceWalkingRunning;
@property (retain, nonatomic, getter=_endDate, setter=_setEndDate:) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic, getter=_energyBurnedGoalDate, setter=_setEnergyBurnedGoalDate:) NSDate *energyBurnedGoalDate; // ivar: _energyBurnedGoalDate
@property (readonly, nonatomic, getter=_exerciseTimeCompletionPercentage) CGFloat exerciseTimeCompletionPercentage;
@property (retain, nonatomic) HKQuantity *exerciseTimeGoal;
@property (retain, nonatomic, getter=_flightsClimbed, setter=_setFlightsClimbed:) HKQuantity *flightsClimbed;
@property (copy, nonatomic, getter=_gregorianDateComponents, setter=_setGregorianDateComponents:) NSDateComponents *gregorianDateComponents;
@property (readonly, nonatomic, getter=_hasAppleMoveMinutesGoal) BOOL hasAppleMoveMinutesGoal;
@property (readonly, nonatomic, getter=_hasEnergyBurnedGoal) BOOL hasEnergyBurnedGoal;
@property (readonly, nonatomic, getter=_hasMoveGoal) BOOL hasMoveGoal;
@property (readonly, nonatomic, getter=_isStandalonePhoneSummary) BOOL isStandalonePhoneSummary;
@property (readonly, nonatomic, getter=_moveMinutesCompletionPercentage) CGFloat moveMinutesCompletionPercentage;
@property (retain, nonatomic, getter=_moveTimeGoalDate, setter=_setMoveTimeGoalDate:) NSDate *moveTimeGoalDate; // ivar: _moveTimeGoalDate
@property (retain, nonatomic, getter=_pushCount, setter=_setPushCount:) HKQuantity *pushCount;
@property (readonly, nonatomic, getter=_standHoursCompletionPercentage) CGFloat standHoursCompletionPercentage;
@property (retain, nonatomic) HKQuantity *standHoursGoal;
@property (retain, nonatomic, getter=_startDate, setter=_setStartDate:) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) HKQuantity *stepCount;
@property (nonatomic, getter=_wheelchairUse, setter=_setWheelchairUse:) NSInteger wheelchairUse;


+(BOOL)_validateActivitySummaryDateComponents:(id)arg0 errorMessage:(*id)arg1 ;
+(BOOL)_validateActivitySummaryDateComponentsRange:(id)arg0 endDateComponents:(id)arg1 errorMessage:(*id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)_mostRecentlyCreatedCacheAmongCaches:(id)arg0 ;
+(id)_mostSignificantCacheAmongCaches:(id)arg0 ;
-(BOOL)_allFieldsAreEqual:(id)arg0 ;
-(BOOL)_hasAppleMoveTimeGoal;
-(BOOL)_hasExerciseGoal;
-(BOOL)_hasStandHoursGoal;
-(BOOL)_useHourlyGoalComparison;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_percentageCompleteWithQuantity:(id)arg0 goalQuantity:(id)arg1 unit:(id)arg2 ;
-(NSUInteger)hash;
-(id)_decodeQuantityFromCoder:(id)arg0 forKey:(id)arg1 unit:(id)arg2 ;
-(id)_initWithActivityCache:(id)arg0 shouldIncludePrivateProperties:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateComponentsForCalendar:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_encodeQuantity:(id)arg0 withCoder:(id)arg1 key:(id)arg2 unit:(id)arg3 ;
-(void)_validateQuantityAssignment:(id)arg0 expectedUnit:(id)arg1 propertyName:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif