// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CININEPARTSTRETCHED_H
#define CININEPARTSTRETCHED_H



#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CINinePartStretched : CIFilter

@property (retain, nonatomic) CIVector *inputBreakpoint0; // ivar: inputBreakpoint0
@property (retain, nonatomic) CIVector *inputBreakpoint1; // ivar: inputBreakpoint1
@property (retain, nonatomic) CIVector *inputGrowAmount; // ivar: inputGrowAmount
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif