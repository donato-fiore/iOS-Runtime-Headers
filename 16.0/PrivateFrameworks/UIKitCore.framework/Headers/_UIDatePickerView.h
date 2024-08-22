// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDATEPICKERVIEW_H
#define _UIDATEPICKERVIEW_H

@class NSCalendar, NSString, UIFont, NSLocale;
@protocol _UIDatePickerCalendarTimeLabelDelegate, _UIDatePickerWheelsTimeLabelDelegate, UIGestureRecognizerDelegateInternal, UIPopoverPresentationControllerDelegate, _UIPassthroughScrollInteractionDelegate, _UIControlEventsGestureRecognizerDelegate, UIPickerViewDelegate, UIPickerViewDataSource, _UIDatePickerWheelsViewComponent;


#import "UIPickerView.h"
#import "_UIDatePickerMode.h"
#import "UILabel.h"
#import "_UIPassthroughScrollInteraction.h"
#import "_UIControlEventsGestureRecognizer.h"
#import "_UIDatePickerDataModel.h"
#import "UIDatePicker.h"
#import "UIColor.h"
#import "_UIDatePickerNumericKeyboardViewController.h"
#import "_UIDatePickerWheelsTimeLabel.h"

@interface _UIDatePickerView : UIPickerView <_UIDatePickerCalendarTimeLabelDelegate, _UIDatePickerWheelsTimeLabelDelegate, UIGestureRecognizerDelegateInternal, UIPopoverPresentationControllerDelegate, _UIPassthroughScrollInteractionDelegate, _UIControlEventsGestureRecognizerDelegate, UIPickerViewDelegate, UIPickerViewDataSource, _UIDatePickerWheelsViewComponent>

 {
    NSInteger _loadingDate;
    BOOL _allowsZeroTimeInterval;
    _UIDatePickerMode *_mode;
    UILabel *_hourLabel;
    UILabel *_minuteLabel;
    int _expectedAMPM;
    ? _datePickerFlags;
    _UIPassthroughScrollInteraction *_passthroughInteraction;
}


@property (nonatomic, getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:) BOOL allowsZeroCountDownDuration;
@property (nonatomic, getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:) BOOL allowsZeroTimeInterval;
@property (readonly, nonatomic, getter=_amPmValue) NSInteger amPmValue;
@property (readonly, nonatomic) UIEdgeInsets appliedInsetsToEdgeOfContent;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) CGFloat contentWidth;
@property (readonly, nonatomic) _UIControlEventsGestureRecognizer *controlEventsGestureRecognizer; // ivar: _controlEventsGestureRecognizer
@property (retain, nonatomic) _UIDatePickerDataModel *data; // ivar: _data
@property (weak, nonatomic) UIDatePicker *datePicker; // ivar: _datePicker
@property (readonly, nonatomic) NSInteger datePickerStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_highlightColor, setter=_setHighlightColor:) UIColor *highlightColor;
@property (nonatomic) BOOL highlightsToday;
@property (readonly, nonatomic, getter=_hrMinFont) UIFont *hrMinFont;
@property (readonly, nonatomic, getter=_isTimeIntervalMode) BOOL isTimeIntervalMode;
@property (readonly, nonatomic) NSLocale *locale;
@property (retain, nonatomic, getter=_magnifierLineColor, setter=_setMagnifierLineColor:) UIColor *magnifierLineColor;
@property (readonly, nonatomic) _UIDatePickerNumericKeyboardViewController *numericKeyboardViewController; // ivar: _numericKeyboardViewController
@property (nonatomic) BOOL passthroughInteractionEnabled;
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *textColor;
@property (retain, nonatomic, getter=_textShadowColor, setter=_setTextShadowColor:) UIColor *textShadowColor;
@property (readonly, nonatomic) _UIDatePickerWheelsTimeLabel *timeInputLabel; // ivar: _timeInputLabel
@property (nonatomic) CGFloat timeInterval;
@property (nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) BOOL usesBlackChrome;


