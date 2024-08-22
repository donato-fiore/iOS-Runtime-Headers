// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDATEPICKERMODE_H
#define _UIDATEPICKERMODE_H

@class NSDateComponents, NSArray, UIFont, NSString, NSNumberFormatter, NSDate;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "_UIDatePickerView.h"

@interface _UIDatePickerMode : NSObject {
    NSDateComponents *_baseDateComponents;
    *NSUInteger _elements;
    _NSRange _maxDayRange;
    _NSRange _maxMonthRange;
    NSArray *_dateFormatters;
    UIColor *_todayTextColor;
    UIFont *_amPmFont;
    UIFont *_font;
    UIFont *_defaultTimeFont;
    NSString *_amString;
    NSString *_pmString;
    NSDateComponents *_todayDateComponents;
    NSNumberFormatter *_formatter;
    BOOL _isUsingJapaneseCalendar;
}


@property (readonly, nonatomic) UIFont *amPmFont;
@property (readonly, nonatomic) NSString *amString;
@property (retain, nonatomic) NSDate *baseDate; // ivar: _baseDate
@property (retain, nonatomic) NSDateComponents *baseDateComponents;
@property (readonly, nonatomic) NSInteger datePickerMode;
@property (weak, nonatomic) _UIDatePickerView *datePickerView; // ivar: _datePickerView
@property (readonly, nonatomic) UIFont *defaultTimeFont;
@property (readonly, nonatomic) NSInteger displayedCalendarUnits;
@property (nonatomic) *NSUInteger elements;
@property (readonly, nonatomic) UIFont *font;
@property (readonly, nonatomic, getter=is24Hour) BOOL is24Hour;
@property (readonly, nonatomic, getter=isTimeIntervalMode) BOOL isTimeIntervalMode;
@property (retain, nonatomic) NSString *localizedFormatString; // ivar: _localizedFormatString
@property (readonly, nonatomic) NSDate *maximumDate; // ivar: _maximumDate
@property (readonly, nonatomic) NSDateComponents *maximumDateComponents; // ivar: _maximumDateComponents
@property (readonly, nonatomic) NSDate *minimumDate; // ivar: _minimumDate
@property (readonly, nonatomic) NSDateComponents *minimumDateComponents; // ivar: _minimumDateComponents
@property (nonatomic) NSInteger minuteInterval; // ivar: _minuteInterval
@property (nonatomic) NSUInteger numberOfComponents; // ivar: _numberOfComponents
@property (retain, nonatomic) NSDate *originatingDate; // ivar: _originatingDate
@property (readonly, nonatomic) NSString *pmString;
@property (readonly, nonatomic) CGFloat rowHeight;
@property (retain, nonatomic) NSDateComponents *selectedDateComponents; // ivar: _selectedDateComponents
@property (readonly, nonatomic) UIFont *sizedFont;
@property (retain, nonatomic) NSDateComponents *todayDateComponents;
@property (nonatomic) CGFloat todaySinceReferenceDate; // ivar: _todaySinceReferenceDate
@property (readonly, nonatomic) UIColor *todayTextColor;
@property (readonly, nonatomic) CGFloat totalComponentWidth;
@property (nonatomic) NSInteger yearsSinceBaseDate; // ivar: _yearsSinceBaseDate


