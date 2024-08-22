// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKSLEEPPERIOD_H
#define _HKSLEEPPERIOD_H

@class NSDateInterval, NSDate, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface _HKSleepPeriod : NSObject

@property (readonly, nonatomic) CGFloat asleepDuration; // ivar: _asleepDuration
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) CGFloat inBedDuration; // ivar: _inBedDuration
@property (readonly, copy, nonatomic) NSArray *segments; // ivar: _segments
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, copy, nonatomic) NSString *timeZoneName; // ivar: _timeZoneName
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 segments:(id)arg2 ;
-(id)segmentDateIntervalsForCategoryValue:(NSInteger)arg0 intersectedWithDateInterval:(id)arg1 ;
-(id)segmentsForCategory:(NSInteger)arg0 ;
-(void)enumerateDateIntervalsForCategoryValue:(NSInteger)arg0 intersectedWithDateInterval:(id)arg1 block:(id)arg2 ;


@end


#endif