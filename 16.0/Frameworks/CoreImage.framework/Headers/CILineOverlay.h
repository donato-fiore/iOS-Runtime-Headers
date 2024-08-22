// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CILINEOVERLAY_H
#define CILINEOVERLAY_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CILineOverlay : CIFilter {
    NSNumber *inputNRNoiseLevel;
    NSNumber *inputNRSharpness;
    NSNumber *inputEdgeIntensity;
    NSNumber *inputThreshold;
    NSNumber *inputContrast;
}


@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)_CIColorControls;
-(id)_CIComicNoiseReduction;
-(id)_CISobelEdges;
-(id)outputImage;


@end


#endif