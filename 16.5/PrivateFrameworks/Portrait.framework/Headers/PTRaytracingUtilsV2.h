// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTRAYTRACINGUTILSV2_H
#define PTRAYTRACINGUTILSV2_H

@protocol MTLComputePipelineState, MTLDevice;

#import <Foundation/Foundation.h>


@interface PTRaytracingUtilsV2 : NSObject {
    id<MTLComputePipelineState> *_focusEdgeMask;
    id<MTLComputePipelineState> *_centerDisparityOnFocus;
    id<MTLComputePipelineState> *_sobelEdgeDetector;
    id<MTLComputePipelineState> *_edgeDilation;
    id<MTLDevice> *_device;
}




+(float)focalLength;
+(float)frameWidth;
+(id)createRandomUChars:(id)arg0 rayCount:(int)arg1 ;
+(struct PTFocus )createFocusObject:(id)arg0 coverageOverscan:(float)arg1 anamorphicFactor:(float)arg2 rayCount:(int)arg3 colorSize:(BOOL)arg4 doMacroApertureLimit;
+(struct PTFocusEdge )createFocusEdge;
+(void)initEquidistPoints:(struct PTRandomDisk *)arg0 samplePatternCircles:(int)arg1 ;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 ;
-(int)detectDilatedEdges:(id)arg0 inDisparity:(id)arg1 tempEdges:(id)arg2 outEdges:(id)arg3 focusObject:(struct PTFocus )arg4 disparityDiffMinMax:(id)arg5 edgeTolerance:(float)arg6 ;
-(int)sobelEdgeDetection:(id)arg0 inImage:(id)arg1 outEdges:(id)arg2 edgeTolerance:(float)arg3 ;
-(void)centerDisparityOnFocus:(id)arg0 inDisparity:(id)arg1 outDisparity:(id)arg2 focusObject:(struct PTFocus )arg3 foregroundBlurLimitingFactor:(float)arg4 ;
-(void)focusEdgeMask:(id)arg0 inDisparityDiff:(id)arg1 focusObject:(struct PTFocus )arg2 focusEdge:(struct PTFocusEdge )arg3 outFocusEdgeMask:(id)arg4 ;


@end


#endif