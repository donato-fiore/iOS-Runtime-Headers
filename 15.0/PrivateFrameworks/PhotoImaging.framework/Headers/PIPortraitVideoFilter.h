// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIPORTRAITVIDEOFILTER_H
#define PIPORTRAITVIDEOFILTER_H

@class CIFilter, NSNumber, CIImage, PTGlobalRenderingMetadata, PTRenderPipeline;
@protocol PTRenderState;


#import "PIPortraitVideoMetadataSample.h"

@interface PIPortraitVideoFilter : CIFilter

@property (retain, nonatomic) NSNumber *inputAperture; // ivar: _inputAperture
@property (retain, nonatomic) CIImage *inputDisparityImage; // ivar: _inputDisparityImage
@property (retain, nonatomic) NSNumber *inputFocusedDisparity; // ivar: _inputFocusedDisparity
@property (retain, nonatomic) PTGlobalRenderingMetadata *inputGlobalRenderingMetadata; // ivar: _inputGlobalRenderingMetadata
@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage
@property (retain, nonatomic) PTRenderPipeline *inputRenderPipeline; // ivar: _inputRenderPipeline
@property (retain, nonatomic) NSObject<PTRenderState> *inputRenderState; // ivar: _inputRenderState
@property (retain, nonatomic) PIPortraitVideoMetadataSample *inputTimedRenderingMetadata; // ivar: _inputTimedRenderingMetadata


-(id)outputImage;


@end


#endif