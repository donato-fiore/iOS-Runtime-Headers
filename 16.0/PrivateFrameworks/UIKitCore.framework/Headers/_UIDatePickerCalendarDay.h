// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDATEPICKERCALENDARDAY_H
#define _UIDATEPICKERCALENDARDAY_H

@class UIDatePickerCalendarDateComponent;


#import "_UIDatePickerCalendarMonth.h"

@interface _UIDatePickerCalendarDay : UIDatePickerCalendarDateComponent

@property (readonly, nonatomic) _UIDatePickerCalendarMonth *assignedMonth; // ivar: _assignedMonth
@property (readonly, nonatomic) BOOL isToday;
@property (readonly, nonatomic) _UIDatePickerCalendarMonth *month; // ivar: _month


+(NSUInteger)representedCalendarUnits;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithAssignedMonth:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDate:(id)arg0 calendar:(id)arg1 ;
-(id)initWithDate:(id)arg0 calendar:(id)arg1 month:(id)arg2 assignedMonth:(id)arg3 ;


@end


#endif