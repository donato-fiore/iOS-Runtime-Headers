// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPDAYSUMMARY_H
#define HKSLEEPDAYSUMMARY_H

@class NSCalendar, NSDateInterval, NSString, NSArray;
@protocol HKRedactedDescription, HKSampleAggregateCacheProviding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_HKSleepDaySummaryDurations.h"
#import "HKSleepSchedule.h"
#import "HKQuantity.h"

@interface HKSleepDaySummary : NSObject <HKRedactedDescription, HKSampleAggregateCacheProviding, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) CGFloat awakeDuration;
@property (readonly, copy, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) BOOL containsPeriodsWithAppleSleepTrackingData;
@property (readonly, nonatomic) CGFloat coreSleepDuration;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat deepSleepDuration;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _HKSleepDaySummaryDurations *durations; // ivar: _durations
@property (readonly, nonatomic) BOOL hasSleepStageData;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *hk_redactedDescription;
@property (readonly, nonatomic) CGFloat inBedDuration;
@property (readonly, nonatomic) BOOL isWeeklyAggregatedSummary;
@property (readonly, nonatomic) NSInteger morningIndex; // ivar: _morningIndex
@property (readonly, copy, nonatomic) NSArray *periods; // ivar: _periods
@property (readonly, copy, nonatomic) HKSleepSchedule *primarySchedule;
@property (readonly, nonatomic) CGFloat remSleepDuration;
@property (readonly, copy, nonatomic) NSArray *schedules; // ivar: _schedules
@property (readonly, nonatomic) CGFloat sleepDuration;
@property (readonly, copy, nonatomic) HKQuantity *sleepDurationGoal; // ivar: _sleepDurationGoal
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat unspecifiedSleepDuration;


+(BOOL)supportsSecureCoding;
+(id)daySummaryWithMorningIndex:(NSInteger)arg0 dateInterval:(id)arg1 calendar:(id)arg2 periods:(id)arg3 schedules:(id)arg4 sleepDurationGoal:(id)arg5 ;
+(id)emptyDaySummaryWithMorningIndex:(NSInteger)arg0 dateInterval:(id)arg1 calendar:(id)arg2 ;
-(BOOL)getData:(*id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)bucketIndexForIntervalComponents:(id)arg0 anchorDate:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMorningIndex:(NSInteger)arg0 dateInterval:(id)arg1 calendar:(id)arg2 periods:(id)arg3 schedules:(id)arg4 sleepDurationGoal:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif