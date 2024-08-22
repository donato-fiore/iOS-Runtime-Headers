// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIPORTRAITVIDEOFILTER_H
#define PIPORTRAITVIDEOFILTER_H

@class CIFilter, NSNumber, CIImage, AVMetadataItem, AVTimedMetadataGroup;



@interface PIPortraitVideoFilter : CIFilter

@property (retain, nonatomic) NSNumber *inputAperture; // ivar: _inputAperture
@property (retain, nonatomic) CIImage *inputDisparityImage; // ivar: _inputDisparityImage
@property (retain, nonatomic) NSNumber *inputFocusedDisparity; // ivar: _inputFocusedDisparity
@property (retain, nonatomic) AVMetadataItem *inputGlobalRenderingMetadata; // ivar: _inputGlobalRenderingMetadata
@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage
@property (nonatomic) BOOL inputIsHDR; // ivar: _inputIsHDR
@property (retain, nonatomic) NSNumber *inputRenderDebugMode; // ivar: _inputRenderDebugMode
@property (retain, nonatomic) NSNumber *inputRenderQuality; // ivar: _inputRenderQuality
@property (retain, nonatomic) AVTimedMetadataGroup *inputTimedRenderingMetadata; // ivar: _inputTimedRenderingMetadata


-(id)outputImage;


@end


#endif