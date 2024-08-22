// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PICOLORNORMALIZATIONFILTER_H
#define PICOLORNORMALIZATIONFILTER_H

@class CIFilter, CIImage, PFStoryRecipeDisplayAssetNormalization;



@interface PIColorNormalizationFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) PFStoryRecipeDisplayAssetNormalization *inputNormalization; // ivar: inputNormalization
@property (readonly, nonatomic) PFStoryRecipeDisplayAssetNormalization *outputNormalization;


+(BOOL)isAnalysisAvailable;
+(id)colorCubeForNormalization:(id)arg0 dimension:(NSInteger)arg1 targetColorSpace:(struct CGColorSpace *)arg2 ;
+(id)logger;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)outputImage;


@end


#endif