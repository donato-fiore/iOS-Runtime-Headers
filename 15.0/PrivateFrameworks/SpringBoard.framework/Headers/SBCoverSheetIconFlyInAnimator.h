// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCOVERSHEETICONFLYINANIMATOR_H
#define SBCOVERSHEETICONFLYINANIMATOR_H

@class SBCenterIconZoomAnimator, NSString, UIViewFloatAnimatableProperty, UIPageControl, CAMediaTimingFunction;
@protocol PTSettingsKeyObserver;



@interface SBCoverSheetIconFlyInAnimator : SBCenterIconZoomAnimator <PTSettingsKeyObserver>

 {
    CGFloat _baselineDistance;
    CGFloat _effectMultiplier;
    CGFloat _distanceExponent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *labelAlphaDrivingProgressAnimatableProperty; // ivar: _labelAlphaDrivingProgressAnimatableProperty
@property (retain, nonatomic) UIPageControl *pageControl; // ivar: _pageControl
@property (readonly) Class superclass;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction


-(CGFloat)_functionWithProgress:(CGFloat)arg0 distance:(CGFloat)arg1 ;
-(CGFloat)_labelAlphaForFraction:(CGFloat)arg0 ;
-(CGFloat)_zPositionForPoint:(struct CGPoint )arg0 center:(struct CGPoint )arg1 andFraction:(CGFloat)arg2 ;
-(CGFloat)_zPositionForView:(id)arg0 center:(struct CGPoint )arg1 andFraction:(CGFloat)arg2 ;
-(id)initWithFolderController:(id)arg0 ;
-(void)_cleanupAnimation;
-(void)_createAnimatableProperties;
-(void)_prepareAnimation;
-(void)_setAnimationFraction:(CGFloat)arg0 withCenter:(struct CGPoint )arg1 ;
-(void)_updateDockForFraction:(CGFloat)arg0 ;
-(void)_updateLabelAlphaForPresentationValue:(BOOL)arg0 ;
-(void)_updateWithSettings:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif