// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CICOLORCROSSPOLYNOMIAL_H
#define CICOLORCROSSPOLYNOMIAL_H



#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIColorCrossPolynomial : CIFilter

@property (retain, nonatomic) CIVector *inputBlueCoefficients; // ivar: inputBlueCoefficients
@property (retain, nonatomic) CIVector *inputGreenCoefficients; // ivar: inputGreenCoefficients
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIVector *inputRedCoefficients; // ivar: inputRedCoefficients


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_kernel;
-(id)outputImage;


@end


#endif