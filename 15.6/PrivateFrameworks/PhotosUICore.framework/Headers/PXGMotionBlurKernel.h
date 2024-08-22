// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGMOTIONBLURKERNEL_H
#define PXGMOTIONBLURKERNEL_H

@class MPSImageBox;


#import "PXGKernel.h"

@interface PXGMotionBlurKernel : PXGKernel {
    MPSImageBox *_boxKernel;
}


@property (nonatomic) NSInteger direction; // ivar: _direction
@property (nonatomic) CGFloat size; // ivar: _size


-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 targetScale:(CGFloat)arg3 ;
-(void)preloadWithDevice:(id)arg0 ;


@end


#endif