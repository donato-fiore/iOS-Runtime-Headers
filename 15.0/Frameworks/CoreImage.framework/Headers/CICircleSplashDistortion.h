// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CICIRCLESPLASHDISTORTION_H
#define CICIRCLESPLASHDISTORTION_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CICircleSplashDistortion : CIFilter

@property (retain, nonatomic) CIVector *inputCenter; // ivar: inputCenter
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif