// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIROUNDEDRECTANGLEGENERATOR_H
#define CIROUNDEDRECTANGLEGENERATOR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIColor.h"
#import "CIVector.h"

@interface CIRoundedRectangleGenerator : CIFilter

@property (retain, nonatomic) CIColor *inputColor; // ivar: inputColor
@property (retain, nonatomic) CIVector *inputExtent; // ivar: inputExtent
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius


+(id)customAttributes;
-(id)outputImage;


@end


#endif