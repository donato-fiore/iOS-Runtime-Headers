// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIDEPTHOFFIELD_H
#define CIDEPTHOFFIELD_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIDepthOfField : CIFilter {
    CIVector *inputPoint0;
    CIVector *inputPoint1;
    NSNumber *inputSaturation;
    NSNumber *inputUnsharpMaskRadius;
    NSNumber *inputUnsharpMaskIntensity;
    NSNumber *inputRadius;
}


@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)_CIAlphaNormalize;
-(id)_CITiltShift;
-(id)_DistanceColored;
-(id)outputImage;


@end


#endif