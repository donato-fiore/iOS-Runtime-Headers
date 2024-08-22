// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIIPTHUECHROMAGRAYFILTER_H
#define PIIPTHUECHROMAGRAYFILTER_H

@class NSNumber, CIImage;


#import "PIIPTHueChromaFilter.h"

@interface PIIPTHueChromaGrayFilter : PIIPTHueChromaFilter

@property (retain, nonatomic) NSNumber *inputChromaMax; // ivar: _inputChromaMax
@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage
@property (retain, nonatomic) NSNumber *inputLumaRange; // ivar: _inputLumaRange
@property (retain, nonatomic) NSNumber *inputLumaTarget; // ivar: _inputLumaTarget


+(id)filterLumaKernel;
-(id)outputImage;


@end


#endif