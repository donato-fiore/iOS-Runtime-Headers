// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBUICALLTOACTIONLABEL_H
#define SBUICALLTOACTIONLABEL_H

@class UIView, NSMutableArray, NSTimer, NSString, CAGradientLayer, _UILegibilitySettings;
@protocol CAAnimationDelegate;


#import "SBUILegibilityLabel.h"

@interface SBUICallToActionLabel : UIView <CAAnimationDelegate>

 {
    BOOL _disablesGradientFadeInAnimation;
}


@property (retain, nonatomic) NSMutableArray *animationCompletionBlocks; // ivar: _animationCompletionBlocks
@property (retain, nonatomic) NSTimer *animationTimer; // ivar: _animationTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CAGradientLayer *gradientLayer; // ivar: _gradientLayer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBUILegibilityLabel *label; // ivar: _label
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text


-(CGFloat)baselineOffset;
-(id)_callToActionFont;
-(id)_fontWithTextStyle:(id)arg0 symbolicTraits:(unsigned int)arg1 withMaximumFontSizeCategory:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_actuallyRunGradientAnimation;
-(void)_addAnimationCompletionBlockIfNecessary:(id)arg0 ;
-(void)_createGradientLayer;
-(void)_createLabel;
-(void)_executePostAnimationCompletionBlocks;
-(void)_invalidateGradientAnimationTimer;
-(void)_preferredTextSizeChanged:(id)arg0 ;
-(void)_resetGradientAndLabelBefore:(BOOL)arg0 ;
-(void)_runFadeAnimationForFadingOut:(BOOL)arg0 duration:(CGFloat)arg1 completion:(id)arg2 ;
-(void)_runGradientAnimation:(BOOL)arg0 ;
-(void)_timerTriggered;
-(void)_updateLabelTextWithLanguage:(id)arg0 ;
-(void)animationDidStart:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)cancelFadeInTimerIfNecessary;
-(void)didMoveToSuperview;
-(void)fadeIn;
-(void)fadeInImmediately:(BOOL)arg0 ;
-(void)fadeInImmediately:(BOOL)arg0 completion:(id)arg1 ;
-(void)fadeOut;
-(void)fadeOutWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)layoutSubviews;
-(void)setVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)sizeToFit;


@end


#endif