// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIFACEBALANCE_H
#define CIFACEBALANCE_H

@class NSNumber;
@protocol _CIFilterProperties;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIFaceBalance : CIFilter <_CIFilterProperties>



@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputOrigI; // ivar: inputOrigI
@property (retain, nonatomic) NSNumber *inputOrigQ; // ivar: inputOrigQ
@property (retain, nonatomic) NSNumber *inputStrength; // ivar: inputStrength
@property (retain, nonatomic) NSNumber *inputWarmth; // ivar: inputWarmth


+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_initFromProperties:(id)arg0 ;
-(id)_kernel;
-(id)_outputProperties;
-(id)outputImage;


@end


#endif