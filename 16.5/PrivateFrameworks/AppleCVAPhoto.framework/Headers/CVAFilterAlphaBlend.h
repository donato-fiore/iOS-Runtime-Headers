// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVAFILTERALPHABLEND_H
#define CVAFILTERALPHABLEND_H

@protocol MTLDeviceSPI, MTLLibrary, MTLCommandQueue, MTLPipelineLibrarySPI, MTLComputePipelineState, OS_dispatch_queue, OS_dispatch_semaphore;


#import "ImageSaverAndFileConfigRegistrator.h"

@interface CVAFilterAlphaBlend : ImageSaverAndFileConfigRegistrator {
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_library;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLPipelineLibrarySPI> *_pipelineLibrary;
    id<MTLComputePipelineState> *_alphaBlend_Kernel;
    NSObject<OS_dispatch_queue> *_synchronousRenderingCallbackQueue;
    NSObject<OS_dispatch_semaphore> *_renderingCallbackSemaphore;
}




-(id)initWithMetalContext:(*void)arg0 ;
-(struct pair<id<MTLTexture>, id<MTLTexture>> )getTexturePlanesFromPixelBuffer:(struct __CVBuffer *)arg0 usage:(NSUInteger)arg1 ;
-(void)alphaBlendPixelBuffer:(struct RetainPtr<__CVBuffer *> )arg0 inPixelBufferSecond:(struct RetainPtr<__CVBuffer *> )arg1 outPixelBuffer:(struct RetainPtr<__CVBuffer *> )arg2 alpha:(float)arg3 callbackQueue:(id)arg4 callback:(id)arg5 ;
-(void)encodeAlphaBlendToCommandBuffer:(id)arg0 inTexFirst:(id)arg1 inTexSecond:(id)arg2 outTex:(id)arg3 alpha:(float)arg4 ;


@end


#endif