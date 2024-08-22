// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CISEGMENTATIONFUSION_H
#define CISEGMENTATIONFUSION_H

@class NSNumber, NSDictionary;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CISegmentationFusion : CIFilter {
    CIImage *inputImage;
    CIImage *inputMatteImage;
    CIVector *inputAddBlur;
    CIVector *inputRemoveBlur;
    NSNumber *inputApertureScaling;
    NSDictionary *inputTuningParameters;
}




+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)kernel;
-(id)outputImage;


@end


#endif