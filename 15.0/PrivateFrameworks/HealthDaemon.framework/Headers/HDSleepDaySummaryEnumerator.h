// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSLEEPDAYSUMMARYENUMERATOR_H
#define HDSLEEPDAYSUMMARYENUMERATOR_H

@class HKCalendarCache, NSString, NSMutableDictionary, HKQuantitySample, NSDateInterval;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDMultiTypeSortedSampleIterator.h"

@interface HDSleepDaySummaryEnumerator : NSObject {
    HDProfile *_profile;
    HKCalendarCache *_calendarCache;
    ? _morningIndexRange;
    BOOL _ascending;
    BOOL _requireSleepAnalysis;
    BOOL _onlySleepAnalysis;
    NSString *_debugIdentifier;
    HDMultiTypeSortedSampleIterator *_iterator;
    NSMutableDictionary *_schedulesByWeekday;
    HKQuantitySample *_sleepDurationGoalSample;
    NSDateInterval *_rangeDateInterval;
    NSInteger _cachedFirstDayOfWeek;
}




+(id)daySummariesInMorningIndexRange:(struct ? )arg0 requireSleepAnalysis:(BOOL)arg1 onlySleepAnalysis:(BOOL)arg2 calendarCache:(id)arg3 profile:(id)arg4 error:(*id)arg5 ;
+(id)daySummaryAtMorningIndex:(NSInteger)arg0 requireSleepAnalysis:(BOOL)arg1 onlySleepAnalysis:(BOOL)arg2 calendarCache:(id)arg3 profile:(id)arg4 error:(*id)arg5 ;
-(BOOL)enumerateWithError:(*id)arg0 handler:(id)arg1 ;
-(id)initWithProfile:(id)arg0 calendarCache:(id)arg1 morningIndexRange:(struct ? )arg2 ascending:(BOOL)arg3 requireSleepAnalysis:(BOOL)arg4 onlySleepAnalysis:(BOOL)arg5 debugIdentifier:(id)arg6 ;


@end


#endif