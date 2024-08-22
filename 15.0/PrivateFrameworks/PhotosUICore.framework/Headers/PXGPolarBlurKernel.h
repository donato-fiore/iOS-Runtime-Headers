// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGPOLARBLURKERNEL_H
#define PXGPOLARBLURKERNEL_H



#import "PXGKernel.h"

@interface PXGPolarBlurKernel : PXGKernel

@property (nonatomic) CGFloat rotationAngle; // ivar: _rotationAngle
@property (nonatomic) CGFloat scaleFactor; // ivar: _scaleFactor


-(BOOL)_encodePolarBlur:(int)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 params:(*void)arg3 length:(NSUInteger)arg4 commandBuffer:(id)arg5 ;
-(id)init;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 targetScale:(CGFloat)arg3 ;


@end


#endif