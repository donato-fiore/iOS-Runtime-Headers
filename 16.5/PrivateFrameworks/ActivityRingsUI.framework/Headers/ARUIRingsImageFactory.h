// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARUIRINGSIMAGEFACTORY_H
#define ARUIRINGSIMAGEFACTORY_H


#import <Foundation/Foundation.h>


@interface ARUIRingsImageFactory : NSObject



+(id)_renderRingsUsingRingsView:(id)arg0 withDiameter:(CGFloat)arg1 thickness:(CGFloat)arg2 interspacing:(CGFloat)arg3 ;
+(id)renderRingGroup:(id)arg0 withRenderer:(id)arg1 ;
+(id)renderRingGroupController:(id)arg0 withBackgroundColor:(id)arg1 andRenderer:(id)arg2 ;
+(id)renderRingGroupController:(id)arg0 withRenderer:(id)arg1 ;
+(id)renderRingsUsingRingsView:(id)arg0 forMovePercentage:(CGFloat)arg1 exercisePercentage:(CGFloat)arg2 standPercentage:(CGFloat)arg3 withDiameter:(CGFloat)arg4 thickness:(CGFloat)arg5 interspacing:(CGFloat)arg6 ;
+(id)renderRingsWithBackgroundColor:(id)arg0 usingRingsView:(id)arg1 forMovePercentage:(CGFloat)arg2 exercisePercentage:(CGFloat)arg3 standPercentage:(CGFloat)arg4 withDiameter:(CGFloat)arg5 thickness:(CGFloat)arg6 interspacing:(CGFloat)arg7 ;
+(id)renderSingleRingUsingRingsView:(id)arg0 forPercentage:(CGFloat)arg1 withDiameter:(CGFloat)arg2 thickness:(CGFloat)arg3 topColor:(id)arg4 bottomColor:(id)arg5 ;
+(void)renderRingsUsingRingsView:(id)arg0 forMovePercentage:(CGFloat)arg1 exercisePercentage:(CGFloat)arg2 standPercentage:(CGFloat)arg3 withDiameter:(CGFloat)arg4 thickness:(CGFloat)arg5 interspacing:(CGFloat)arg6 inRect:(struct CGRect )arg7 ;


@end


#endif