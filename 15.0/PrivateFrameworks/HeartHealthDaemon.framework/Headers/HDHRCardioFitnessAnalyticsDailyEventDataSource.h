// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHRCARDIOFITNESSANALYTICSDAILYEVENTDATASOURCE_H
#define HDHRCARDIOFITNESSANALYTICSDAILYEVENTDATASOURCE_H

@class HDProfile;
@protocol HKHRCardioFitnessAnalyticsDailyEventDataSourceInterface;

#import <Foundation/Foundation.h>


@interface HDHRCardioFitnessAnalyticsDailyEventDataSource : NSObject <HKHRCardioFitnessAnalyticsDailyEventDataSourceInterface>

 {
    HDProfile *_profile;
}




+(id)localGregorianCalendar;
-(BOOL)determineIsNotificationsEnabled;
-(NSInteger)_determineDaysSinceLastSampleWithSampleType:(id)arg0 currentDate:(id)arg1 error:(*id)arg2 ;
-(NSInteger)determineWeeksSinceOnboardingWithCurrentDate:(id)arg0 error:(*id)arg1 ;
-(NSInteger)numberOfDaysBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)determineDaysSinceLastLowNotificationWithCurrentDate:(id)arg0 isImproveHealthAndActivityAllowed:(BOOL)arg1 error:(*id)arg2 ;
-(id)determineDaysSinceLastVO2MaxSampleWithCurrentDate:(id)arg0 isImproveHealthAndActivityAllowed:(BOOL)arg1 error:(*id)arg2 ;
-(id)determineIsBlockersEnabledWithIsImproveHealthAndActivityAllowed:(BOOL)arg0 error:(*id)arg1 ;
-(id)determineIsHeartRateEnabledWithIsImproveHealthAndActivityAllowed:(BOOL)arg0 ;
-(id)determineIsWristDetectionEnabledWithIsImproveHealthAndActivityAllowed:(BOOL)arg0 ;
-(id)determineNumberOfLowNotificationsInPastYearWithCurrentDate:(id)arg0 isImproveHealthAndActivityAllowed:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithProfile:(id)arg0 ;
-(id)latestClassificationWithIsOnboarded:(BOOL)arg0 isImproveHealthAndActivityAllowed:(BOOL)arg1 error:(*id)arg2 ;


@end


#endif