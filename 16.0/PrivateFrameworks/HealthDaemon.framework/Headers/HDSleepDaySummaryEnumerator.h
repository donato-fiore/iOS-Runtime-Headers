// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSLEEPDAYSUMMARYENUMERATOR_H
#define HDSLEEPDAYSUMMARYENUMERATOR_H

@class HKCalendarCache, NSString, NSMutableDictionary, HKQuantitySample;
@protocol HDStatisticsCollectionCalculatorSourceOrderProvider;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDSampleAggregateCachingSession.h"

@interface HDSleepDaySummaryEnumerator : NSObject {
    HDProfile *_profile;
    HDSampleAggregateCachingSession *_cachingSession;
    HKCalendarCache *_calendarCache;
    ? _morningIndexRange;
    BOOL _ascending;
    NSUInteger _options;
    NSString *_debugIdentifier;
    NSMutableDictionary *_schedulesByWeekday;
    HKQuantitySample *_sleepDurationGoalSample;
    NSInteger _cachedFirstDayOfWeek;
    id<HDStatisticsCollectionCalculatorSourceOrderProvider> *_sourceOrderProvider;
}




+(id)sleepAnalysisQueryDescriptorForDateInterval:(id)arg0 options:(NSUInteger)arg1 ;
+(id)sleepTypesQueryDescriptorsForDateInterval:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)enumerateWithError:(*id)arg0 handler:(id)arg1 ;
-(id)initWithProfile:(id)arg0 cachingSession:(id)arg1 calendarCache:(id)arg2 morningIndexRange:(struct ? )arg3 ascending:(BOOL)arg4 options:(NSUInteger)arg5 debugIdentifier:(id)arg6 ;


@end


#endif