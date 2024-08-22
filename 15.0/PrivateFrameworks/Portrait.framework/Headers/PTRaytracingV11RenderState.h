// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTRAYTRACINGV11RENDERSTATE_H
#define PTRAYTRACINGV11RENDERSTATE_H

@class NSString;
@protocol PTRenderState, MTLBuffer, MTLTexture, MTLComputePipelineState;

#import <Foundation/Foundation.h>

#import "PTDisparityUpscale.h"
#import "PTRaytracingUtils.h"

@interface PTRaytracingV11RenderState : NSObject <PTRenderState>

 {
    ? visCropFactor;
}


@property (retain, nonatomic) NSObject<MTLBuffer> *aperturePointsXY; // ivar: _aperturePointsXY
@property (nonatomic) int conversionGain; // ivar: conversionGain
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description; // ivar: _description
@property (retain, nonatomic) PTDisparityUpscale *disparityUpscale; // ivar: _disparityUpscale
@property BOOL doDisparityUpsampling; // ivar: _doDisparityUpsampling
@property BOOL doRayMarching; // ivar: _doRayMarching
@property BOOL doVisualization; // ivar: _doVisualization
@property (nonatomic) float focalLenIn35mmFilm; // ivar: focalLenIn35mmFilm
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MTLTexture> *inputChromaPyramid; // ivar: _inputChromaPyramid
@property (retain, nonatomic) NSObject<MTLTexture> *inputLumaPyramid; // ivar: _inputLumaPyramid
@property BOOL isAbovePreviewQuality; // ivar: _isAbovePreviewQuality
@property (readonly) int quality; // ivar: _quality
@property (nonatomic) int rawSensorHeight; // ivar: rawSensorHeight
@property (nonatomic) int rawSensorWidth; // ivar: rawSensorWidth
@property int rayCount; // ivar: _rayCount
@property (retain, nonatomic) NSObject<MTLTexture> *raytracedYUVRadius; // ivar: _raytracedYUVRadius
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *raytracingSDOF; // ivar: _raytracingSDOF
@property (retain, nonatomic) PTRaytracingUtils *raytracingUtils; // ivar: _raytracingUtils
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *raytracingVisualizeIntersection; // ivar: _raytracingVisualizeIntersection
@property (nonatomic) int readNoise_1x; // ivar: readNoise_1x
@property (nonatomic) int readNoise_8x; // ivar: readNoise_8x
@property (nonatomic) int sensorID; // ivar: sensorID
@property (readonly) Class superclass;
@property (nonatomic) CGRect totalSensorCrop; // ivar: totalSensorCrop
@property ? visCropFactor;


-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 quality:(int)arg3 colorSize:(struct CGSize )arg4 disparitySize:(struct CGSize )arg5 pyramidPixelFormat:(NSUInteger)arg6 config:(id)arg7 ;


@end


#endif