// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PYRAMID_H
#define PYRAMID_H

@protocol MTLComputePipelineState, MTLBuffer;


#import "FRCMetalBase.h"

@interface Pyramid : FRCMetalBase {
    id<MTLComputePipelineState> *_subsampleKernel;
    id<MTLComputePipelineState> *_residueKernel;
    id<MTLComputePipelineState> *_residueInplaceKernel;
    id<MTLComputePipelineState> *_shuffleConcatenateKernel;
    id<MTLComputePipelineState> *_gaussianSubsampleKernel;
    id<MTLComputePipelineState> *_blendKernel;
    id<MTLComputePipelineState> *_featureBackwarpKernel;
    id<MTLBuffer> *_gaussianCoefficientBuffer;
}




-(?)createResiduePyramidFromBuffer:(?)arg0 toBufferlevels;
-(id)initWithDevice:(id)arg0 commmandQueue:(id)arg1 ;
-(void)blendWarpedResidueForward:(struct __CVBuffer *)arg0 backward:(struct __CVBuffer *)arg1 withGridNetOutput:(struct __CVBuffer *)arg2 destination:(struct __CVBuffer *)arg3 callback:(id)arg4 ;
-(void)encodeFeatureBackwarpToCommandBuffer:(id)arg0 feature:(id)arg1 forwardFlow:(id)arg2 backwardFlow:(id)arg3 timeScale:(float)arg4 destination:(id)arg5 ;
-(void)encodeLayerBlendToCommandBuffer:(id)arg0 forwardResidue:(id)arg1 backwardResidue:(id)arg2 withBaseLayer:(id)arg3 destination:(id)arg4 ;
-(void)encodeResidueInplaceToCommandBuffer:(id)arg0 base:(id)arg1 low:(id)arg2 ;
-(void)encodeResiduePyramidToCommandBuffer:(id)arg0 fromTexture:(id)arg1 toTexture:(*id)arg2 levels:(NSUInteger)arg3 ;
-(void)encodeResidueToCommandBuffer:(id)arg0 base:(id)arg1 low:(id)arg2 destination:(id)arg3 ;
-(void)encodeShuffleToCommandBuffer:(id)arg0 full:(id)arg1 quarter:(id)arg2 destination:(id)arg3 ;
-(void)encodeSubsampleTextureToCommandBuffer:(id)arg0 source:(id)arg1 destination:(id)arg2 clampToEdge:(BOOL)arg3 ;


@end


#endif