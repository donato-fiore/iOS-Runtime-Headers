// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTRAYTRACINGV12RENDERSTATE_H
#define PTRAYTRACINGV12RENDERSTATE_H

@class NSString;
@protocol MTLBuffer, MTLTexture, MTLComputePipelineState;

#import <Foundation/Foundation.h>

#import "PTDisparityUpscale.h"
#import "PTGlobalReduction.h"
#import "PTQualitySettings.h"

@interface PTRaytracingV12RenderState : NSObject {
    int _quality;
    NSString *_description;
}


@property (retain, nonatomic) NSObject<MTLBuffer> *aperturePointsXY; // ivar: _aperturePointsXY
@property (retain, nonatomic) NSObject<MTLBuffer> *disparityGlobalMax; // ivar: _disparityGlobalMax
@property (retain, nonatomic) PTDisparityUpscale *disparityUpscale; // ivar: _disparityUpscale
@property BOOL doVisualization; // ivar: _doVisualization
@property (retain, nonatomic) PTGlobalReduction *globalReduction; // ivar: _globalReduction
@property (retain, nonatomic) NSObject<MTLTexture> *inputRGBAPyramid; // ivar: _inputRGBAPyramid
@property (retain, nonatomic) PTQualitySettings *qualitySettings; // ivar: _qualitySettings
@property (retain, nonatomic) NSObject<MTLBuffer> *randomUChars; // ivar: _randomUChars
@property int rayCount; // ivar: _rayCount
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *raytracingSDOF; // ivar: _raytracingSDOF


-(id)description;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 quality:(int)arg3 colorSize:(struct CGSize )arg4 disparitySize:(struct CGSize )arg5 pyramidPixelFormat:(NSUInteger)arg6 config:(id)arg7 debugTextures:(id)arg8 ;


@end


#endif