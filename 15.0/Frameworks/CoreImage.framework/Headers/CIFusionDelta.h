// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIFUSIONDELTA_H
#define CIFUSIONDELTA_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CIFusionDelta : CIFilter {
    CIImage *inputImage;
    CIVector *inputAddBlur;
    CIVector *inputRemoveBlur;
    NSNumber *inputApertureScaling;
    NSNumber *inputMaxBlur;
}




+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)kernel;
-(id)outputImage;


@end


#endif