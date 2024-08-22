// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDATEPICKERCALENDARMONTHYEARSELECTOR_H
#define _UIDATEPICKERCALENDARMONTHYEARSELECTOR_H

@class NSCalendar, NSLocale;
@protocol _UIDatePickerCalendarMonthYearSelectorDelegate;


#import "UIView.h"
#import "UIDatePicker.h"
#import "_UIDatePickerDateRange.h"
#import "_UIDatePickerCalendarMonth.h"

@interface _UIDatePickerCalendarMonthYearSelector : UIView {
    UIDatePicker *_datePicker;
}


@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) _UIDatePickerDateRange *dateRange; // ivar: _dateRange
@property (weak, nonatomic) NSObject<_UIDatePickerCalendarMonthYearSelectorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) _UIDatePickerCalendarMonth *selectedMonth; // ivar: _selectedMonth


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_didSelectDate:(id)arg0 ;
-(void)_reload;
-(void)_setupViewHierarchy;
-(void)reloadWithCalendar:(id)arg0 locale:(id)arg1 dateRange:(id)arg2 selectedMonth:(id)arg3 ;


@end


#endif