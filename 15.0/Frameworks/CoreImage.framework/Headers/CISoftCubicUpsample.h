// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CISOFTCUBICUPSAMPLE_H
#define CISOFTCUBICUPSAMPLE_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CISoftCubicUpsample : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputScale; // ivar: inputScale


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)outputImage;
-(struct vec2 )_scale;


@end


#endif