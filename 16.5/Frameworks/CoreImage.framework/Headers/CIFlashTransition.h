// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIFLASHTRANSITION_H
#define CIFLASHTRANSITION_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIColor.h"
#import "CIImage.h"

@interface CIFlashTransition : CIFilter

@property (retain, nonatomic) CIVector *inputCenter; // ivar: inputCenter
@property (retain, nonatomic) CIColor *inputColor; // ivar: inputColor
@property (retain, nonatomic) CIVector *inputExtent; // ivar: inputExtent
@property (retain, nonatomic) NSNumber *inputFadeThreshold; // ivar: inputFadeThreshold
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputMaxStriationRadius; // ivar: inputMaxStriationRadius
@property (retain, nonatomic) NSNumber *inputStriationContrast; // ivar: inputStriationContrast
@property (retain, nonatomic) NSNumber *inputStriationStrength; // ivar: inputStriationStrength
@property (retain, nonatomic) CIImage *inputTargetImage; // ivar: inputTargetImage
@property (retain, nonatomic) NSNumber *inputTime; // ivar: inputTime


+(id)customAttributes;
-(id)_colorKernel;
-(id)_geomKernel;
-(id)outputImage;


@end


#endif