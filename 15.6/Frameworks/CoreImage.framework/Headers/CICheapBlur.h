// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CICHEAPBLUR_H
#define CICHEAPBLUR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CICheapBlur : CIFilter {
    CIImage *inputImage;
    NSNumber *inputPasses;
    NSNumber *inputSampling;
}




+(id)customAttributes;
-(id)_CICheapBlur;
-(id)_CILerp;
-(id)outputImage;


@end


#endif