// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIBLURMAPREFINEMENTLINEARMAPPING_H
#define CIBLURMAPREFINEMENTLINEARMAPPING_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIBlurmapRefinementLinearMapping : CIFilter

@property (retain) CIImage *inputImage; // ivar: inputImage
@property (retain) NSNumber *inputScalingFactor; // ivar: inputScalingFactor
@property (retain) CIImage *inputSecondaryImage; // ivar: inputSecondaryImage


-(id)kernel;
-(id)kernelNoSecondaryImage;
-(id)outputImage;


@end


#endif