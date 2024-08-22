// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NORMALIZATION_H
#define NORMALIZATION_H

@protocol MTLComputePipelineState;


#import "FRCMetalBase.h"

@interface Normalization : FRCMetalBase {
    id<MTLComputePipelineState> *_statisticsPlanarKernel;
    id<MTLComputePipelineState> *_statisticsPackedKernel;
    id<MTLComputePipelineState> *_normalizePlanarToPlanarKernel;
    id<MTLComputePipelineState> *_normalizePackedToPlanarKernel;
    id<MTLComputePipelineState> *_denormalizeToPlanarKernel;
    id<MTLComputePipelineState> *_denormalizeKernel;
    BOOL _useSIMDSum;
}


@property (nonatomic) BOOL selfNormalization; // ivar: _selfNormalization


-(id)init;
-(struct ? )calcAnchorParamsFromNormParams:(struct ? )arg0 anchor:(int)arg1 ;
-(struct ? )calcDeNormParamsFromNormaParams:(struct ? )arg0 timeScale:(float)arg1 ;
-(struct ? )calcFrameStatistics:(struct __CVBuffer *)arg0 ;
-(struct ? )calcTextureStatistics:(id)arg0 ;
-(struct ? )normalizeFramesFirstInput:(struct __CVBuffer *)arg0 secondInput:(struct __CVBuffer *)arg1 firstOutput:(struct __CVBuffer *)arg2 secondOutput:(struct __CVBuffer *)arg3 callback:(id)arg4 ;
-(void)denormalizeFrame:(struct __CVBuffer *)arg0 destination:(struct __CVBuffer *)arg1 params:(struct ? *)arg2 timeScale:(float)arg3 callback:(id)arg4 ;
-(void)encodeDenormalizationToCommandBuffer:(id)arg0 source:(id)arg1 destination:(id)arg2 params:(struct ? )arg3 ;
-(void)encodeNormalizationToCommandBuffer:(id)arg0 source:(id)arg1 destination:(id)arg2 params:(struct ? )arg3 ;
-(void)normalizeWithParmas:(struct ? )arg0 firstInput:(struct __CVBuffer *)arg1 secondInput:(struct __CVBuffer *)arg2 firstOutput:(struct __CVBuffer *)arg3 secondOutput:(struct __CVBuffer *)arg4 ;
-(void)setupMetal;


@end


#endif