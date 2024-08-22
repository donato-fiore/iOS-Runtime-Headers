// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CILANCZOSSCALETRANSFORM_H
#define CILANCZOSSCALETRANSFORM_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CILanczosScaleTransform : CIFilter

@property (retain, nonatomic) NSNumber *inputAspectRatio; // ivar: inputAspectRatio
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputScale; // ivar: inputScale


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)outputImage;
-(id)outputImageNewScaleX:(CGFloat)arg0 scaleY:(CGFloat)arg1 ;
-(id)outputImageOldScaleX:(CGFloat)arg0 scaleY:(CGFloat)arg1 ;


@end


#endif