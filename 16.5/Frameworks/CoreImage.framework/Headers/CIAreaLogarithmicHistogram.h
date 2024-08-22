// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIAREALOGARITHMICHISTOGRAM_H
#define CIAREALOGARITHMICHISTOGRAM_H

@class NSNumber;


#import "CIAreaHistogram.h"

@interface CIAreaLogarithmicHistogram : CIAreaHistogram

@property (retain, nonatomic) NSNumber *inputMaximumStop; // ivar: inputMaximumStop
@property (retain, nonatomic) NSNumber *inputMinimumStop; // ivar: inputMinimumStop


+(id)customAttributes;
-(id)outputImage;


@end


#endif