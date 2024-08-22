// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMSEMANTICSTYLESLIDER_H
#define CAMSEMANTICSTYLESLIDER_H

@class UIControl, NSTimer, UILongPressGestureRecognizer, UIView, CEKSlider, UILabel, NSString;
@protocol CAMAdditiveAnimatorDelegate, UIGestureRecognizerDelegate, CAMSemanticStyleSliderDelegate;


#import "CAMAdditiveAnimator.h"
#import "CAMExpandingTickMarksView.h"

@interface CAMSemanticStyleSlider : UIControl <CAMAdditiveAnimatorDelegate, UIGestureRecognizerDelegate>



@property (readonly, nonatomic) CAMAdditiveAnimator *_animator; // ivar: __animator
@property (nonatomic, setter=_setExpansionAnimationCounter:) NSUInteger _expansionAnimationCounter; // ivar: __expansionAnimationCounter
@property (retain, nonatomic, setter=_setExpansionAnimationTimer:) NSTimer *_expansionAnimationTimer; // ivar: __expansionAnimationTimer
@property (readonly, nonatomic) UILongPressGestureRecognizer *_gestureRecognizer; // ivar: __gestureRecognizer
@property (readonly, nonatomic) UIView *_levelIndicatorView; // ivar: __levelIndicatorView
@property (retain, nonatomic, setter=_setMarkedValueAnimationTimer:) NSTimer *_markedValueAnimationTimer; // ivar: __markedValueAnimationTimer
@property (readonly, nonatomic) CEKSlider *_slider; // ivar: __slider
@property (readonly, nonatomic) CAMExpandingTickMarksView *_ticksView; // ivar: __ticksView
@property (readonly, nonatomic) UILabel *_titleLabel; // ivar: __titleLabel
@property (readonly, nonatomic) UILabel *_valueLabel; // ivar: __valueLabel
@property (nonatomic) CGFloat collapsedCenterX; // ivar: _collapsedCenterX
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CAMSemanticStyleSliderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expanded; // ivar: _expanded
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat markedValue; // ivar: _markedValue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) CGFloat value;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithTitle:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_handleExpansionAnimationTimerFired:(id)arg0 ;
-(void)_handleMarkedValueAnimationTimerFired:(id)arg0 ;
-(void)_handlePress:(id)arg0 ;
-(void)_handleSliderDidChangeValue:(id)arg0 ;
-(void)_updateLabelColorsForProgress:(CGFloat)arg0 ;
-(void)_updateMarkedValueAnimated:(BOOL)arg0 ;
-(void)_updateSubviewVisibility;
-(void)_updateTickViewFrameForProgress:(CGFloat)arg0 ;
-(void)_updateUIForValue:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)animator:(id)arg0 didUpdateValuesForKeys:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif