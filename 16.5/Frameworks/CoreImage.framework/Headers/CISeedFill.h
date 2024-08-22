// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CISEEDFILL_H
#define CISEEDFILL_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CISeedFill : CIFilter {
    CIImage *inputImage;
}


@property (retain, nonatomic) CIImage *inputCenter; // ivar: inputCenter
@property (retain, nonatomic) CIVector *inputExtent; // ivar: inputExtent
@property (retain, nonatomic) NSNumber *inputSplat; // ivar: inputSplat
@property (retain, nonatomic) NSNumber *inputThreshold; // ivar: inputThreshold


-(id)outputImage;


@end


#endif