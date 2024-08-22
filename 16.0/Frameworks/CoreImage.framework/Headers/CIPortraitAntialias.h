// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIPORTRAITANTIALIAS_H
#define CIPORTRAITANTIALIAS_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CIPortraitAntialias : CIFilter

@property (copy, nonatomic) NSNumber *inputAntiAliasRadius; // ivar: inputAntiAliasRadius
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (copy, nonatomic) NSNumber *inputLumaNoiseAmpl; // ivar: inputLumaNoiseAmpl
@property (copy, nonatomic) NSNumber *inputLumaNoiseModelCoeff; // ivar: inputLumaNoiseModelCoeff
@property (copy, nonatomic) NSNumber *inputMaxBlurInPixels; // ivar: inputMaxBlurInPixels
@property (copy, nonatomic) CIVector *inputRect; // ivar: inputRect
@property (copy, nonatomic) NSNumber *inputScale; // ivar: inputScale
@property (copy, nonatomic) CIVector *inputSensorSize; // ivar: inputSensorSize


-(id)_kernel:(BOOL)arg0 withAddedNoise:(BOOL)arg1 ;
-(id)_noiseGeneratorKernel;
-(id)noiseColorKernel;
-(id)outputImage;
-(id)outputImage:(id)arg0 horizontal:(BOOL)arg1 ;


@end


#endif