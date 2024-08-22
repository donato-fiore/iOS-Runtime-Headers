// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVAFILTERDIFFUSION_H
#define CVAFILTERDIFFUSION_H

@protocol MTLDeviceSPI, MTLLibrary, MTLPipelineLibrarySPI, MTLTexture, MTLBuffer, MTLComputePipelineState, MTLResourceGroupSPI;


#import "ImageSaverRegistrator.h"

@interface CVAFilterDiffusion : ImageSaverRegistrator {
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_library;
    id<MTLPipelineLibrarySPI> *_pipelineLibrary;
    NSUInteger _width;
    NSUInteger _height;
    float _edgeVariance;
    id<MTLTexture> *_laplacian;
    id<MTLTexture> *_tmpOut16_0;
    id<MTLTexture> *_tmpOut16_1;
    id<MTLTexture> *_tmpOut32_0;
    id<MTLTexture> *_tmpOut32_1;
    id<MTLBuffer> *_davidConfigImmutable;
    id<MTLBuffer> *_edgeLaplacianConfigImmutable;
    id<MTLBuffer> *_jacobiConfigImmutable;
    id<MTLComputePipelineState> *_createEdgeLaplacianKernel;
    id<MTLComputePipelineState> *_createDiffusionMapLaplacianKernel;
    id<MTLComputePipelineState> *_laplacianJacobiKernel;
    id<MTLComputePipelineState> *_laplacianDavidKernel;
    id<MTLResourceGroupSPI> *_temporaryTextureGroup;
}




-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 bufferWidth:(NSUInteger)arg3 bufferHeight:(NSUInteger)arg4 edgeVariance:(float)arg5 stepSize:(float)arg6 error:(*id)arg7 ;
-(void)encodeDavidIterationToCommandBufferInternal:(id)arg0 priorTexture:(id)arg1 confidenceTexture:(id)arg2 sourceTexture:(id)arg3 destinationTexture:(id)arg4 ;
-(void)encodeDiffusionMapLaplacianToCommandBuffer:(id)arg0 diffusionMapTexture:(id)arg1 outputLaplacian:(id)arg2 ;
-(void)encodeEdgeLaplacianToCommandBuffer:(id)arg0 colorTexture:(id)arg1 outputLaplacian:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 priorTexture:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 diffusionMapTexture:(id)arg4 confidenceTexture:(id)arg5 iterations:(unsigned int)arg6 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 colorTexture:(id)arg3 iterations:(unsigned int)arg4 ;
-(void)encodeToCommandBufferInternal:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 ;


@end


#endif