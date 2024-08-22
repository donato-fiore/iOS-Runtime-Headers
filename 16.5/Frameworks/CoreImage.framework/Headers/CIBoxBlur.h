// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIBOXBLUR_H
#define CIBOXBLUR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIBoxBlur : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius


+(id)customAttributes;
-(id)outputImage;


@end


#endif