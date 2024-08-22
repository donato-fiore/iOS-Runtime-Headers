// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CICONVEXFILL_H
#define CICONVEXFILL_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CIConvexFill : CIFilter {
    CIImage *inputImage;
}


@property (retain, nonatomic) CIVector *inputAreaThresholdLoHi; // ivar: inputAreaThresholdLoHi
@property (retain, nonatomic) CIImage *inputCenter; // ivar: inputCenter
@property (retain, nonatomic) NSNumber *inputSplat; // ivar: inputSplat
@property (retain, nonatomic) NSNumber *inputThreshold; // ivar: inputThreshold


-(id)outputImage;


@end


#endif