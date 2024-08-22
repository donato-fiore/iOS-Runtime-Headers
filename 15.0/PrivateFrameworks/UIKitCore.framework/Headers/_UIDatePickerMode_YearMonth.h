// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDATEPICKERMODE_YEARMONTH_H
#define _UIDATEPICKERMODE_YEARMONTH_H

@class Date;



@interface _UIDatePickerMode_YearMonth : Date



+(NSInteger)datePickerMode;
+(NSUInteger)extractableCalendarUnits;
-(NSUInteger)nextUnitLargerThanUnit:(NSUInteger)arg0 ;
-(NSUInteger)nextUnitSmallerThanUnit:(NSUInteger)arg0 ;
-(id)localizedFormatString;


@end


#endif