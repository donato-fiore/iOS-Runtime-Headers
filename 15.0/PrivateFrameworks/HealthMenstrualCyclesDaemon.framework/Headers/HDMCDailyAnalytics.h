// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDMCDAILYANALYTICS_H
#define HDMCDAILYANALYTICS_H

@class HDProfile, HKMCAnalysis, HDKeyValueDomain, HKFeatureStatusManager;

#import <Foundation/Foundation.h>


@interface HDMCDailyAnalytics : NSObject {
    HDProfile *_profile;
    HKMCAnalysis *_analysis;
    HDKeyValueDomain *_keyValueDomain;
    HDKeyValueDomain *_fertileWindowNotificationKeyValueDomain;
    HKFeatureStatusManager *_heartRateFeatureStatusManager;
}




+(BOOL)shouldSubmit;
-(BOOL)_collectDiagnosticFieldsForMetric:(id)arg0 gregorianCalendar:(id)arg1 error:(*id)arg2 ;
-(BOOL)_collectSensitiveFieldsForMetric:(id)arg0 gregorianCalendar:(id)arg1 error:(*id)arg2 ;
-(BOOL)submitMetricWithError:(*id)arg0 ;
-(id)_predicateForFirstPartySleepDataFromPast48HoursWithCalendar:(id)arg0 ;
-(id)_predicateForSleepDataFromPast48HoursWithCalendar:(id)arg0 ;
-(id)_weeksBetweenStartDate:(id)arg0 endDate:(id)arg1 calendar:(id)arg2 ;
-(id)_yearsBetweenStartDateComponents:(id)arg0 endDate:(id)arg1 calendar:(id)arg2 ;
-(id)initWithProfile:(id)arg0 analysis:(id)arg1 heartRateFeatureAvailabilityManager:(id)arg2 ;


@end


#endif