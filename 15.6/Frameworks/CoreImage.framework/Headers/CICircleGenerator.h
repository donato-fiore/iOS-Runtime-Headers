// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CICIRCLEGENERATOR_H
#define CICIRCLEGENERATOR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIColor.h"
#import "CIVector.h"

@interface CICircleGenerator : CIFilter {
    CIColor *inputColor;
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputEdgeBlur;
}




+(id)customAttributes;
-(id)_CICircle;
-(id)outputImage;


@end


#endif