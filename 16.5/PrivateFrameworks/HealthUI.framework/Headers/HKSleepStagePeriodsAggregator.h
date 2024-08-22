// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSLEEPSTAGEPERIODSAGGREGATOR_H
#define HKSLEEPSTAGEPERIODSAGGREGATOR_H

@class NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface HKSleepStagePeriodsAggregator : NSObject

@property (readonly, nonatomic) NSArray *buckets; // ivar: _buckets
@property (readonly, nonatomic) CGFloat maximumDuration; // ivar: _maximumDuration
@property (readonly, nonatomic) NSArray *sleepDaySummaries; // ivar: _sleepDaySummaries
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


+(CGFloat)_maximumDurationFromSleepDaySummaries:(id)arg0 ;
+(id)_averageStartDateFromSleepDaySummaries:(id)arg0 summaryDateInterval:(id)arg1 ;
-(NSInteger)_bucketIndexForDistanceFromStart:(CGFloat)arg0 ;
-(id)_aggregateSleepInterval;
-(id)_aggregateSleepPeriodSegments;
-(id)aggregateSleepPeriods;
-(id)initWithSleepDaySummaries:(id)arg0 bucketSize:(CGFloat)arg1 summaryDateInterval:(id)arg2 ;


@end


#endif