// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIAPPLESMITHGOSSETTSCALE_H
#define CIAPPLESMITHGOSSETTSCALE_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIAppleSmithGossettScale : CIFilter {
    CIImage *inputImage;
    NSNumber *inputScale;
}




+(id)customAttributes;
-(id)outputImage;


@end


#endif