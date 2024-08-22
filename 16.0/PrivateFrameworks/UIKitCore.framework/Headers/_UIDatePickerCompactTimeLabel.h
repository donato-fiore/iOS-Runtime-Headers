// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDATEPICKERCOMPACTTIMELABEL_H
#define _UIDATEPICKERCOMPACTTIMELABEL_H

@class UIDatePickerCalendarTimeLabel, NSDateFormatter, _UITextLayoutControllerBase<_UITextLayoutController>, NSTextContentStorage, NSString, NSDictionary;
@protocol UIPointerInteractionDelegate, _UIDatePickerCalendarTimeLabelDelegate, _UIPassthroughScrollInteractionDelegate, _UIControlEventsGestureRecognizerDelegate, UIGestureRecognizerDelegateInternal, _UIDatePickerCompactTimeLabelDelegate;


#import "UIView.h"
#import "UILabel.h"
#import "_UIDatePickerOverlayPresentation.h"
#import "_UIPassthroughScrollInteraction.h"
#import "UIPointerInteraction.h"
#import "_UIDatePickerCalendarTime.h"

@interface _UIDatePickerCompactTimeLabel : UIDatePickerCalendarTimeLabel <UIPointerInteractionDelegate, _UIDatePickerCalendarTimeLabelDelegate, _UIPassthroughScrollInteractionDelegate, _UIControlEventsGestureRecognizerDelegate, UIGestureRecognizerDelegateInternal>

 {
    ? _flags;
    CGRect _hourRect;
    CGRect _minuteRect;
    CGRect _timeOfDayRect;
    NSDateFormatter *_formatter;
    _UITextLayoutControllerBase<_UITextLayoutController> *_textLayoutController;
    NSTextContentStorage *_textContentStorage;
    NSInteger _highlightedScope;
    UIView *_touchHighlightedView;
}


@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (readonly, nonatomic) NSUInteger currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UILabel *hourLabel; // ivar: _hourLabel
@property (readonly, nonatomic) UIView *inputBackgroundView; // ivar: _inputBackgroundView
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (nonatomic) CGFloat minimumScaleFactor;
@property (readonly, nonatomic) UILabel *minuteLabel; // ivar: _minuteLabel
@property (retain, nonatomic) _UIDatePickerOverlayPresentation *overlayPresentation; // ivar: _overlayPresentation
@property (retain, nonatomic) NSDictionary *overrideAttributes; // ivar: _overrideAttributes
@property (readonly, nonatomic) _UIPassthroughScrollInteraction *passthroughInteraction; // ivar: _passthroughInteraction
@property (nonatomic, getter=isPassthroughInteractionEnabled) BOOL passthroughInteractionEnabled;
@property (readonly, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (readonly, nonatomic) _UIDatePickerCalendarTime *selectedTime; // ivar: _selectedTime
@property (weak, nonatomic) NSObject<_UIDatePickerCompactTimeLabelDelegate> *selectionDelegate; // ivar: _selectionDelegate
@property (readonly) Class superclass;
@property (nonatomic) BOOL tapInteractionControlledExternally; // ivar: _tapInteractionControlledExternally
@property (readonly, nonatomic) UILabel *timeOfDayLabel; // ivar: _timeOfDayLabel


-(BOOL)passthroughScrollInteraction:(id)arg0 shouldInteractAtLocation:(struct CGPoint )arg1 withEvent:(id)arg2 ;
-(BOOL)passthroughScrollInteractionDidRecognize:(id)arg0 ;
-(BOOL)timeLabel:(id)arg0 didReceiveText:(id)arg1 ;
-(BOOL)timeLabelCanBecomeFirstResponder:(id)arg0 ;
-(BOOL)timeLabelShouldSuppressSoftwareKeyboard:(id)arg0 ;
-(NSInteger)_inputScopeForPointerLocation:(struct CGPoint )arg0 ;
-(NSInteger)keyboardTypeForTimeLabel:(id)arg0 ;
-(id)_currentDateForInput;
-(id)font;
-(id)initWithTimeFormat:(id)arg0 minuteInterval:(NSInteger)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)updateHoverLabelForAttributedString:(id)arg0 ranges:(struct ? )arg1 ;
-(struct CGRect )hourRect;
-(struct CGRect )minuteRect;
-(struct CGRect )timeOfDayRect;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_expandedComponentRectForHours:(struct CGRect *)arg0 minuteRect:(struct CGRect *)arg1 timeOfDayRect:(struct CGRect *)arg2 ;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_reloadWithDate:(id)arg0 notify:(BOOL)arg1 ;
-(void)_updateEnabledStyling;
-(void)_updateHoverStateLabelsIfNeeded;
-(void)_updateInputFieldFromSelectedDateComponents;
-(void)_updateInputFieldLayoutForCurrentState;
-(void)_updateLayoutRectsForRanges:(struct ? )arg0 ;
-(void)_updateSelectedDateComponentsFromInput;
-(void)_updateTimeFormatIfNeeded;
-(void)activateLabel;
-(void)applyTextAttributesForState:(NSUInteger)arg0 inputScope:(NSInteger)arg1 updater:(id)arg2 ;
-(void)controlEventsGestureRecognizer:(id)arg0 recognizedControlEvent:(NSUInteger)arg1 withEvent:(id)arg2 ;
-(void)didTapInputLabel:(id)arg0 ;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)pushCurrentStateIntoUI;
-(void)pushCurrentStateIntoUIAndNotify;
-(void)reloadWithCalendar:(id)arg0 locale:(id)arg1 displaysTimeZone:(BOOL)arg2 ;
-(void)reloadWithDate:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setHighlightedForTouch:(BOOL)arg0 ;
-(void)stateMachineUpdateFromState:(NSUInteger)arg0 toState:(NSUInteger)arg1 ;
-(void)timeLabel:(id)arg0 didUpdateText:(id)arg1 ;
-(void)timeLabelDidBecomeFirstResponder:(id)arg0 ;
-(void)timeLabelDidBeginEditing:(id)arg0 ;
-(void)timeLabelDidEndEditing:(id)arg0 ;
-(void)timeLabelDidFailToBecomeFirstResponder:(id)arg0 ;
-(void)timeLabelDidResignFirstResponder:(id)arg0 ;
-(void)timeLabelWillBecomeFirstResponder:(id)arg0 ;
-(void)willBeginWritingInScribbleInteraction;


@end


#endif