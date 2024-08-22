// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSLEEPDAYSUMMARY_H
#define HKSLEEPDAYSUMMARY_H

@class NSCalendar, NSDateInterval, NSString, NSArray;
@protocol HKRedactedDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKSleepSchedule.h"
#import "HKQuantity.h"

@interface HKSleepDaySummary : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>

 {
    CGFloat _inBedDuration;
    CGFloat _sleepDuration;
    BOOL _didComputeDurationTotals;
}


@property (readonly, copy, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) BOOL containsPeriodsWithAppleSleepTrackingData;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy) NSString *hk_redactedDescription;
@property (readonly, nonatomic) CGFloat inBedDuration;
@property (readonly, nonatomic) NSInteger morningIndex; // ivar: _morningIndex
@property (readonly, copy, nonatomic) NSArray *periods; // ivar: _periods
@property (readonly, copy, nonatomic) HKSleepSchedule *primarySchedule;
@property (readonly, copy, nonatomic) NSArray *schedules; // ivar: _schedules
@property (readonly, nonatomic) CGFloat sleepDuration;
@property (readonly, copy, nonatomic) HKQuantity *sleepDurationGoal; // ivar: _sleepDurationGoal


+(BOOL)supportsSecureCoding;
+(id)daySummaryWithMorningIndex:(NSInteger)arg0 dateInterval:(id)arg1 calendar:(id)arg2 periods:(id)arg3 schedules:(id)arg4 sleepDurationGoal:(id)arg5 ;
+(id)emptyDaySummaryWithMorningIndex:(NSInteger)arg0 dateInterval:(id)arg1 calendar:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)_computeDurationTotalsIfNeeded;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif