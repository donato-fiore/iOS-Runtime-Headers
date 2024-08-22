// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BACKWARP_H
#define BACKWARP_H

@protocol MTLDevice, MTLCommandQueue, MTLLibrary, MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface Backwarp : NSObject {
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLLibrary> *_mtlLibrary;
    id<MTLComputePipelineState> *_backwarpKernel;
    id<MTLComputePipelineState> *_backwarpLossKernel;
    id<MTLComputePipelineState> *_flowUpscaleKernel;
    id<MTLComputePipelineState> *_backwarpLossWithFlowMagnitudeKernel;
    id<MTLComputePipelineState> *_subsampleFlowKernel;
    id<MTLComputePipelineState> *_subsampleErrorKernel;
    id<MTLComputePipelineState> *_upscaleErrorKernel;
    id<MTLComputePipelineState> *_subsampleInputKernel;
    id<MTLComputePipelineState> *_padTextureKernel;
    id<MTLComputePipelineState> *_reverseFlowKernel;
    id<MTLComputePipelineState> *_flowSplattingWarpKernel;
    BOOL _interleaved;
}




-(id)initWithDevice:(id)arg0 interleaved:(BOOL)arg1 ;
-(void)calcBackwarpLoss:(id)arg0 second:(id)arg1 flow:(id)arg2 timeScale:(float)arg3 destination:(id)arg4 ;
-(void)copyTextureWithPaddingSource:(id)arg0 destination:(id)arg1 ;
-(void)dealloc;
-(void)encodeBackwarpLossToCommandBuffer:(id)arg0 first:(id)arg1 second:(id)arg2 flow:(id)arg3 timeScale:(float)arg4 destination:(id)arg5 ;
-(void)encodeBackwarpLossWithFlowMagnitudeToCommandBuffer:(id)arg0 first:(id)arg1 second:(id)arg2 flow:(id)arg3 timeScale:(float)arg4 gamma:(float)arg5 destination:(id)arg6 ;
-(void)encodeFlowSplattingWarpToCommandBuffer:(id)arg0 source:(id)arg1 flow:(id)arg2 timeScale:(float)arg3 destination:(id)arg4 ;
-(void)encodePaddingTextureToCommandBuffer:(id)arg0 source:(id)arg1 destination:(id)arg2 ;
-(void)encodeReverseFlowToCommandBuffer:(id)arg0 source:(id)arg1 destination:(id)arg2 ;
-(void)encodeSubsampleErrorToCommandBuffer:(id)arg0 source:(id)arg1 destination:(id)arg2 ;
-(void)encodeSubsampleFlowToCommandBuffer:(id)arg0 source:(id)arg1 destination:(id)arg2 ;
-(void)encodeSubsampleInputToCommandBufferr:(id)arg0 source:(id)arg1 destination:(id)arg2 ;
-(void)encodeSubsampleToCommandBufferr:(id)arg0 source:(id)arg1 destination:(id)arg2 kernel:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 source:(id)arg1 flow:(id)arg2 destination:(id)arg3 upscaledFlow:(id)arg4 ;
-(void)encodeUpscaleErrorToCommandBuffer:(id)arg0 source:(id)arg1 destination:(id)arg2 ;
-(void)encodeUpscaleFlowToCommandBuffer:(id)arg0 source:(id)arg1 destination:(id)arg2 ;
-(void)reverseFlowWithSource:(id)arg0 destination:(id)arg1 ;
-(void)setupMetal;
-(void)upscaleFlow:(id)arg0 destination:(id)arg1 ;
-(void)warpImage:(id)arg0 to:(id)arg1 withFlow:(id)arg2 upscaledFlow:(id)arg3 ;


@end


#endif