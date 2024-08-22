// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIMINIMUMCOMPONENT_H
#define CIMINIMUMCOMPONENT_H



#import "CIFilter.h"
#import "CIImage.h"

@interface CIMinimumComponent : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif