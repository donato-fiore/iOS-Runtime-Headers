// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIAFFINETILE_H
#define CIAFFINETILE_H

@class NSValue;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIAffineTile : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSValue *inputTransform; // ivar: inputTransform


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif