// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIUIFORMATTINGMANAGER_H
#define FIUIFORMATTINGMANAGER_H


#import <Foundation/Foundation.h>

#import "FIUIUnitManager.h"

@interface FIUIFormattingManager : NSObject

@property (readonly, nonatomic) FIUIUnitManager *unitManager; // ivar: _unitManager


+(NSUInteger)defaultPrecisionForDistanceUnit:(NSUInteger)arg0 ;
+(NSUInteger)sectionTypeForMetricType:(NSUInteger)arg0 ;
+(id)localizedShortCadenceUnitStringForActivityType:(NSUInteger)arg0 ;
+(id)localizedShortPowerUnitString;
+(id)percentStringWithNumber:(id)arg0 ;
+(id)stringWithNumber:(id)arg0 decimalPrecision:(NSUInteger)arg1 ;
+(id)stringWithNumber:(id)arg0 decimalPrecision:(NSUInteger)arg1 roundingMode:(NSUInteger)arg2 ;
+(id)stringWithNumber:(id)arg0 decimalPrecision:(NSUInteger)arg1 roundingMode:(NSUInteger)arg2 decimalTrimmingMode:(NSUInteger)arg3 ;
-(BOOL)_workoutSupportsDistanceMetricForGoalDisplay:(id)arg0 ;
-(CGFloat)caloriesForEnergyBurnedInUserUnit:(CGFloat)arg0 ;
-(CGFloat)energyBurnedInUserUnitForCalories:(CGFloat)arg0 ;
-(CGFloat)roundedDailyMoveGoal:(CGFloat)arg0 activityMoveMode:(NSInteger)arg1 ;
-(CGFloat)roundedDailyMoveGoalForCalories:(CGFloat)arg0 ;
-(CGFloat)roundedDailyMoveGoalForMoveMinutes:(CGFloat)arg0 ;
-(CGFloat)speedPerHourWithDistance:(id)arg0 overDuration:(CGFloat)arg1 paceFormat:(NSInteger)arg2 ;
-(NSUInteger)_effectiveGoalTypeForWorkout:(id)arg0 ;
-(NSUInteger)decimalPrecisionForPaceFormat:(NSInteger)arg0 ;
-(NSUInteger)naturalScaleUnitForDistanceInMeters:(CGFloat)arg0 distanceType:(NSUInteger)arg1 ;
-(NSUInteger)userDistanceUnitForSwimmingLapLength;
-(id)_energyBurnedUnitStringForUnit:(id)arg0 useShortString:(BOOL)arg1 ;
-(id)_localizedEnergyDescriptionForWorkout:(id)arg0 withValue:(*id)arg1 appendActivityType:(BOOL)arg2 activityTypeString:(id)arg3 ;
-(id)_localizedKeyMetricCyclingStringWithWorkout:(id)arg0 withUnitStyle:(NSUInteger)arg1 ;
-(id)_localizedKeyMetricDistanceStringForWorkout:(id)arg0 withUnitStyle:(NSUInteger)arg1 ;
-(id)_localizedKeyMetricDurationStringWithWorkout:(id)arg0 ;
-(id)_localizedKeyMetricEnergyBurnedStringForWorkout:(id)arg0 withUnitStyle:(NSUInteger)arg1 ;
-(id)_localizedOpenGoalKeyMetricStringForWorkout:(id)arg0 withUnitStyle:(NSUInteger)arg1 ;
-(id)_localizedStringWithDistanceUnit:(NSUInteger)arg0 distanceInUnit:(CGFloat)arg1 unitStyle:(NSInteger)arg2 decimalPrecision:(NSUInteger)arg3 roundingMode:(NSUInteger)arg4 decimalTrimmingMode:(NSUInteger)arg5 ;
-(id)_localizedTimeDescriptionForWorkout:(id)arg0 withValue:(*id)arg1 appendActivityType:(BOOL)arg2 activityTypeString:(id)arg3 ;
-(id)_stringByReplacingThirtyThreeAndAThirdIfNeeded:(id)arg0 distanceInMeters:(CGFloat)arg1 distanceUnit:(NSUInteger)arg2 ;
-(id)applyTextCase:(NSUInteger)arg0 toString:(id)arg1 ;
-(id)decimalSeparator;
-(id)initWithUnitManager:(id)arg0 ;
-(id)localizationKeyForDistanceBaseKey:(id)arg0 distanceType:(NSUInteger)arg1 ;
-(id)localizationKeyForEnergyBaseKey:(id)arg0 ;
-(id)localizationKeyForMoveBaseKey:(id)arg0 activityMoveMode:(NSInteger)arg1 ;
-(id)localizationKeyForMoveMinutesBaseKey:(id)arg0 ;
-(id)localizedCompactGoalDescriptionForGoalType:(NSUInteger)arg0 goalValue:(CGFloat)arg1 activityType:(id)arg2 ;
-(id)localizedCompactNaturalScaleStringWithDistanceInMeters:(CGFloat)arg0 distanceType:(NSUInteger)arg1 unitStyle:(NSUInteger)arg2 usedUnit:(*NSUInteger)arg3 ;
-(id)localizedDistanceByStrokeStyle:(id)arg0 isPoolSwim:(BOOL)arg1 ;
-(id)localizedDistinguishingCadenceUnitStringWithMetricType:(NSUInteger)arg0 ;
-(id)localizedDistinguishingPaceUnitStringWithMetricType:(NSUInteger)arg0 distanceType:(NSUInteger)arg1 distanceUnit:(NSUInteger)arg2 paceFormat:(NSInteger)arg3 abbreviated:(BOOL)arg4 ;
-(id)localizedDistinguishingPowerStringWithMetricType:(NSUInteger)arg0 ;
-(id)localizedDistinguishingPowerUnitStringWithMetricType:(NSUInteger)arg0 ;
-(id)localizedGoalDescriptionForGoalType:(NSUInteger)arg0 goalValue:(CGFloat)arg1 activityType:(id)arg2 ;
-(id)localizedGoalDescriptionForWorkout:(id)arg0 withValue:(*id)arg1 appendActivityType:(BOOL)arg2 ;
-(id)localizedHeartRateUnitString;
-(id)localizedInSessionDescriptionForElevation:(NSUInteger)arg0 ;
-(id)localizedInSessionDescriptionForGroundElevation:(NSUInteger)arg0 ;
-(id)localizedKeyMetricStringForWorkout:(id)arg0 unitStyle:(NSUInteger)arg1 ;
-(id)localizedLongActiveEnergyUnitString;
-(id)localizedLongActiveEnergyUnitStringWithTextCase:(NSUInteger)arg0 ;
-(id)localizedLongActiveHoursUnitString;
-(id)localizedLongActiveHoursUnitStringForValue:(NSUInteger)arg0 ;
-(id)localizedLongBriskMinutesUnitString;
-(id)localizedLongBriskMinutesUnitStringForValue:(NSUInteger)arg0 ;
-(id)localizedLongMoveMinutesUnitString;
-(id)localizedLongMoveMinutesUnitStringForValue:(NSUInteger)arg0 ;
-(id)localizedLongMoveMinutesUnitStringWithTextCase:(NSUInteger)arg0 ;
-(id)localizedLongMoveMinutesUnitStringWithTextCase:(NSUInteger)arg0 value:(NSUInteger)arg1 ;
-(id)localizedLongMoveUnitStringWithActivityMoveMode:(NSInteger)arg0 ;
-(id)localizedLongMoveUnitStringWithActivityMoveMode:(NSInteger)arg0 value:(NSUInteger)arg1 ;
-(id)localizedLongUnitStringForDistanceUnit:(NSUInteger)arg0 distanceInUnit:(CGFloat)arg1 ;
-(id)localizedLongUnitStringForDistanceUnit:(NSUInteger)arg0 distanceInUnit:(CGFloat)arg1 textCase:(NSUInteger)arg2 ;
-(id)localizedMediumMoveMinutesUnitString;
-(id)localizedMediumMoveMinutesUnitStringForValue:(NSUInteger)arg0 ;
-(id)localizedMediumMoveMinutesUnitStringWithTextCase:(NSUInteger)arg0 ;
-(id)localizedMediumMoveMinutesUnitStringWithTextCase:(NSUInteger)arg0 value:(NSUInteger)arg1 ;
-(id)localizedNaturalScaleStringWithDistanceInMeters:(CGFloat)arg0 distanceType:(NSUInteger)arg1 unitStyle:(NSUInteger)arg2 usedUnit:(*NSUInteger)arg3 ;
-(id)localizedNaturalScaleStringWithDistanceInMeters:(CGFloat)arg0 distanceType:(NSUInteger)arg1 unitStyle:(NSUInteger)arg2 usedUnit:(*NSUInteger)arg3 decimalTrimmingMode:(NSUInteger)arg4 ;
-(id)localizedPaceAndUnitStringForSpeed:(CGFloat)arg0 activityType:(id)arg1 ;
-(id)localizedPaceAndUnitWithDistance:(id)arg0 overDuration:(CGFloat)arg1 paceFormat:(NSInteger)arg2 distanceUnit:(NSUInteger)arg3 unitStyle:(NSUInteger)arg4 decimalTrimmingMode:(NSUInteger)arg5 ;
-(id)localizedPaceStringWithDistance:(id)arg0 overDuration:(CGFloat)arg1 paceFormat:(NSInteger)arg2 ;
-(id)localizedPaceStringWithDistance:(id)arg0 overDuration:(CGFloat)arg1 paceFormat:(NSInteger)arg2 unitStyle:(NSUInteger)arg3 decimalTrimmingMode:(NSUInteger)arg4 ;
-(id)localizedPaceUnitStringWithDistanceType:(NSUInteger)arg0 distanceUnit:(NSUInteger)arg1 ;
-(id)localizedPaceUnitStringWithDistanceType:(NSUInteger)arg0 distanceUnit:(NSUInteger)arg1 unitStyle:(NSInteger)arg2 ;
-(id)localizedPaceValueForSplit:(id)arg0 activityType:(id)arg1 ;
-(id)localizedPowerUnitStringForPower:(CGFloat)arg0 ;
-(id)localizedShareTextWithWorkout:(id)arg0 shareValue:(id)arg1 ;
-(id)localizedShortActiveEnergyUnitString;
-(id)localizedShortTypeDistinguishingUnitStringForEnergyType:(NSUInteger)arg0 workoutSectionType:(NSUInteger)arg1 ;
-(id)localizedShortTypeDistinguishingUnitStringForPowerType:(NSUInteger)arg0 unitString:(id)arg1 ;
-(id)localizedShortUnitStringForDistanceType:(NSUInteger)arg0 ;
-(id)localizedShortUnitStringForDistanceUnit:(NSUInteger)arg0 ;
-(id)localizedShortUnitStringForDistanceUnit:(NSUInteger)arg0 textCase:(NSUInteger)arg1 ;
-(id)localizedSpeedUnitString;
-(id)localizedSpeedUnitStringForActivityType:(id)arg0 ;
-(id)localizedSpeedUnitStringForDistanceUnit:(NSUInteger)arg0 unitStyle:(NSUInteger)arg1 ;
-(id)localizedStringForMetricType:(NSUInteger)arg0 paceFormat:(NSInteger)arg1 ;
-(id)localizedStringWithActiveEnergy:(id)arg0 ;
-(id)localizedStringWithActiveEnergy:(id)arg0 unitStyle:(NSUInteger)arg1 ;
-(id)localizedStringWithActiveHours:(id)arg0 ;
-(id)localizedStringWithBeatsPerMinute:(CGFloat)arg0 ;
-(id)localizedStringWithBeatsPerMinute:(CGFloat)arg0 requirePositiveValue:(BOOL)arg1 ;
-(id)localizedStringWithBriskMinutes:(id)arg0 ;
-(id)localizedStringWithDistanceInMeters:(CGFloat)arg0 distanceType:(NSUInteger)arg1 unitStyle:(NSUInteger)arg2 ;
-(id)localizedStringWithDistanceInMeters:(CGFloat)arg0 distanceType:(NSUInteger)arg1 unitStyle:(NSUInteger)arg2 roundingMode:(NSUInteger)arg3 ;
-(id)localizedStringWithDistanceInMeters:(CGFloat)arg0 distanceUnit:(NSUInteger)arg1 unitStyle:(NSUInteger)arg2 decimalPrecision:(NSUInteger)arg3 ;
-(id)localizedStringWithDistanceInMeters:(CGFloat)arg0 distanceUnit:(NSUInteger)arg1 unitStyle:(NSUInteger)arg2 decimalPrecision:(NSUInteger)arg3 roundingMode:(NSUInteger)arg4 decimalTrimmingMode:(NSUInteger)arg5 ;
-(id)localizedStringWithEnergy:(id)arg0 energyType:(NSUInteger)arg1 unitStyle:(NSUInteger)arg2 ;
-(id)localizedStringWithEnergyInCalories:(CGFloat)arg0 energyType:(NSUInteger)arg1 unitStyle:(NSUInteger)arg2 ;
-(id)localizedStringWithHeartRate:(id)arg0 ;
-(id)localizedStringWithHeartRate:(id)arg0 unitStyle:(NSUInteger)arg1 ;
-(id)localizedStringWithHeartRate:(id)arg0 unitStyle:(NSUInteger)arg1 requirePositiveValue:(BOOL)arg2 ;
-(id)localizedStringWithMoveMinutes:(id)arg0 ;
-(id)localizedStringWithMoveMinutes:(id)arg0 unitStyle:(NSUInteger)arg1 ;
-(id)localizedStringWithMoveQuantity:(id)arg0 activityMoveMode:(NSInteger)arg1 ;
-(id)localizedStringWithMoveQuantity:(id)arg0 unitStyle:(NSUInteger)arg1 activityMoveMode:(NSInteger)arg2 ;
-(id)localizedStringWithPersonHeight:(id)arg0 unitStyle:(NSInteger)arg1 ;
-(id)localizedStrokeCountStringWithCount:(NSInteger)arg0 overDistance:(id)arg1 paceFormat:(NSInteger)arg2 ;
-(id)localizedSwimmingPaceStringWithDistance:(id)arg0 overDuration:(CGFloat)arg1 paceFormat:(NSInteger)arg2 ;
-(id)localizedTitleForSplit:(id)arg0 unit:(id)arg1 lapIndex:(NSInteger)arg2 useShortFormat:(BOOL)arg3 ;
-(id)localizedUnitStringForDistanceUnit:(NSUInteger)arg0 distanceInUnit:(CGFloat)arg1 unitStyle:(NSUInteger)arg2 ;
-(id)stringWithDuration:(CGFloat)arg0 durationFormat:(NSUInteger)arg1 ;


@end


#endif