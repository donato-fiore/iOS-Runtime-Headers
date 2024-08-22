// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIFOCALPLANEPREPROCESSORINTERNAL_H
#define CIFOCALPLANEPREPROCESSORINTERNAL_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CIFocalPlanePreprocessorInternal : CIFilter {
    CIImage *inputImage;
    CIImage *inputMatteImage;
    CIVector *inputFocusRect;
    NSNumber *inputZeroShiftPercentile;
    NSNumber *inputAlphaThreshold;
    NSNumber *inputAmplitude;
    NSNumber *inputExponent;
    NSNumber *inputGamma;
    NSNumber *inputMinFactor;
    NSNumber *inputMaxFactor;
}




+(id)customAttributes;
-(id)outputImage;


@end


#endif