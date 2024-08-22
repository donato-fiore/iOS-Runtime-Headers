// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HISTOCLIP_RGBA8_CPU_H
#define HISTOCLIP_RGBA8_CPU_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface HistoClip_RGBA8_CPU : CIFilter

@property (retain, nonatomic) NSNumber *inputAbortMaxCenterDist; // ivar: inputAbortMaxCenterDist
@property (retain, nonatomic) CIVector *inputCenterExtentLeft; // ivar: inputCenterExtentLeft
@property (retain, nonatomic) CIVector *inputCenterExtentRight; // ivar: inputCenterExtentRight
@property (retain, nonatomic) CIImage *inputCenterLeft; // ivar: inputCenterLeft
@property (retain, nonatomic) CIVector *inputCenterOffsetLeft; // ivar: inputCenterOffsetLeft
@property (retain, nonatomic) CIVector *inputCenterOffsetRight; // ivar: inputCenterOffsetRight
@property (retain, nonatomic) CIImage *inputCenterRight; // ivar: inputCenterRight
@property (retain, nonatomic) NSNumber *inputDensityRadius; // ivar: inputDensityRadius
@property (retain, nonatomic) CIImage *inputDetectionLeft; // ivar: inputDetectionLeft
@property (retain, nonatomic) CIImage *inputDetectionRight; // ivar: inputDetectionRight
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputInterPeakMinRepair; // ivar: inputInterPeakMinRepair
@property (retain, nonatomic) CIVector *inputMaxArea; // ivar: inputMaxArea
@property (retain, nonatomic) CIVector *inputMaxAreaRatio; // ivar: inputMaxAreaRatio
@property (retain, nonatomic) NSNumber *inputMaxInterDispersion; // ivar: inputMaxInterDispersion
@property (retain, nonatomic) NSNumber *inputMaxRelDensity; // ivar: inputMaxRelDensity
@property (retain, nonatomic) NSNumber *inputMinDensity; // ivar: inputMinDensity
@property (retain, nonatomic) NSNumber *inputMinGobalLocalMeanDiff; // ivar: inputMinGobalLocalMeanDiff
@property (retain, nonatomic) NSNumber *inputMinInterDispersion; // ivar: inputMinInterDispersion
@property (retain, nonatomic) CIVector *inputMinimum; // ivar: inputMinimum
@property (retain, nonatomic) NSNumber *inputPercentRepair; // ivar: inputPercentRepair
@property (retain, nonatomic) NSNumber *inputPercentSpecular; // ivar: inputPercentSpecular
@property (retain, nonatomic) NSNumber *inputPercentileRepair; // ivar: inputPercentileRepair
@property (retain, nonatomic) NSNumber *inputPercentileSpecular; // ivar: inputPercentileSpecular
@property (retain, nonatomic) NSNumber *inputTuning; // ivar: inputTuning


-(id)outputImage;


@end


#endif