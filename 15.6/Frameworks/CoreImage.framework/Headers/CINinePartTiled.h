// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CININEPARTTILED_H
#define CININEPARTTILED_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CINinePartTiled : CIFilter

@property (retain, nonatomic) CIVector *inputBreakpoint0; // ivar: inputBreakpoint0
@property (retain, nonatomic) CIVector *inputBreakpoint1; // ivar: inputBreakpoint1
@property (retain, nonatomic) NSNumber *inputFlipYTiles; // ivar: inputFlipYTiles
@property (retain, nonatomic) CIVector *inputGrowAmount; // ivar: inputGrowAmount
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)_kernelAlt;
-(id)outputImage;


@end


#endif