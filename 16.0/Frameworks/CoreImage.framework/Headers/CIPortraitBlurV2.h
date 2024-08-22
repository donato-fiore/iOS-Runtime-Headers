// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIPORTRAITBLURV2_H
#define CIPORTRAITBLURV2_H

@class NSNumber, NSString, NSDictionary;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIPortraitBlurV2 : CIFilter

@property (copy, nonatomic) NSNumber *inputAperture; // ivar: inputAperture
@property (retain) CIImage *inputBlurmapImage; // ivar: inputBlurmapImage
@property (retain, nonatomic) NSNumber *inputDraftMode; // ivar: inputDraftMode
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (copy, nonatomic) NSNumber *inputLumaNoiseScale; // ivar: inputLumaNoiseScale
@property (retain) CIImage *inputMatteImage; // ivar: inputMatteImage
@property (copy, nonatomic) NSNumber *inputScale; // ivar: inputScale
@property (retain, nonatomic) NSString *inputShape; // ivar: inputShape
@property (retain, nonatomic) NSDictionary *inputTuningParameters; // ivar: inputTuningParameters


+(id)customAttributes;
-(CGFloat)effectiveScale;
-(id)outputImage;
-(id)sensorSize;


@end


#endif