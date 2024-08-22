// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKWIDGETCONTENTKENBURNSEFFECT_H
#define OKWIDGETCONTENTKENBURNSEFFECT_H

@class CABasicAnimation, NSString;
@protocol CAAnimationDelegate;


#import "OKWidgetContentEffect.h"
#import "OKPanGenerator.h"

@interface OKWidgetContentKenburnsEffect : OKWidgetContentEffect <CAAnimationDelegate>

 {
    OKPanGenerator *_panGenerator;
    CABasicAnimation *_translationXAnimation;
    CABasicAnimation *_translationYAnimation;
    CABasicAnimation *_scaleAnimation;
    CGFloat _fromScale;
    CGFloat _toScale;
    CGFloat _fromX;
    CGFloat _toX;
    CGFloat _fromY;
    CGFloat _toY;
    CGFloat _panningCropThreshold;
    CGFloat _beginTime;
    NSString *_timingFunction;
    CGFloat _speedMitigator;
    CGFloat _durationPadding;
    CGFloat _panningAmount;
    BOOL _animationIsUnderway;
    CGFloat _animationProgressAtStateChange;
    CGFloat _animationResumeTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)supportedSettings;
-(CGFloat)_fullDuration;
-(CGFloat)remainingPlayDuration;
-(float)_croppedFractionforRectAspectRatio:(float)arg0 photoAspectRatio:(float)arg1 ;
-(id)settingObjectForKey:(id)arg0 ;
-(void)_applyGeometryForStart:(BOOL)arg0 ;
-(void)_setupAnimation;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)applySettings;
-(void)dealloc;
-(void)pauseAnimation;
-(void)prepareContentEffectWithView:(id)arg0 ;
-(void)resumeAnimation;
-(void)setDefaultDuration:(CGFloat)arg0 ;
-(void)startAnimation;
-(void)stopAnimation;


@end


#endif