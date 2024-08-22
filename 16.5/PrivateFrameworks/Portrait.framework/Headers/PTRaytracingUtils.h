// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTRAYTRACINGUTILS_H
#define PTRAYTRACINGUTILS_H

@protocol MTLComputePipelineState, MTLDevice, MTLSamplerState;

#import <Foundation/Foundation.h>


@interface PTRaytracingUtils : NSObject {
    id<MTLComputePipelineState> *_focusEdgeMask;
    id<MTLComputePipelineState>" _interpolateRGBRadiusToDestYUV;
    id<MTLComputePipelineState>" _interpolateRGBRadiusToDestRGBA;
    id<MTLComputePipelineState>" _interpolateRGBRadiusToDestYUVFromSource;
    id<MTLComputePipelineState>" _interpolateRGBRadiusToDestRGBAFromSource;
    id<MTLComputePipelineState>" _convertRGBPyramid;
    id<MTLComputePipelineState>" _convertRGBPyramidFromYUV;
    id<MTLComputePipelineState> *_centerDisparityOnFocus;
    id<MTLComputePipelineState> *_sobelEdgeDetector;
    id<MTLComputePipelineState> *_edgeDilation;
    id<MTLDevice> *_device;
    id<MTLSamplerState> *_sNBE;
    id<MTLSamplerState> *_sNLE;
}




+(float)focalLength;
+(float)frameWidth;
+(id)createRandomUChars:(id)arg0 rayCount:(int)arg1 ;
+(id)precomputeNoise:(struct ? )arg0 seed:(NSInteger)arg1 device:(id)arg2 ;
+(struct PTFocus )createFocusObject:(id)arg0 coverageOverscan:(float)arg1 anamorphicFactor:(float)arg2 raytracingRadiusLocal:(float)arg3 rayCount:(int)arg4 colorSize:(BOOL)arg5 doMacroApertureLimit;
+(struct PTFocusEdge )createFocusEdge;
+(struct PTNoiseValues )calculateVarReadNoise:(id)arg0 ;
+(void)initEquidistPoints:(struct PTRandomDisk *)arg0 samplePatternCircles:(int)arg1 ;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 ;
-(id)sNBE;
-(id)sNLE;
-(int)convertRGBPyramidFromSource:(id)arg0 renderRequest:(id)arg1 rgbaPyramidArray:(id)arg2 skipLevel0:(BOOL)arg3 ;
-(int)detectDilatedEdges:(id)arg0 inDisparity:(id)arg1 tempEdges:(id)arg2 outEdges:(id)arg3 focusObject:(struct PTFocus )arg4 disparityDiffMinMax:(id)arg5 edgeTolerance:(float)arg6 ;
-(void)centerDisparityOnFocus:(id)arg0 inDisparity:(id)arg1 outDisparity:(id)arg2 focusObject:(struct PTFocus )arg3 ;
-(void)focusEdgeMask:(id)arg0 inDisparityDiff:(id)arg1 focusObject:(struct PTFocus )arg2 focusEdge:(struct PTFocusEdge )arg3 outFocusEdgeMask:(id)arg4 ;
-(void)interpolateRGBRadiusToDest:(id)arg0 renderRequest:(id)arg1 inRGBA:(id)arg2 inRGBRadius:(id)arg3 inRandomGauss:(id)arg4 bicubicSampling:(BOOL)arg5 ;
-(void)interpolateRGBRadiusUsingSourceToDest:(id)arg0 renderRequest:(id)arg1 inRGBRadius:(id)arg2 inRandomGauss:(id)arg3 bicubicSampling:(BOOL)arg4 ;


@end


#endif