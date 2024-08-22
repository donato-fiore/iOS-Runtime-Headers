// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIBUMPDISTORTIONLINEAR_H
#define CIBUMPDISTORTIONLINEAR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIBumpDistortionLinear : CIFilter

@property (retain, nonatomic) NSNumber *inputAngle; // ivar: inputAngle
@property (retain, nonatomic) CIVector *inputCenter; // ivar: inputCenter
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius
@property (retain, nonatomic) NSNumber *inputScale; // ivar: inputScale


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif