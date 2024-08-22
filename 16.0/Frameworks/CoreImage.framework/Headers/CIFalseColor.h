// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIFALSECOLOR_H
#define CIFALSECOLOR_H



#import "CIFilter.h"
#import "CIColor.h"
#import "CIImage.h"

@interface CIFalseColor : CIFilter

@property (retain, nonatomic) CIColor *inputColor0; // ivar: inputColor0
@property (retain, nonatomic) CIColor *inputColor1; // ivar: inputColor1
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif