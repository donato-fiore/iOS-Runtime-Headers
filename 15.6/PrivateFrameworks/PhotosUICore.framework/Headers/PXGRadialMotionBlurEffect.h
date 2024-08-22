// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGRADIALMOTIONBLUREFFECT_H
#define PXGRADIALMOTIONBLUREFFECT_H



#import "PXGMotionBlurEffect.h"
#import "PXGPolarBlurKernel.h"

@interface PXGRadialMotionBlurEffect : PXGMotionBlurEffect {
    PXGPolarBlurKernel *_polarBlur;
}




-(id)kernel;


@end


#endif