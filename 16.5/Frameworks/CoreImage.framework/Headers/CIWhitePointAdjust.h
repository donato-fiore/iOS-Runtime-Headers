// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIWHITEPOINTADJUST_H
#define CIWHITEPOINTADJUST_H



#import "CIFilter.h"
#import "CIColor.h"
#import "CIImage.h"

@interface CIWhitePointAdjust : CIFilter

@property (retain, nonatomic) CIColor *inputColor; // ivar: inputColor
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_kernel;
-(id)outputImage;


@end


#endif