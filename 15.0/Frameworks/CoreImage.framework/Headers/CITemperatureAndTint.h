// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CITEMPERATUREANDTINT_H
#define CITEMPERATUREANDTINT_H



#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CITemperatureAndTint : CIFilter {
    CIVector *inputNeutral;
}


@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIVector *inputNeutral;
@property (retain, nonatomic) CIVector *inputTargetNeutral; // ivar: inputTargetNeutral


+(id)customAttributes;
-(id)outputImage;


@end


#endif