// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIAUTOENHANCEFILTER_H
#define PIAUTOENHANCEFILTER_H

@class CIFilter, NSString, CIImage;



@interface PIAutoEnhanceFilter : CIFilter

@property (retain, nonatomic) NSString *inputAlgorithm; // ivar: _inputAlgorithm
@property (retain, nonatomic) CIImage *inputImage; // ivar: _inputImage
@property (retain, nonatomic) CIImage *inputTargetImage; // ivar: _inputTargetImage


+(id)autoEnhanceCache;
+(id)customAttributes;
-(id)apertureAutoEnhanceFiltersForImage:(id)arg0 ;
-(id)autoEnhanceFiltersForImage:(id)arg0 algorithm:(id)arg1 ;
-(id)colorNormalizationFiltersForImage:(id)arg0 ;
-(id)outputImage;
-(id)photosAutoEnhanceFiltersForImage:(id)arg0 ;


@end


#endif