// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIPSEUDOMEDIAN_H
#define CIPSEUDOMEDIAN_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIPseudoMedian : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius
@property (retain, nonatomic) NSNumber *inputWeights; // ivar: inputWeights


+(id)customAttributes;
-(id)outputImage;


@end


#endif