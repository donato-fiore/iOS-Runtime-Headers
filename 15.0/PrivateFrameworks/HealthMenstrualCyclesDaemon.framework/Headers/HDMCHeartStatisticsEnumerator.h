// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDMCHEARTSTATISTICSENUMERATOR_H
#define HDMCHEARTSTATISTICSENUMERATOR_H

@class HDProfile, HKCalendarCache, HDAssertion;

#import <Foundation/Foundation.h>


@interface HDMCHeartStatisticsEnumerator : NSObject {
    HDProfile *_profile;
    ? _dayIndexRange;
    HKCalendarCache *_calendarCache;
    HDAssertion *_databaseAccessibilityAssertion;
}




-(BOOL)enumerateWithError:(*id)arg0 handler:(id)arg1 ;
-(id)_asleepSleepAnalysisDateIntervalTreeOnDayIndex:(NSInteger)arg0 calendar:(id)arg1 error:(*id)arg2 ;
-(id)_cachingSessionWithCalendar:(id)arg0 error:(*id)arg1 ;
-(id)_heartStatisticsForDayIndex:(NSInteger)arg0 calendar:(id)arg1 errorOut:(*id)arg2 ;
-(id)initWithProfile:(id)arg0 calendarCache:(id)arg1 dayIndexRange:(struct ? )arg2 databaseAccessibilityAssertion:(id)arg3 ;


@end


#endif