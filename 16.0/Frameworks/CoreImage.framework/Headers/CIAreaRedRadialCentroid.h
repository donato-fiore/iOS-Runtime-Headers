// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIAREAREDRADIALCENTROID_H
#define CIAREAREDRADIALCENTROID_H

@class NSNumber;


#import "CIAreaRedCentroid.h"
#import "CIImage.h"

@interface CIAreaRedRadialCentroid : CIAreaRedCentroid

@property (retain, nonatomic) CIImage *inputCenter; // ivar: inputCenter
@property (retain, nonatomic) NSNumber *inputMinWeight; // ivar: inputMinWeight
@property (retain, nonatomic) NSNumber *inputRadialMode; // ivar: inputRadialMode
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius


+(id)customAttributes;
-(id)_kernelCenter;
-(id)_kernelDisk;
-(id)_kernelGaussian;
-(id)outputImage;


@end


#endif