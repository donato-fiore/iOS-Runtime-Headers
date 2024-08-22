// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKANALOGHANDFACTORY_H
#define NTKANALOGHANDFACTORY_H


#import <Foundation/Foundation.h>


@interface NTKAnalogHandFactory : NSObject



+(id)_createHandImageWithSize:(struct CGSize )arg0 paths:(id)arg1 colors:(id)arg2 ;
+(id)_createMaskedShadowImageFromShadow:(id)arg0 size:(struct CGSize )arg1 maskPath:(struct CGPath *)arg2 radius:(CGFloat)arg3 opacity:(CGFloat)arg4 ;
+(id)_createShadowImageSize:(struct CGSize )arg0 path:(struct CGPath *)arg1 radius:(CGFloat)arg2 opacity:(CGFloat)arg3 ;
+(id)_getDropShadowImageWithConfiguration:(id)arg0 ;
+(id)_getHandImageWithConfiguration:(id)arg0 ;
+(id)_getMaskedDropShadowImageWithConfiguration:(id)arg0 shadowImage:(id)arg1 ;
+(id)_getRadialShadowImageWithConfiguration:(id)arg0 ;
+(id)_getShadowImageWithConfiguration:(id)arg0 radius:(CGFloat)arg1 opacity:(CGFloat)arg2 key:(id)arg3 ;
+(id)_renderQueue;
+(id)getAssets:(NSUInteger)arg0 forConfiguration:(id)arg1 ;
+(struct CGPath *)newPathForHourMinuteWithConfiguration:(id)arg0 inset:(CGFloat)arg1 includePeg:(BOOL)arg2 ;
+(struct CGPath *)newPathForPeg:(id)arg0 inset:(CGFloat)arg1 ;
+(struct CGPath *)newPathForSecondWithConfiguration:(id)arg0 inset:(CGFloat)arg1 ;
+(struct CGPath *)newPathWithConfiguration:(id)arg0 ;


@end


#endif