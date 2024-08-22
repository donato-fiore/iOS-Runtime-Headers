// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMTIMERINDICATORVIEW_H
#define CAMTIMERINDICATORVIEW_H

@class UIView, UILabel;


#import "CAMAnimationDelegate.h"

@interface CAMTimerIndicatorView : UIView

@property (readonly, nonatomic) CAMAnimationDelegate *_animationDelegate; // ivar: __animationDelegate
@property (readonly, nonatomic) UILabel *_countdownLabel; // ivar: __countdownLabel
@property (nonatomic, setter=_setDeferredOrientation:) NSInteger _deferredLabelOrientation; // ivar: __deferredLabelOrientation
@property (readonly, nonatomic) UIView *_dimmingView; // ivar: __dimmingView
@property (nonatomic, setter=_setLabelOrientation:) NSInteger _labelOrientation; // ivar: __labelOrientation
@property (nonatomic, getter=_isPerformingStyleAnimation, setter=_setPerformingStyleAnimation:) BOOL _performingStyleAnimation; // ivar: __performingStyleAnimation
@property (readonly, nonatomic) NSInteger _remainingTicks; // ivar: __remainingTicks
@property (readonly, nonatomic) NSInteger _startingTicks; // ivar: __startingTicks
@property (nonatomic) NSInteger style; // ivar: _style


-(id)_decrementAnimationForTick:(NSInteger)arg0 ;
-(id)_dimmingAnimationForTick:(NSInteger)arg0 ;
-(id)_finalDimmingAnimation;
-(id)_fontForStyle:(NSInteger)arg0 ;
-(id)font;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_landscapeSwapBoundsCoordinates:(struct CGRect )arg0 ;
-(void)_addDecrementAnimationForTick:(NSInteger)arg0 ;
-(void)_addDimmingAnimationForTick:(NSInteger)arg0 ;
-(void)_commonCAMTimerIndicatorViewInitialization;
-(void)_handleOrientationChange:(NSInteger)arg0 ;
-(void)_layoutCountdownLabelForLargeStyle;
-(void)_layoutCountdownLabelForSmallStyle;
-(void)_layoutCountdownLabelForStyle:(NSInteger)arg0 ;
-(void)_transitionDimmingViewFromStyle:(NSInteger)arg0 ;
-(void)_updateCountdownLabelWithTicksRemaining;
-(void)_updateFromChangeToStyle:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)cam_rotateWithInterfaceOrientation:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)decrement;
-(void)layoutSubviews;
-(void)resetWithNumberOfTicks:(NSInteger)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)startCountdownWithAnimationDelegate:(id)arg0 ;
-(void)stopCountdown;


@end


#endif