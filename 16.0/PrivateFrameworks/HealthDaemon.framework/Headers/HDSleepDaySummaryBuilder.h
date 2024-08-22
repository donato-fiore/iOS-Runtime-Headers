// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSLEEPDAYSUMMARYBUILDER_H
#define HDSLEEPDAYSUMMARYBUILDER_H

@class NSDateInterval, HKCalendarCache, NSMutableArray;
@protocol HDStatisticsCollectionCalculatorSourceOrderProvider;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDSleepDaySummaryBuilder : NSObject {
    HDProfile *_profile;
    id<HDStatisticsCollectionCalculatorSourceOrderProvider> *_sourceOrderProvider;
    NSInteger _morningIndex;
    NSDateInterval *_dateInterval;
    NSUInteger _weekday;
    HKCalendarCache *_calendarCache;
    NSUInteger _options;
    BOOL _containsAsleepOrInBedData;
    NSMutableArray *_sleepAnalysisSamples;
    NSMutableArray *_sleepScheduleSamples;
    NSMutableArray *_sleepDurationGoalSamples;
}


@property (readonly, nonatomic) HKCalendarCache *calendarCache;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSInteger morningIndex;
@property (readonly, nonatomic) NSUInteger options;


+(id)dateIntervalForMorningIndex:(NSInteger)arg0 calendar:(id)arg1 ;
-(id)applicableSleepSchedules;
-(id)createDaySummary;
-(id)initWithProfile:(id)arg0 morningIndex:(NSInteger)arg1 weekday:(NSUInteger)arg2 options:(NSUInteger)arg3 calendarCache:(id)arg4 sourceOrderProvider:(id)arg5 ;
-(id)sleepAnalysisSamples;
-(id)sleepDurationGoalSamples;
-(id)sleepScheduleSamples;
-(void)addOrderedSample:(id)arg0 ;


@end


#endif