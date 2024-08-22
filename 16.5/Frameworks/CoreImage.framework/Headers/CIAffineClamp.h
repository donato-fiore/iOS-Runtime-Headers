// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIAFFINECLAMP_H
#define CIAFFINECLAMP_H

@class NSValue;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIAffineClamp : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSValue *inputTransform; // ivar: inputTransform


+(id)customAttributes;
-(id)outputImage;


@end


#endif