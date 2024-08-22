// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIAFFINETRANSFORM_H
#define CIAFFINETRANSFORM_H

@class NSValue;
@protocol _CIFilterProperties;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIAffineTransform : CIFilter <_CIFilterProperties>



@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSValue *inputTransform; // ivar: inputTransform


+(id)customAttributes;
-(id)_initFromProperties:(id)arg0 ;
-(id)_outputProperties;
-(id)outputImage;


@end


#endif