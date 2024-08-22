// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTRAYTRACINGV14RENDERSTATE_H
#define PTRAYTRACINGV14RENDERSTATE_H

@class NSString;
@protocol PTRenderState, MTLBuffer, MTLTexture, MTLComputePipelineState;

#import <Foundation/Foundation.h>

#import "PTDisparityUpscale.h"
#import "PTGlobalReduction.h"
#import "PTQualitySettings.h"

@interface PTRaytracingV14RenderState : NSObject <PTRenderState>

 {
    id<MTLBuffer> *_disparityDiffGlobalMax;
    id<MTLTexture> *_randomizedGauss;
    float _maxBokehFactor;
    ? _kColorSize;
    ? visCropFactor;
}


@property float anamorphicFactor; // ivar: _anamorphicFactor
@property (retain, nonatomic) NSObject<MTLBuffer> *aperturePointsXY; // ivar: _aperturePointsXY
@property ? colorSize;
@property (nonatomic) int conversionGain; // ivar: conversionGain
@property float coverageOverscan; // ivar: _kCoverageOverscan
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description; // ivar: _description
@property (retain, nonatomic) NSObject<MTLBuffer> *disparityDiffGlobalMinMax; // ivar: _disparityDiffGlobalMinMax
@property (retain, nonatomic) NSObject<MTLTexture> *disparityEdges; // ivar: _disparityEdges
@property (retain, nonatomic) NSObject<MTLTexture> *disparityEdgesTemp; // ivar: _disparityEdgesTemp
@property (retain, nonatomic) PTDisparityUpscale *disparityUpscale; // ivar: _disparityUpscale
@property BOOL doVisualization; // ivar: _doVisualization
@property (nonatomic) float focalLenIn35mmFilm; // ivar: focalLenIn35mmFilm
@property (retain, nonatomic) NSObject<MTLTexture> *focusEdgeMask; // ivar: _focusEdgeMask
@property (retain, nonatomic) PTGlobalReduction *globalReduction; // ivar: _globalReduction
@property (readonly) NSUInteger hash;
@property (readonly) int quality; // ivar: _quality
@property (retain, nonatomic) PTQualitySettings *qualitySettings; // ivar: _qualitySettings
@property (retain, nonatomic) NSObject<MTLTexture> *randomGaussNoise; // ivar: _randomGaussNoise
@property (retain, nonatomic) NSObject<MTLBuffer> *randomUChars; // ivar: _randomUChars
@property (nonatomic) int rawSensorHeight; // ivar: rawSensorHeight
@property (nonatomic) int rawSensorWidth; // ivar: rawSensorWidth
@property int rayCount; // ivar: _rayCount
@property (retain, nonatomic) NSObject<MTLTexture> *raytracedRGBRadius; // ivar: _raytracedRGBRadius
@property (retain, nonatomic) NSObject<MTLTexture> *raytracedRGBRadiusUpscaled; // ivar: _raytracedRGBRadiusUpscaled
@property float raytracingRadiusLocal; // ivar: _raytracingRadiusLocal
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *raytracingSDOF; // ivar: _raytracingSDOF
@property (nonatomic) int readNoise_1x; // ivar: readNoise_1x
@property (nonatomic) int readNoise_8x; // ivar: readNoise_8x
@property (nonatomic) int sensorID; // ivar: sensorID
@property (readonly) Class superclass;
@property (nonatomic) CGRect totalSensorCrop; // ivar: totalSensorCrop
@property ? visCropFactor;


-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 util:(id)arg3 quality:(int)arg4 colorSize:(struct CGSize )arg5 disparitySize:(struct CGSize )arg6 pyramidPixelFormat:(NSUInteger)arg7 config:(id)arg8 debugTextures:(id)arg9 ;


@end


#endif