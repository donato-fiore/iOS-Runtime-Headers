// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CISWIPETRANSITION_H
#define CISWIPETRANSITION_H

@class NSNumber;


#import "CIFilter.h"
#import "CIColor.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CISwipeTransition : CIFilter

@property (retain, nonatomic) NSNumber *inputAngle; // ivar: inputAngle
@property (retain, nonatomic) CIColor *inputColor; // ivar: inputColor
@property (retain, nonatomic) CIVector *inputExtent; // ivar: inputExtent
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputOpacity; // ivar: inputOpacity
@property (retain, nonatomic) CIImage *inputTargetImage; // ivar: inputTargetImage
@property (retain, nonatomic) NSNumber *inputTime; // ivar: inputTime
@property (retain, nonatomic) NSNumber *inputWidth; // ivar: inputWidth


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif