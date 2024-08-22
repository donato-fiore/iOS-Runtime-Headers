// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTRAYTRACINGV14RENDERSTATE_H
#define PTRAYTRACINGV14RENDERSTATE_H

@class NSString;
@protocol MTLBuffer, MTLTexture, MTLComputePipelineState;

#import <Foundation/Foundation.h>

#import "PTMTLDropHints.h"
#import "PTDisparityUpscale.h"
#import "PTGlobalReduction.h"
#import "PTQualitySettings.h"

@interface PTRaytracingV14RenderState : NSObject {
    int _quality;
    id<MTLBuffer> *_disparityDiffGlobalMax;
    id<MTLTexture> *_randomizedGauss;
    ? _kColorSize;
    NSString *_description;
}


@property float anamorphicFactor; // ivar: _anamorphicFactor
@property (retain, nonatomic) NSObject<MTLBuffer> *aperturePointsXY; // ivar: _aperturePointsXY
@property ? colorSize;
@property float coverageOverscan; // ivar: _kCoverageOverscan
@property (retain, nonatomic) NSObject<MTLTexture> *disparityDiff; // ivar: _disparityDiff
@property (retain, nonatomic) PTMTLDropHints *disparityDiffDropHints; // ivar: _disparityDiffDropHints
@property (retain, nonatomic) NSObject<MTLBuffer> *disparityDiffGlobalMinMax; // ivar: _disparityDiffGlobalMinMax
@property (retain, nonatomic) NSObject<MTLTexture> *disparityEdges; // ivar: _disparityEdges
@property (retain, nonatomic) NSObject<MTLTexture> *disparityEdgesTemp; // ivar: _disparityEdgesTemp
@property (retain, nonatomic) PTDisparityUpscale *disparityUpscale; // ivar: _disparityUpscale
@property BOOL doVisualization; // ivar: _doVisualization
@property (retain, nonatomic) PTMTLDropHints *dropHintsRGBRadiusUpscaled; // ivar: _dropHintsRGBRadiusUpscaled
@property (retain, nonatomic) PTMTLDropHints *dropHintsRaytracing; // ivar: _dropHintsRaytracing
@property (retain, nonatomic) NSObject<MTLTexture> *focusEdgeMask; // ivar: _focusEdgeMask
@property (retain, nonatomic) PTGlobalReduction *globalReduction; // ivar: _globalReduction
@property (retain, nonatomic) PTQualitySettings *qualitySettings; // ivar: _qualitySettings
@property (retain, nonatomic) NSObject<MTLTexture> *randomGaussNoise; // ivar: _randomGaussNoise
@property (retain, nonatomic) NSObject<MTLBuffer> *randomUChars; // ivar: _randomUChars
@property int rayCount; // ivar: _rayCount
@property (retain, nonatomic) NSObject<MTLTexture> *raytracedRGBRadius; // ivar: _raytracedRGBRadius
@property (retain, nonatomic) NSObject<MTLTexture> *raytracedRGBRadiusUpscaled; // ivar: _raytracedRGBRadiusUpscaled
@property float raytracingRadiusLocal; // ivar: _raytracingRadiusLocal
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *raytracingSDOF; // ivar: _raytracingSDOF


-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 util:(id)arg3 quality:(int)arg4 colorSize:(struct CGSize )arg5 disparitySize:(struct CGSize )arg6 pyramidPixelFormat:(NSUInteger)arg7 config:(id)arg8 debugTextures:(id)arg9 ;


@end


#endif