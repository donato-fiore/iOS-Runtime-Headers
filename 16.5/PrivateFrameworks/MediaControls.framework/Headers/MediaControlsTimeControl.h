// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEDIACONTROLSTIMECONTROL_H
#define MEDIACONTROLSTIMECONTROL_H

@class UIControl, NSArray, NSLayoutConstraint, CADisplayLink, AVTimeFormatter, NSString, UILabel, UIView, CAGradientLayer, MPCPlayerResponse, MPCPlayerResponseItem, UILayoutGuide, MTVisualStylingProvider;
@protocol MTVisualStylingProviderObservingPrivate, UIGestureRecognizerDelegate;



@interface MediaControlsTimeControl : UIControl <MTVisualStylingProviderObservingPrivate, UIGestureRecognizerDelegate>

 {
    NSArray *_defaultConstraints;
    NSArray *_trackingConstraints;
    NSArray *_initialConstraints;
    NSLayoutConstraint *_knobViewXConstraint;
    CADisplayLink *_displayLink;
    AVTimeFormatter *_elapsedTimeFormatter;
    AVTimeFormatter *_remainingTimeFormatter;
    CGFloat _lastRecordedTime;
    CGFloat _currentTimeInTrack;
    NSString *_elapsedTime;
    NSString *_remainingTime;
    BOOL _debugPreviousDisplayLinkPaused;
}


@property (nonatomic, getter=isCurrentlyTracking) BOOL currentlyTracking; // ivar: _currentlyTracking
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) ? durationSnapshot; // ivar: _durationSnapshot
@property (retain, nonatomic) UILabel *elapsedTimeLabel; // ivar: _elapsedTimeLabel
@property (retain, nonatomic) UIView *elapsedTrack; // ivar: _elapsedTrack
@property (nonatomic, getter=isEmpty) BOOL empty; // ivar: _empty
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *knobView; // ivar: _knobView
@property (retain, nonatomic) UIView *liveBackground; // ivar: _liveBackground
@property (retain, nonatomic) CAGradientLayer *liveBackgroundMask; // ivar: _liveBackgroundMask
@property (retain, nonatomic) UILabel *liveLabel; // ivar: _liveLabel
@property (retain, nonatomic) UILabel *remainingTimeLabel; // ivar: _remainingTimeLabel
@property (retain, nonatomic) UIView *remainingTrack; // ivar: _remainingTrack
@property (retain, nonatomic) MPCPlayerResponse *response; // ivar: _response
@property (retain, nonatomic) MPCPlayerResponseItem *responseItem; // ivar: _responseItem
@property (nonatomic) CGFloat sliderValue; // ivar: _sliderValue
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic, getter=isTimeControlOnScreen) BOOL timeControlOnScreen; // ivar: _timeControlOnScreen
@property (retain, nonatomic) UILayoutGuide *trackLayoutGuide; // ivar: _trackLayoutGuide
@property (nonatomic, getter=isTransitioning) BOOL transitioning; // ivar: _transitioning
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // ivar: _visualStylingProvider


-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_displayLinkTick:(id)arg0 ;
-(void)_updateDisplayLinkPause;
-(void)_updateLabels:(CGFloat)arg0 withRemainingDuration:(CGFloat)arg1 ;
-(void)_updateLabels:(struct ? )arg0 withTargetTimestamp:(CGFloat)arg1 ;
-(void)_updateSliderPosition;
-(void)_updateStyle;
-(void)_updateTimeControl;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)createDisplayLinkIfNeeded;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)invalidateDisplayLinkIfNeeded;
-(void)layoutSubviews;
-(void)providedStylesDidChangeForProvider:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBackgroundMask;
-(void)updateLabelAvoidance;
-(void)updateSliderConstraint;
-(void)viewDidMoveToSuperview;


@end


#endif