// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIPARALLELOGRAMTILE_H
#define CIPARALLELOGRAMTILE_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIParallelogramTile : CIFilter {
    CIVector *inputCenter;
    NSNumber *inputAngle;
    NSNumber *inputAcuteAngle;
    NSNumber *inputWidth;
}


@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)outputImage;


@end


#endif