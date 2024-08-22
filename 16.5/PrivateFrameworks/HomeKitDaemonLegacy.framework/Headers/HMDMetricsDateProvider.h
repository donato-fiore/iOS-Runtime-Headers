// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMETRICSDATEPROVIDER_H
#define HMDMETRICSDATEPROVIDER_H

@class NSDateFormatter, NSCalendar;

#import <Foundation/Foundation.h>


@interface HMDMetricsDateProvider : NSObject

@property (readonly, nonatomic) id *dateFactory; // ivar: _dateFactory
@property (readonly, nonatomic) NSDateFormatter *formatter; // ivar: _formatter
@property (readonly, nonatomic) NSCalendar *gmtCalendar; // ivar: _gmtCalendar
@property (readonly, nonatomic) NSCalendar *localCalendar; // ivar: _localCalendar


-(NSInteger)currentDayNumberOfWeek;
-(NSInteger)dayNumberOfWeekForDate:(id)arg0 ;
-(NSInteger)daysFromDate:(id)arg0 toDate:(id)arg1 ;
-(NSInteger)localHourOfDay;
-(id)init;
-(id)initWithDateFactory:(id)arg0 ;
-(id)initWithLocalTimeZone:(id)arg0 dateFactory:(id)arg1 ;
-(id)startOfCurrentDay;
-(id)startOfCurrentMonth;
-(id)startOfCurrentWeek;
-(id)startOfCurrentYear;
-(id)startOfDateByAddingDayCount:(NSInteger)arg0 toDate:(id)arg1 ;
-(id)startOfDayByAddingDayCount:(NSInteger)arg0 ;


@end


#endif