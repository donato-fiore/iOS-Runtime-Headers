// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLPULAYERANIMATION_H
#define QLPULAYERANIMATION_H

@class CAAnimation, NSString, CALayer;
@protocol CAAnimationDelegate;


#import "QLPUAnimationGroup.h"

@interface QLPULayerAnimation : QLPUAnimationGroup <CAAnimationDelegate>

 {
    float _speed;
    CGFloat _timeOffset;
    CGFloat _beginTime;
    BOOL _isAnimationRunning;
}


@property (retain, nonatomic, setter=_setAnimation:) CAAnimation *_animation; // ivar: __animation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) CALayer *layer; // ivar: _layer
@property (readonly) Class superclass;


-(BOOL)isReadyToComplete;
-(id)init;
-(id)initWithLayer:(id)arg0 key:(id)arg1 ;
-(void)_updateLayerAnimation;
-(void)animationDidStart:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)finishImmediately;
-(void)setSpeed:(float)arg0 timeOffset:(CGFloat)arg1 beginTime:(CGFloat)arg2 ;


@end


#endif