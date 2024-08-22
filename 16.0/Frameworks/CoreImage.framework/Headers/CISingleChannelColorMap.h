// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CISINGLECHANNELCOLORMAP_H
#define CISINGLECHANNELCOLORMAP_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CISingleChannelColorMap : CIFilter

@property (retain, nonatomic) NSNumber *inputChannelIndex; // ivar: inputChannelIndex
@property (retain, nonatomic) NSNumber *inputColorMapIndex; // ivar: inputColorMapIndex
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputShouldNormalize; // ivar: inputShouldNormalize


+(id)customAttributes;
-(id)outputImage;


@end


#endif