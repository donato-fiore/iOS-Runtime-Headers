// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMCNOTIFICATIONSENTANALYTICS_H
#define HKMCNOTIFICATIONSENTANALYTICS_H


#import <Foundation/Foundation.h>


@interface HKMCNotificationSentAnalytics : NSObject



+(BOOL)_isAllowed;
+(BOOL)_isMetricEnabled;
+(BOOL)shouldSubmit;
+(void)submitMetricForCategory:(id)arg0 ;
+(void)submitMetricForCategory:(id)arg0 numberOfDaysShiftedForFertileWindow:(NSInteger)arg1 numberOfDaysBeforePredictionEnd:(NSInteger)arg2 ;


@end


#endif