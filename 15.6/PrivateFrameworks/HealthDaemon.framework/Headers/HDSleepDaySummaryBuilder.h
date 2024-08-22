// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSLEEPDAYSUMMARYBUILDER_H
#define HDSLEEPDAYSUMMARYBUILDER_H

@class NSDateInterval, HKCalendarCache, NSMutableArray;

#import <Foundation/Foundation.h>


@interface HDSleepDaySummaryBuilder : NSObject {
    NSDateInterval *_dateInterval;
    NSUInteger _weekday;
    HKCalendarCache *_calendarCache;
    NSMutableArray *_sleepAnalysisSamples;
    NSMutableArray *_sleepScheduleSamples;
    NSMutableArray *_sleepDurationGoalSamples;
}


@property (readonly, nonatomic) NSInteger morningIndex; // ivar: _morningIndex


-(id)createDaySummary;
-(id)initWithMorningIndex:(NSInteger)arg0 weekday:(NSUInteger)arg1 calendarCache:(id)arg2 ;
-(void)addOrderedSample:(id)arg0 ;


@end


#endif