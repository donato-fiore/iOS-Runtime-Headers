// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTGUIDEDFILTER_H
#define PTGUIDEDFILTER_H

@protocol MTLComputePipelineState, MTLTexture;

#import <Foundation/Foundation.h>

#import "PTMTLDropHints.h"
#import "PTRaytracingUtilsV2.h"
#import "PTUtil.h"

@interface PTGuidedFilter : NSObject {
    id<MTLComputePipelineState> *_computeWeightedUpsamplingCoefficients;
    id<MTLComputePipelineState> *_computeUpsamplingCoefficients;
    id<MTLComputePipelineState> *_averageUpsamplingCoefficients;
    id<MTLComputePipelineState> *_applyUpsamplingCoefficients;
    id<MTLTexture> *_coeffTexture;
    id<MTLTexture> *_edges;
    id<MTLTexture> *_coeffAveragedTexture;
    id<MTLTexture> *_upscaledTexture;
    PTMTLDropHints *_textureDropHints;
    PTRaytracingUtilsV2 *_utils;
    PTUtil *_u;
    BOOL _useWeightedSampling;
    float _edgeTolerance;
    BOOL _useHighresGuideForComputingCoefficients;
    BOOL _skipBoxFilter;
}




-(id)edges;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 imageSize:(struct ? )arg3 scale:(float)arg4 epsilon:(float)arg5 ;
-(id)upscaledTexture;
-(int)guidedFilter:(id)arg0 image:(id)arg1 guideRGBACoefficients:(id)arg2 guideRGBAUpscale:(id)arg3 sourceColorBitDepth:(int)arg4 ;
-(void)applyUpsamplingCoefficients:(id)arg0 guideTexture:(id)arg1 coeffTexture:(id)arg2 upsampledTexture:(id)arg3 guideMultiplier:(float)arg4 ;
-(void)averageUpsamplingCoefficients:(id)arg0 coeffTexture:(id)arg1 coeffAveragedTexture:(id)arg2 ;
-(void)computeUpsamplingCoefficients:(id)arg0 guideTexture:(id)arg1 imageTexture:(id)arg2 coeffTexture:(id)arg3 weights:(id)arg4 guideMultiplier:(float)arg5 ;


@end


#endif