// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTRAYTRACINGV2002_H
#define PTRAYTRACINGV2002_H

@class NSDictionary, NSString;
@protocol RenderingIntegration, MTLDeviceSPI, MTLLibrary, MTLPipelineLibrary, MTLBuffer, MTLTexture, MTLComputePipelineState;

#import <Foundation/Foundation.h>

#import "PTPyramidRGB.h"
#import "PTRenderDebugLayer.h"
#import "PTUtil.h"
#import "PTQualitySettings.h"
#import "PTRaytracingUtilsV2.h"
#import "PTRaytracingInterpolateResult.h"
#import "PTGlobalReduction.h"
#import "PTGuidedFilter.h"
#import "PTMTLDropHints.h"

@interface PTRaytracingV2002 : NSObject <RenderingIntegration>

 {
    NSDictionary *_config;
    PTPyramidRGB *_rgbaPyramid;
    PTRenderDebugLayer *_debugLayer;
    NSInteger _debugRendering;
    PTUtil *_util;
    CGSize _disparitySize;
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_library;
    id<MTLPipelineLibrary> *_pipelineLibrary;
    BOOL _injectedRGBAPyramid;
    PTFocusEdge _focusEdge;
    PTQualitySettings *_qualitySettings;
    PTRaytracingUtilsV2 *_raytracingUtils;
    PTRaytracingInterpolateResult *_raytracingInterpolateResult;
    PTGlobalReduction *_globalReduction;
    PTGuidedFilter *_guidedFilter;
    id<MTLBuffer> *_aperturePointsXY;
    id<MTLBuffer> *_randomUChars;
    id<MTLBuffer> *_disparityDiffGlobalMinMax;
    id<MTLTexture> *_disparityEdges;
    id<MTLTexture> *_disparityEdgesTemp;
    id<MTLTexture> *_disparityDiff;
    id<MTLTexture> *_focusEdgeMask;
    id<MTLTexture> *_raytracedRGBWeight;
    id<MTLTexture> *_raytracedRGBWeightUpscaled;
    id<MTLTexture> *_guideRGBACoefficients;
    id<MTLTexture> *_guideRGBAUpscale;
    PTMTLDropHints *_disparityDiffDropHints;
    PTMTLDropHints *_dropHintsRaytracing;
    PTMTLDropHints *_dropHintsRGBWeightUpscaled;
    BOOL _doVisualization;
    int _kRayCount;
    ? _colorSize;
    float _kCoverageOverscan;
    float _anamorphicFactor;
    float _edgeTolerance;
    id<MTLComputePipelineState> *_raytracingSDOF;
    id *interpolateRGBWeightCustomFn;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)minimumResourceHeapSize;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 colorSize:(struct CGSize )arg3 disparitySize:(struct CGSize )arg4 debugRendering:(NSInteger)arg5 verbose:(BOOL)arg6 gpuProfiling:(BOOL)arg7 config:(id)arg8 quality:(int)arg9 ;
-(int)prewarm;
-(int)renderContinuousWithSource:(id)arg0 renderRequest:(id)arg1 ;
-(void)setResourceHeap:(id)arg0 ;


@end


#endif