// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTRAYTRACINGV5RENDERSTATE_H
#define PTRAYTRACINGV5RENDERSTATE_H

@class NSString;
@protocol PTRenderState, MTLComputePipelineState, MTLBuffer;

#import <Foundation/Foundation.h>


@interface PTRaytracingV5RenderState : NSObject <PTRenderState>

 {
    ? visCropFactor;
}


@property (retain, nonatomic) NSObject<MTLComputePipelineState> *antialiasRGB; // ivar: _antialiasRGB
@property (retain, nonatomic) NSObject<MTLBuffer> *aperturePoints; // ivar: _aperturePoints
@property (nonatomic) int conversionGain; // ivar: conversionGain
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *description; // ivar: _description
@property (nonatomic) float focalLenIn35mmFilm; // ivar: focalLenIn35mmFilm
@property (readonly) NSUInteger hash;
@property (readonly) int quality; // ivar: _quality
@property (nonatomic) int rawSensorHeight; // ivar: rawSensorHeight
@property (nonatomic) int rawSensorWidth; // ivar: rawSensorWidth
@property int rayCount; // ivar: _rayCount
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *raytracingSDOF; // ivar: _raytracingSDOF
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *raytracingVisualizeIntersection; // ivar: _raytracingVisualizeIntersection
@property (nonatomic) int readNoise_1x; // ivar: readNoise_1x
@property (nonatomic) int readNoise_8x; // ivar: readNoise_8x
@property (nonatomic) int sensorID; // ivar: sensorID
@property (readonly) Class superclass;
@property (nonatomic) CGRect totalSensorCrop; // ivar: totalSensorCrop
@property ? visCropFactor;


-(id)initWithDevice:(id)arg0 colorSize:(struct CGSize )arg1 disparitySize:(struct CGSize )arg2 quality:(int)arg3 library:(id)arg4 pipelineLibrary:(id)arg5 ;


@end


#endif