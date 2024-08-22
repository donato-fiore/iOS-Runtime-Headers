// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIACCORDIONFOLDTRANSITION_H
#define CIACCORDIONFOLDTRANSITION_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIAccordionFoldTransition : CIFilter

@property (retain, nonatomic) NSNumber *inputBottomHeight; // ivar: inputBottomHeight
@property (retain, nonatomic) NSNumber *inputFoldShadowAmount; // ivar: inputFoldShadowAmount
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputNumberOfFolds; // ivar: inputNumberOfFolds
@property (retain, nonatomic) CIImage *inputTargetImage; // ivar: inputTargetImage
@property (retain, nonatomic) NSNumber *inputTime; // ivar: inputTime


+(id)customAttributes;
-(id)_kernel;
-(id)_kernelMix;
-(id)_kernelWarpS;
-(id)_kernelWarpT;
-(id)outputImage;


@end


#endif