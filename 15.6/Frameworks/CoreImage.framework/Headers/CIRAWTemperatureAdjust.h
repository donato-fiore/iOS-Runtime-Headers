// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIRAWTEMPERATUREADJUST_H
#define CIRAWTEMPERATUREADJUST_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CIRAWTemperatureAdjust : CIFilter {
    CIImage *inputImage;
    CIVector *inputWhitePoint;
    NSNumber *inputEV;
    NSNumber *inputVersion;
}




-(id)outputImage;


@end


#endif