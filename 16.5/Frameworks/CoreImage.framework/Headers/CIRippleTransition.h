// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIRIPPLETRANSITION_H
#define CIRIPPLETRANSITION_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIRippleTransition : CIFilter {
    CIVector *inputCenter;
    CIVector *inputExtent;
    NSNumber *inputTime;
    NSNumber *inputWidth;
    NSNumber *inputScale;
}


@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIImage *inputShadingImage; // ivar: inputShadingImage
@property (retain, nonatomic) CIImage *inputTargetImage; // ivar: inputTargetImage


+(id)customAttributes;
-(id)_CIRippleTransition;
-(id)outputImage;


@end


#endif