-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(BOOL)_shouldInstallTimeInputLabelForDatePickerMode:(NSInteger)arg0 ;
-(BOOL)_showingDate;
-(BOOL)_updateDateOrTime;
-(BOOL)_updatedLastSelectedComponentsByValidatingSelectedDateWithLastManipulatedComponent:(NSInteger)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)hasDefaultSize;
-(BOOL)passthroughScrollInteraction:(id)arg0 shouldInteractAtLocation:(struct CGPoint )arg1 withEvent:(id)arg2 ;
-(BOOL)passthroughScrollInteractionDidRecognize:(id)arg0 ;
-(BOOL)staggerTimeIntervals;
-(BOOL)timeLabel:(id)arg0 didReceiveText:(id)arg1 ;
-(BOOL)timeLabelCanBecomeFirstResponder:(id)arg0 ;
-(BOOL)timeLabelShouldSuppressSoftwareKeyboard:(id)arg0 ;
-(BOOL)wheelsTimeLabelShouldReceiveInteraction:(id)arg0 ;
-(CGFloat)_tableRowHeight;
-(CGFloat)pickerView:(id)arg0 rowHeightForComponent:(NSInteger)arg1 ;
-(CGFloat)pickerView:(id)arg0 widthForComponent:(NSInteger)arg1 ;
-(NSInteger)_selectionBarRowInComponent:(NSInteger)arg0 ;
-(NSInteger)keyboardTypeForTimeLabel:(id)arg0 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(NSUInteger)_permittedArrowDirectionForKeyboardPopover;
-(id)_componentsSelectedAfterEnforcingValidityOfComponents:(id)arg0 withLastManipulatedComponent:(NSInteger)arg1 ;
-(id)_contentViewForSizingLabelForPositioningInComponent:(NSInteger)arg0 ;
-(id)_currentTimeFormat;
-(id)_existingLabelForCalendarUnit:(NSUInteger)arg0 ;
-(id)_hoursStringForHour:(NSInteger)arg0 ;
-(id)_labelForCalendarUnit:(NSUInteger)arg0 createIfNecessary:(BOOL)arg1 ;
-(id)_labelTextForCalendarUnit:(NSUInteger)arg0 ;
-(id)_makeNewCalendarUnitLabel;
-(id)_minutesStringForHour:(NSInteger)arg0 minutes:(NSInteger)arg1 ;
-(id)_selectedTextForCalendarUnit:(NSUInteger)arg0 ;
-(id)_viewForSelectedRowInComponent:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pickerView:(id)arg0 viewForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 reusingView:(id)arg3 ;
-(id)primaryFirstResponder;
-(id)shadowColor;
-(int)_selectedHourForColumn:(int)arg0 ;
-(int)_selectedMinuteForColumn:(int)arg0 ;
-(struct CGRect )_currentTimeInputLabelFrame;
-(void)_disableCustomKeyboardIfNecessary;
-(void)_dismissManualKeyboard;
-(void)_doneLoadingDateOrTime;
-(void)_enableCustomKeyboardIfNecessary;
-(void)_fadeLabelForCalendarUnit:(NSUInteger)arg0 toText:(id)arg1 animated:(BOOL)arg2 ;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_hardwareKeyboardAvailabilityChanged:(id)arg0 ;
-(void)_hidePickerViewSelectionBarForTimeInputLabel:(BOOL)arg0 ;
-(void)_installTimeInputLabelIfNeeded;
-(void)_loadDateAnimated:(BOOL)arg0 ;
-(void)_positionLabel:(id)arg0 forCalendarUnit:(NSUInteger)arg1 relativeTo:(id)arg2 order:(NSInteger)arg3 ;
-(void)_resetSelectionOfTables;
-(void)_selectRow:(NSInteger)arg0 inComponent:(NSInteger)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3 ;
-(void)_setHidesLabels:(BOOL)arg0 ;
-(void)_setLabel:(id)arg0 forCalendarUnit:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)_setMode:(id)arg0 ;
-(void)_uninstallTimeInputLabelIfNeeded;
-(void)_updateDateForNewDateRange;
-(void)_updateEnabledCellsIncludingWMDCells:(BOOL)arg0 ;
-(void)_updateLabelColors;
-(void)_updateLabels:(BOOL)arg0 ;
-(void)_updateLocaleTimeZoneOrCalendar;
-(void)_updateTextColorForCalendarUnitLabel:(id)arg0 ;
-(void)_updateTimeInputLabelConfiguration;
-(void)_updateTimeInputLabelPosition;
-(void)_updateWheelsForUpdatedTextInputWithForcedUpdate:(BOOL)arg0 ;
-(void)_updateWheelsLabelForCurrentDateComponents;
-(void)controlEventsGestureRecognizer:(id)arg0 recognizedControlEvent:(NSUInteger)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
-(void)didChangeCalendar;
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
-(void)layoutSubviews;
-(void)pickerTableView:(id)arg0 didChangeSelectionBarRowFrom:(NSInteger)arg1 to:(NSInteger)arg2 ;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)popoverPresentationController:(id)arg0 willRepositionPopoverToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)presentationControllerWillDismiss:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)timeLabel:(id)arg0 didUpdateText:(id)arg1 ;
-(void)timeLabelDidBecomeFirstResponder:(id)arg0 ;
-(void)timeLabelDidBeginEditing:(id)arg0 ;
-(void)timeLabelDidEndEditing:(id)arg0 ;
-(void)timeLabelDidFailToBecomeFirstResponder:(id)arg0 ;
-(void)timeLabelDidResignFirstResponder:(id)arg0 ;
-(void)timeLabelWillBecomeFirstResponder:(id)arg0 ;
-(void)wheelsTimeLabel:(id)arg0 didChangeVisibility:(BOOL)arg1 ;
-(void)willMoveToSuperview:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif