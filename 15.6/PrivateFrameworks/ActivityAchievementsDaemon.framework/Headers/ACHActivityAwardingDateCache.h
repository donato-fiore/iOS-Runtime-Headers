// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACHACTIVITYAWARDINGDATECACHE_H
#define ACHACTIVITYAWARDINGDATECACHE_H

@class NSCalendar, NSDate, NSDateComponents, NSNumber;

#import <Foundation/Foundation.h>


@interface ACHActivityAwardingDateCache : NSObject

@property (retain, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (retain, nonatomic) NSDate *currentDate; // ivar: _currentDate
@property (retain, nonatomic) NSDateComponents *currentDateComponents; // ivar: _currentDateComponents
@property (readonly, nonatomic) NSNumber *dayOfMonthForToday; // ivar: _dayOfMonthForToday
@property (readonly, nonatomic) NSNumber *dayOfWeekForLastDayOfFitnessWeek; // ivar: _dayOfWeekForLastDayOfFitnessWeek
@property (readonly, nonatomic) NSNumber *dayOfWeekForToday; // ivar: _dayOfWeekForToday
@property (readonly, nonatomic) NSNumber *numberOfDaysInThisMonth; // ivar: _numberOfDaysInThisMonth


-(id)initWithCalendar:(id)arg0 ;
-(void)_clearDateVariables;


@end


#endif