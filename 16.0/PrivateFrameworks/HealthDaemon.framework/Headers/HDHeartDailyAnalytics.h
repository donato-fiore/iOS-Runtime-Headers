// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEARTDAILYANALYTICS_H
#define HDHEARTDAILYANALYTICS_H

@class NSMutableDictionary, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HDHeartDailyAnalytics : NSObject <NSCopying>

 {
    NSMutableDictionary *_payload;
}


@property (readonly, copy, nonatomic) NSDictionary *payload;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)updateActiveWatchProductType:(id)arg0 ;
-(void)updateActiveWatchSystemBuildVersion:(id)arg0 ;
-(void)updateAgeInYears:(id)arg0 ;
-(void)updateAlgorithmVersionIRN:(id)arg0 ;
-(void)updateAreHealthNotificationsAuthorized:(BOOL)arg0 ;
-(void)updateAtrialFibrillationDetectionV2CountryCode:(id)arg0 ;
-(void)updateCountAnalyzedTachogramsPast24Hours:(NSInteger)arg0 ;
-(void)updateCountMobileAssetsDownloadedPast24Hours:(NSInteger)arg0 ;
-(void)updateCountRecordedTachogramsPast24Hours:(NSInteger)arg0 ;
-(void)updateDaysSinceLastCountryMonitorCheck:(id)arg0 ;
-(void)updateDaysSinceLastCountryMonitorFetch:(id)arg0 ;
-(void)updateECGActiveAlgorithmVersion:(id)arg0 ;
-(void)updateECGOnboardingCountryCode:(id)arg0 ;
-(void)updateECGUpdateVersionPhone:(id)arg0 ;
-(void)updateECGUpdateVersionWatch:(id)arg0 ;
-(void)updateElectrocardiogramClassificationCount:(NSInteger)arg0 ;
-(void)updateGlucoseEnhancedChartingCountryCode:(id)arg0 ;
-(void)updateHighHeartRateNotificationThreshold:(id)arg0 ;
-(void)updateIRNOnboardingCountryCode:(id)arg0 ;
-(void)updateIrregularRhythmNotificationClassificationCount:(NSInteger)arg0 ;
-(void)updateIsAtrialFibrillationEnabled:(id)arg0 ;
-(void)updateIsAtrialFibrillationEnabledV2:(id)arg0 ;
-(void)updateIsBradycardiaDetectionEnabled:(BOOL)arg0 ;
-(void)updateIsEcgOnboarded:(BOOL)arg0 ;
-(void)updateIsGlucoseEnhancedChartingDelivered:(BOOL)arg0 ;
-(void)updateIsImproveHealthAndActivityAllowed:(BOOL)arg0 ;
-(void)updateIsIrnOnboarded:(BOOL)arg0 ;
-(void)updateIsMenstrualCyclesHeartRateInputDelivered:(BOOL)arg0 ;
-(void)updateIsRespiratoryRateDelivered:(BOOL)arg0 ;
-(void)updateIsRespiratoryRateEnabledInPrivacy:(id)arg0 ;
-(void)updateIsTachycardiaDetectionEnabled:(BOOL)arg0 ;
-(void)updateLastCountryMonitorFetchBuildNumber:(id)arg0 ;
-(void)updateLowHeartRateNotificationThreshold:(id)arg0 ;
-(void)updateMenstrualCyclesHeartRateInputCountryCode:(id)arg0 ;
-(void)updateNumberOfStandAndIdleHoursInPreviousCalendarDay:(id)arg0 ;
-(void)updateOTAFactorPackID:(id)arg0 ;
-(void)updateRespiratoryRateCountryCode:(id)arg0 ;
-(void)updateSex:(NSInteger)arg0 ;
-(void)updateWasWatchWornPast24Hours:(BOOL)arg0 ;
-(void)updateWeeksSinceElectrocardiogramOnboarded:(id)arg0 ;
-(void)updateWithElectrocardiogramClassifications:(id)arg0 isWithin24HoursPostIRN:(BOOL)arg1 ;


@end


#endif