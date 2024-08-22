// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CISTRETCHCROP_H
#define CISTRETCHCROP_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIStretchCrop : CIFilter {
    CIVector *inputSize;
    NSNumber *inputCropAmount;
    NSNumber *inputCenterStretchAmount;
}


@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif