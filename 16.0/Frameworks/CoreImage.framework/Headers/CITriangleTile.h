// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CITRIANGLETILE_H
#define CITRIANGLETILE_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CITriangleTile : CIFilter {
    CIVector *inputCenter;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
}


@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)_CITriangleTile;
-(id)outputImage;


@end


#endif