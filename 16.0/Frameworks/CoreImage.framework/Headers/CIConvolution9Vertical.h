// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CICONVOLUTION9VERTICAL_H
#define CICONVOLUTION9VERTICAL_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CIConvolution9Vertical : CIFilter

@property (retain, nonatomic) NSNumber *inputBias; // ivar: inputBias
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIVector *inputWeights; // ivar: inputWeights


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)outputImage;


@end


#endif