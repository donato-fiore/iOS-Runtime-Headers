// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CICOLORBALANCE_H
#define CICOLORBALANCE_H

@class NSNumber;


#import "CIFilter.h"
#import "CIColor.h"
#import "CIImage.h"

@interface CIColorBalance : CIFilter

@property (retain, nonatomic) CIColor *inputColor; // ivar: inputColor
@property (retain, nonatomic) NSNumber *inputDamping; // ivar: inputDamping
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputStrength; // ivar: inputStrength
@property (retain, nonatomic) NSNumber *inputWarmth; // ivar: inputWarmth


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif