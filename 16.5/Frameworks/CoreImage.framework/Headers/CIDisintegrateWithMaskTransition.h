// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIDISINTEGRATEWITHMASKTRANSITION_H
#define CIDISINTEGRATEWITHMASKTRANSITION_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CIDisintegrateWithMaskTransition : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIImage *inputMaskImage; // ivar: inputMaskImage
@property (retain, nonatomic) NSNumber *inputShadowDensity; // ivar: inputShadowDensity
@property (retain, nonatomic) CIVector *inputShadowOffset; // ivar: inputShadowOffset
@property (retain, nonatomic) NSNumber *inputShadowRadius; // ivar: inputShadowRadius
@property (retain, nonatomic) CIImage *inputTargetImage; // ivar: inputTargetImage
@property (retain, nonatomic) NSNumber *inputTime; // ivar: inputTime


+(id)customAttributes;
-(id)_kernel;
-(id)_kernelG;
-(id)outputImage;


@end


#endif