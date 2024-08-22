// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CISPOTCOLOR_H
#define CISPOTCOLOR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIColor.h"
#import "CIImage.h"

@interface CISpotColor : CIFilter {
    CIColor *inputCenterColor1;
    CIColor *inputReplacementColor1;
    NSNumber *inputCloseness1;
    NSNumber *inputContrast1;
    CIColor *inputCenterColor2;
    CIColor *inputReplacementColor2;
    NSNumber *inputCloseness2;
    NSNumber *inputContrast2;
    CIColor *inputCenterColor3;
    CIColor *inputReplacementColor3;
    NSNumber *inputCloseness3;
    NSNumber *inputContrast3;
}


@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)_CISpotColor;
-(id)outputImage;


@end


#endif