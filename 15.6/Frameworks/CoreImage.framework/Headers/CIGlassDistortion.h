// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIGLASSDISTORTION_H
#define CIGLASSDISTORTION_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIGlassDistortion : CIFilter

@property (retain, nonatomic) CIVector *inputCenter; // ivar: inputCenter
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputScale; // ivar: inputScale
@property (retain, nonatomic) CIImage *inputTexture; // ivar: inputTexture


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif