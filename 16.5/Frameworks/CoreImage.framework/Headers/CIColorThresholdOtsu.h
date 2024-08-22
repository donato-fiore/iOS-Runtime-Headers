// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CICOLORTHRESHOLDOTSU_H
#define CICOLORTHRESHOLDOTSU_H



#import "CIFilter.h"
#import "CIImage.h"

@interface CIColorThresholdOtsu : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)outputImage;


@end


#endif