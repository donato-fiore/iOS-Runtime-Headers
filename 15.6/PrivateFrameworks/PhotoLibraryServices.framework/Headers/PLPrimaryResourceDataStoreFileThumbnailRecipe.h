// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPRIMARYRESOURCEDATASTOREFILETHUMBNAILRECIPE_H
#define PLPRIMARYRESOURCEDATASTOREFILETHUMBNAILRECIPE_H



#import "PLPrimaryResourceDataStoreImageRecipe.h"

@interface PLPrimaryResourceDataStoreFileThumbnailRecipe : PLPrimaryResourceDataStoreImageRecipe

@property (nonatomic) unsigned int recipeID; // ivar: _recipeID


-(BOOL)_isAspectShortSizing;
-(CGFloat)_longSideTargetLength;
-(CGFloat)_shortSideTargetLength;
-(id)chooseIngredientsFrom:(id)arg0 version:(unsigned int)arg1 ;
-(id)colorSpaceGivenSourceColorSpace:(id)arg0 inContext:(id)arg1 ;
-(id)description;
-(id)expectedFileURLForVersion:(unsigned int)arg0 asset:(id)arg1 ;
-(id)initWithRecipeID:(unsigned int)arg0 ;
-(id)supportedVersionsForLocalResourceGeneration;
-(id)uti;
-(struct CGSize )sizeForAssetWidth:(NSInteger)arg0 height:(NSInteger)arg1 ;
-(void)generateAndStoreForAsset:(id)arg0 version:(unsigned int)arg1 imageConversionClient:(id)arg2 videoConversionClient:(id)arg3 conversionServiceOptions:(id)arg4 deferredPhotoFinalizer:(id)arg5 progress:(*id)arg6 reason:(id)arg7 completion:(id)arg8 ;


@end


#endif