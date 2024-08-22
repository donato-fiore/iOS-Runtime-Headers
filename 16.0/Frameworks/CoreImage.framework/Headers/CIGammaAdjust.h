// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIGAMMAADJUST_H
#define CIGAMMAADJUST_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIGammaAdjust : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputPower; // ivar: inputPower


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)outputImage;


@end


#endif