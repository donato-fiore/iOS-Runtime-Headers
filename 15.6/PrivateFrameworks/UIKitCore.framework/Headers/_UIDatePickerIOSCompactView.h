// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDATEPICKERIOSCOMPACTVIEW_H
#define _UIDATEPICKERIOSCOMPACTVIEW_H

@class NSDateFormatter, NSArray, NSString, NSDictionary;
@protocol _UIDatePickerCompactTimeLabelDelegate, _UIDatePickerCompactDateLabelDelegate, _UIDatePickerOverlayPresentationDelegate, _UIDatePickerViewComponent;


#import "UIControl.h"
#import "UILayoutGuide.h"
#import "_UIDatePickerOverlayPresentation.h"
#import "UIPanGestureRecognizer.h"
#import "_UIDatePickerDataModel.h"
#import "UIDatePicker.h"
#import "_UIDatePickerCompactDateLabel.h"
#import "UIColor.h"
#import "_UIDatePickerCompactTimeLabel.h"

@interface _UIDatePickerIOSCompactView : UIControl <_UIDatePickerCompactTimeLabelDelegate, _UIDatePickerCompactDateLabelDelegate, _UIDatePickerOverlayPresentationDelegate, _UIDatePickerViewComponent>

 {
    ? _flags;
    NSDateFormatter *_dateFormatterMedium;
    NSDateFormatter *_dateFormatterShort;
    UILayoutGuide *_timeViewLayoutGuide;
    UILayoutGuide *_contentLayoutGuide;
    NSDateFormatter *_layoutFormatter;
    BOOL _dateOnLeadingSide;
    NSArray *_dateTimeConstraints;
    _UIDatePickerOverlayPresentation *_presentation;
    NSInteger _activeComponent;
    UIPanGestureRecognizer *_panGestureRecognizer;
}


@property (readonly, nonatomic) BOOL alignConstraintsToLayoutGuide;
@property (nonatomic, getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:) BOOL allowsZeroCountDownDuration;
@property (nonatomic, getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:) BOOL allowsZeroTimeInterval;
@property (readonly, nonatomic) CGFloat contentWidth;
@property (retain, nonatomic) _UIDatePickerDataModel *data; // ivar: _data
@property (weak, nonatomic) UIDatePicker *datePicker; // ivar: _datePicker
@property (readonly, nonatomic) NSInteger datePickerStyle;
@property (readonly, nonatomic) _UIDatePickerCompactDateLabel *dateView; // ivar: _dateView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_highlightColor, setter=_setHighlightColor:) UIColor *highlightColor;
@property (readonly, nonatomic, getter=_isTimeIntervalMode) BOOL isTimeIntervalMode;
@property (retain, nonatomic, getter=_magnifierLineColor, setter=_setMagnifierLineColor:) UIColor *magnifierLineColor;
@property (retain, nonatomic) NSDictionary *overrideAttributes;
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *textColor;
@property (retain, nonatomic, getter=_textShadowColor, setter=_setTextShadowColor:) UIColor *textShadowColor;
@property (nonatomic) CGFloat timeInterval;
@property (readonly, nonatomic) _UIDatePickerCompactTimeLabel *timeView; // ivar: _timeView


-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(BOOL)compactTimeLabel:(id)arg0 shouldDismissForInteractionAtLocation:(struct CGPoint )arg1 ;
-(BOOL)hasDefaultSize;
-(BOOL)usesAutoLayout;
-(id)createDatePickerForCompactDateLabel:(id)arg0 ;
-(id)createDatePickerForCompactTimeLabel:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )defaultSize;
-(struct UIEdgeInsets )_appliedInsetsToEdgeOfContent;
-(void)_datePickerPresentation:(id)arg0 didChangeActiveMode:(NSInteger)arg1 ;
-(void)_didReceivePanGestureRecognizer:(id)arg0 ;
-(void)_reloadTimeViewTimeFormat;
-(void)_resignActiveComponentAnimated:(BOOL)arg0 ;
-(void)_setEnabled:(BOOL)arg0 ;
-(void)_setHidesLabels:(BOOL)arg0 ;
-(void)_updateDateBeforeTimeValue;
-(void)_updateDateViewTextAlignment;
-(void)_updateEnabledStyling;
-(void)_updateUI;
-(void)compactDateLabelDidBeginEditing:(id)arg0 ;
-(void)compactDateLabelDidEndEditing:(id)arg0 ;
-(void)compactTimeLabel:(id)arg0 didSelectTime:(id)arg1 ;
-(void)compactTimeLabelDidBeginEditing:(id)arg0 ;
-(void)compactTimeLabelDidEndEditing:(id)arg0 ;
-(void)compactTimeLabelWillBecomeFirstResponder:(id)arg0 ;
-(void)didChangeCalendar;
-(void)didChangeCompactStyleDelegate;
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
-(void)setActiveComponent:(NSInteger)arg0 ;
-(void)setContentHorizontalAlignment:(NSInteger)arg0 ;
-(void)tintColorDidChange;
-(void)updateConstraints;
-(void)updateTimeZoneDisplay;
-(void)willMoveToSuperview:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif