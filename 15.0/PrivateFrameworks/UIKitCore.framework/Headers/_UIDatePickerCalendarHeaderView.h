// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDATEPICKERCALENDARHEADERVIEW_H
#define _UIDATEPICKERCALENDARHEADERVIEW_H

@class NSDateFormatter, NSDate, NSCalendar, NSString, NSLocale;
@protocol UIPointerInteractionDelegate, _UIDatePickerCalendarHeaderViewDelegate;


#import "UIView.h"
#import "UIPointerInteraction.h"
#import "_UIDatePickerLinkedLabel.h"
#import "UIImageView.h"
#import "UIButton.h"
#import "_UIDatePickerDateRange.h"
#import "_UIDatePickerCalendarDay.h"
#import "_UIDatePickerCalendarMonth.h"

@interface _UIDatePickerCalendarHeaderView : UIView <UIPointerInteractionDelegate>

 {
    UIPointerInteraction *_pointerInteraction;
    NSDateFormatter *_longFormatter;
    NSDateFormatter *_shortFormatter;
    UIView *_monthYearSelectorContainer;
    _UIDatePickerLinkedLabel *_monthYearLabel;
    UIImageView *_chevron;
    UIButton *_previousMonthButton;
    UIButton *_nextMonthButton;
    NSDate *_lastCalculatedYearStart;
    NSDate *_lastCalculatedYearEnd;
}


@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (retain, nonatomic) NSString *customFontDesign; // ivar: _customFontDesign
@property (readonly, nonatomic) _UIDatePickerDateRange *dateRange; // ivar: _dateRange
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIDatePickerCalendarHeaderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) _UIDatePickerCalendarDay *selectedDay; // ivar: _selectedDay
@property (readonly) Class superclass;
@property (retain, nonatomic) _UIDatePickerCalendarMonth *visibleMonth; // ivar: _visibleMonth


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_adjustMonth:(id)arg0 ;
-(void)_didTap:(id)arg0 ;
-(void)_reload;
-(void)_reloadDateFormatters;
-(void)_setupDateFormatter;
-(void)_setupGestureRecognizers;
-(void)_setupViewHierarchy;
-(void)_updateFonts;
-(void)_updateMonthButtonEnablement;
-(void)_updateMonthButtonImages;
-(void)_updateMonthButtonVisibility;
-(void)_updateMonthYearLabel;
-(void)_updatePossibleTitlesIfNeccessaryForDate:(id)arg0 ;
-(void)reloadWithCalendar:(id)arg0 locale:(id)arg1 dateRange:(id)arg2 visibleMonth:(id)arg3 selectedDay:(id)arg4 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif