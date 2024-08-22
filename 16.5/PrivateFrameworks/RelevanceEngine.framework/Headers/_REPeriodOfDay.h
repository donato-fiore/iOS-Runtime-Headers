// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _REPERIODOFDAY_H
#define _REPERIODOFDAY_H

@class NSDate, NSDateInterval;
@protocol _REPeriodOfDayProperties;

#import <Foundation/Foundation.h>


@interface _REPeriodOfDay : NSObject <_REPeriodOfDayProperties>



@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDateInterval *interval; // ivar: _interval
@property (readonly, nonatomic) NSUInteger periodOfDay; // ivar: _periodOfDay
@property (readonly, nonatomic) NSDate *startDate;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithInterval:(id)arg0 periodOfDay:(NSUInteger)arg1 ;


@end


#endif