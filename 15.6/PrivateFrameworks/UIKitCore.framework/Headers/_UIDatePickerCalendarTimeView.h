// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDATEPICKERCALENDARTIMEVIEW_H
#define _UIDATEPICKERCALENDARTIMEVIEW_H

@class NSArray, NSCalendar, NSString, NSLocale;
@protocol _UIDatePickerCompactTimeLabelDelegate, UIPopoverPresentationControllerDelegate, _UIDatePickerCalendarTimeViewDelegate;


#import "UIView.h"
#import "_UIDatePickerOverlayPresentation.h"
#import "_UIDatePickerCalendarTime.h"
#import "UILabel.h"
#import "_UIDatePickerCompactTimeLabel.h"

@interface _UIDatePickerCalendarTimeView : UIView <_UIDatePickerCompactTimeLabelDelegate, UIPopoverPresentationControllerDelegate>

 {
    ? _flags;
    NSArray *_clockLayoutConstraints;
    _UIDatePickerOverlayPresentation *_presentation;
}


@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (retain, nonatomic) NSString *customFontDesign; // ivar: _customFontDesign
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIDatePickerCalendarTimeViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (nonatomic) NSInteger minuteInterval; // ivar: _minuteInterval
@property (nonatomic) BOOL roundsToMinuteInterval; // ivar: _roundsToMinuteInterval
@property (readonly, nonatomic) _UIDatePickerCalendarTime *selectedTime; // ivar: _selectedTime
@property (nonatomic) BOOL shouldShowTimeLabel; // ivar: _shouldShowTimeLabel
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *timeLabel; // ivar: _timeLabel
@property (readonly, nonatomic) _UIDatePickerCompactTimeLabel *timeTextField; // ivar: _timeTextField


-(BOOL)compactTimeLabel:(id)arg0 shouldDismissForInteractionAtLocation:(struct CGPoint )arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)createDatePickerForCompactTimeLabel:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)primaryFirstResponder;
-(void)_reload;
-(void)_reloadDateFormatters;
-(void)_setupViewHierarchy;
-(void)_updateClockLayout;
-(void)_updateFonts;
-(void)_updateTextFieldsFromSelectedDateComponents;
-(void)compactTimeLabel:(id)arg0 didSelectTime:(id)arg1 ;
-(void)compactTimeLabelDidBeginEditing:(id)arg0 ;
-(void)compactTimeLabelDidEndEditing:(id)arg0 ;
-(void)compactTimeLabelWillBecomeFirstResponder:(id)arg0 ;
-(void)reloadWithCalendar:(id)arg0 locale:(id)arg1 selectedDate:(id)arg2 ;
-(void)setSelectedDate:(id)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)willMoveToSuperview:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif