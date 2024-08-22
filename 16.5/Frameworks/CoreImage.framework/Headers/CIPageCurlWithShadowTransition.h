// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIPAGECURLWITHSHADOWTRANSITION_H
#define CIPAGECURLWITHSHADOWTRANSITION_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIPageCurlWithShadowTransition : CIFilter {
    CIVector *inputExtent;
    NSNumber *inputTime;
    NSNumber *inputAngle;
    NSNumber *inputRadius;
    NSNumber *inputShadowSize;
    NSNumber *inputShadowAmount;
    CIVector *inputShadowExtent;
}


@property (retain, nonatomic) CIImage *inputBacksideImage; // ivar: inputBacksideImage
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIImage *inputTargetImage; // ivar: inputTargetImage


+(id)customAttributes;
-(id)_CIPageCurlNoShadowTransition;
-(id)_CIPageCurlWithShadowTransition;
-(id)outputImage;


@end


#endif