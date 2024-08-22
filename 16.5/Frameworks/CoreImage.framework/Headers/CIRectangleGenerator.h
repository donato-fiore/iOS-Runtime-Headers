// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIRECTANGLEGENERATOR_H
#define CIRECTANGLEGENERATOR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIColor.h"
#import "CIVector.h"

@interface CIRectangleGenerator : CIFilter {
    CIColor *inputColor;
    CIVector *inputRectangle;
    NSNumber *inputEdgeBlur;
}




+(id)customAttributes;
-(id)_CIRectangle;
-(id)outputImage;


@end


#endif