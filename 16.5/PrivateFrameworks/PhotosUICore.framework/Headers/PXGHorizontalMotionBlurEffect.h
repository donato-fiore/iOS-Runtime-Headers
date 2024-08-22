// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGHORIZONTALMOTIONBLUREFFECT_H
#define PXGHORIZONTALMOTIONBLUREFFECT_H



#import "PXGMotionBlurEffect.h"
#import "PXGMotionBlurKernel.h"

@interface PXGHorizontalMotionBlurEffect : PXGMotionBlurEffect {
    PXGMotionBlurKernel *_motionBlur;
}




-(id)kernel;


@end


#endif