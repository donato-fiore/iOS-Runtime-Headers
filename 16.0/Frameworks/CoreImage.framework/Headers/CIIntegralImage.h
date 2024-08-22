// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIINTEGRALIMAGE_H
#define CIINTEGRALIMAGE_H



#import "CIFilter.h"
#import "CIImage.h"

@interface CIIntegralImage : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)outputImage;


@end


#endif