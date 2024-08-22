// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPRIMARYRESOURCEDATASTOREIMAGERECIPE_H
#define PLPRIMARYRESOURCEDATASTOREIMAGERECIPE_H



#import "PLResourceRecipe.h"

@interface PLPrimaryResourceDataStoreImageRecipe : PLResourceRecipe

@property (nonatomic) unsigned int recipeID; // ivar: _recipeID


+(CGFloat)_scaleFactorForInputSize:(struct CGSize )arg0 maximumPixelCount:(NSInteger)arg1 ;
+(struct CGSize )scaleOriginalSize:(struct CGSize )arg0 toLongSideTarget:(CGFloat)arg1 ;
+(struct CGSize )scaleOriginalSize:(struct CGSize )arg0 toShortSideTarget:(CGFloat)arg1 maxLongSideLength:(CGFloat)arg2 ;
-(BOOL)_storeResourceWithType:(unsigned int)arg0 version:(unsigned int)arg1 asset:(id)arg2 destURL:(id)arg3 error:(*id)arg4 ;
-(BOOL)colorSpaceIsNativeForDisplay;
-(BOOL)isMarkedFullSize;
-(id)_mediaConversionServiceOptionsForAsset:(id)arg0 conversionServiceOptions:(id)arg1 adjustmentData:(id)arg2 largeAdjustmentData:(id)arg3 isHighPriority:(BOOL)arg4 reason:(id)arg5 ;
-(id)_resourceGenerationAffectsRecipesForLibraryID:(id)arg0 ;
-(id)chooseIngredientsFrom:(id)arg0 version:(unsigned int)arg1 ;
-(id)codecFourCharCodeName;
-(id)colorSpaceGivenSourceColorSpace:(id)arg0 inContext:(id)arg1 ;
-(id)description;
-(id)expectedFileURLForVersion:(unsigned int)arg0 asset:(id)arg1 ;
-(id)expectedSizeFromWidth:(NSInteger)arg0 height:(NSInteger)arg1 ;
-(id)initWithRecipeID:(unsigned int)arg0 ;
-(id)maxPixelCountForAssetWidth:(NSInteger)arg0 height:(NSInteger)arg1 ;
-(id)supportedVersionsForLocalResourceGeneration;
-(id)uti;
-(void)_generateAndStoreUsingMediaConversionServicesForAsset:(id)arg0 version:(unsigned int)arg1 conversionClient:(id)arg2 videoConversionClient:(id)arg3 conversionServiceOptions:(id)arg4 isHighPriority:(BOOL)arg5 progress:(*id)arg6 reason:(id)arg7 completion:(id)arg8 ;
-(void)generateAndStoreForAsset:(id)arg0 version:(unsigned int)arg1 imageConversionClient:(id)arg2 videoConversionClient:(id)arg3 conversionServiceOptions:(id)arg4 deferredPhotoFinalizer:(id)arg5 progress:(*id)arg6 reason:(id)arg7 completion:(id)arg8 ;
-(void)generateAndStoreForAssetWithPriority:(id)arg0 version:(unsigned int)arg1 imageConversionClient:(id)arg2 videoConversionClient:(id)arg3 isHighPriority:(BOOL)arg4 reason:(id)arg5 progress:(*id)arg6 completion:(id)arg7 ;


@end


#endif