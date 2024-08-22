// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIGAUSSIANBLURXY_H
#define CIGAUSSIANBLURXY_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIGaussianBlurXY : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputSigmaX; // ivar: inputSigmaX
@property (retain, nonatomic) NSNumber *inputSigmaY; // ivar: inputSigmaY


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)outputImage;


@end


#endif