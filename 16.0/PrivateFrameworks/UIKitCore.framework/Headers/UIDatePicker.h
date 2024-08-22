// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDATEPICKER_H
#define UIDATEPICKER_H

@class UIView<_UIDatePickerViewComponent>, NSDictionary, NSCalendar, NSString, NSDate, NSLocale, NSTimeZone;
@protocol UIPickerViewScrollTesting, NSCoding, _UIDatePickerCompactStyleDelegate;


#import "UIControl.h"
#import "_UIDatePickerDataModel.h"
#import "_UIDatePickerOverlayPresentation.h"
#import "_UIDatePickerStyle.h"
#import "UIColor.h"

@interface UIDatePicker : UIControl <UIPickerViewScrollTesting, NSCoding>

 {
    ? _datePickerViewFlags;
    UIView<_UIDatePickerViewComponent> *_pickerView;
    _UIDatePickerDataModel *_data;
    BOOL _useCurrentDateDuringDecoding;
}


@property (readonly, nonatomic) UIEdgeInsets _appliedInsetsToEdgeOfContent;
@property (weak, nonatomic, setter=_setCompactStyleDelegate:) NSObject<_UIDatePickerCompactStyleDelegate> *_compactStyleDelegate; // ivar: __compactStyleDelegate
@property (nonatomic, setter=_setDisplaysTimeZone:) BOOL _displaysTimeZone; // ivar: __displaysTimeZone
@property (weak, nonatomic) _UIDatePickerOverlayPresentation *_overlayPresentation; // ivar: __overlayPresentation
@property (retain, nonatomic, setter=_setOverrideCompactTextAttributes:) NSDictionary *_overrideCompactTextAttributes;
@property (nonatomic, setter=_setRoundsToMinuteInterval:) BOOL _roundsToMinuteInterval;
@property (nonatomic, setter=_setSelectionBarIgnoresInset:) BOOL _selectionBarIgnoresInset;
@property (readonly, nonatomic) _UIDatePickerStyle *_style; // ivar: _style
@property (nonatomic, getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:) BOOL allowsZeroCountDownDuration;
@property (nonatomic, getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:) BOOL allowsZeroTimeInterval;
@property (copy, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic, getter=_contentWidth) CGFloat contentWidth;
@property (nonatomic) CGFloat countDownDuration;
@property (retain, nonatomic, getter=_customFontDesign, setter=_setCustomFontDesign:) NSString *customFontDesign;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) NSInteger datePickerMode;
@property (readonly, nonatomic) NSInteger datePickerStyle;
@property (readonly, nonatomic, getter=_dateUnderSelectionBar) NSDate *dateUnderSelectionBar;
@property (nonatomic, getter=_drawsBackground, setter=_setDrawsBackground:) BOOL drawsBackground;
@property (retain, nonatomic, getter=_highlightColor, setter=_setHighlightColor:) UIColor *highlightColor;
@property (readonly, nonatomic, getter=_isTimeIntervalMode) BOOL isTimeIntervalMode;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic, getter=_magnifierLineColor, setter=_setMagnifierLineColor:) UIColor *magnifierLineColor;
@property (retain, nonatomic) NSDate *maximumDate;
@property (retain, nonatomic) NSDate *minimumDate;
@property (nonatomic) NSInteger minuteInterval;
@property (nonatomic) NSInteger preferredDatePickerStyle; // ivar: _preferredDatePickerStyle
@property (nonatomic) BOOL roundsToMinuteInterval;
@property (retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *textColor;
@property (retain, nonatomic, getter=_textShadowColor, setter=_setTextShadowColor:) UIColor *textShadowColor;
@property (nonatomic) CGFloat timeInterval;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic, getter=_useCurrentDateDuringDecoding, setter=_setUseCurrentDateDuringDecoding:) BOOL useCurrentDateDuringDecoding;
@property (nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) BOOL usesBlackChrome;


+(id)_styleForIdiom:(NSInteger)arg0 ;
+(void)_prepareStyleStorageIfNecessary;
+(void)_registerStyle:(id)arg0 forIdiom:(NSInteger)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(NSUInteger)_controlEventsForActionTriggered;
-(id)_labelTextForCalendarUnit:(NSUInteger)arg0 ;
-(id)_lastSelectedDateComponents;
-(id)_selectedTextForCalendarUnit:(NSUInteger)arg0 ;
-(id)_systemDefaultFocusGroupIdentifier;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(int)hour;
-(int)minute;
-(int)second;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_compactStyleSetActiveComponent:(NSInteger)arg0 ;
-(void)_datePickerReset:(id)arg0 ;
-(void)_emitBeginEditing;
-(void)_emitEndEditing;
-(void)_emitValueChanged;
-(void)_installPickerView:(id)arg0 updatingSize:(BOOL)arg1 ;
-(void)_performScrollTest:(id)arg0 withIterations:(NSInteger)arg1 rowsToScroll:(NSInteger)arg2 inComponent:(NSInteger)arg3 ;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_registerObservers;
-(void)_setHidesLabels:(BOOL)arg0 ;
-(void)_setHighlightsToday:(BOOL)arg0 ;
-(void)_setUpInitialValues;
-(void)_todayChanged:(id)arg0 ;
-(void)awakeFromNib;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutMarginsDidChange;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentHorizontalAlignment:(NSInteger)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHighlightsToday:(BOOL)arg0 ;
-(void)setStaggerTimeIntervals:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif