// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUISCALECLAMPFILTER_H
#define CUISCALECLAMPFILTER_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CUIScaleClampFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputScale; // ivar: inputScale


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif