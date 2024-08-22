// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTRAYTRACINGV12RENDERSTATE_H
#define PTRAYTRACINGV12RENDERSTATE_H

@class NSString;
@protocol PTRenderState, MTLBuffer, MTLTexture, MTLComputePipelineState;

#import <Foundation/Foundation.h>

#import "PTDisparityUpscale.h"
#import "PTGlobalReduction.h"
#import "PTQualitySettings.h"

@interface PTRaytracingV12RenderState : NSObject <PTRenderState>

 {
    ? visCropFactor;
}


@property (retain, nonatomic) NSObject<MTLBuffer> *aperturePointsXY; // ivar: _aperturePointsXY
@property (nonatomic) int conversionGain; // ivar: conversionGain
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description; // ivar: _description
@property (retain, nonatomic) NSObject<MTLBuffer> *disparityGlobalMax; // ivar: _disparityGlobalMax
@property (retain, nonatomic) PTDisparityUpscale *disparityUpscale; // ivar: _disparityUpscale
@property BOOL doVisualization; // ivar: _doVisualization
@property (nonatomic) float focalLenIn35mmFilm; // ivar: focalLenIn35mmFilm
@property (retain, nonatomic) PTGlobalReduction *globalReduction; // ivar: _globalReduction
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MTLTexture> *inputRGBAPyramid; // ivar: _inputRGBAPyramid
@property (readonly) int quality; // ivar: _quality
@property (retain, nonatomic) PTQualitySettings *qualitySettings; // ivar: _qualitySettings
@property (retain, nonatomic) NSObject<MTLBuffer> *randomUChars; // ivar: _randomUChars
@property (nonatomic) int rawSensorHeight; // ivar: rawSensorHeight
@property (nonatomic) int rawSensorWidth; // ivar: rawSensorWidth
@property int rayCount; // ivar: _rayCount
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *raytracingSDOF; // ivar: _raytracingSDOF
@property (nonatomic) int readNoise_1x; // ivar: readNoise_1x
@property (nonatomic) int readNoise_8x; // ivar: readNoise_8x
@property (nonatomic) int sensorID; // ivar: sensorID
@property (readonly) Class superclass;
@property (nonatomic) CGRect totalSensorCrop; // ivar: totalSensorCrop
@property ? visCropFactor;


-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 quality:(int)arg3 colorSize:(struct CGSize )arg4 disparitySize:(struct CGSize )arg5 pyramidPixelFormat:(NSUInteger)arg6 config:(id)arg7 debugTextures:(id)arg8 ;


@end


#endif