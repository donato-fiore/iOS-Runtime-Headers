// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIBLURMAPREFINEMENTDISTANCEDELTA_H
#define CIBLURMAPREFINEMENTDISTANCEDELTA_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIBlurmapRefinementDistanceDelta : CIFilter

@property (retain) NSNumber *inputDistance; // ivar: inputDistance
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (retain) NSNumber *inputScalingFactor; // ivar: inputScalingFactor
@property (retain) CIImage *inputSecondaryImage; // ivar: inputSecondaryImage
@property (retain) NSNumber *inputThreshold; // ivar: inputThreshold


-(id)outputImage;


@end


#endif