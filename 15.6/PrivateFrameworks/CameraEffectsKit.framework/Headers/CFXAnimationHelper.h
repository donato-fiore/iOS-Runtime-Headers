// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CFXANIMATIONHELPER_H
#define CFXANIMATIONHELPER_H


#import <Foundation/Foundation.h>


@interface CFXAnimationHelper : NSObject



+(CGFloat)_highlightScaleForLayoutStyle:(NSInteger)arg0 ;
+(id)_animationWithKeyPath:(id)arg0 ;
+(void)animateLayer:(id)arg0 forButtonHighlighted:(BOOL)arg1 layoutStyle:(NSInteger)arg2 ;
+(void)animateLayer:(id)arg0 toFrame:(struct CGRect )arg1 fromCurrentState:(BOOL)arg2 ;
+(void)configurePowerSensitiveAnimation:(id)arg0 ;


@end


#endif