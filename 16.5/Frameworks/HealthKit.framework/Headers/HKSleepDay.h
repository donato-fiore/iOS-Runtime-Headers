// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSLEEPDAY_H
#define HKSLEEPDAY_H

@class NSDateInterval, NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface HKSleepDay : NSObject

@property (readonly, nonatomic) CGFloat asleepDuration; // ivar: _asleepDuration
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) CGFloat inBedDuration; // ivar: _inBedDuration
@property (readonly, copy, nonatomic) NSArray *sleepPeriods; // ivar: _sleepPeriods
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)description;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 sleepPeriods:(id)arg2 ;
-(id)primarySleepPeriod;


@end


#endif