// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKSAMPLEQUERYRESULT_H
#define _HKSAMPLEQUERYRESULT_H

@class NSDateInterval, NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface _HKSampleQueryResult : NSObject

@property (readonly, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, copy, nonatomic) NSArray *samples; // ivar: _samples
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 samples:(id)arg2 ;


@end


#endif