+(NSUInteger)extractableCalendarUnits;
+(id)_datePickerModeWithFormatString:(id)arg0 datePickerView:(id)arg1 ;
+(id)_datePickerModeWithMode:(NSInteger)arg0 datePickerView:(id)arg1 ;
+(id)newDateFromGregorianYear:(NSInteger)arg0 month:(NSInteger)arg1 day:(NSInteger)arg2 timeZone:(id)arg3 ;
+(void)initialize;
-(BOOL)_isComponentScrolling:(NSInteger)arg0 ;
-(BOOL)_monthExists:(NSInteger)arg0 inYear:(NSInteger)arg1 ;
-(BOOL)_scrollingAnyColumnExcept:(int)arg0 ;
-(BOOL)_shouldEnableValueForRow:(NSInteger)arg0 column:(NSInteger)arg1 ;
-(BOOL)_shouldEnableValueForRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 calendarUnit:(NSUInteger)arg2 ;
-(BOOL)areValidDateComponents:(id)arg0 comparingUnits:(NSInteger)arg1 ;
-(CGFloat)componentWidthForTwoDigitCalendarUnit:(NSUInteger)arg0 font:(id)arg1 maxWidth:(CGFloat)arg2 ;
-(CGFloat)totalComponentWidthWithFont:(id)arg0 ;
-(CGFloat)widthForCalendarUnit:(NSUInteger)arg0 font:(id)arg1 maxWidth:(CGFloat)arg2 ;
-(CGFloat)widthForComponent:(NSInteger)arg0 maxWidth:(CGFloat)arg1 ;
-(NSInteger)_incrementForStaggeredTimeIntervals;
-(NSInteger)_numberOfDaysInDateComponents:(id)arg0 ;
-(NSInteger)_yearlessYearForMonth:(NSInteger)arg0 ;
-(NSInteger)componentForCalendarUnit:(NSUInteger)arg0 ;
-(NSInteger)dayForRow:(NSInteger)arg0 ;
-(NSInteger)eraForYearRow:(NSInteger)arg0 ;
-(NSInteger)hourForRow:(NSInteger)arg0 ;
-(NSInteger)minuteForRow:(NSInteger)arg0 ;
-(NSInteger)monthForRow:(NSInteger)arg0 ;
-(NSInteger)numberOfRowsForCalendarUnit:(NSUInteger)arg0 ;
-(NSInteger)numberOfRowsInComponent:(NSInteger)arg0 ;
-(NSInteger)rowForDate:(id)arg0 dateComponents:(id)arg1 component:(NSInteger)arg2 currentRow:(NSInteger)arg3 ;
-(NSInteger)rowForValue:(NSInteger)arg0 forCalendarUnit:(NSUInteger)arg1 currentRow:(NSInteger)arg2 ;
-(NSInteger)secondForRow:(NSInteger)arg0 ;
-(NSInteger)titleAlignmentForCalendarUnit:(NSUInteger)arg0 ;
-(NSInteger)validateValue:(NSInteger)arg0 forCalendarUnit:(NSUInteger)arg1 ;
-(NSInteger)valueForDate:(id)arg0 dateComponents:(id)arg1 calendarUnit:(NSUInteger)arg2 ;
-(NSInteger)valueForRow:(NSInteger)arg0 inCalendarUnit:(NSUInteger)arg1 ;
-(NSInteger)yearForRow:(NSInteger)arg0 ;
-(NSUInteger)calendarUnitForComponent:(NSInteger)arg0 ;
-(NSUInteger)nextUnitLargerThanUnit:(NSUInteger)arg0 ;
-(NSUInteger)nextUnitSmallerThanUnit:(NSUInteger)arg0 ;
-(id)_dateByEnsuringValue:(NSInteger)arg0 forCalendarUnit:(NSUInteger)arg1 ;
-(id)_dateForYearRow:(NSInteger)arg0 ;
-(id)calendar;
-(id)calendarForFormatters;
-(id)dateComponentsByRestrictingSelectedComponents:(id)arg0 withLastManipulatedColumn:(NSInteger)arg1 ;
-(id)dateForRow:(NSInteger)arg0 inCalendarUnit:(NSUInteger)arg1 ;
-(id)dateFormatForCalendarUnit:(NSUInteger)arg0 ;
-(id)dateFormatterForCalendarUnit:(NSUInteger)arg0 ;
-(id)fontForCalendarUnit:(NSUInteger)arg0 ;
-(id)init;
-(id)locale;
-(id)timeZone;
-(id)titleForRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 ;
-(id)viewForRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 reusingView:(id)arg2 ;
-(struct _NSRange )rangeForCalendarUnit:(NSUInteger)arg0 ;
-(void)_shouldReset:(id)arg0 ;
-(void)_updateSelectedDateComponentsWithNewValueInComponent:(NSInteger)arg0 usingSelectionBarValue:(BOOL)arg1 ;
-(void)clearBaseDate;
-(void)dealloc;
-(void)fixUpElementsForRTL;
-(void)loadDate:(id)arg0 animated:(BOOL)arg1 ;
-(void)noteCalendarChanged;
-(void)resetComponentWidths;
-(void)updateDateForNewDateRange;
-(void)updateEnabledStateOfViewForRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 ;
-(void)updateSelectedDateComponentsWithNewValueInComponent:(NSInteger)arg0 ;


@end


#endif