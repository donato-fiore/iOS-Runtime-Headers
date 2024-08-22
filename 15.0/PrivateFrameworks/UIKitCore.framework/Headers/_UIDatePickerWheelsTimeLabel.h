// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDATEPICKERWHEELSTIMELABEL_H
#define _UIDATEPICKERWHEELSTIMELABEL_H

@class UIDatePickerCalendarTimeLabel;
@protocol _UIControlEventsGestureRecognizerDelegate, _UIDatePickerWheelsTimeLabelDelegate;


#import "UILabel.h"
#import "UIView.h"
#import "_UIControlEventsGestureRecognizer.h"

@interface _UIDatePickerWheelsTimeLabel : UIDatePickerCalendarTimeLabel <_UIControlEventsGestureRecognizerDelegate>

 {
    UILabel *_measurementLabel;
    CGRect _hoursReferenceFrame;
    CGRect _minutesReferenceFrame;
    NSInteger _highlightedScope;
    BOOL _highlightedForTouch;
    UIView *_touchHighlightedView;
}


@property (readonly, nonatomic) CGRect combinedTextRectFromLabels;
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) _UIControlEventsGestureRecognizer *controlEventsGestureRecognizer; // ivar: _controlEventsGestureRecognizer
@property (readonly, nonatomic) UILabel *hourLabel; // ivar: _hourLabel
@property (readonly, nonatomic) UILabel *minuteLabel; // ivar: _minuteLabel
@property (readonly, nonatomic) UILabel *timeSeparatorLabel; // ivar: _timeSeparatorLabel
@property (nonatomic) BOOL wheelsActive; // ivar: _wheelsActive
@property (weak, nonatomic) NSObject<_UIDatePickerWheelsTimeLabelDelegate> *wheelsDelegate; // ivar: _wheelsDelegate


+(BOOL)supportsScribbleInteraction;
-(BOOL)_treatMinutesAsHoursForState:(NSUInteger)arg0 ;
-(BOOL)displaysTimeOfDayLabel;
-(NSInteger)decrementBehaviour;
-(id)_viewForHighlightedTouchAtPoint:(struct CGPoint )arg0 ;
-(id)font;
-(id)initWithTimeFormat:(id)arg0 minuteInterval:(NSInteger)arg1 ;
-(struct CGRect )hourRect;
-(struct CGRect )minuteRect;
-(void)beginEditingWheels;
-(void)configureLabelsForHour:(struct ? )arg0 minute:(struct ? )arg1 ;
-(void)controlEventsGestureRecognizer:(id)arg0 recognizedControlEvent:(NSUInteger)arg1 withEvent:(id)arg2 ;
-(void)endEditingWheels;
-(void)pushCurrentStateIntoUI;
-(void)setContentHidden:(BOOL)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setHighlightedForTouch:(BOOL)arg0 ;
-(void)stateMachineUpdateFromState:(NSUInteger)arg0 toState:(NSUInteger)arg1 ;
-(void)updateHoursFromDatePicker:(NSInteger)arg0 wheelsChanged:(BOOL)arg1 ;
-(void)updateMinutesFromDatePicker:(NSInteger)arg0 wheelsChanged:(BOOL)arg1 ;
-(void)willBeginWritingInScribbleInteraction;


@end


#endif