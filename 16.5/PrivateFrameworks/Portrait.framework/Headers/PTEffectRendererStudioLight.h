// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTEFFECTRENDERERSTUDIOLIGHT_H
#define PTEFFECTRENDERERSTUDIOLIGHT_H

@class NSString;
@protocol PTEffectImpl, MTLDevice, MTLLibrary, MTLPipelineLibrary, MTLCommandQueueSPI, PTRenderState, MTLTexture, MTLBuffer;

#import <Foundation/Foundation.h>

#import "PTRenderPipeline.h"
#import "PTRaytracingInterpolateResult.h"
#import "PTMSRResize.h"
#import "PTGuidedFilter.h"
#import "PTRenderEffectNetwork.h"
#import "PTEffectRelighting.h"
#import "PTPyramidRGB.h"
#import "PTColor.h"
#import "PTRenderRequest.h"
#import "PTEffectDebugLayer.h"
#import "PTOpticalFlow.h"
#import "PTMTLDropHints.h"
#import "PTUtil.h"
#import "PTEffectUtil.h"
#import "PTEffectFilter.h"

@interface PTEffectRendererStudioLight : NSObject <PTEffectImpl>

 {
    id<MTLDevice> *_device;
    id<MTLLibrary> *_library;
    id<MTLPipelineLibrary> *_pipelineLibrary;
    id<MTLCommandQueueSPI> *_commandQueue;
    PTRenderPipeline *_renderPipeline;
    id<PTRenderState> *_renderState;
    PTRaytracingInterpolateResult *_raytracingInterpolation;
    id<MTLTexture> *_disparityFixedFocus;
    id<MTLBuffer> *_focusDisparityArray;
    id<MTLBuffer> *_focusObject;
    id<MTLBuffer> *_lastFocus;
    PTMSRResize *_msrColorPyramid;
    NSString *_transferFunction;
    NSString *_YCbCrMatrix;
    NSString *_colorPrimaries;
    int _colorYCbCrMatrix;
    PTGuidedFilter *_guidedFilter;
    id<MTLTexture> *_guideRGBAUpscale;
    id<MTLTexture> *_guideRGBACoefficients;
    PTRenderEffectNetwork *_network;
    PTEffectRelighting *_effectRelighting;
    PTPyramidRGB *_rgbaPyramid;
    PTColor *_portraitColor;
    PTRenderRequest *_sdofRenderRequest;
    PTEffectDebugLayer *_debugLayer;
    int _colorWidth;
    int _colorHeight;
    float _fNumber;
    BOOL _asynchronous;
    PTOpticalFlow *_disparityOpticalFlow;
    int _frameIndex;
    int _networkIndex;
    ? _faceRects;
    int _numberOfFaceRects;
    float _focusDepthFixed;
    float _focusDepthMax;
    float _focusDepthOffset;
    ? _iirUpdateCoefficientDisparity;
    ? _iirUpdateCoefficientNormal;
    PTMTLDropHints *_temporalDisparityTempDropHints;
    PTUtil *_util;
    PTEffectUtil *_effectUtil;
    float _focusDisparityUpdateCoefficient;
    NSUInteger _effectType;
    PTEffectFilter *_disparityNormalFilter;
    id<MTLBuffer> *_focusFaceIndex;
    NSInteger _debugType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSInteger effectQuality; // ivar: effectQuality
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyTemporalState:(id)arg0 ;
-(id)initWithTransferFunction:(id)arg0 YCbCrMatrix:(id)arg1 colorPrimaries:(id)arg2 colorSize:(struct ? )arg3 metalCommandQueue:(id)arg4 effectType:(NSUInteger)arg5 prewarmOnly:(BOOL)arg6 useHighResNetwork:(BOOL)arg7 faceAttributesNetwork:(id)arg8 prevTemporalState:(id)arg9 sharedResources:(id)arg10 ;
-(int)render:(struct __CVBuffer *)arg0 inDisparity:(struct __CVBuffer *)arg1 detectedObjects:(struct __CFDictionary *)arg2 humanDetections:(id)arg3 transform:(struct CGAffineTransform )arg4 outColorBuffer:(struct __CVBuffer *)arg5 waitUntilCompleted:(BOOL)arg6 gpuCompleted:(id)arg7 ;
-(void)depthEstimation;
-(void)parseFaceRects:(struct __CFDictionary *)arg0 ;
-(void)reset;
-(void)setColorSpaceInformation:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 ;
-(void)setDebug:(NSInteger)arg0 ;


@end


#endif