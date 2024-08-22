// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDATEPICKERCALENDARVIEW_H
#define _UIDATEPICKERCALENDARVIEW_H

@class NSString;
@protocol UICalendarSelectionSingleDateDelegate, _UIDatePickerCalendarTimeViewDelegate, _UIDatePickerViewComponent;


#import "UIView.h"
#import "UICalendarView.h"
#import "UICalendarSelectionSingleDate.h"
#import "_UIDatePickerCalendarTimeView.h"
#import "_UIDatePickerDataModel.h"
#import "UIDatePicker.h"

@interface _UIDatePickerCalendarView : UIView <UICalendarSelectionSingleDateDelegate, _UIDatePickerCalendarTimeViewDelegate, _UIDatePickerViewComponent>

 {
    ? _flags;
    UICalendarView *_calendarView;
    UICalendarSelectionSingleDate *_selection;
    _UIDatePickerCalendarTimeView *_timeView;
    CGSize _lastSize;
    NSUInteger _stateUpdatesInFlight;
}


@property (readonly, nonatomic) UIEdgeInsets appliedInsetsToEdgeOfContent;
@property (readonly, nonatomic) CGFloat contentWidth;
@property (retain, nonatomic) _UIDatePickerDataModel *data; // ivar: _data
@property (weak, nonatomic) UIDatePicker *datePicker; // ivar: _datePicker
@property (readonly, nonatomic) NSInteger datePickerStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeInterval;


-(BOOL)_shouldDisplayCalendarView;
-(BOOL)_shouldDisplayTimeView;
-(BOOL)_shouldUpdateDataForComponents:(id)arg0 date:(id)arg1 ;
-(BOOL)_shouldUpdateTimeViewForSelectedTime:(id)arg0 ;
-(BOOL)dateSelection:(id)arg0 canSelectDate:(id)arg1 ;
-(BOOL)hasDefaultSize;
-(BOOL)usesAutoLayout;
-(NSUInteger)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
-(id)createDatePickerForTimeView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)primaryFirstResponder;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )_sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )defaultSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_reload;
-(void)_reloadCalendarView;
-(void)_reloadDateRange;
-(void)_reloadTimeView;
-(void)_setEnabled:(BOOL)arg0 ;
-(void)_setNeedsUpdateDateAnimated:(BOOL)arg0 ;
-(void)_updateContentSizeLimitations;
-(void)_updateCustomFonts;
-(void)_updateDataForComponents:(id)arg0 ;
-(void)_updateDate;
-(void)_updateDateIfNeeded;
-(void)_updateEnabledStyling;
-(void)_updateLayoutMargins;
-(void)_updateModuleVisibility;
-(void)_updateSelectedDay:(id)arg0 animated:(BOOL)arg1 notify:(BOOL)arg2 ;
-(void)_updateSelectedDay:(id)arg0 time:(id)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3 ;
-(void)_updateSelectedTime:(id)arg0 notify:(BOOL)arg1 ;
-(void)_updateTimeViewForSelectedDate:(id)arg0 animated:(BOOL)arg1 ;
-(void)dateSelection:(id)arg0 didSelectDate:(id)arg1 ;
-(void)didChangeCalendar;
-(void)didChangeCustomFontDesign;
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
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)timeView:(id)arg0 didSelectTime:(id)arg1 ;
-(void)timeViewDidBeginEditing:(id)arg0 ;
-(void)timeViewDidEndEditing:(id)arg0 ;
-(void)timeViewWillBecomeFirstResponder:(id)arg0 ;


@end


#endif