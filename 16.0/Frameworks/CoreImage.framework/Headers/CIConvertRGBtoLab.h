// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CICONVERTRGBTOLAB_H
#define CICONVERTRGBTOLAB_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIConvertRGBtoLab : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputNormalize; // ivar: inputNormalize


+(id)customAttributes;
-(id)outputImage;


@end


#endif