// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDATEPICKERMODE_TIME_H
#define _UIDATEPICKERMODE_TIME_H

@class UIDatePickerMode, NSString;



@interface _UIDatePickerMode_Time : UIDatePickerMode {
    CGFloat _timeHourWidth;
    CGFloat _timeMinuteWidth;
    CGFloat _timeAMPMWidth;
    NSString *_hourFormat;
    NSString *_minuteFormat;
}




+(NSInteger)datePickerMode;
+(NSUInteger)extractableCalendarUnits;
-(BOOL)_shouldEnableValueForRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 calendarUnit:(NSUInteger)arg2 ;
-(CGFloat)rowHeight;
-(CGFloat)widthForCalendarUnit:(NSUInteger)arg0 font:(id)arg1 maxWidth:(CGFloat)arg2 ;
-(NSInteger)displayedCalendarUnits;
-(NSInteger)numberOfRowsForCalendarUnit:(NSUInteger)arg0 ;
-(NSUInteger)nextUnitLargerThanUnit:(NSUInteger)arg0 ;
-(NSUInteger)nextUnitSmallerThanUnit:(NSUInteger)arg0 ;
-(id)dateFormatForCalendarUnit:(NSUInteger)arg0 ;
-(id)font;
-(id)localizedFormatString;
-(void)_shouldReset:(id)arg0 ;
-(void)noteCalendarChanged;
-(void)resetComponentWidths;


@end


#endif