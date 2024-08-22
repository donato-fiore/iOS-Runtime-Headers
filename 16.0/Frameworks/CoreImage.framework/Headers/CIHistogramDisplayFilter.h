// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIHISTOGRAMDISPLAYFILTER_H
#define CIHISTOGRAMDISPLAYFILTER_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIHistogramDisplayFilter : CIFilter

@property (retain, nonatomic) NSNumber *inputHeight; // ivar: inputHeight
@property (retain, nonatomic) NSNumber *inputHighLimit; // ivar: inputHighLimit
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputLowLimit; // ivar: inputLowLimit


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif