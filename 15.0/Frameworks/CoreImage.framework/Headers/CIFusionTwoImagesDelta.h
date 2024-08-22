// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIFUSIONTWOIMAGESDELTA_H
#define CIFUSIONTWOIMAGESDELTA_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIFusionTwoImagesDelta : CIFilter

@property (retain) CIVector *inputAdditive; // ivar: inputAdditive
@property (retain) NSNumber *inputApertureScaling; // ivar: inputApertureScaling
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (retain) NSNumber *inputMaxBlur; // ivar: inputMaxBlur
@property (retain) NSNumber *inputProtectStrength; // ivar: inputProtectStrength
@property (retain) CIImage *inputSecondaryImage; // ivar: inputSecondaryImage
@property (retain) CIVector *inputSubtractive; // ivar: inputSubtractive


-(id)kernel;
-(id)outputImage;


@end


#endif