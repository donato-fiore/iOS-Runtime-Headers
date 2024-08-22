// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIHIGHLIGHTSHADOWADJUST_H
#define CIHIGHLIGHTSHADOWADJUST_H

@class NSNumber;
@protocol _CIFilterProperties;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIHighlightShadowAdjust : CIFilter <_CIFilterProperties>



@property (retain, nonatomic) NSNumber *inputHighlightAmount; // ivar: inputHighlightAmount
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius
@property (retain, nonatomic) NSNumber *inputShadowAmount; // ivar: inputShadowAmount


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_initFromProperties:(id)arg0 ;
-(id)_kernelSH_v0;
-(id)_kernelSH_v1;
-(id)_kernelSH_v2;
-(id)_kernelSHnoB_v0;
-(id)_kernelSHnoB_v1;
-(id)_kernelSHnoB_v2;
-(id)_kernelSnoB_v0;
-(id)_outputProperties;
-(id)outputImage;
-(int)_defaultVersion;
-(int)_maxVersion;
-(void)setDefaults;


@end


#endif