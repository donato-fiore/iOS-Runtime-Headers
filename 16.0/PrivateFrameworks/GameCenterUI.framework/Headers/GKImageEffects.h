// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKIMAGEEFFECTS_H
#define GKIMAGEEFFECTS_H


#import <Foundation/Foundation.h>


@interface GKImageEffects : NSObject



+(id)imageByApplyingBlurToImage:(id)arg0 withRadius:(CGFloat)arg1 tintColor:(id)arg2 saturationDeltaFactor:(CGFloat)arg3 maskImage:(id)arg4 ;
+(id)imageByApplyingDarkEffectToImage:(id)arg0 ;
+(id)imageByApplyingExtraLightEffectToImage:(id)arg0 ;
+(id)imageByApplyingLightEffectToImage:(id)arg0 ;
+(id)imageByApplyingTintEffectWithColor:(id)arg0 toImage:(id)arg1 ;


@end


#endif