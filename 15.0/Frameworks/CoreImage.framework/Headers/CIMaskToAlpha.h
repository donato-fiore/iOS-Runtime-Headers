// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIMASKTOALPHA_H
#define CIMASKTOALPHA_H



#import "CIFilter.h"
#import "CIImage.h"

@interface CIMaskToAlpha : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif