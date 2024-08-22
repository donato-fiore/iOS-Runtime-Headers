// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDEMODATAPERSON_H
#define HDDEMODATAPERSON_H

@class NSDate, NSDateComponents, NSString, _HKMedicalIDData, NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "HDDemoDataSleepParameters.h"

@interface HDDemoDataPerson : NSObject

@property (nonatomic) CGFloat activeCaloriesSampleFrequency; // ivar: _activeCaloriesSampleFrequency
@property (nonatomic) NSInteger asthmaSeverity; // ivar: _asthmaSeverity
@property (nonatomic) CGFloat asymmetryPercentageMean; // ivar: _asymmetryPercentageMean
@property (nonatomic) CGFloat asymmetryPercentageSampleFrequency; // ivar: _asymmetryPercentageSampleFrequency
@property (nonatomic) CGFloat asymmetryPercentageSampleFrequencyStdDev; // ivar: _asymmetryPercentageSampleFrequencyStdDev
@property (nonatomic) CGFloat asymmetryPercentageStdDev; // ivar: _asymmetryPercentageStdDev
@property (nonatomic) CGFloat baseCorrectedWristSkinTemperatureInCelsius; // ivar: _baseCorrectedWristSkinTemperatureInCelsius
@property (nonatomic) CGFloat bedtimeNoiseStdDev; // ivar: _bedtimeNoiseStdDev
@property (nonatomic) NSInteger biologicalSex; // ivar: _biologicalSex
@property (retain, nonatomic) NSDate *birthDate; // ivar: _birthDate
@property (retain, nonatomic) NSDateComponents *birthDateComponents; // ivar: _birthDateComponents
@property (nonatomic) CGFloat bloodPressureSampleFrequency; // ivar: _bloodPressureSampleFrequency
@property (nonatomic) NSInteger bloodType; // ivar: _bloodType
@property (nonatomic) CGFloat bodyTempExerciseMultiplier; // ivar: _bodyTempExerciseMultiplier
@property (nonatomic) CGFloat bodyTempFeverMultiplier; // ivar: _bodyTempFeverMultiplier
@property (nonatomic) CGFloat bodyTempSampleFrequency; // ivar: _bodyTempSampleFrequency
@property (nonatomic) CGFloat bodyTempSampleNoiseStdDev; // ivar: _bodyTempSampleNoiseStdDev
@property (nonatomic) CGFloat breakfastTime; // ivar: _breakfastTime
@property (nonatomic) CGFloat breakfastTimeSampleNoiseStdDev; // ivar: _breakfastTimeSampleNoiseStdDev
@property (nonatomic) CGFloat continuousGlucoseMonitoringSampleFrequency; // ivar: _continuousGlucoseMonitoringSampleFrequency
@property (nonatomic) BOOL createHighFidelityData; // ivar: _createHighFidelityData
@property (nonatomic) CGFloat dawnTime; // ivar: _dawnTime
@property (nonatomic) CGFloat dayToDayCorrectedWristSkinTemperatureNoiseStdDevInCelsius; // ivar: _dayToDayCorrectedWristSkinTemperatureNoiseStdDevInCelsius
@property (nonatomic) CGFloat dinnerTime; // ivar: _dinnerTime
@property (nonatomic) CGFloat doubleSupportPercentageMean; // ivar: _doubleSupportPercentageMean
@property (nonatomic) CGFloat doubleSupportPercentageSampleFrequency; // ivar: _doubleSupportPercentageSampleFrequency
@property (nonatomic) CGFloat doubleSupportPercentageSampleFrequencyStdDev; // ivar: _doubleSupportPercentageSampleFrequencyStdDev
@property (nonatomic) CGFloat doubleSupportPercentageStdDev; // ivar: _doubleSupportPercentageStdDev
@property (nonatomic) CGFloat exerciseCooldownTime; // ivar: _exerciseCooldownTime
@property (nonatomic) CGFloat exerciseGoal; // ivar: _exerciseGoal
@property (nonatomic) CGFloat exerciseIntensityPercentage; // ivar: _exerciseIntensityPercentage
@property (nonatomic) CGFloat exercisePostDietWeeklyWorkoutsMean; // ivar: _exercisePostDietWeeklyWorkoutsMean
@property (nonatomic) CGFloat exercisePostDietWeeklyWorkoutsStdDev; // ivar: _exercisePostDietWeeklyWorkoutsStdDev
@property (nonatomic) CGFloat exerciseStartTime; // ivar: _exerciseStartTime
@property (nonatomic) CGFloat exerciseStartTimeStdDev; // ivar: _exerciseStartTimeStdDev
@property (nonatomic) CGFloat exerciseStopTime; // ivar: _exerciseStopTime
@property (nonatomic) CGFloat exerciseStopTimeStdDev; // ivar: _exerciseStopTimeStdDev
@property (nonatomic) CGFloat exerciseTimeSampleFrequency; // ivar: _exerciseTimeSampleFrequency
@property (nonatomic) CGFloat exerciseWeeklyWorkoutsMean; // ivar: _exerciseWeeklyWorkoutsMean
@property (nonatomic) CGFloat exerciseWeeklyWorkoutsStdDev; // ivar: _exerciseWeeklyWorkoutsStdDev
@property (nonatomic) CGFloat fallSampleFrequency; // ivar: _fallSampleFrequency
@property (nonatomic) CGFloat fallsDailyMean; // ivar: _fallsDailyMean
@property (nonatomic) CGFloat fallsDailyStdDev; // ivar: _fallsDailyStdDev
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (nonatomic) NSInteger fitzpatrickSkinType; // ivar: _fitzpatrickSkinType
@property (nonatomic) CGFloat fitzpatrickSkinTypeSampleTime; // ivar: _fitzpatrickSkinTypeSampleTime
@property (nonatomic) NSInteger fitzpatrickSkinTypeScore; // ivar: _fitzpatrickSkinTypeScore
@property (nonatomic) CGFloat flightsClimbedDailyMean; // ivar: _flightsClimbedDailyMean
@property (nonatomic) CGFloat flightsClimbedSampleFrequency; // ivar: _flightsClimbedSampleFrequency
@property (nonatomic) CGFloat flightsClimbedSampleFrequencyStdDev; // ivar: _flightsClimbedSampleFrequencyStdDev
@property (nonatomic) CGFloat flightsClimbedSampleTime; // ivar: _flightsClimbedSampleTime
@property (nonatomic) CGFloat flightsClimbedStdDev; // ivar: _flightsClimbedStdDev
@property (nonatomic) CGFloat forearmCircumferenceInInches; // ivar: _forearmCircumferenceInInches
@property (nonatomic) CGFloat genericSampleTimeNoiseStdDev; // ivar: _genericSampleTimeNoiseStdDev
@property (nonatomic) CGFloat handwashingDurationMean; // ivar: _handwashingDurationMean
@property (nonatomic) CGFloat handwashingDurationMeanStdDev; // ivar: _handwashingDurationMeanStdDev
@property (nonatomic) CGFloat handwashingSampleFrequency; // ivar: _handwashingSampleFrequency
@property (nonatomic) CGFloat handwashingSampleFrequencyStdDev; // ivar: _handwashingSampleFrequencyStdDev
@property (nonatomic) CGFloat heartRateRecovery; // ivar: _heartRateRecovery
@property (nonatomic) CGFloat heartRateRecoveryValueMaxConsecutiveDifference; // ivar: _heartRateRecoveryValueMaxConsecutiveDifference
@property (nonatomic) CGFloat heartRateRecoveryValueMaxTotalDifference; // ivar: _heartRateRecoveryValueMaxTotalDifference
@property (nonatomic) CGFloat heartRateRecoveryValueStdDev; // ivar: _heartRateRecoveryValueStdDev
@property (nonatomic) CGFloat heartRateSampleFrequency; // ivar: _heartRateSampleFrequency
@property (nonatomic) CGFloat heartRateSampleFrequencyStdDev; // ivar: _heartRateSampleFrequencyStdDev
@property (nonatomic) CGFloat heartRateSampleNoiseStdDev; // ivar: _heartRateSampleNoiseStdDev
@property (nonatomic) CGFloat heightSampleNoiseStdDev; // ivar: _heightSampleNoiseStdDev
@property (nonatomic) CGFloat heightSampleTime; // ivar: _heightSampleTime
@property (nonatomic) CGFloat heightSampleTimeFrequency; // ivar: _heightSampleTimeFrequency
@property (nonatomic) CGFloat heightTargetInCm; // ivar: _heightTargetInCm
@property (nonatomic) CGFloat hipCircumferenceInInches; // ivar: _hipCircumferenceInInches
@property (nonatomic) CGFloat inBedTimeStdDev; // ivar: _inBedTimeStdDev
@property (nonatomic) CGFloat insulinAdherence; // ivar: _insulinAdherence
@property (nonatomic) CGFloat insulinProduction; // ivar: _insulinProduction
@property (nonatomic) CGFloat insulinSensitivity; // ivar: _insulinSensitivity
@property (nonatomic) NSUInteger insulinTherapy; // ivar: _insulinTherapy
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (nonatomic) CGFloat lunchTime; // ivar: _lunchTime
@property (nonatomic) CGFloat mealTimeSampleNoiseStdDev; // ivar: _mealTimeSampleNoiseStdDev
@property (retain, nonatomic) _HKMedicalIDData *medicalIDData; // ivar: _medicalIDData
@property (nonatomic) CGFloat menstrualPeriodFrequency; // ivar: _menstrualPeriodFrequency
@property (nonatomic) CGFloat mindfulSessionFrequency; // ivar: _mindfulSessionFrequency
@property (nonatomic) NSInteger mindfulSessionMean; // ivar: _mindfulSessionMean
@property (nonatomic) NSInteger mindfulSessionStdDev; // ivar: _mindfulSessionStdDev
@property (nonatomic) CGFloat moveGoal; // ivar: _moveGoal
@property (nonatomic) CGFloat numCupsOfCoffeeDailyMean; // ivar: _numCupsOfCoffeeDailyMean
@property (nonatomic) CGFloat numCupsOfCoffeeStdDev; // ivar: _numCupsOfCoffeeStdDev
@property (nonatomic) CGFloat numDailyFingerSticksAdherence; // ivar: _numDailyFingerSticksAdherence
@property (nonatomic) NSInteger nutritionTrackingType; // ivar: _nutritionTrackingType
@property (nonatomic) CGFloat ovulationIndeterminateProbabilityPercentage; // ivar: _ovulationIndeterminateProbabilityPercentage
@property (nonatomic) CGFloat oxygenSaturationMean; // ivar: _oxygenSaturationMean
@property (nonatomic) CGFloat oxygenSaturationMeanAtElevation; // ivar: _oxygenSaturationMeanAtElevation
@property (nonatomic) CGFloat oxygenSaturationMeasuringSuccessRate; // ivar: _oxygenSaturationMeasuringSuccessRate
@property (nonatomic) CGFloat oxygenSaturationMeasuringSuccessRateDuringSleep; // ivar: _oxygenSaturationMeasuringSuccessRateDuringSleep
@property (nonatomic) CGFloat oxygenSaturationSampleFrequency; // ivar: _oxygenSaturationSampleFrequency
@property (nonatomic) CGFloat oxygenSaturationStdDev; // ivar: _oxygenSaturationStdDev
@property (nonatomic) CGFloat oxygenSaturationStdDevAtElevation; // ivar: _oxygenSaturationStdDevAtElevation
@property (nonatomic) CGFloat peripheralPerfusionIndexMean; // ivar: _peripheralPerfusionIndexMean
@property (nonatomic) CGFloat peripheralPerfusionIndexSampleFrequency; // ivar: _peripheralPerfusionIndexSampleFrequency
@property (nonatomic) CGFloat peripheralPerfusionIndexStdDev; // ivar: _peripheralPerfusionIndexStdDev
@property (copy, nonatomic) NSString *personDescription; // ivar: _personDescription
@property (nonatomic) CGFloat preDietIntakeMultiplier; // ivar: _preDietIntakeMultiplier
@property (nonatomic) NSInteger profileType; // ivar: _profileType
@property (nonatomic) CGFloat rehabLogarithmicConstant; // ivar: _rehabLogarithmicConstant
@property (nonatomic) CGFloat restingCaloriesSampleFrequency; // ivar: _restingCaloriesSampleFrequency
@property (nonatomic) NSInteger restingDiastolicBloodPressure; // ivar: _restingDiastolicBloodPressure
@property (nonatomic) CGFloat restingDiastolicBloodPressureSampleNoiseStdDev; // ivar: _restingDiastolicBloodPressureSampleNoiseStdDev
@property (nonatomic) NSInteger restingHeartRate; // ivar: _restingHeartRate
@property (nonatomic) NSInteger restingHeartRateMaxDailyDifference; // ivar: _restingHeartRateMaxDailyDifference
@property (nonatomic) NSInteger restingHeartRateMaxTotalDifference; // ivar: _restingHeartRateMaxTotalDifference
@property (nonatomic) NSInteger restingRespirationRate; // ivar: _restingRespirationRate
@property (nonatomic) CGFloat restingRespirationRateSampleFrequency; // ivar: _restingRespirationRateSampleFrequency
@property (nonatomic) CGFloat restingRespirationRateSampleFrequencyDuringSleep; // ivar: _restingRespirationRateSampleFrequencyDuringSleep
@property (nonatomic) CGFloat restingRespirationRateSampleNoiseStdDev; // ivar: _restingRespirationRateSampleNoiseStdDev
@property (nonatomic) NSInteger restingSystolicBloodPressure; // ivar: _restingSystolicBloodPressure
@property (nonatomic) CGFloat restingSystolicBloodPressureSampleNoiseStdDev; // ivar: _restingSystolicBloodPressureSampleNoiseStdDev
@property (nonatomic) NSInteger resultsTrackingType; // ivar: _resultsTrackingType
@property (nonatomic) CGFloat runningGroundContactTimeMean; // ivar: _runningGroundContactTimeMean
@property (nonatomic) CGFloat runningGroundContactTimeMeanStdDev; // ivar: _runningGroundContactTimeMeanStdDev
@property (nonatomic) CGFloat runningGroundContactTimeSampleFrequency; // ivar: _runningGroundContactTimeSampleFrequency
@property (nonatomic) CGFloat runningPowerMean; // ivar: _runningPowerMean
@property (nonatomic) CGFloat runningPowerMeanStdDev; // ivar: _runningPowerMeanStdDev
@property (nonatomic) CGFloat runningPowerSampleFrequency; // ivar: _runningPowerSampleFrequency
@property (nonatomic) CGFloat runningStrideLengthMean; // ivar: _runningStrideLengthMean
@property (nonatomic) CGFloat runningStrideLengthMeanStdDev; // ivar: _runningStrideLengthMeanStdDev
@property (nonatomic) CGFloat runningStrideLengthSampleFrequency; // ivar: _runningStrideLengthSampleFrequency
@property (nonatomic) CGFloat runningVerticalOscillationMean; // ivar: _runningVerticalOscillationMean
@property (nonatomic) CGFloat runningVerticalOscillationMeanStdDev; // ivar: _runningVerticalOscillationMeanStdDev
@property (nonatomic) CGFloat runningVerticalOscillationSampleFrequency; // ivar: _runningVerticalOscillationSampleFrequency
@property (nonatomic) CGFloat sedentarySampleFrequency; // ivar: _sedentarySampleFrequency
@property (nonatomic) BOOL sexualActivityIsTryingToConceive; // ivar: _sexualActivityIsTryingToConceive
@property (nonatomic) CGFloat sexualActivityProbabilityPercentage; // ivar: _sexualActivityProbabilityPercentage
@property (nonatomic) CGFloat sexualActivityProtectionDocumentationProbabilityPercentage; // ivar: _sexualActivityProtectionDocumentationProbabilityPercentage
@property (nonatomic) CGFloat sexualActivityProtectionProbabilityPercentage; // ivar: _sexualActivityProtectionProbabilityPercentage
@property (nonatomic) CGFloat sixMinuteWalkTestDistanceMean; // ivar: _sixMinuteWalkTestDistanceMean
@property (nonatomic) CGFloat sixMinuteWalkTestDistanceSampleFrequency; // ivar: _sixMinuteWalkTestDistanceSampleFrequency
@property (nonatomic) CGFloat sixMinuteWalkTestDistanceSampleFrequencyStdDev; // ivar: _sixMinuteWalkTestDistanceSampleFrequencyStdDev
@property (nonatomic) CGFloat sixMinuteWalkTestDistanceStdDev; // ivar: _sixMinuteWalkTestDistanceStdDev
@property (nonatomic) CGFloat snackTime; // ivar: _snackTime
@property (nonatomic) CGFloat spirometrySampleFrequency; // ivar: _spirometrySampleFrequency
@property (nonatomic) CGFloat spirometrySampleTime; // ivar: _spirometrySampleTime
@property (nonatomic) CGFloat stairAscentSpeedMean; // ivar: _stairAscentSpeedMean
@property (nonatomic) CGFloat stairAscentSpeedSampleFrequency; // ivar: _stairAscentSpeedSampleFrequency
@property (nonatomic) CGFloat stairAscentSpeedSampleFrequencyStdDev; // ivar: _stairAscentSpeedSampleFrequencyStdDev
@property (nonatomic) CGFloat stairAscentSpeedStdDev; // ivar: _stairAscentSpeedStdDev
@property (nonatomic) CGFloat stairDescentSpeedMean; // ivar: _stairDescentSpeedMean
@property (nonatomic) CGFloat stairDescentSpeedSampleFrequency; // ivar: _stairDescentSpeedSampleFrequency
@property (nonatomic) CGFloat stairDescentSpeedSampleFrequencyStdDev; // ivar: _stairDescentSpeedSampleFrequencyStdDev
@property (nonatomic) CGFloat stairDescentSpeedStdDev; // ivar: _stairDescentSpeedStdDev
@property (nonatomic) CGFloat standGoal; // ivar: _standGoal
@property (nonatomic) CGFloat stepLengthMean; // ivar: _stepLengthMean
@property (nonatomic) CGFloat stepLengthSampleFrequency; // ivar: _stepLengthSampleFrequency
@property (nonatomic) CGFloat stepLengthSampleFrequencyStdDev; // ivar: _stepLengthSampleFrequencyStdDev
@property (nonatomic) CGFloat stepLengthStdDev; // ivar: _stepLengthStdDev
@property (nonatomic) CGFloat stepsSampleFrequency; // ivar: _stepsSampleFrequency
@property (nonatomic) CGFloat stepsSampleFrequencyDuringExercise; // ivar: _stepsSampleFrequencyDuringExercise
@property (nonatomic) CGFloat sunsetTime; // ivar: _sunsetTime
@property (nonatomic) CGFloat swimmingStrokesPerYard; // ivar: _swimmingStrokesPerYard
@property (nonatomic) CGFloat timeIncrement; // ivar: _timeIncrement
@property (nonatomic) CGFloat timeIncrementDuringExercise; // ivar: _timeIncrementDuringExercise
@property (nonatomic) CGFloat toothbrushingDurationMean; // ivar: _toothbrushingDurationMean
@property (nonatomic) CGFloat toothbrushingDurationMeanStdDev; // ivar: _toothbrushingDurationMeanStdDev
@property (nonatomic) BOOL useContinuousGlucoseMonitoring; // ivar: _useContinuousGlucoseMonitoring
@property (nonatomic) CGFloat uvIndexSampleFrequency; // ivar: _uvIndexSampleFrequency
@property (nonatomic) CGFloat vo2MaxSampleTimeNoiseStdDev; // ivar: _vo2MaxSampleTimeNoiseStdDev
@property (nonatomic) CGFloat vo2MaxValueMaxConsecutiveDifference; // ivar: _vo2MaxValueMaxConsecutiveDifference
@property (nonatomic) CGFloat vo2MaxValueMaxTotalDifference; // ivar: _vo2MaxValueMaxTotalDifference
@property (nonatomic) CGFloat vo2MaxValueStdDev; // ivar: _vo2MaxValueStdDev
@property (nonatomic) CGFloat waistCircumferenceInInches; // ivar: _waistCircumferenceInInches
@property (nonatomic) CGFloat wakeUpTimeNoiseStdDev; // ivar: _wakeUpTimeNoiseStdDev
@property (nonatomic) NSInteger walkingHeartRateAverage; // ivar: _walkingHeartRateAverage
@property (nonatomic) NSInteger walkingHeartRateAverageMaxDailyDifference; // ivar: _walkingHeartRateAverageMaxDailyDifference
@property (nonatomic) NSInteger walkingHeartRateAverageMaxTotalDifference; // ivar: _walkingHeartRateAverageMaxTotalDifference
@property (nonatomic) CGFloat walkingSpeedMean; // ivar: _walkingSpeedMean
@property (nonatomic) CGFloat walkingSpeedSampleFrequency; // ivar: _walkingSpeedSampleFrequency
@property (nonatomic) CGFloat walkingSpeedSampleFrequencyStdDev; // ivar: _walkingSpeedSampleFrequencyStdDev
@property (nonatomic) CGFloat walkingSpeedStdDev; // ivar: _walkingSpeedStdDev
@property (nonatomic) CGFloat walkingSteadinessMean; // ivar: _walkingSteadinessMean
@property (nonatomic) CGFloat walkingSteadinessSampleFrequency; // ivar: _walkingSteadinessSampleFrequency
@property (nonatomic) CGFloat walkingSteadinessSampleFrequencyStdDev; // ivar: _walkingSteadinessSampleFrequencyStdDev
@property (nonatomic) CGFloat walkingSteadinessStdDev; // ivar: _walkingSteadinessStdDev
@property (nonatomic) CGFloat waterConsumedDailyMean; // ivar: _waterConsumedDailyMean
@property (nonatomic) CGFloat waterConsumedIntervalMean; // ivar: _waterConsumedIntervalMean
@property (nonatomic) CGFloat waterConsumedIntervalStdDev; // ivar: _waterConsumedIntervalStdDev
@property (nonatomic) CGFloat waterConsumedSampleFrequency; // ivar: _waterConsumedSampleFrequency
@property (nonatomic) CGFloat waterConsumedSampleTime; // ivar: _waterConsumedSampleTime
@property (nonatomic) CGFloat waterConsumedStdDev; // ivar: _waterConsumedStdDev
@property (retain, nonatomic) HDDemoDataSleepParameters *weekdaySleepParameters; // ivar: _weekdaySleepParameters
@property (retain, nonatomic) HDDemoDataSleepParameters *weekendSleepParameters; // ivar: _weekendSleepParameters
@property (nonatomic) CGFloat weightChangePercentageMax; // ivar: _weightChangePercentageMax
@property (nonatomic) CGFloat weightDailyChangeStdDev; // ivar: _weightDailyChangeStdDev
@property (nonatomic) CGFloat weightDailyMaxLoss; // ivar: _weightDailyMaxLoss
@property (retain, nonatomic) NSArray *weightGainHolidayDaysInYear; // ivar: _weightGainHolidayDaysInYear
@property (nonatomic) CGFloat weightLossStartDay; // ivar: _weightLossStartDay
@property (nonatomic) CGFloat weightSampleNoiseStdDev; // ivar: _weightSampleNoiseStdDev
@property (nonatomic) CGFloat weightSampleTime; // ivar: _weightSampleTime
@property (nonatomic) CGFloat weightSampleTimeFrequency; // ivar: _weightSampleTimeFrequency
@property (nonatomic) CGFloat weightTargetInKg; // ivar: _weightTargetInKg
@property (copy, nonatomic) NSDictionary *workoutPrototypesByCalendarDay; // ivar: _workoutPrototypesByCalendarDay
@property (nonatomic) CGFloat wristCircumferenceInInches; // ivar: _wristCircumferenceInInches


+(id)defaultPersonWithBiologicalSex:(NSInteger)arg0 ;
-(id)fullName;
-(id)initWithFirstName:(id)arg0 lastName:(id)arg1 description:(id)arg2 birthDateComponents:(id)arg3 biologicalSex:(NSInteger)arg4 ;
-(void)applyProfileType:(NSInteger)arg0 ;
-(void)setHighFidelityGeneration:(BOOL)arg0 ;
-(void)updateMedicalIDData;


@end


#endif