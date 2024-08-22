// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTEFFECTRELIGHTING_H
#define PTEFFECTRELIGHTING_H

@protocol MTLComputePipelineState, MTLDevice, MTLCommandQueue, MTLTexture;

#import <Foundation/Foundation.h>

#import "PTSyntheticLight.h"
#import "PTUtil.h"
#import "SingleColorCubeCorrectionStage.h"
#import "PTMSRResize.h"
#import "PTMTLDropHints.h"

@interface PTEffectRelighting : NSObject {
    id<MTLComputePipelineState> *_studioLight;
    id<MTLComputePipelineState> *_createLightMask;
    id<MTLComputePipelineState> *_fgBgForDebug;
    id<MTLComputePipelineState> *_lightMaskForDebug;
    id<MTLComputePipelineState> *_relightFullsizeInput;
    id<MTLComputePipelineState> *_studioLightDebug;
    id<MTLComputePipelineState> *_lightMaskOutline;
    id<MTLComputePipelineState> *_filterLightGainApplyToRGB;
    PTSyntheticLight *_syntheticLight;
    PTUtil *_util;
    id<MTLDevice> *_device;
    id<MTLCommandQueue> *_commandQueue;
    RelightingParam _parameters;
    SmoothFaceRectData _smoothFaceRects;
    int _frameIndex;
    float _weightHeadEye;
    float _eyeRadiusFactor;
    id<MTLTexture> *_lightMasks;
    float _lightGainMapScale;
    id<MTLTexture> *_lightGainMapLowRes;
    id<MTLTexture> *_lightGainMapLowResFiltered;
    id<MTLTexture> *_lightGainMapFiltered;
    SingleColorCubeCorrectionStage *_colorCube;
    PTMSRResize *_msrColorPyramid;
    id<MTLTexture> *_quarterSizeRGBA;
    id<MTLTexture> *_relightSizeRGBA;
    int _colorCubeType;
    PTMTLDropHints *_dropHints;
}




-(id)colorCube;
-(id)gainMap;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 commandQueue:(id)arg3 faceAttributesNetwork:(id)arg4 effectUtil:(id)arg5 util:(id)arg6 prewarmOnly:(BOOL)arg7 colorSize:(struct ? )arg8 msrColorPyramid:(id)arg9 sharedResources:(id)arg10 ;
-(id)syntheticLight;
-(int)commaSeparatedString:(id)arg0 toFloatArray:(*float)arg1 maxCount:(int)arg2 ;
-(int)filterLightGainApplyToRGB:(id)arg0 inRGB:(id)arg1 outRGB:(id)arg2 filterLightGainMapLowres:(BOOL)arg3 ;
-(struct SmoothFaceRectData *)smoothFaceRects;
-(void)computeSmoothFaceRect:(id)arg0 transform:(struct CGAffineTransform )arg1 ;
-(void)estimateLightIntensity:(id)arg0 inChroma:(id)arg1 inFaceRects:(*int)arg2 numberOfFaceRects:(id)arg3 focusFaceIndex:(id)arg4 humanDetections:(struct CGAffineTransform )arg5 transform;
-(void)fgBgForDebug:(id)arg0 inDisparity:(id)arg1 inNormal:(id)arg2 inFocusObject:(id)arg3 outMask:(id)arg4 debugType:(NSInteger)arg5 ;
-(void)initRelightingParam;
-(void)lightMaskDebug:(id)arg0 msrColorPyramid:(id)arg1 outFaceMask:(id)arg2 ;
-(void)reset;
-(void)studioLight:(id)arg0 inLuma:(id)arg1 inChroma:(id)arg2 inNormal:(id)arg3 inDisparity:(id)arg4 inFocusObject:(id)arg5 outPTTexture:(id)arg6 outRgbaPyramid:(id)arg7 colorTransferFunction:(int)arg8 colorYCbCrMatrix:(int)arg9 ;
-(void)updateColorCube;
-(void)updateParamters;


@end


#endif