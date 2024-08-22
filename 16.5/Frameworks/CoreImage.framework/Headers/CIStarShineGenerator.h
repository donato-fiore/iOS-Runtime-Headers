// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CISTARSHINEGENERATOR_H
#define CISTARSHINEGENERATOR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIColor.h"

@interface CIStarShineGenerator : CIFilter

@property (retain, nonatomic) CIVector *inputCenter; // ivar: inputCenter
@property (retain, nonatomic) CIColor *inputColor; // ivar: inputColor
@property (retain, nonatomic) NSNumber *inputCrossAngle; // ivar: inputCrossAngle
@property (retain, nonatomic) NSNumber *inputCrossOpacity; // ivar: inputCrossOpacity
@property (retain, nonatomic) NSNumber *inputCrossScale; // ivar: inputCrossScale
@property (retain, nonatomic) NSNumber *inputCrossWidth; // ivar: inputCrossWidth
@property (retain, nonatomic) NSNumber *inputEpsilon; // ivar: inputEpsilon
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif