// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARUIFLOATSPRINGANIMATION_H
#define ARUIFLOATSPRINGANIMATION_H

@class NSString;
@protocol ARUIRingGroupAnimation, ARUIRingGroupAnimationDelegate;

#import <Foundation/Foundation.h>

#import "_TtC15ActivityRingsUI15SpringAnimation.h"

@interface ARUIFloatSpringAnimation : NSObject <ARUIRingGroupAnimation>

 {
    id *_applier;
    BOOL _completed;
    _TtC15ActivityRingsUI15SpringAnimation *_springAnimation;
}


@property (readonly, nonatomic) float currentValue;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARUIRingGroupAnimationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) float endValue;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)animationWithTension:(CGFloat)arg0 friction:(CGFloat)arg1 startValue:(float)arg2 endValue:(float)arg3 applier:(id)arg4 ;
-(BOOL)isAnimating;
-(id)initWithTension:(CGFloat)arg0 friction:(CGFloat)arg1 startValue:(float)arg2 endValue:(float)arg3 applier:(id)arg4 ;
-(void)completeAnimation;
-(void)update:(CGFloat)arg0 ;


@end


#endif