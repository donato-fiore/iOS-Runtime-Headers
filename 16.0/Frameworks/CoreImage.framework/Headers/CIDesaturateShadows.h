// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIDESATURATESHADOWS_H
#define CIDESATURATESHADOWS_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIDesaturateShadows : CIFilter {
    CIImage *inputImage;
}


@property (retain, nonatomic) NSNumber *inputIntensity; // ivar: inputIntensity
@property (retain, nonatomic) NSNumber *inputSoftness; // ivar: inputSoftness
@property (retain, nonatomic) NSNumber *inputThreshold; // ivar: inputThreshold


+(id)customAttributes;
-(id)outputImage;


@end


#endif