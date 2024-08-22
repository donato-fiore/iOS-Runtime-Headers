// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FORWARP_H
#define FORWARP_H

@protocol MTLComputePipelineState, MTLBuffer;


#import "FRCMetalBase.h"

@interface Forwarp : FRCMetalBase {
    id<MTLComputePipelineState> *_updateBest;
    id<MTLComputePipelineState> *_updateOutputFullWarp;
    id<MTLComputePipelineState> *_updateOutputLiteWarp;
    id<MTLComputePipelineState> *_convert2Texture;
    id<MTLComputePipelineState> *_initializeBest;
    id<MTLComputePipelineState> *_blendWarpedImages;
    id<MTLComputePipelineState> *_blendWarpedImagesWithMaskTextures;
    id<MTLComputePipelineState> *_convert2TextureWithMask;
    id<MTLComputePipelineState> *_errorMapDilation;
    BOOL _supportsSIMDShuffle;
    id<MTLComputePipelineState> *_blendWarpedImagesWithSubsampledMaskTextures;
    id<MTLComputePipelineState> *_blendDCTexturesWithMasks;
    id<MTLComputePipelineState> *_gaussian3x3FilterKernel;
    id<MTLComputePipelineState> *_gaussian3x3FilterSIMDKernel;
    id<MTLBuffer> *_gaussian3x3CoefficientBuffer;
    id<MTLComputePipelineState> *_splattingKernel;
    id<MTLComputePipelineState> *_splattingNormalizationKernel;
    id<MTLComputePipelineState> *_errorMapDownsampleKernel;
}


@property (nonatomic) BOOL createOcclusionMask; // ivar: _createOcclusionMask
@property (nonatomic) float errorTolerance; // ivar: _errorTolerance
@property (readonly, nonatomic) BOOL filterErrorMapByGaussian; // ivar: _filterErrorMapByGaussian
@property (nonatomic) BOOL isLiteSynthesis; // ivar: _isLiteSynthesis
@property (nonatomic) BOOL linearSplatting; // ivar: _linearSplatting


-(BOOL)setupMetal;
-(id)createBestBufferWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(id)createOutputBufferWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 channels:(NSUInteger)arg2 ;
-(id)initWithDevice:(id)arg0 commmandQueue:(id)arg1 isLiteSynthesis:(BOOL)arg2 ;
-(void)allocateBuffersWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 channels:(NSUInteger)arg2 bestBuffer:(*id)arg3 outputBuffer:(*id)arg4 ;
-(void)dealloc;
-(void)encodeBlendTexturesToCommandBuffer:(id)arg0 firstWarpedTexture:(id)arg1 secondWarpedTexture:(id)arg2 forwardErrorMap:(id)arg3 backwardErrorMap:(id)arg4 synthesizedTexture:(id)arg5 timeScale:(float)arg6 synthesizedImageWeight:(float)arg7 destination:(id)arg8 ;
-(void)encodeBlendWarpedFeaturesWithErrorMaskToCommandBuffer:(id)arg0 first:(id)arg1 second:(id)arg2 forwardErrorMap:(id)arg3 backwardErrorMap:(id)arg4 timeScale:(float)arg5 destination:(id)arg6 ;
-(void)encodeBlendWarpedFeaturesWithErrorMaskToCommandBuffer:(id)arg0 first:(id)arg1 second:(id)arg2 timeScale:(float)arg3 destination:(id)arg4 ;
-(void)encodeErrorDownsampleToCommandBuffer:(id)arg0 source:(id)arg1 destination:(id)arg2 ;
-(void)encodeErrorMapDilationToCommandBuffer:(id)arg0 forwardSource:(id)arg1 backwardSource:(id)arg2 forwardDestination:(id)arg3 backwardDestination:(id)arg4 minimumAdjacentHoleCount:(unsigned int)arg5 maximumHoleValue:(float)arg6 ;
-(void)encodeErrorMapFilteringToCommandBuffer:(id)arg0 source:(id)arg1 destination:(id)arg2 ;
-(void)encodeErrorMapFilteringWithGaussianToCommandBuffer:(id)arg0 source:(id)arg1 destination:(id)arg2 ;
-(void)encodeInitialieBestToCommandBuffer:(id)arg0 bestError:(id)arg1 ;
-(void)encodeLinearSplattingToCommandBuffer:(id)arg0 input:(id)arg1 flow:(id)arg2 error:(id)arg3 splatBuffer:(id)arg4 outputTexture:(id)arg5 timeScale:(float)arg6 ;
-(void)encodeNormalizationToCommandBuffer:(id)arg0 fromBuffer:(id)arg1 toTexture:(id)arg2 inputSize:(struct ? )arg3 ;
-(void)encodeSplattingNormalizationToCommandBuffer:(id)arg0 splattingBuffer:(id)arg1 outputTexture:(id)arg2 ;
-(void)encodeSplattingToCommandBuffer:(id)arg0 input:(id)arg1 flow:(id)arg2 error:(id)arg3 outputBuffer:(id)arg4 timeScale:(float)arg5 ;
-(void)encodeToCommandBuffer:(id)arg0 input:(id)arg1 flow:(id)arg2 error:(id)arg3 timeScale:(float)arg4 fullWarp:(BOOL)arg5 bestError:(id)arg6 output:(id)arg7 destination:(id)arg8 ;
-(void)encodeToCommandBuffer:(id)arg0 input:(id)arg1 flow:(id)arg2 error:(id)arg3 timeScale:(float)arg4 fullWarp:(BOOL)arg5 bestError:(id)arg6 outputBuffer:(id)arg7 ;
-(void)encodeUpdateBestToCommandBuffer:(id)arg0 flow:(id)arg1 error:(id)arg2 timeScale:(float)arg3 bestError:(id)arg4 ;
-(void)encodeUpdateOutputToCommandBuffer:(id)arg0 input:(id)arg1 flow:(id)arg2 error:(id)arg3 timeScale:(float)arg4 fullWarp:(BOOL)arg5 bestError:(id)arg6 output:(id)arg7 ;
-(void)updateBest:(id)arg0 error:(id)arg1 timeScale:(float)arg2 best:(id)arg3 ;
-(void)updateOutput:(id)arg0 flow:(id)arg1 error:(id)arg2 timeScale:(float)arg3 fullWarp:(BOOL)arg4 bestError:(id)arg5 output:(id)arg6 ;


@end


#endif