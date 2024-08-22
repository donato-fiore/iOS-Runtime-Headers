// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIAREACENTROID_H
#define CIAREACENTROID_H



#import "CIReductionFilter.h"

@interface CIAreaCentroid : CIReductionFilter



+(id)customAttributes;
-(id)_kernelCentroid;
-(id)_kernelWeightedCoordinate;
-(id)outputImage;


@end


#endif