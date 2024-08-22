// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIPERCENTILERED_H
#define CIPERCENTILERED_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIPercentileRed : CIFilter {
    CIImage *inputImage;
}


@property (retain, nonatomic) NSNumber *inputClip; // ivar: inputClip
@property (retain, nonatomic) NSNumber *inputCount; // ivar: inputCount
@property (retain, nonatomic) NSNumber *inputHard; // ivar: inputHard
@property (retain, nonatomic) NSNumber *inputNormalize; // ivar: inputNormalize
@property (retain, nonatomic) NSNumber *inputPercentile; // ivar: inputPercentile
@property (retain, nonatomic) NSNumber *inputScale; // ivar: inputScale


+(id)customAttributes;
-(id)outputImage;


@end


#endif