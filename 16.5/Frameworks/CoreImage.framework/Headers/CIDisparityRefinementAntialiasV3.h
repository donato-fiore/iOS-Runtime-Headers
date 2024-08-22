// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIDISPARITYREFINEMENTANTIALIASV3_H
#define CIDISPARITYREFINEMENTANTIALIASV3_H

@class NSNumber, NSDictionary;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIDisparityRefinementAntialiasV3 : CIFilter

@property (retain) CIImage *inputDisparityWeightImage; // ivar: inputDisparityWeightImage
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (retain) CIImage *inputPreprocImage; // ivar: inputPreprocImage
@property (retain) NSNumber *inputScale; // ivar: inputScale
@property (retain) NSDictionary *inputTuningParameters; // ivar: inputTuningParameters


-(id)antialiasKernel;
-(id)outputImage;


@end


#endif