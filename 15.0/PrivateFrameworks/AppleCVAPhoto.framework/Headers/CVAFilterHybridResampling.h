// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVAFILTERHYBRIDRESAMPLING_H
#define CVAFILTERHYBRIDRESAMPLING_H

@class NSString, MPSImageLanczosScale;
@protocol MTLDeviceSPI, MTLTexture, MTLResourceGroupSPI, MTLComputePipelineState;


#import "ImageSaverRegistrator.h"

@interface CVAFilterHybridResampling : ImageSaverRegistrator {
    id<MTLDeviceSPI> *_device;
    id<MTLTexture> *_hybridDownsamplingIntermediateTexture;
    id<MTLTexture> *_hybridDownsamplingIntermediateR32Texture;
    id<MTLTexture> *_hybridDownsamplingIntermediateR16Texture;
    id<MTLTexture> *_hybridDownsamplingIntermediateR8Texture;
    id<MTLResourceGroupSPI> *_intermediateTextureResourceGroup;
    id<MTLComputePipelineState> *_doubleUpsampler;
    id<MTLComputePipelineState> *_halfDownSampler;
    id<MTLComputePipelineState> *_linearResampler;
    id<MTLComputePipelineState> *_doubleUpsamplerOneComponent;
    id<MTLComputePipelineState> *_halfDownSamplerOneComponent;
    id<MTLComputePipelineState> *_linearResamplerOneComponent;
}


@property (readonly) NSString *label; // ivar: _label
@property (readonly) MPSImageLanczosScale *scaler; // ivar: _scaler


+(void)prewarmScaler:(id)arg0 device:(id)arg1 commandBuffer:(id)arg2 ;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 commandQueue:(id)arg3 error:(*id)arg4 ;
-(void)encodeBilinearScalingToCommandBuffer:(id)arg0 source:(id)arg1 destination:(id)arg2 mode:(NSInteger)arg3 ;
-(void)encodeHybridDownsamplingToCommandBuffer:(id)arg0 source:(id)arg1 destination:(id)arg2 ;


@end


#endif