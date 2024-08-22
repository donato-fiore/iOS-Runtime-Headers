// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CICONVOLUTION3X3_H
#define CICONVOLUTION3X3_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CIConvolution3X3 : CIFilter

@property (retain, nonatomic) NSNumber *inputBias; // ivar: inputBias
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIVector *inputWeights; // ivar: inputWeights


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)outputImage;


@end


#endif