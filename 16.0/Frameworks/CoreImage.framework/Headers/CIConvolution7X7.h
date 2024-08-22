// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CICONVOLUTION7X7_H
#define CICONVOLUTION7X7_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CIConvolution7X7 : CIFilter

@property (retain, nonatomic) NSNumber *inputBias; // ivar: inputBias
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIVector *inputWeights; // ivar: inputWeights


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)outputImage;


@end


#endif