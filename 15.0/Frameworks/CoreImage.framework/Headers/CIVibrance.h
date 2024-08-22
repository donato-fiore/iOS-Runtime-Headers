// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIVIBRANCE_H
#define CIVIBRANCE_H

@class NSNumber;
@protocol _CIFilterProperties;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIVibrance : CIFilter <_CIFilterProperties>



@property (retain, nonatomic) NSNumber *inputAmount; // ivar: inputAmount
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_initFromProperties:(id)arg0 ;
-(id)_kernelNeg;
-(id)_kernelPos;
-(id)_outputProperties;
-(id)outputImage;


@end


#endif