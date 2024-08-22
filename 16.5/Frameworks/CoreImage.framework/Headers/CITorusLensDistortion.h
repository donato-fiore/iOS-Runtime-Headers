// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CITORUSLENSDISTORTION_H
#define CITORUSLENSDISTORTION_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CITorusLensDistortion : CIFilter {
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputWidth;
    NSNumber *inputRefraction;
}


@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)_CITorusRefraction;
-(id)outputImage;


@end


#endif