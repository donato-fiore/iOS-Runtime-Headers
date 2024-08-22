// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CICOLORCONTROLS_H
#define CICOLORCONTROLS_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIColorControls : CIFilter

@property (retain, nonatomic) NSNumber *inputBrightness; // ivar: inputBrightness
@property (retain, nonatomic) NSNumber *inputContrast; // ivar: inputContrast
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputSaturation; // ivar: inputSaturation


+(id)customAttributes;
-(id)outputImage;


@end


#endif