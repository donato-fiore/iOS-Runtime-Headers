// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIMASKEDVARIABLEBLUR_H
#define CIMASKEDVARIABLEBLUR_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIMaskedVariableBlur : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) CIImage *inputMask; // ivar: inputMask
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_kernelCombine;
-(id)_kernelD2;
-(id)downTwo:(id)arg0 ;
-(id)outputImage;
-(id)upCubic:(id)arg0 scale:(float)arg1 ;


@end


#endif