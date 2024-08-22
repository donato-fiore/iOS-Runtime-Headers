// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIEDGEPRESERVEUPSAMPLEFILTER_H
#define CIEDGEPRESERVEUPSAMPLEFILTER_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIEdgePreserveUpsampleFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputLumaSigma; // ivar: inputLumaSigma
@property (retain, nonatomic) CIImage *inputSmallImage; // ivar: inputSmallImage
@property (retain, nonatomic) NSNumber *inputSpatialSigma; // ivar: inputSpatialSigma


+(id)customAttributes;
-(id)_kernelGuideCombine;
-(id)_kernelGuideCombine4;
-(id)_kernelGuideMono;
-(id)_kernelJointUpsamp;
-(id)_kernelJointUpsampRG;
-(id)outputImage;


@end


#endif