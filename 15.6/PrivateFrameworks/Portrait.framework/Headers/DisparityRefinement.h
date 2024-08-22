// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DISPARITYREFINEMENT_H
#define DISPARITYREFINEMENT_H

@protocol MTLDeviceSPI, MTLLibrary, MTLComputePipelineState;

#import <Foundation/Foundation.h>

#import "PTUtil.h"

@interface DisparityRefinement : NSObject {
    PTUtil *_portraitUtil;
    BOOL _shadersLoaded;
    CGSize _disparitySize;
    CGSize _colorSize;
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_library;
    id<MTLComputePipelineState> *_calcWeightsX_kernel;
    id<MTLComputePipelineState> *_calcWeightsY_kernel;
    id<MTLComputePipelineState> *_preprocessing_kernel;
    id<MTLComputePipelineState> *_sample_kernel;
    id<MTLComputePipelineState> *_antialias_kernel;
    id<MTLComputePipelineState> *_passthrough_kernel;
    disparity_refinement_params _config_params;
}




-(id)initWithDevice:(id)arg0 library:(id)arg1 colorSize:(struct CGSize )arg2 disparitySize:(struct CGSize )arg3 debugRendering:(NSInteger)arg4 verbose:(BOOL)arg5 gpuProfiling:(BOOL)arg6 config:(id)arg7 ;
-(int)enqueueAntiAliasingWithResources:(id)arg0 commandBuffer:(id)arg1 inputSlmParams:(id)arg2 outputBlurMap:(id)arg3 ;
-(int)enqueuePassthroughWithInputDisparity:(id)arg0 commandBuffer:(id)arg1 inputSlmParams:(id)arg2 outputBlurMap:(id)arg3 ;
-(int)enqueuePreprocessingWithResources:(id)arg0 commandBuffer:(id)arg1 inputSegmentation:(id)arg2 inputImageLuma:(id)arg3 inputImageChroma:(id)arg4 ;
-(int)enqueueRefinementUsingResources:(id)arg0 disparityRefinementParams:(struct disparity_refinement_params *)arg1 commandBuffer:(id)arg2 inputDisparity:(id)arg3 inputSegmentation:(id)arg4 inputImageLuma:(id)arg5 inputImageChroma:(id)arg6 inputSlmParams:(id)arg7 ;
-(int)enqueueSamplingWithResources:(id)arg0 commandBuffer:(id)arg1 ;
-(int)enqueueWeightsCalcWithResources:(id)arg0 commandBuffer:(id)arg1 inputDisparity:(id)arg2 ;
-(int)loadShadersWithLibrary:(id)arg0 ;
-(int)setOptions:(struct disparity_refinement_params *)arg0 isPrewarm:(BOOL)arg1 ;
-(int)validateInputsWithResources:(id)arg0 inputDisparity:(id)arg1 inputSegmentation:(id)arg2 inputImageLuma:(id)arg3 inputImageChroma:(id)arg4 inputSlmParams:(id)arg5 outputBlurMap:(id)arg6 ;
-(void)constAddFp16:(id)arg0 name:(id)arg1 value:(float)arg2 ;
-(void)constAddFp16asUInt16:(id)arg0 name:(id)arg1 value:(float)arg2 ;
-(void)constAddFp16x4:(id)arg0 name:(id)arg1 value:(*float)arg2 ;
-(void)constAddFp16x4asUInt16x4:(id)arg0 name:(id)arg1 value:(*float)arg2 ;
-(void)constAddUint16:(id)arg0 name:(id)arg1 value:(unsigned short)arg2 ;
-(void)dealloc;


@end


#endif