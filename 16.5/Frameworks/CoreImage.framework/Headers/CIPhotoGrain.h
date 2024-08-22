// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIPHOTOGRAIN_H
#define CIPHOTOGRAIN_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIPhotoGrain : CIFilter

@property (copy, nonatomic) NSNumber *inputAmount; // ivar: inputAmount
@property (copy, nonatomic) NSNumber *inputISO; // ivar: inputISO
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (copy, nonatomic) NSNumber *inputSeed; // ivar: inputSeed


+(id)customAttributes;
-(id)_grainBlendAndMixKernel;
-(id)_interpolateGrainKernel;
-(id)_paddedTileKernel;
-(id)outputImage;


@end


#endif