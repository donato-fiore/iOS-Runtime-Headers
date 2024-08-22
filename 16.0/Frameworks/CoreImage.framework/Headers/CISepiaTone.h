// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CISEPIATONE_H
#define CISEPIATONE_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CISepiaTone : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputIntensity; // ivar: inputIntensity


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_kernel;
-(id)outputImage;


@end


#endif