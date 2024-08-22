// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMCNOTIFICATIONSENTANALYTICS_H
#define HKMCNOTIFICATIONSENTANALYTICS_H


#import <Foundation/Foundation.h>


@interface HKMCNotificationSentAnalytics : NSObject



+(BOOL)_isAllowed;
+(BOOL)_isMetricEnabled;
+(BOOL)shouldSubmit;
+(void)submitMetricForCategory:(id)arg0 areHealthNotificationsAuthorized:(BOOL)arg1 internalLiveOnCycleFactorOverrideEnabled:(BOOL)arg2 ;
+(void)submitMetricForCategory:(id)arg0 areHealthNotificationsAuthorized:(BOOL)arg1 numberOfDaysShiftedForFertileWindow:(id)arg2 numberOfDaysOffsetFromFertileWindowEnd:(id)arg3 numberOfDaysWithWristTemp45DaysBeforeOvulationConfirmedNotification:(id)arg4 internalLiveOnCycleFactorOverrideEnabled:(BOOL)arg5 ;


@end


#endif