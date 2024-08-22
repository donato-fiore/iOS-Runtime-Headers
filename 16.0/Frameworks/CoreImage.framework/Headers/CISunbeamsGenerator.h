// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CISUNBEAMSGENERATOR_H
#define CISUNBEAMSGENERATOR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIColor.h"

@interface CISunbeamsGenerator : CIFilter {
    CIVector *inputCenter;
    CIColor *inputColor;
    NSNumber *inputSunRadius;
    NSNumber *inputMaxStriationRadius;
    NSNumber *inputStriationStrength;
    NSNumber *inputStriationContrast;
    NSNumber *inputTime;
}




+(id)customAttributes;
-(id)_CISunbeams;
-(id)outputImage;


@end


#endif