// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REDEYESPECULAR_H
#define REDEYESPECULAR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface RedEyeSpecular : CIFilter

@property (retain, nonatomic) NSNumber *inputDebugFlag; // ivar: inputDebugFlag
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIImage *inputSource; // ivar: inputSource
@property (retain, nonatomic) NSNumber *inputSpecIntensity; // ivar: inputSpecIntensity
@property (retain, nonatomic) CIImage *inputSpecularMask; // ivar: inputSpecularMask
@property (retain, nonatomic) NSNumber *inputSpecularThreshold; // ivar: inputSpecularThreshold


-(id)outputImage;


@end


#endif