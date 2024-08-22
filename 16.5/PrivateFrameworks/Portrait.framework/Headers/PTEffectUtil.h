// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTEFFECTUTIL_H
#define PTEFFECTUTIL_H

@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface PTEffectUtil : NSObject {
    id<MTLComputePipelineState> *_updateFocusObject;
    id<MTLComputePipelineState> *_effectSampleFaceRects;
    id<MTLComputePipelineState> *_convertToDisparity;
    id<MTLComputePipelineState> *_fixedFocusDistanceAndCenterDisparity;
    id<MTLComputePipelineState> *_copySingleChannel;
    id<MTLComputePipelineState> *_copyRGBAToBGRA;
    id<MTLComputePipelineState> *_clear;
}




+(id)faceRectsForVision:(*int)arg0 numberOfFaceRects:(struct CGAffineTransform )arg1 transform;
+(unsigned int)orientationFromTransform:(struct CGAffineTransform )arg0 ;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 ;
-(int)orientationForTransform:(struct CGAffineTransform )arg0 size:(struct ? )arg1 ;
-(struct CGRect )getBoundingBox:(id)arg0 ;
-(void)clear:(id)arg0 outTex:(id)arg1 ;
-(void)copyRGBAToBGRA:(id)arg0 inTex:(id)arg1 outTex:(id)arg2 ;
-(void)copySingleChannel:(id)arg0 inTex:(id)arg1 outTex:(id)arg2 ;
-(void)fixedFocusDistanceAndCenterDisparity:(id)arg0 inDisparity:(id)arg1 outDisparity:(id)arg2 focusDepthFixed:(float)arg3 focusDepthMax:(float)arg4 inFocusObject:(id)arg5 ;
-(void)rotateTexture:(id)arg0 inTex:(id)arg1 outTex:(id)arg2 rotationDegrees:(int)arg3 ;
-(void)sampleFaceRects:(id)arg0 maxFaceRects:(int)arg1 faceRects:(*int)arg2 numberOfFaceRects:(id)arg3 inDisparity:(id)arg4 outFocusDistanceArray;
-(void)updateFocusObject:(id)arg0 faceRectCount:(int)arg1 focusDepthOffset:(float)arg2 exponentialMovingAverage:(float)arg3 isFirstFrame:(BOOL)arg4 lastFocus:(id)arg5 inFocusDistanceArray:(id)arg6 outFocusObject:(id)arg7 outFocusFaceIndex:(id)arg8 ;


@end


#endif