// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMLOWLIGHTSLIDER_H
#define CAMLOWLIGHTSLIDER_H

@class CEKDiscreteSlider, NSTimer;



@interface CAMLowLightSlider : CEKDiscreteSlider

@property (readonly, nonatomic) CGFloat _inactiveTickMarkHeight; // ivar: __inactiveTickMarkHeight
@property (nonatomic, getter=_isPerformingCaptureAnimation, setter=_setPerformingCaptureAnimation:) BOOL _performingCaptureAnimation; // ivar: __performingCaptureAnimation
@property (nonatomic, setter=_setRemainingCaptureAnimationTime:) CGFloat _remainingCaptureAnimationTime; // ivar: __remainingCaptureAnimationTime
@property (nonatomic, setter=_setSelectedIndexBeforeCaptureAnimation:) NSUInteger _selectedIndexBeforeCaptureAnimation; // ivar: __selectedIndexBeforeCaptureAnimation
@property (retain, nonatomic, setter=_setValueLabelUpdateTimer:) NSTimer *_valueLabelUpdateTimer; // ivar: __valueLabelUpdateTimer
@property (nonatomic) ? durationMapping; // ivar: _durationMapping
@property (nonatomic, getter=isLowLightActive) BOOL lowLightActive; // ivar: _lowLightActive
@property (nonatomic) NSUInteger lowLightMode;


-(id)_valueTextForDuration:(CGFloat)arg0 ;
-(id)_valueTextForDuration:(CGFloat)arg0 format:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)valueText;
-(void)_handleValueLabelUpdateTimerWithStartTime:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(void)_startValueLabelUpdateTimerWithDuration:(CGFloat)arg0 ;
-(void)_stopValueLabelUpdateTimer;
-(void)dealloc;
-(void)endCaptureAnimationAnimated:(BOOL)arg0 ;
-(void)performCaptureAnimationWithDuration:(CGFloat)arg0 completion:(id)arg1 ;


@end


#endif