// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CILENTICULARHALOGENERATOR_H
#define CILENTICULARHALOGENERATOR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIColor.h"

@interface CILenticularHaloGenerator : CIFilter {
    CIVector *inputCenter;
    CIColor *inputColor;
    NSNumber *inputHaloRadius;
    NSNumber *inputHaloWidth;
    NSNumber *inputHaloOverlap;
    NSNumber *inputStriationStrength;
    NSNumber *inputStriationContrast;
    NSNumber *inputTime;
}




+(id)customAttributes;
-(id)_CILenticularHalo;
-(id)outputImage;


@end


#endif