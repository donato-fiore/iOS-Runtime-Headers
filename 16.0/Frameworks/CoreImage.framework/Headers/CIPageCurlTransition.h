// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIPAGECURLTRANSITION_H
#define CIPAGECURLTRANSITION_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIPageCurlTransition : CIFilter {
    CIVector *inputExtent;
    NSNumber *inputTime;
    NSNumber *inputAngle;
    NSNumber *inputRadius;
}


@property (retain, nonatomic) CIImage *inputBacksideImage; // ivar: inputBacksideImage
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIImage *inputShadingImage; // ivar: inputShadingImage
@property (retain, nonatomic) CIImage *inputTargetImage; // ivar: inputTargetImage


+(id)customAttributes;
-(id)_CIPageCurlTransNoEmap;
-(id)_CIPageCurlTransition;
-(id)outputImage;


@end


#endif