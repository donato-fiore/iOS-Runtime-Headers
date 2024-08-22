// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIFASTBILATERALSOLVER_H
#define CIFASTBILATERALSOLVER_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIFastBilateralSolver : CIFilter

@property (retain) CIImage *inputConfidenceMapImage; // ivar: inputConfidenceMapImage
@property (retain) CIImage *inputDisparityImage; // ivar: inputDisparityImage
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (copy, nonatomic) NSNumber *inputLambda; // ivar: inputLambda
@property (copy, nonatomic) NSNumber *inputMaxNumIterations; // ivar: inputMaxNumIterations
@property (copy, nonatomic) NSNumber *inputMaxNumVertices; // ivar: inputMaxNumVertices
@property (copy, nonatomic) NSNumber *inputSigmaRChroma; // ivar: inputSigmaRChroma
@property (copy, nonatomic) NSNumber *inputSigmaRLuma; // ivar: inputSigmaRLuma
@property (copy, nonatomic) NSNumber *inputSigmaS; // ivar: inputSigmaS


+(id)customAttributes;
-(id)outputImage;


@end


#endif