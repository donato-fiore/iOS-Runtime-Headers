// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTRAYTRACINGV11RENDERSTATE_H
#define PTRAYTRACINGV11RENDERSTATE_H

@class NSString;
@protocol MTLBuffer, MTLTexture, MTLComputePipelineState;

#import <Foundation/Foundation.h>

#import "PTDisparityUpscale.h"
#import "PTRaytracingUtils.h"

@interface PTRaytracingV11RenderState : NSObject {
    int _quality;
    NSString *_description;
}


@property (retain, nonatomic) NSObject<MTLBuffer> *aperturePointsXY; // ivar: _aperturePointsXY
@property (retain, nonatomic) PTDisparityUpscale *disparityUpscale; // ivar: _disparityUpscale
@property BOOL doDisparityUpsampling; // ivar: _doDisparityUpsampling
@property BOOL doRayMarching; // ivar: _doRayMarching
@property BOOL doVisualization; // ivar: _doVisualization
@property (retain, nonatomic) NSObject<MTLTexture> *inputChromaPyramid; // ivar: _inputChromaPyramid
@property (retain, nonatomic) NSObject<MTLTexture> *inputLumaPyramid; // ivar: _inputLumaPyramid
@property BOOL isAbovePreviewQuality; // ivar: _isAbovePreviewQuality
@property int rayCount; // ivar: _rayCount
@property (retain, nonatomic) NSObject<MTLTexture> *raytracedYUVRadius; // ivar: _raytracedYUVRadius
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *raytracingSDOF; // ivar: _raytracingSDOF
@property (retain, nonatomic) PTRaytracingUtils *raytracingUtils; // ivar: _raytracingUtils
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *raytracingVisualizeIntersection; // ivar: _raytracingVisualizeIntersection


-(id)description;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 quality:(int)arg3 colorSize:(struct CGSize )arg4 disparitySize:(struct CGSize )arg5 pyramidPixelFormat:(NSUInteger)arg6 config:(id)arg7 ;


@end


#endif