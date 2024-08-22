// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CICOLORPOLYNOMIAL_H
#define CICOLORPOLYNOMIAL_H



#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIColorPolynomial : CIFilter

@property (retain, nonatomic) CIVector *inputAlphaCoefficients; // ivar: inputAlphaCoefficients
@property (retain, nonatomic) CIVector *inputBlueCoefficients; // ivar: inputBlueCoefficients
@property (retain, nonatomic) CIVector *inputGreenCoefficients; // ivar: inputGreenCoefficients
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIVector *inputRedCoefficients; // ivar: inputRedCoefficients


+(id)customAttributes;
-(BOOL)_isIdentity;
-(BOOL)_isIdentityAlpha;
-(id)_kernel;
-(id)_kernelRGB;
-(id)outputImage;


@end


#endif