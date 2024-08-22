// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIGABORGRADIENTS_H
#define CIGABORGRADIENTS_H



#import "CIFilter.h"
#import "CIImage.h"

@interface CIGaborGradients : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)outputImage;


@end


#endif