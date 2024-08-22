// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CICOLORPOLYNOMIALINVERSE_H
#define CICOLORPOLYNOMIALINVERSE_H



#import "CIColorPolynomial.h"

@interface CIColorPolynomialInverse : CIColorPolynomial



+(id)customAttributes;
-(BOOL)_isInvertible;
-(id)_kernel;
-(id)_kernelRGB;
-(id)outputImage;


@end


#endif