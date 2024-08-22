// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIBARSSWIPETRANSITION_H
#define CIBARSSWIPETRANSITION_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIBarsSwipeTransition : CIFilter

@property (retain, nonatomic) NSNumber *inputAngle; // ivar: inputAngle
@property (retain, nonatomic) NSNumber *inputBarOffset; // ivar: inputBarOffset
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIImage *inputTargetImage; // ivar: inputTargetImage
@property (retain, nonatomic) NSNumber *inputTime; // ivar: inputTime
@property (retain, nonatomic) NSNumber *inputWidth; // ivar: inputWidth


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif