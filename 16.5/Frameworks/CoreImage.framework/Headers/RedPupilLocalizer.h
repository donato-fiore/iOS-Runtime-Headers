// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REDPUPILLOCALIZER_H
#define REDPUPILLOCALIZER_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface RedPupilLocalizer : CIFilter {
    CIImage *inputImage;
}


@property (retain, nonatomic) CIVector *inputAxisLong; // ivar: inputAxisLong
@property (retain, nonatomic) CIVector *inputAxisShort; // ivar: inputAxisShort
@property (retain, nonatomic) NSNumber *inputClip; // ivar: inputClip
@property (retain, nonatomic) NSNumber *inputDebug; // ivar: inputDebug
@property (retain, nonatomic) NSNumber *inputDecay; // ivar: inputDecay
@property (retain, nonatomic) CIVector *inputExtent; // ivar: inputExtent
@property (retain, nonatomic) NSNumber *inputGamma; // ivar: inputGamma
@property (retain, nonatomic) NSNumber *inputIterations; // ivar: inputIterations
@property (retain, nonatomic) NSNumber *inputLocalizationRadius; // ivar: inputLocalizationRadius
@property (retain, nonatomic) CIVector *inputPupilCenter; // ivar: inputPupilCenter
@property (retain, nonatomic) NSNumber *inputScale; // ivar: inputScale
@property (retain, nonatomic) NSNumber *inputSearchAxisLong; // ivar: inputSearchAxisLong
@property (retain, nonatomic) NSNumber *inputSearchAxisShort; // ivar: inputSearchAxisShort


-(id)outputImage;


@end


#endif