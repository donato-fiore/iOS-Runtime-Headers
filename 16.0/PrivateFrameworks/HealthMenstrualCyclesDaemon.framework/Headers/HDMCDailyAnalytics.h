// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMCDAILYANALYTICS_H
#define HDMCDAILYANALYTICS_H

@class HDProfile, HKMCAnalysis, HDKeyValueDomain, HKFeatureStatusManager, HKSPSleepStore;

#import <Foundation/Foundation.h>


@interface HDMCDailyAnalytics : NSObject {
    HDProfile *_profile;
    HKMCAnalysis *_analysis;
    HDKeyValueDomain *_keyValueDomain;
    HDKeyValueDomain *_fertileWindowNotificationKeyValueDomain;
    HKFeatureStatusManager *_heartRateFeatureStatusManager;
    HKFeatureStatusManager *_deviationDetectionFeatureStatusManager;
    HDKeyValueDomain *_deviationDetectionAnalyticsKeyValueDomain;
    HDKeyValueDomain *_appProtectedKeyValueDomain;
    HKFeatureStatusManager *_wristTemperatureInputFeatureStatusManager;
    HKSPSleepStore *_sleepStore;
}




+(BOOL)shouldSubmit;
+(id)_countDeviationSamplesInPastYearOfType:(NSInteger)arg0 profile:(id)arg1 calendar:(id)arg2 error:(*id)arg3 ;
+(id)_getDeviationDetectedCountForDeviationType:(NSInteger)arg0 gregorianCalendar:(id)arg1 domain:(id)arg2 error:(*id)arg3 ;
+(id)_hasConfirmedDeviationInPastMonthOfType:(NSInteger)arg0 profile:(id)arg1 calendar:(id)arg2 error:(*id)arg3 ;
+(id)_setCycleFactorReminderFieldsInMetric:(id)arg0 appProtectedKeyValueDomain:(id)arg1 error:(*id)arg2 ;
+(id)_setDetectedDeviationFieldsInMetric:(id)arg0 gregorianCalendar:(id)arg1 deviationDetectionAnalyticsKeyValueDomain:(id)arg2 todayDayIndex:(NSInteger)arg3 error:(*id)arg4 ;
+(id)_setDeviationSampleFieldsInMetric:(id)arg0 profile:(id)arg1 userCalendar:(id)arg2 error:(*id)arg3 ;
-(BOOL)_collectDiagnosticFieldsForMetric:(id)arg0 settingsManager:(id)arg1 heartRateInputFeatureStatus:(id)arg2 deviationDetectionFeatureStatus:(id)arg3 wristTemperatureInputFeatureStatus:(id)arg4 gregorianCalendar:(id)arg5 error:(*id)arg6 ;
-(BOOL)_collectSensitiveFieldsForMetric:(id)arg0 settingsManager:(id)arg1 heartRateInputFeatureStatus:(id)arg2 wristTemperatureInputFeatureStatus:(id)arg3 gregorianCalendar:(id)arg4 error:(*id)arg5 ;
-(BOOL)submitMetricWithError:(*id)arg0 ;
-(NSInteger)_daysWithSleepSamples:(id)arg0 calendar:(id)arg1 ;
-(id)_daysWithWristTemperatureSamplesInDayIndexRange:(struct ? )arg0 calendarCache:(id)arg1 error:(*id)arg2 ;
-(id)_eligibleCyclesStartPastDayIndex:(NSInteger)arg0 ;
-(id)_predicateForFirstPartySleepDataFromPast48HoursWithCalendar:(id)arg0 ;
-(id)_predicateForSleepDataFromPast45DaysWithCalendar:(id)arg0 ;
-(id)_predicateForSleepDataFromPast48HoursWithCalendar:(id)arg0 ;
-(id)_weeksBetweenStartDate:(id)arg0 endDate:(id)arg1 calendar:(id)arg2 ;
-(id)_yearsBetweenStartDateComponents:(id)arg0 endDate:(id)arg1 calendar:(id)arg2 ;
-(id)initWithProfile:(id)arg0 analysis:(id)arg1 heartRateFeatureAvailabilityManager:(id)arg2 deviationDetectionFeatureAvailabilityManager:(id)arg3 wristTemperatureInputFeatureAvailabilityManager:(id)arg4 ;


@end


#endif