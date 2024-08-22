// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIMOTIONBLUR_H
#define CIMOTIONBLUR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIMotionBlur : CIFilter

@property (retain, nonatomic) NSNumber *inputAngle; // ivar: inputAngle
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_blur:(id)arg0 pass:(int)arg1 weightsFactor:(float)arg2 legacyExtent:(struct CGRect *)arg3 ;
-(id)_kernel;
-(id)outputImage;


@end


#endif