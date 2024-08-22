// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIDISPARITYREFINEMENTV3_H
#define CIDISPARITYREFINEMENTV3_H

@class NSNumber, NSDictionary;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIDisparityRefinementV3 : CIFilter

@property (retain, nonatomic) NSNumber *inputDraftMode; // ivar: inputDraftMode
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (retain) CIImage *inputMainImage; // ivar: inputMainImage
@property (retain) CIImage *inputMatteImage; // ivar: inputMatteImage
@property (copy) NSNumber *inputScale; // ivar: inputScale
@property (retain) NSDictionary *inputTuningParameters; // ivar: inputTuningParameters


+(id)customAttributes;
-(id)alphaImageForMainImage:(id)arg0 disparity:(id)arg1 ;
-(id)outputImage;


@end


#endif