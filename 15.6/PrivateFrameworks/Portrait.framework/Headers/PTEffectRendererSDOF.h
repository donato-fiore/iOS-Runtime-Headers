// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTEFFECTRENDERERSDOF_H
#define PTEFFECTRENDERERSDOF_H

@class NSString;
@protocol MTLDevice, MTLLibrary, MTLPipelineLibrary, MTLCommandQueueSPI, MTLTexture, MTLBuffer;


#import "PTEffect.h"
#import "PTMSRResize.h"
#import "PTRenderEffectNetwork.h"
#import "PTEffectDisparityFilter.h"
#import "PTPyramidRGB.h"
#import "PTColor.h"
#import "PTRenderRequest.h"
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
    PTEffectDisparityFilter *_disparityFilter;
    PTPyramidRGB *_rgbaPyramid;
    PTColor *_portraitColor;
    PTRenderRequest *_sdofRenderRequest;
    int _colorWidth;
    int _colorHeight;
    BOOL _hasANE;
    float _fNumber;
    BOOL _asynchronous;
    int _frameIndex;
    ? _faceRects;
    int _numberOfFaceRects;
    float _focusDepthFixed;
    float _focusDepthMax;
    float _focusDepthOffset;
    ? _iirUpdateCoefficient;
    id<MTLTexture> *_temporalDisparityPrevFiltered;
    PTUtil *_util;
    PTEffectUtil *_effectUtil;
    float _focusDisparityUpdateCoefficient;
}




-(id)initWithTransferFunction:(id)arg0 YCbCrMatrix:(id)arg1 colorPrimaries:(id)arg2 dimensions:(struct ? )arg3 metalCommandQueue:(id)arg4 effectType:(NSInteger)arg5 prewarmOnly:(BOOL)arg6 ;
-(int)render:(struct __CVBuffer *)arg0 detectedObjects:(struct __CFDictionary *)arg1 toColorBuffer:(struct __CVBuffer *)arg2 ;
-(void)depthEstimation;
-(void)parseFaceRects:(struct __CFDictionary *)arg0 ;
-(void)renderDebugInformation:(id)arg0 outChroma:(id)arg1 outLuma:(id)arg2 defaults:(id)arg3 ;
-(void)reset;
-(void)setColorSpaceInformation:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 ;


@end


#endif