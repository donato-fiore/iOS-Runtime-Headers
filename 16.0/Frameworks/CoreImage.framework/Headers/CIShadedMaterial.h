// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CISHADEDMATERIAL_H
#define CISHADEDMATERIAL_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIShadedMaterial : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputScale; // ivar: inputScale
@property (retain, nonatomic) CIImage *inputShadingImage; // ivar: inputShadingImage


+(id)customAttributes;
-(id)_CIShadedmaterial;
-(id)_CIShadedmaterial_0;
-(id)outputImage;


@end


#endif