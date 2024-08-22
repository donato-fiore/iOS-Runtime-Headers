// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIMATTINGSOLVERINTERNAL_H
#define CIMATTINGSOLVERINTERNAL_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIMattingSolverInternal : CIFilter {
    CIImage *inputImage;
    CIImage *inputMainImage;
    CIImage *inputPredicateImage;
    NSNumber *inputRadius;
    NSNumber *inputSubsampling;
    NSNumber *inputEPS;
    NSNumber *inputNumIterations;
    NSNumber *inputErosionKernelSize;
    NSNumber *inputUseDepthFilter;
    NSNumber *inputFGThresholdValue;
    NSNumber *inputBGThresholdValue;
}




+(id)customAttributes;
-(id)outputImage;


@end


#endif