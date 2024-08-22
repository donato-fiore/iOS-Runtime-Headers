// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CISTRAIGHTENFILTER_H
#define CISTRAIGHTENFILTER_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIStraightenFilter : CIFilter

@property (retain, nonatomic) NSNumber *inputAngle; // ivar: inputAngle
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)outputImage;


@end


#endif