// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIBLURMAPSMOOTHING_H
#define CIBLURMAPSMOOTHING_H

@class NSNumber, NSDictionary;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIBlurmapSmoothing : CIFilter

@property (retain, nonatomic) NSNumber *inputDraftMode; // ivar: inputDraftMode
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (retain) NSNumber *inputScale; // ivar: inputScale
@property (retain) NSDictionary *inputTuningParameters; // ivar: inputTuningParameters


+(id)customAttributes;
-(id)_kernelH;
-(id)_kernelV;
-(id)outputImage;
-(id)performPass:(id)arg0 reference:(id)arg1 values:(id)arg2 rect:(struct CGRect )arg3 ;


@end


#endif