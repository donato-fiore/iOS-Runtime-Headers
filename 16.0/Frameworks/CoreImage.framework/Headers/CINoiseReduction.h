// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CINOISEREDUCTION_H
#define CINOISEREDUCTION_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CINoiseReduction : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputNoiseLevel; // ivar: inputNoiseLevel
@property (retain, nonatomic) NSNumber *inputSharpness; // ivar: inputSharpness


+(id)customAttributes;
-(id)_CINoiseReduction;
-(id)outputImage;


@end


#endif