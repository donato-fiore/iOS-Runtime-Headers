// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIFOCALPLANENATIVE_H
#define CIFOCALPLANENATIVE_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIFocalPlaneNative : CIFilter {
    CIImage *inputImage;
    CIImage *inputMatteImage;
    CIImage *inputLensModelCalculatorImage;
    NSNumber *inputAlphaThreshold;
    NSNumber *inputAmplitude;
    NSNumber *inputExponent;
    NSNumber *inputGamma;
    NSNumber *inputMinFactor;
    NSNumber *inputMaxFactor;
}




+(id)customAttributes;
-(id)_focalPlanePreProcessorKernel;
-(id)_focalPlanePreProcessorKernelPow2;
-(id)outputImage;


@end


#endif