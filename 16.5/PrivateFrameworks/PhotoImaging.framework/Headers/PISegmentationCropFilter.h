// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PISEGMENTATIONCROPFILTER_H
#define PISEGMENTATIONCROPFILTER_H

@class CIFilter, CIImage;



@interface PISegmentationCropFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage
@property (nonatomic) float inputThreshold; // ivar: _inputThreshold
@property (readonly, nonatomic) CGRect outputCropRect;


-(id)init;
-(id)outputImage;


@end


#endif