// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CICOLORTHRESHOLD_H
#define CICOLORTHRESHOLD_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIColorThreshold : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputThreshold; // ivar: inputThreshold


+(id)customAttributes;
-(id)outputImage;


@end


#endif