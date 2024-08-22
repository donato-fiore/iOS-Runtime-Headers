// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIGAUSSIANBLUR_H
#define CIGAUSSIANBLUR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIGaussianBlur : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)outputImage;


@end


#endif