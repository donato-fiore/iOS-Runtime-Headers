// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDATEPICKERMODE_DATEANDTIME_H
#define _UIDATEPICKERMODE_DATEANDTIME_H

@class UIDatePickerMode, NSString, NSDateFormatter;



@interface _UIDatePickerMode_DateAndTime : UIDatePickerMode {
    BOOL _weekdayLast;
    CGFloat _wmdWeekMonthDayWidth;
    CGFloat _wmdHourWidth;
    CGFloat _wmdMinuteWidth;
    CGFloat _wmdAMPMWidth;
    CGFloat _wmdWeekdayWidth;
    NSString *_weekdayFormat;
    NSString *_monthDayFormat;
    NSString *_hourFormat;
    NSString *_minuteFormat;
    NSDateFormatter *_relativeFormatter;
    NSDateFormatter *_weekdayFormatter;
}




+(NSInteger)datePickerMode;
+(NSUInteger)extractableCalendarUnits;
-(*NSUInteger)elements;
-(BOOL)_shouldEnableValueForRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 calendarUnit:(NSUInteger)arg2 ;
-(BOOL)_shouldEnableWeekMonthDayForRow:(NSInteger)arg0 ;
-(BOOL)isWeekdayLast;
-(CGFloat)componentWidthForDateTimeCalendarUnit:(NSUInteger)arg0 font:(id)arg1 maxWidth:(CGFloat)arg2 ;
-(CGFloat)weekdayWidth;
-(CGFloat)widthForCalendarUnit:(NSUInteger)arg0 font:(id)arg1 maxWidth:(CGFloat)arg2 ;
-(NSInteger)displayedCalendarUnits;
-(NSInteger)numberOfRowsForCalendarUnit:(NSUInteger)arg0 ;
-(NSInteger)rowForDate:(id)arg0 dateComponents:(id)arg1 component:(NSInteger)arg2 currentRow:(NSInteger)arg3 ;
-(NSUInteger)nextUnitLargerThanUnit:(NSUInteger)arg0 ;
-(NSUInteger)nextUnitSmallerThanUnit:(NSUInteger)arg0 ;
-(id)_dateForWeekMonthDayRow:(NSInteger)arg0 ;
-(id)baseDateComponents;
-(id)dateForRow:(NSInteger)arg0 inCalendarUnit:(NSUInteger)arg1 ;
-(id)dateFormatForCalendarUnit:(NSUInteger)arg0 ;
-(id)localizedFormatString;
-(id)relativeFormatter;
-(id)titleForRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 ;
-(id)viewForRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 reusingView:(id)arg2 ;
-(id)weekdayFormatter;
-(void)_resetBaseDateComponentsIfNecessaryFromDate:(id)arg0 ;
-(void)_shouldReset:(id)arg0 ;
-(void)_takeBaseDateComponentsFromDate:(id)arg0 ;
-(void)loadDate:(id)arg0 animated:(BOOL)arg1 ;
-(void)noteCalendarChanged;
-(void)resetComponentWidths;
-(void)updateEnabledStateOfViewForRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 ;


@end


#endif