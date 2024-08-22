// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CICOLORMONOCHROME_H
#define CICOLORMONOCHROME_H

@class NSNumber;


#import "CIFilter.h"
#import "CIColor.h"
#import "CIImage.h"

@interface CIColorMonochrome : CIFilter

@property (retain, nonatomic) CIColor *inputColor; // ivar: inputColor
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputIntensity; // ivar: inputIntensity


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif