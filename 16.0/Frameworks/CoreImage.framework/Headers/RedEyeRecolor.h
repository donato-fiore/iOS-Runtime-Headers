// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REDEYERECOLOR_H
#define REDEYERECOLOR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface RedEyeRecolor : CIFilter {
    CIImage *inputImage;
}


@property (retain, nonatomic) NSNumber *inputBrightness; // ivar: inputBrightness
@property (retain, nonatomic) NSNumber *inputChroma; // ivar: inputChroma
@property (retain, nonatomic) CIVector *inputExtent; // ivar: inputExtent
@property (retain, nonatomic) CIImage *inputMask; // ivar: inputMask
@property (retain, nonatomic) NSNumber *inputNoiseAmount; // ivar: inputNoiseAmount
@property (retain, nonatomic) NSNumber *inputRecovery; // ivar: inputRecovery
@property (retain, nonatomic) CIImage *inputSource; // ivar: inputSource
@property (retain, nonatomic) NSNumber *inputWhiteCutoff; // ivar: inputWhiteCutoff


-(id)kernelRecovery;
-(id)kernelRepair;
-(id)outputImage;


@end


#endif