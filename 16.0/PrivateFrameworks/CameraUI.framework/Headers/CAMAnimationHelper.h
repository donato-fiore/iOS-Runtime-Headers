// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMANIMATIONHELPER_H
#define CAMANIMATIONHELPER_H


#import <Foundation/Foundation.h>


@interface CAMAnimationHelper : NSObject



+(CGFloat)highlightScaleForLayoutStyle:(NSInteger)arg0 ;
+(id)_animationWithKeyPath:(id)arg0 ;
+(id)highlightTransformAnimation;
+(void)animateLayer:(id)arg0 forButtonHighlighted:(BOOL)arg1 layoutStyle:(NSInteger)arg2 ;
+(void)animateLayer:(id)arg0 toFrame:(struct CGRect )arg1 fromCurrentState:(BOOL)arg2 ;
+(void)configurePowerSensitiveAnimation:(id)arg0 ;
+(void)setLayer:(id)arg0 highlighted:(BOOL)arg1 animated:(BOOL)arg2 layoutStyle:(NSInteger)arg3 ;


@end


#endif