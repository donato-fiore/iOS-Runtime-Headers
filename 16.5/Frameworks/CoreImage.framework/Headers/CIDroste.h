// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIDROSTE_H
#define CIDROSTE_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIDroste : CIFilter {
    CIVector *inputInsetPoint0;
    CIVector *inputInsetPoint1;
    NSNumber *inputStrands;
    NSNumber *inputPeriodicity;
    NSNumber *inputRotation;
    NSNumber *inputZoom;
}


@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)_CIDroste;
-(id)outputImage;


@end


#endif