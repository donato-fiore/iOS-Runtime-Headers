// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIKMEANS_H
#define CIKMEANS_H

@class NSNumber;


#import "CIReductionFilter.h"
#import "CIImage.h"

@interface CIKMeans : CIReductionFilter

@property (copy, nonatomic) NSNumber *inputCount; // ivar: inputCount
@property (retain, nonatomic) CIImage *inputMeans; // ivar: inputMeans
@property (copy, nonatomic) NSNumber *inputPasses; // ivar: inputPasses
@property (copy, nonatomic) NSNumber *inputPerceptual; // ivar: inputPerceptual


+(id)customAttributes;
-(id)_combine:(id)arg0 ;
-(id)_kernelKmeans;
-(id)defuse:(id)arg0 seed:(int)arg1 ;
-(id)outputImage;


@end


#endif