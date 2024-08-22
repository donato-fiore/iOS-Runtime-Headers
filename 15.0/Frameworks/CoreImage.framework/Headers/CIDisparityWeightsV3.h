// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIDISPARITYWEIGHTSV3_H
#define CIDISPARITYWEIGHTSV3_H

@class NSNumber, NSDictionary;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIDisparityWeightsV3 : CIFilter

@property (retain) CIImage *inputImage; // ivar: inputImage
@property (retain) NSNumber *inputScale; // ivar: inputScale
@property (retain) NSDictionary *inputTuningParameters; // ivar: inputTuningParameters


-(id)outputImage;
-(id)weightsXKernel;
-(id)weightsYKernel;


@end


#endif