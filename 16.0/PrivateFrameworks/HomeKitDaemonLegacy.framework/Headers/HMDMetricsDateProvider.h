// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMETRICSDATEPROVIDER_H
#define HMDMETRICSDATEPROVIDER_H

@class NSCalendar, NSDateFormatter;

#import <Foundation/Foundation.h>


@interface HMDMetricsDateProvider : NSObject

@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) id *dateFactory; // ivar: _dateFactory
@property (readonly, nonatomic) NSDateFormatter *formatter; // ivar: _formatter


-(NSInteger)currentDayNumberOfWeek;
-(NSInteger)dayNumberOfWeekForDate:(id)arg0 ;
-(NSInteger)daysFromDate:(id)arg0 toDate:(id)arg1 ;
-(id)init;
-(id)initWithDateFactory:(id)arg0 ;
-(id)startOfCurrentDay;
-(id)startOfCurrentMonth;
-(id)startOfCurrentWeek;
-(id)startOfCurrentYear;
-(id)startOfDateByAddingDayCount:(NSInteger)arg0 toDate:(id)arg1 ;
-(id)startOfDayByAddingDayCount:(NSInteger)arg0 ;


@end


#endif