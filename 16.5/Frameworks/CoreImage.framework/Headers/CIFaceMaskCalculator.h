// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIFACEMASKCALCULATOR_H
#define CIFACEMASKCALCULATOR_H

@class NSNumber, NSDictionary;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIFaceMaskCalculator : CIFilter

@property (copy, nonatomic) NSNumber *inputApertureScaling; // ivar: inputApertureScaling
@property (copy, nonatomic) NSNumber *inputFacesCapMultip; // ivar: inputFacesCapMultip
@property (retain, nonatomic) CIVector *inputFacesCenterX; // ivar: inputFacesCenterX
@property (retain, nonatomic) CIVector *inputFacesCenterY; // ivar: inputFacesCenterY
@property (retain, nonatomic) CIVector *inputFacesChinX; // ivar: inputFacesChinX
@property (retain, nonatomic) CIVector *inputFacesChinY; // ivar: inputFacesChinY
@property (copy, nonatomic) NSNumber *inputFacesDistToBlurScaling; // ivar: inputFacesDistToBlurScaling
@property (copy, nonatomic) NSNumber *inputFacesEyeToEyebrowRatio; // ivar: inputFacesEyeToEyebrowRatio
@property (copy, nonatomic) NSNumber *inputFacesGainMultip; // ivar: inputFacesGainMultip
@property (retain, nonatomic) CIVector *inputFacesLeftEyeX; // ivar: inputFacesLeftEyeX
@property (retain, nonatomic) CIVector *inputFacesLeftEyeY; // ivar: inputFacesLeftEyeY
@property (copy, nonatomic) NSNumber *inputFacesLinearBlurGrowthC; // ivar: inputFacesLinearBlurGrowthC
@property (copy, nonatomic) NSNumber *inputFacesLinearBlurGrowthM; // ivar: inputFacesLinearBlurGrowthM
@property (copy, nonatomic) NSNumber *inputFacesMaxBlurDistFromFocus; // ivar: inputFacesMaxBlurDistFromFocus
@property (copy, nonatomic) NSNumber *inputFacesMaxBlurOnEyes; // ivar: inputFacesMaxBlurOnEyes
@property (retain, nonatomic) CIVector *inputFacesRightEyeX; // ivar: inputFacesRightEyeX
@property (retain, nonatomic) CIVector *inputFacesRightEyeY; // ivar: inputFacesRightEyeY
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (copy, nonatomic) NSNumber *inputMaxBlur; // ivar: inputMaxBlur
@property (retain, nonatomic) NSDictionary *inputTuningParameters; // ivar: inputTuningParameters


-(id)_kernel;
-(id)metalKernel;
-(id)outputImage;
-(id)outputImage_V4;


@end


#endif