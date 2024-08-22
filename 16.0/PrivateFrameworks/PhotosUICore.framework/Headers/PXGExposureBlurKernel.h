// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGEXPOSUREBLURKERNEL_H
#define PXGEXPOSUREBLURKERNEL_H



#import "PXGKernel.h"

@interface PXGExposureBlurKernel : PXGKernel

@property (nonatomic) CGFloat exposure; // ivar: _exposure
@property (nonatomic) CGFloat radius; // ivar: _radius


+(id)_exposurePipelineStateForDevice:(id)arg0 ;
-(void)_encodeExposure:(float)arg0 texture:(id)arg1 toCommandBuffer:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 targetScale:(CGFloat)arg3 ;
-(void)preloadWithDevice:(id)arg0 ;


@end


#endif