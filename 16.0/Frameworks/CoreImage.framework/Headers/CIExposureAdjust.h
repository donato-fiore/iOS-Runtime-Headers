// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIEXPOSUREADJUST_H
#define CIEXPOSUREADJUST_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIExposureAdjust : CIFilter

@property (retain, nonatomic) NSNumber *inputEV; // ivar: inputEV
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)outputImage;


@end


#endif