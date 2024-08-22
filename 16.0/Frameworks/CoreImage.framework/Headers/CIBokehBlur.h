// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIBOKEHBLUR_H
#define CIBOKEHBLUR_H

@class NSNumber, NSMutableArray;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIBokehBlur : CIFilter {
    NSNumber *inputRadius;
    NSNumber *inputRingAmount;
    NSNumber *inputRingSize;
    NSNumber *inputSoftness;
    NSMutableArray *_recipe;
}


@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage


+(id)customAttributes;
-(id)outputImage;
-(void)dealloc;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif