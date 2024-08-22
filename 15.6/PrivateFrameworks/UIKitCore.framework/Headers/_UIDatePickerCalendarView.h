// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDATEPICKERCALENDARVIEW_H
#define _UIDATEPICKERCALENDARVIEW_H

@class NSLayoutConstraint, NSString;
@protocol _UIDatePickerCalendarHeaderViewDelegate, _UIDatePickerCalendarDateViewDelegate, _UIDatePickerCalendarTimeViewDelegate, _UIDatePickerCalendarMonthYearSelectorDelegate, _UIDatePickerViewComponent;


#import "UIView.h"
#import "UIStackView.h"
#import "_UIDatePickerCalendarHeaderView.h"
#import "_UIDatePickerCalendarDateView.h"
#import "_UIDatePickerCalendarTimeView.h"
#import "_UIDatePickerDateRange.h"
#import "_UIDatePickerCalendarMonthYearSelector.h"
#import "_UIDatePickerDataModel.h"
#import "UIDatePicker.h"
#import "UIColor.h"

@interface _UIDatePickerCalendarView : UIView <_UIDatePickerCalendarHeaderViewDelegate, _UIDatePickerCalendarDateViewDelegate, _UIDatePickerCalendarTimeViewDelegate, _UIDatePickerCalendarMonthYearSelectorDelegate, _UIDatePickerViewComponent>

 {
    ? _flags;
    UIStackView *_contentView;
    _UIDatePickerCalendarHeaderView *_headerView;
    _UIDatePickerCalendarDateView *_dateView;
    _UIDatePickerCalendarTimeView *_timeView;
    _UIDatePickerDateRange *_dateRange;
    NSInteger _viewState;
    _UIDatePickerCalendarMonthYearSelector *_monthYearSelector;
    NSLayoutConstraint *_minimumWidthConstraint;
    NSLayoutConstraint *_maximumWidthConstraint;
    CGSize _lastSize;
    NSUInteger _stateUpdatesInFlight;
}


@property (nonatomic, getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:) BOOL allowsZeroCountDownDuration;
@property (nonatomic, getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:) BOOL allowsZeroTimeInterval;
@property (readonly, nonatomic) CGFloat contentWidth;
@property (retain, nonatomic) _UIDatePickerDataModel *data; // ivar: _data
@property (weak, nonatomic) UIDatePicker *datePicker; // ivar: _datePicker
@property (readonly, nonatomic) NSInteger datePickerStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_highlightColor, setter=_setHighlightColor:) UIColor *highlightColor;
@property (readonly, nonatomic, getter=_isTimeIntervalMode) BOOL isTimeIntervalMode;
@property (retain, nonatomic, getter=_magnifierLineColor, setter=_setMagnifierLineColor:) UIColor *magnifierLineColor;
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *textColor;
@property (retain, nonatomic, getter=_textShadowColor, setter=_setTextShadowColor:) UIColor *textShadowColor;
@property (nonatomic) CGFloat timeInterval;


-(BOOL)_shouldUpdateDataForComponents:(id)arg0 date:(id)arg1 ;
-(BOOL)_shouldUpdateDateViewForSelectedDay:(id)arg0 ;
-(BOOL)_shouldUpdateDateViewForVisibleMonth:(id)arg0 ;
-(BOOL)_shouldUpdateHeaderViewForSelectedDay:(id)arg0 ;
-(BOOL)_shouldUpdateHeaderViewForVisibleMonth:(id)arg0 ;
-(BOOL)_shouldUpdateMonthYearSelectorForSelectedDay:(id)arg0 ;
-(BOOL)_shouldUpdateTimeViewForSelectedTime:(id)arg0 ;
-(BOOL)hasDefaultSize;
-(BOOL)usesAutoLayout;
-(id)createDatePickerForTimeView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)primaryFirstResponder;
-(struct CGSize )_sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )defaultSize;
-(struct CGSize )intrinsicContentSize;
-(struct UIEdgeInsets )_appliedInsetsToEdgeOfContent;
-(void)_destroyMonthYearSelector;
-(void)_headerViewWantsToMoveToMonth:(id)arg0 ;
-(void)_reload;
-(void)_reloadDateRange;
-(void)_reloadDateView;
-(void)_reloadHeaderView;
-(void)_reloadMonthYearSelector;
-(void)_reloadTimeView;
-(void)_setEnabled:(BOOL)arg0 ;
-(void)_setHidesLabels:(BOOL)arg0 ;
-(void)_setNeedsUpdateDate;
-(void)_setupMonthYearSelector;
-(void)_updateContentSizeLimitations;
-(void)_updateCustomFonts;
-(void)_updateDataForComponents:(id)arg0 ;
-(void)_updateDate;
-(void)_updateDateIfNeeded;
-(void)_updateDateViewForSelectedDay:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateDateViewForVisibleMonth:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateEnabledStyling;
-(void)_updateHeaderViewForSelectedDay:(id)arg0 ;
-(void)_updateHeaderViewForVisibleMonth:(id)arg0 ;
-(void)_updateLayoutMargins;
-(void)_updateModuleVisibility;
-(void)_updateMonthYearSelectorForSelectedDay:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateSelectedDay:(id)arg0 animated:(BOOL)arg1 notify:(BOOL)arg2 ;
-(void)_updateSelectedDay:(id)arg0 time:(id)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3 ;
-(void)_updateSelectedDayToDayInMonth:(id)arg0 animated:(BOOL)arg1 notify:(BOOL)arg2 ;
-(void)_updateSelectedTime:(id)arg0 notify:(BOOL)arg1 ;
-(void)_updateTimeViewForSelectedDate:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateViewState:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_updateVisibleMonth:(id)arg0 animated:(BOOL)arg1 ;
-(void)dateView:(id)arg0 didSelectDate:(id)arg1 ;
-(void)dateView:(id)arg0 didShowMonth:(id)arg1 ;
-(void)didChangeCalendar;
-(void)didChangeCustomFontDescriptor;
-(void)didChangeDateFrom:(id)arg0 animated:(BOOL)arg1 ;
-(void)didChangeLocale;
-(void)didChangeMaximumDate;
-(void)didChangeMinimumDate;
-(void)didChangeMinuteInterval;
-(void)didChangeMode;
-(void)didChangeRoundsToMinuteInterval;
-(void)didChangeTimeZone;
-(void)didChangeToday;
-(void)didReset;
-(void)displaySelectedDateAnimated:(BOOL)arg0 ;
-(void)headerViewDidSelect:(id)arg0 ;
-(void)headerViewDidStepBackward:(id)arg0 ;
-(void)headerViewDidStepForward:(id)arg0 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)monthYearSelector:(id)arg0 didSelectMonth:(id)arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)timeView:(id)arg0 didSelectTime:(id)arg1 ;
-(void)timeViewDidBeginEditing:(id)arg0 ;
-(void)timeViewDidEndEditing:(id)arg0 ;
-(void)timeViewWillBecomeFirstResponder:(id)arg0 ;


@end


#endif