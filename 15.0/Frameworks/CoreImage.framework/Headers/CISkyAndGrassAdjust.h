// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CISKYANDGRASSADJUST_H
#define CISKYANDGRASSADJUST_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CISkyAndGrassAdjust : CIFilter

@property (retain, nonatomic) NSNumber *inputGrassAmount; // ivar: inputGrassAmount
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputSkyAmount; // ivar: inputSkyAmount


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif