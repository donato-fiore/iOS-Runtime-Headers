// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDMCDAILYMETRIC_H
#define HDMCDAILYMETRIC_H

@class NSNumber, NSDictionary;

#import <Foundation/Foundation.h>


@interface HDMCDailyMetric : NSObject

@property (retain, nonatomic) NSNumber *age; // ivar: _age
@property (retain, nonatomic) NSNumber *biologicalSex; // ivar: _biologicalSex
@property (retain, nonatomic) NSNumber *cycleLengthVariationLowerPercentile; // ivar: _cycleLengthVariationLowerPercentile
@property (retain, nonatomic) NSNumber *cycleLengthVariationUpperPercentile; // ivar: _cycleLengthVariationUpperPercentile
@property (copy, nonatomic) NSDictionary *eventPayload; // ivar: _eventPayload
@property (retain, nonatomic) NSNumber *fertilityNotificationEnabled; // ivar: _fertilityNotificationEnabled
@property (retain, nonatomic) NSNumber *fertilityPredictionEnabled; // ivar: _fertilityPredictionEnabled
@property (retain, nonatomic) NSNumber *hasCompatiblePairedAppleWatch; // ivar: _hasCompatiblePairedAppleWatch
@property (retain, nonatomic) NSNumber *hasFirstPartySleepSamplesPast48Hours; // ivar: _hasFirstPartySleepSamplesPast48Hours
@property (retain, nonatomic) NSNumber *hasSameAlgorithmVersionOnPairedWatch; // ivar: _hasSameAlgorithmVersionOnPairedWatch
@property (retain, nonatomic) NSNumber *hasSleepSamplesPast48Hours; // ivar: _hasSleepSamplesPast48Hours
@property (nonatomic, getter=isImproveHealthAndActivityAllowed) BOOL improveHealthAndActivityAllowed; // ivar: _improveHealthAndActivityAllowed
@property (retain, nonatomic) NSNumber *logBasalBodyTemperatureEnabled; // ivar: _logBasalBodyTemperatureEnabled
@property (retain, nonatomic) NSNumber *logCervicalMucusQualityEnabled; // ivar: _logCervicalMucusQualityEnabled
@property (retain, nonatomic) NSNumber *logFactorsEnabled; // ivar: _logFactorsEnabled
@property (retain, nonatomic) NSNumber *logOvulationTestResultEnabled; // ivar: _logOvulationTestResultEnabled
@property (retain, nonatomic) NSNumber *logPregnancyTestResultEnabled; // ivar: _logPregnancyTestResultEnabled
@property (retain, nonatomic) NSNumber *logProgesteroneTestResultEnabled; // ivar: _logProgesteroneTestResultEnabled
@property (retain, nonatomic) NSNumber *logSexualActivityEnabled; // ivar: _logSexualActivityEnabled
@property (retain, nonatomic) NSNumber *logSpottingEnabled; // ivar: _logSpottingEnabled
@property (retain, nonatomic) NSNumber *logSymptomsEnabled; // ivar: _logSymptomsEnabled
@property (retain, nonatomic) NSNumber *numberOfCyclesSinceLastDayOfLogging; // ivar: _numberOfCyclesSinceLastDayOfLogging
@property (retain, nonatomic) NSNumber *numberOfCyclesSinceLastDayOfLoggingInCycleTracking; // ivar: _numberOfCyclesSinceLastDayOfLoggingInCycleTracking
@property (retain, nonatomic) NSNumber *numberOfDailyAwakeHeartRateStatisticsForPast100Days; // ivar: _numberOfDailyAwakeHeartRateStatisticsForPast100Days
@property (retain, nonatomic) NSNumber *numberOfDailySleepHeartRateStatisticsForPast100Days; // ivar: _numberOfDailySleepHeartRateStatisticsForPast100Days
@property (retain, nonatomic) NSNumber *numberOfDaysSinceLastFiredUpdateFertileWindowNotification; // ivar: _numberOfDaysSinceLastFiredUpdateFertileWindowNotification
@property (retain, nonatomic) NSNumber *onboardedVersion; // ivar: _onboardedVersion
@property (retain, nonatomic, getter=isOnboardingCompleted) NSNumber *onboardingCompleted; // ivar: _onboardingCompleted
@property (retain, nonatomic, getter=isOngoingContraception) NSNumber *ongoingContraception; // ivar: _ongoingContraception
@property (retain, nonatomic, getter=isOngoingLactation) NSNumber *ongoingLactation; // ivar: _ongoingLactation
@property (retain, nonatomic, getter=isOngoingPregnancy) NSNumber *ongoingPregnancy; // ivar: _ongoingPregnancy
@property (retain, nonatomic) NSNumber *periodNotificationEnabled; // ivar: _periodNotificationEnabled
@property (retain, nonatomic) NSNumber *periodPredictionEnabled; // ivar: _periodPredictionEnabled
@property (retain, nonatomic) NSNumber *sensorBasedPredictionEnabled; // ivar: _sensorBasedPredictionEnabled
@property (retain, nonatomic) NSNumber *wasHeartRateInputDelivered; // ivar: _wasHeartRateInputDelivered
@property (retain, nonatomic) NSNumber *weeksSinceOnboarded; // ivar: _weeksSinceOnboarded


+(id)eventName;
-(id)initWithImproveHealthAndActivityAllowed:(BOOL)arg0 ;


@end


#endif