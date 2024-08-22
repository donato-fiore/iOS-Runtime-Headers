// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CILENSMODELCALCULATOR_H
#define CILENSMODELCALCULATOR_H

@class NSNumber, NSDictionary;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CILensModelCalculator : CIFilter

@property (copy, nonatomic) CIVector *inputFocusRect; // ivar: inputFocusRect
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (copy, nonatomic) NSNumber *inputIntrinsicMatrixFocalLength; // ivar: inputIntrinsicMatrixFocalLength
@property (retain) CIImage *inputMinMaxImage; // ivar: inputMinMaxImage
@property (copy, nonatomic) CIVector *inputOriginalSize; // ivar: inputOriginalSize
@property (copy, nonatomic) NSNumber *inputSimulatedAperture; // ivar: inputSimulatedAperture
@property (retain, nonatomic) NSDictionary *inputTuningParameters; // ivar: inputTuningParameters


+(id)customAttributes;
-(id)cpuParams;
-(id)kernel;
-(id)mtlKernel;
-(id)outputImage;


@end


#endif