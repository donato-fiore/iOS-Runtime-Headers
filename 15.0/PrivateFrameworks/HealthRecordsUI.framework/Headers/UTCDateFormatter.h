// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UTCDATEFORMATTER_H
#define UTCDATEFORMATTER_H

@class HKDateCache, NSDateFormatter;

#import <Foundation/Foundation.h>


@interface UTCDateFormatter : NSObject

@property (readonly, nonatomic) HKDateCache *dateCache; // ivar: _dateCache
@property (readonly, nonatomic) NSDateFormatter *monthDayYearFormatter; // ivar: _monthDayYearFormatter
@property (readonly, nonatomic) NSDateFormatter *shortMonthDayFormatter; // ivar: _shortMonthDayFormatter
@property (readonly, nonatomic) NSDateFormatter *shortMonthYearFormatter; // ivar: _shortMonthYearFormatter
@property (readonly, nonatomic) NSDateFormatter *todayFormatter; // ivar: _todayFormatter


-(id)initWithDateCache:(id)arg0 ;
-(id)relativeStringFromDate:(id)arg0 ;


@end


#endif