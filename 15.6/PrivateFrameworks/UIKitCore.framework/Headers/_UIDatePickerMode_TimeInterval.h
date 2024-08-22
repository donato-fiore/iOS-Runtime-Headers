// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDATEPICKERMODE_TIMEINTERVAL_H
#define _UIDATEPICKERMODE_TIMEINTERVAL_H

@class UIDatePickerMode;



@interface _UIDatePickerMode_TimeInterval : UIDatePickerMode {
    CGFloat _componentWidth;
}




+(NSInteger)datePickerMode;
+(NSUInteger)extractableCalendarUnits;
-(BOOL)_shouldEnableValueForRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 calendarUnit:(NSUInteger)arg2 ;
-(BOOL)areValidDateComponents:(id)arg0 comparingUnits:(NSInteger)arg1 ;
-(BOOL)isTimeIntervalMode;
-(CGFloat)rowHeight;
-(CGFloat)widthForCalendarUnit:(NSUInteger)arg0 font:(id)arg1 maxWidth:(CGFloat)arg2 ;
-(NSInteger)hourForRow:(NSInteger)arg0 ;
-(NSInteger)numberOfRowsForCalendarUnit:(NSUInteger)arg0 ;
-(NSInteger)titleAlignmentForCalendarUnit:(NSUInteger)arg0 ;
-(NSInteger)valueForDate:(id)arg0 dateComponents:(id)arg1 calendarUnit:(NSUInteger)arg2 ;
-(NSUInteger)nextUnitLargerThanUnit:(NSUInteger)arg0 ;
-(NSUInteger)nextUnitSmallerThanUnit:(NSUInteger)arg0 ;
-(id)dateComponentsByRestrictingSelectedComponents:(id)arg0 withLastManipulatedColumn:(NSInteger)arg1 ;
-(id)font;
-(id)localizedFormatString;
-(id)titleForRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 ;
-(struct _NSRange )rangeForCalendarUnit:(NSUInteger)arg0 ;
-(void)resetComponentWidths;
-(void)updateDateForNewDateRange;


@end


#endif