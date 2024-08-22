// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIPAPERWASH_H
#define CIPAPERWASH_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIPaperWash : CIFilter {
    CIImage *inputImage;
}


@property (copy, nonatomic) NSNumber *inputGreyscale; // ivar: inputGreyscale
@property (copy, nonatomic) NSNumber *inputSaturation; // ivar: inputSaturation


+(id)customAttributes;
-(id)outputImage;


@end


#endif