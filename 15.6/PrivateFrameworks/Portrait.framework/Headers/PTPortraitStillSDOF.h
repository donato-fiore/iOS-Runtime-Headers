// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTPORTRAITSTILLSDOF_H
#define PTPORTRAITSTILLSDOF_H

@class NSString;
@protocol RenderingIntegration, MTLComputePipelineState, MTLDeviceSPI, MTLLibrary, MTLBuffer, MTLTexture;

#import <Foundation/Foundation.h>

#import "PTPortraitStillSDOFRenderState.h"
#import "PTColor.h"
#import "PTRenderDebugLayer.h"
#import "BlurMapSmoothing.h"
#import "SDOFResources.h"
#import "DisparityRefinement.h"

@interface PTPortraitStillSDOF : NSObject <RenderingIntegration>

 {
    PTPortraitStillSDOFRenderState *renderState;
    PTColor *_portraitColor;
    PTRenderDebugLayer *_debugLayer;
    NSInteger _debugRendering;
    id<MTLComputePipelineState> *_singlePassSDOF;
    id<MTLComputePipelineState> *_singlePassSDOF_RGBA;
    id<MTLComputePipelineState> *_makeBlurmap;
    id<MTLComputePipelineState> *_makeSignedBlurmap;
    id<MTLComputePipelineState> *_preprocess;
    id<MTLComputePipelineState> *_preprocessHalf;
    id<MTLComputePipelineState> *_preprocessScaled;
    id<MTLComputePipelineState> *_sparseSamplingNoAlpha;
    id<MTLComputePipelineState> *_sparserendering_sample_noAlphaSignedBlurmap;
    id<MTLComputePipelineState> *_sparseSamplingPreFilterX;
    id<MTLComputePipelineState> *_sparseSamplingPreFilterY;
    id<MTLComputePipelineState> *_sparseSamplingAntialiasX;
    id<MTLComputePipelineState> *_sparseSamplingAntialiasY;
    id<MTLComputePipelineState> *_sparseSamplingAntialiasXSignedBlurmap;
    id<MTLComputePipelineState> *_sparseSamplingAntialiasYSignedBlurmap;
    id<MTLComputePipelineState> *_sparserendering_yuv_out_1_SignedBlurmap;
    id<MTLComputePipelineState> *_sparserendering_yuv_out_2_SignedBlurmap;
    id<MTLComputePipelineState> *_paintSharpPixels;
    id<MTLComputePipelineState> *_paintSharpPixelsSignedBlurmap;
    id<MTLComputePipelineState> *_sparse;
    CGSize _disparitySize;
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_library;
    id<MTLBuffer> *_segmentStepLUT;
    id<MTLBuffer> *_segmentBaseVecLUT;
    id<MTLTexture> *_blurmap;
    unsigned int _rgbaDownsampleScale;
    id<MTLTexture> *_inColorLuma;
    id<MTLTexture> *_inColorChroma;
    id<MTLTexture> *_processingSizeRGBA1;
    id<MTLTexture> *_processingSizeRGBA2;
    id<MTLTexture> *_halfResRG;
    id<MTLTexture> *_outColorLuma;
    id<MTLTexture> *_outColorChroma;
    rendering_dynamic_params _dynamicRenderingParams;
    BlurMapSmoothing *_blurmapSmoothing;
    BOOL _computeDisparityRefinement;
    SDOFResources *_sdofResources;
    DisparityRefinement *_disparityRefinement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)minimumResourceHeapSize;
-(NSUInteger)numRings;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 colorSize:(struct CGSize )arg3 disparitySize:(struct CGSize )arg4 debugRendering:(NSInteger)arg5 verbose:(BOOL)arg6 gpuProfiling:(BOOL)arg7 config:(id)arg8 quality:(int)arg9 ;
-(int)prewarm;
-(int)renderContinuousWithSource:(id)arg0 renderRequest:(id)arg1 ;
-(void)makeBlurMap:(id)arg0 inDisparity:(id)arg1 focusDistanceDisparity:(float)arg2 fNumber:(float)arg3 disparityMinMax;
-(void)preprocess:(id)arg0 inputLuma:(id)arg1 inputChroma:(id)arg2 blurmap:(id)arg3 rgbaDownsampleScale:(unsigned int)arg4 ;
-(void)preprocess:(id)arg0 inputRGBA:(id)arg1 blurmap:(id)arg2 rgbaDownsampleScale:(unsigned int)arg3 ;
-(void)setResourceHeap:(id)arg0 ;


@end


#endif