// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CICONVOLUTION5X5_H
#define CICONVOLUTION5X5_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CIConvolution5X5 : CIFilter

@property (retain, nonatomic) NSNumber *inputBias; // ivar: inputBias
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIVector *inputWeights; // ivar: inputWeights


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)outputImage;


@end


#endif