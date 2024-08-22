// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIIPTHUECHROMACOLORFILTER_H
#define PIIPTHUECHROMACOLORFILTER_H

@class NSNumber, CIImage;


#import "PIIPTHueChromaFilter.h"

@interface PIIPTHueChromaColorFilter : PIIPTHueChromaFilter

@property (retain, nonatomic) NSNumber *inputChromaMin; // ivar: _inputChromaMin
@property (retain, nonatomic) NSNumber *inputHueIsNormalized; // ivar: _inputHueIsNormalized
@property (retain, nonatomic) NSNumber *inputHueRange; // ivar: _inputHueRange
@property (retain, nonatomic) NSNumber *inputHueTarget; // ivar: _inputHueTarget
@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage


+(id)filterHueKernel;
-(id)outputImage;


@end


#endif