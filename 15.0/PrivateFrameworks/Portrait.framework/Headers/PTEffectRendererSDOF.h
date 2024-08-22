// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTEFFECTRENDERERSDOF_H
#define PTEFFECTRENDERERSDOF_H

@class NSString, NSMutableDictionary;
@protocol MTLDevice, MTLLibrary, MTLPipelineLibrary, MTLCommandQueueSPI, MTLTexture, MTLBuffer;


#import "PTEffect.h"
#import "PTMSRResize.h"
#import "PTRenderEffectNetwork.h"
#import "PTPyramidRGB.h"
#import "PTColor.h"
#import "PTRenderRequest.h"
#import "PTOpticalFlow.h"
#import "PTDisparityFilterExponentialMovingAverageLKTMotion.h"
#import "PTUtil.h"
#import "PTEffectUtil.h"

@interface PTEffectRendererSDOF : PTEffect {
    id<MTLDevice> *_device;
    id<MTLLibrary> *_library;
    id<MTLPipelineLibrary> *_pipelineLibrary;
    id<MTLCommandQueueSPI> *_commandQueue;
    PTRenderPipeline" _renderPipeline;
    id<PTRenderState>" _renderStates;
    id<MTLTexture> *_disparityFixedFocus;
    id<MTLBuffer> *_focusDisparityArray;
    id<MTLBuffer> *_focusObject;
    id<MTLBuffer> *_lastFocus;
    PTMSRResize *_msrResize;
    NSString *_transferFunction;
    NSString *_YCbCrMatrix;
    NSString *_colorPrimaries;
    int _colorYCbCrMatrix;
    PTRenderEffectNetwork *_network;
    PTPyramidRGB *_rgbaPyramid;
    PTColor *_portraitColor;
    PTRenderRequest *_sdofRenderRequest;
    int _colorWidth;
    int _colorHeight;
    BOOL _hasANE;
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
    PTDisparityFilterExponentialMovingAverageLKTMotion *_disparityFilter;
    ? _iirUpdateCoefficient;
    id<MTLTexture> *_temporalDisparityPrevFiltered;
    id<MTLTexture> *_temporalDisparityTemp;
    id<MTLTexture> *_temporalDisparityPrevWarped;
    PTUtil *_util;
    NSString *profilingString;
    NSMutableDictionary *_profilingDict;
    NSMutableDictionary *_profilingDictAvgNetwork;
    PTEffectUtil *_effectUtil;
    float _focusDisparityUpdateCoefficient;
}




-(id)initWithFormat:(struct opaqueCMFormatDescription *)arg0 metalCommandQueue:(id)arg1 effectType:(NSInteger)arg2 ;
-(int)render:(struct __CVBuffer *)arg0 detectedObjects:(struct __CFDictionary *)arg1 toColorBuffer:(struct __CVBuffer *)arg2 ;
-(void)addValue:(id)arg0 name:(id)arg1 toDict:(id)arg2 ;
-(void)dealloc;
-(void)depthEstimation;
-(void)parseFaceRects:(struct __CFDictionary *)arg0 ;
-(void)profilingLog;
-(void)profilingLogCommandBuffer:(id)arg0 name:(id)arg1 ;
-(void)renderDebugInformation:(id)arg0 outChroma:(id)arg1 outLuma:(id)arg2 defaults:(id)arg3 ;
-(void)reset;
-(void)setColorSpaceInformation:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 ;


@end


#endif