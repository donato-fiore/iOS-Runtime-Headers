// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIZOOMBLUR_H
#define CIZOOMBLUR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIZoomBlur : CIFilter

@property (retain, nonatomic) NSNumber *inputAmount; // ivar: inputAmount
@property (retain, nonatomic) CIVector *inputCenter; // ivar: inputCenter
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_blur:(id)arg0 pass:(int)arg1 weightsFactor:(float)arg2 ;
-(id)_kernel;
-(id)_kernelNew;
-(id)outputImage;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif