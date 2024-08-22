// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIPORTRAITBLURNOISE_H
#define CIPORTRAITBLURNOISE_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIPortraitBlurNoise : CIFilter

@property (copy) CIVector *inputExtent; // ivar: inputExtent
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (copy, nonatomic) NSNumber *inputLumaNoiseAmpl; // ivar: inputLumaNoiseAmpl
@property (copy, nonatomic) NSNumber *inputLumaNoiseModelCoeff; // ivar: inputLumaNoiseModelCoeff
@property (copy, nonatomic) NSNumber *inputUseMetal; // ivar: inputUseMetal


-(id)_kernel;
-(id)_kernelMetal;
-(id)outputImage;


@end


#endif