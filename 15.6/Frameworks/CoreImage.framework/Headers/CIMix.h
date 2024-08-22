// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIMIX_H
#define CIMIX_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIMix : CIFilter

@property (retain, nonatomic) NSNumber *inputAmount; // ivar: inputAmount
@property (retain, nonatomic) CIImage *inputBackgroundImage; // ivar: inputBackgroundImage
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;


@end


#endif