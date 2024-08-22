// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CISPOTLIGHT_H
#define CISPOTLIGHT_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIColor.h"
#import "CIImage.h"

@interface CISpotLight : CIFilter {
    CIVector *inputLightPosition;
    CIVector *inputLightPointsAt;
    NSNumber *inputBrightness;
    NSNumber *inputConcentration;
    CIColor *inputColor;
}


@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)_CISpotLight;
-(id)outputImage;


@end


#endif