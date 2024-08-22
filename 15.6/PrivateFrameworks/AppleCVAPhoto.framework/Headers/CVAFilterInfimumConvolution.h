// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVAFILTERINFIMUMCONVOLUTION_H
#define CVAFILTERINFIMUMCONVOLUTION_H

@protocol MTLDeviceSPI, MTLLibrary, MTLPipelineLibrarySPI, MTLTexture, MTLComputePipelineState, MTLResourceGroupSPI;


#import "ImageSaverRegistrator.h"

@interface CVAFilterInfimumConvolution : ImageSaverRegistrator {
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_library;
    id<MTLPipelineLibrarySPI> *_pipelineLibrary;
    NSUInteger _width;
    NSUInteger _height;
    id<MTLTexture> *_tmpBlurHalf;
    id<MTLTexture>" _tmpOutHalf;
    id<MTLComputePipelineState> *_infimumKernel;
    id<MTLComputePipelineState> *_infimumConvolutionKernel;
    id<MTLResourceGroupSPI> *_tmpTextureGroup;
}




-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 bufferWidth:(NSUInteger)arg3 bufferHeight:(NSUInteger)arg4 error:(*id)arg5 ;
-(void)encodeInfimumToCommandBufferInternal:(id)arg0 sourceTexture:(id)arg1 smallSourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 smallSourceTexture:(id)arg2 destinationTexture:(id)arg3 orientation:(float)arg4 majorRadius:(float)arg5 minorRadius:(float)arg6 iterations:(unsigned int)arg7 ;
-(void)encodeToCommandBufferInternal:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 config:(struct InfimumConvolutionConfig )arg3 ;


@end


#endif