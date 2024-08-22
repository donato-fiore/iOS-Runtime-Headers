// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIDISCBLUR_H
#define CIDISCBLUR_H

@class NSMutableArray, NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIDiscBlur : CIFilter {
    NSMutableArray *_recipe;
}


@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputRadius; // ivar: inputRadius


+(id)customAttributes;
-(id)outputImage;
-(void)dealloc;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif