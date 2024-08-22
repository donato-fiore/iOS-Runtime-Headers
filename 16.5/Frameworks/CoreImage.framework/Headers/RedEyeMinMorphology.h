// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REDEYEMINMORPHOLOGY_H
#define REDEYEMINMORPHOLOGY_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface RedEyeMinMorphology : CIFilter {
    CIImage *inputImage;
    NSNumber *inputRadius;
}




-(id)outputImage;


@end


#endif