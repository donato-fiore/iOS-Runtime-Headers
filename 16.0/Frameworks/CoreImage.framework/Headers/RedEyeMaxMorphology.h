// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REDEYEMAXMORPHOLOGY_H
#define REDEYEMAXMORPHOLOGY_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface RedEyeMaxMorphology : CIFilter {
    CIImage *inputImage;
    NSNumber *inputRadius;
}




-(id)outputImage;


@end


#endif