// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKSLEEPPERIODSEGMENT_H
#define _HKSLEEPPERIODSEGMENT_H

@class NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface _HKSleepPeriodSegment : NSObject

@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, copy, nonatomic) NSArray *samples; // ivar: _samples
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 category:(NSInteger)arg2 samples:(id)arg3 duration:(CGFloat)arg4 ;


@end


#endif