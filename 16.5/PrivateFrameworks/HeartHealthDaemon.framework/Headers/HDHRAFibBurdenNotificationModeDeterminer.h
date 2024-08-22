// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHRAFIBBURDENNOTIFICATIONMODEDETERMINER_H
#define HDHRAFIBBURDENNOTIFICATIONMODEDETERMINER_H

@class HDProfile, HKCalendarCache;

#import <Foundation/Foundation.h>


@interface HDHRAFibBurdenNotificationModeDeterminer : NSObject {
    HDProfile *_profile;
    HKCalendarCache *_calendarCache;
    id *_dateGenerator;
}




-(BOOL)_isPreviousSampleSevenDaysBeforeCurrentSample:(id)arg0 previousSample:(id)arg1 ;
-(BOOL)_isSampleForPreviousCalendarWeek:(id)arg0 ;
-(BOOL)_shouldShowNotificationWithEndWeekdayToFire:(NSInteger)arg0 ;
-(id)_noDataNotificationWithFeatureStatus:(id)arg0 onboardedWithinAnalysisInterval:(BOOL)arg1 ;
-(id)_noNotification;
-(id)_notificationWithCurrentValue:(id)arg0 errorOut:(*id)arg1 ;
-(id)_previousSampleFromCurrentValue:(id)arg0 error:(*id)arg1 ;
-(id)initWithProfile:(id)arg0 calendarCache:(id)arg1 ;
-(id)initWithProfile:(id)arg0 calendarCache:(id)arg1 dateGenerator:(id)arg2 ;
-(id)notificationModeForCurrentValue:(id)arg0 featureStatus:(id)arg1 onboardedWithinAnalysisInterval:(BOOL)arg2 endWeekdayToFire:(NSInteger)arg3 error:(*id)arg4 ;
-(id)notificationModeForCurrentValue:(id)arg0 featureStatus:(id)arg1 onboardedWithinAnalysisInterval:(BOOL)arg2 error:(*id)arg3 ;
-(struct ? )_dayIndexRangeFromSample:(id)arg0 ;
-(void)_extractFromSample:(id)arg0 percentageValue:(*id)arg1 isClamped:(*id)arg2 ;


@end


#endif