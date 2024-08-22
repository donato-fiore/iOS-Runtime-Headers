// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDMOBILITYWALKINGSTEADINESSANALYTICSDAILYEVENTDATASOURCE_H
#define HDMOBILITYWALKINGSTEADINESSANALYTICSDAILYEVENTDATASOURCE_H

@class HDProfile, NSUserDefaults, NSString;
@protocol HKMobilityWalkingSteadinessAnalyticsDailyEventDataSourceProvider;

#import <Foundation/Foundation.h>


@interface HDMobilityWalkingSteadinessAnalyticsDailyEventDataSource : NSObject <HKMobilityWalkingSteadinessAnalyticsDailyEventDataSourceProvider>

 {
    HDProfile *_profile;
    NSUserDefaults *_mobilitySettingsDefaults;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_categoryValuePredicateWithValues:(id)arg0 ;
-(id)_countOfCategorySamplesInPastYearWithType:(id)arg0 values:(id)arg1 error:(*id)arg2 ;
-(id)_countOfSamplesInPastYearWithType:(id)arg0 valuePredicate:(id)arg1 error:(*id)arg2 ;
-(id)_countOfSamplesWithType:(id)arg0 predicate:(id)arg1 error:(*id)arg2 ;
-(id)_hasSampleWithType:(id)arg0 error:(*id)arg1 ;
-(id)_numberOfDaysSinceLastCategorySampleWithSampleType:(id)arg0 values:(id)arg1 error:(*id)arg2 ;
-(id)_numberOfDaysSinceLastSampleWithSampleType:(id)arg0 predicate:(id)arg1 error:(*id)arg2 ;
-(id)_samplePredicateForPastYearFromDate:(id)arg0 ;
-(id)activePairedWatchTypeWithError:(*id)arg0 ;
-(id)ageWithError:(*id)arg0 ;
-(id)biologicalSexWithError:(*id)arg0 ;
-(id)currentWalkingSteadinessClassificationWithError:(*id)arg0 ;
-(id)daysSinceLastInitialNotificationWithError:(*id)arg0 ;
-(id)daysSinceLastRepeatNotificationWithError:(*id)arg0 ;
-(id)hasHeightWithError:(*id)arg0 ;
-(id)hasWalkingSteadinessMeasurementsWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)numberOfDaysSinceLastWalkingSteadinessMeasurementWithError:(*id)arg0 ;
-(id)numberOfInitialNotificationsInPastYearWithError:(*id)arg0 ;
-(id)numberOfLowNotificationsInPastYearWithError:(*id)arg0 ;
-(id)numberOfRepeatLowNotificationsInPastYearWithError:(*id)arg0 ;
-(id)numberOfRepeatVeryLowNotificationsInPastYearWithError:(*id)arg0 ;
-(id)numberOfVeryLowNotificationsInPastYearWithError:(*id)arg0 ;
-(id)previousWalkingSteadinessClassificationWithError:(*id)arg0 ;
-(id)walkingSteadinessNotificationsEnabledWithError:(*id)arg0 ;


@end


#endif