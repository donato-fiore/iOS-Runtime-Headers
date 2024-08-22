// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMCWRISTTEMPERATUREDAILYANALYTICSEVENT_H
#define HDMCWRISTTEMPERATUREDAILYANALYTICSEVENT_H

@class HDProfile, HKMCSettingsManager, HKSPSleepStore, HKWristDetectionSettingManager, NSUserDefaults, NSString;
@protocol HKAnalyticsEvent;

#import <Foundation/Foundation.h>

#import "HDMCAnalysisManager.h"

@interface HDMCWristTemperatureDailyAnalyticsEvent : NSObject <HKAnalyticsEvent>

 {
    HDProfile *_profile;
    HDMCAnalysisManager *_analysisManager;
    HKMCSettingsManager *_settingsManager;
    HKSPSleepStore *_sleepStore;
    HKWristDetectionSettingManager *_wristDetectionSettingManager;
    NSUserDefaults *_privacyDefaults;
}


@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;


-(BOOL)_isDeviceWristTemperatureCompatible:(id)arg0 ;
-(NSInteger)_bucketedWeeksSinceDate:(id)arg0 dataSource:(id)arg1 ;
-(NSInteger)_countOfUniqueSerialNumbersFromSamples:(id)arg0 ;
-(NSInteger)_countOfUniqueSourcesFromSamples:(id)arg0 ;
-(id)_IHAGatedDemographicsFieldsWithDataSource:(id)arg0 ;
-(id)_IHAGatedLastSleepDayWristTemperatureFieldsWithCurrentDate:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)_IHAGatedSleepingWristTemperatureStatisticsFieldsWithCurrentDate:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)_areBloodOxygenMeasurementsEnabledWithDataSource:(id)arg0 ;
-(id)_areRespiratoryRateMeasurementsEnabledWithDataSource:(id)arg0 ;
-(id)_celsiusValueFromQuantity:(id)arg0 scale:(short)arg1 ;
-(id)_changeInCelsiusStringFromQuantity:(id)arg0 scale:(short)arg1 ;
-(id)_countOfLast30DaysWithSleepSamplesWithCurrentDate:(id)arg0 calendarCache:(id)arg1 ;
-(id)_countOfLast30DaysWithSleepingWristTemperatureSamplesWithCurrentDate:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)_countOfUniqueSourcesOfWristTemperatureSamplesFieldsWithCurrentDate:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)_daysWithStandHoursInLast30DaysWithCurrentDate:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)_discreteRelativeSleepingWristTemperatureStatisticsLast30DaysWithCurrentDate:(id)arg0 gregorianCalendar:(id)arg1 dominantWatchSourceEntityPredicate:(id)arg2 ;
-(id)_discreteSleepingWristTemperatureStatisticsLast30DaysWithCurrentDate:(id)arg0 gregorianCalendar:(id)arg1 dominantWatchSourceEntityPredicate:(id)arg2 ;
-(id)_dominantSleepingWristTemperatureSourceEntityPredicateOverLastNDays:(NSInteger)arg0 currentDate:(id)arg1 gregorianCalendar:(id)arg2 ;
-(id)_dominantSleepingWristTemperatureSourceOverLastNDays:(NSInteger)arg0 currentDate:(id)arg1 gregorianCalendar:(id)arg2 ;
-(id)_dominantWatchLast30DaysFieldsWithCurrentDate:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)_featureStatusForFeatureIdentifier:(id)arg0 dataSource:(id)arg1 error:(*id)arg2 ;
-(id)_firstPartySleepSamplesFromLastNSleepDays:(NSInteger)arg0 currentDate:(id)arg1 gregorianCalendar:(id)arg2 ;
-(id)_hasCycleFactorsActive;
-(id)_hoursAsleepDuringLastSleepDayWithCurrentDate:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)_isAFibHistoryEnabledWithDataSource:(id)arg0 ;
-(id)_isCycleTrackingWristTemperatureInputEnabledWithDataSource:(id)arg0 ;
-(id)_isHeartRateEnabledInPrivacy;
-(id)_isIRNEnabledWithDataSource:(id)arg0 ;
-(id)_isWristDetectionEnabled;
-(id)_isWristTemperatureEnabledWithDataSource:(id)arg0 ;
-(id)_lastSleepDayHasSleepDataFromCompatibleProductTypeWithCurrentDate:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)_lastSleepDayHasSleepDataWithCurrentDate:(id)arg0 calendarCache:(id)arg1 ;
-(id)_lastSleepDayHasWristTemperatureDataWithCurrentDate:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)_lastSleepDayRelativeSleepingWristTemperatureWithCurrentDate:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)_medianSleepingWristTemperatureLast30DaysWithCurrentDate:(id)arg0 gregorianCalendar:(id)arg1 dominantWatchSourceEntityPredicate:(id)arg2 ;
-(id)_noiseFieldsWithCurrentDate:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)_noiseMetricsFromSleepingWristTemperatureSamples:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)_pairedWristTemperatureCompatibleDevice;
-(id)_predicateForAppleWatchSamplesInLast30SleepDaysRelativeToCurrentDate:(id)arg0 gregorianCalendar:(id)arg1 sampleType:(id)arg2 ;
-(id)_predicateForAppleWatchSamplesInLastNSleepDays:(NSInteger)arg0 currentDate:(id)arg1 gregorianCalendar:(id)arg2 sampleType:(id)arg3 ;
-(id)_predicateForAppleWatchSamplesInLastNSleepDays:(NSInteger)arg0 currentDate:(id)arg1 gregorianCalendar:(id)arg2 sampleType:(id)arg3 sourceEntityPredicate:(id)arg4 ;
-(id)_preferredSleepingWristTemperatureUnit;
-(id)_roundDouble:(CGFloat)arg0 scale:(short)arg1 ;
-(id)_sampleStandardDeviationOfValues:(id)arg0 ;
-(id)_samplesByMorningIndex:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)_sleepFields;
-(id)_sleepingWristTemperatureDominantWatchSampleCountOverLast30DaysWithCurrentDate:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)_sleepingWristTemperatureSampleCountBySourceOverLastNDays:(NSInteger)arg0 currentDate:(id)arg1 gregorianCalendar:(id)arg2 ;
-(id)_sleepingWristTemperatureSamplesFromLastNSleepDays:(NSInteger)arg0 currentDate:(id)arg1 gregorianCalendar:(id)arg2 sourceEntityPredicate:(id)arg3 ;
-(id)_weeksSinceDeliveryWithDataSource:(id)arg0 ;
-(id)_wristTemperatureCompatibleDeviceFields;
-(id)initWithProfile:(id)arg0 analysisManager:(id)arg1 settingsManager:(id)arg2 sleepStore:(id)arg3 wristDetectionSettingManager:(id)arg4 privacyDefaults:(id)arg5 ;
-(id)initWithProfile:(id)arg0 analysisManager:(id)arg1 sleepStore:(id)arg2 ;
-(id)makeIHAGatedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)makeUnrestrictedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;


@end


#endif