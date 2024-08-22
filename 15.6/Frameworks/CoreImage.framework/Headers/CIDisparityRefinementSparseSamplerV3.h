// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIDISPARITYREFINEMENTSPARSESAMPLERV3_H
#define CIDISPARITYREFINEMENTSPARSESAMPLERV3_H

@class NSNumber, NSDictionary;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIDisparityRefinementSparseSamplerV3 : CIFilter

@property (retain) CIImage *inputImage; // ivar: inputImage
@property (retain) CIImage *inputPreprocImage; // ivar: inputPreprocImage
@property (retain) NSNumber *inputScale; // ivar: inputScale
@property (retain) NSDictionary *inputTuningParameters; // ivar: inputTuningParameters


-(id)outputImage;
-(id)sampleKernel;


@end


#endif