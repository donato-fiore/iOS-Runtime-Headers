// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDATEPICKERMODE_DATEWITHOPTIONALYEAR_H
#define _UIDATEPICKERMODE_DATEWITHOPTIONALYEAR_H

@class Date;



@interface _UIDatePickerMode_DateWithOptionalYear : Date



+(NSInteger)datePickerMode;
-(BOOL)_shouldEnableValueForRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 calendarUnit:(NSUInteger)arg2 ;
-(NSInteger)numberOfRowsForCalendarUnit:(NSUInteger)arg0 ;
-(NSInteger)rowForDate:(id)arg0 dateComponents:(id)arg1 component:(NSInteger)arg2 currentRow:(NSInteger)arg3 ;
-(NSInteger)yearForRow:(NSInteger)arg0 ;
-(id)dateComponentsByRestrictingSelectedComponents:(id)arg0 withLastManipulatedColumn:(NSInteger)arg1 ;
-(id)selectedDateComponents;
-(id)titleForRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 ;


@end


#endif