// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIOPACITY_H
#define CIOPACITY_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIOpacity : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputOpacity; // ivar: inputOpacity


+(id)customAttributes;
-(id)outputImage;


@end


#endif