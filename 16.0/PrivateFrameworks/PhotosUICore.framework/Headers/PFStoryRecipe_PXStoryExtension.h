// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFSTORYRECIPE_PXSTORYEXTENSION_H
#define PFSTORYRECIPE_PXSTORYEXTENSION_H


#import <Foundation/Foundation.h>


@interface PFStoryRecipe_PXStoryExtension : NSObject



+(BOOL)_recipe:(id)arg0 isReferencingPHPhotoLibrary:(id)arg1 ;
+(BOOL)_recipe:(id)arg0 setPHPhotoLibrary:(id)arg1 error:(*id)arg2 ;
+(BOOL)addDisplayAssets:(id)arg0 toRecipe:(id)arg1 withCategory:(NSInteger)arg2 error:(*id)arg3 ;
+(BOOL)addPHAssets:(id)arg0 toRecipe:(id)arg1 withCategory:(NSInteger)arg2 error:(*id)arg3 ;
+(BOOL)addSyntheticAssets:(id)arg0 toRecipe:(id)arg1 withCategory:(NSInteger)arg2 error:(*id)arg3 ;
+(BOOL)recipeContainsAnyDisplayAsset:(id)arg0 ;
+(id)PHAssetsInRecipe:(id)arg0 withCategory:(NSInteger)arg1 error:(*id)arg2 ;
+(id)PHPhotoLibraryForRecipe:(id)arg0 ;
+(id)displayAssetsInRecipe:(id)arg0 withCategory:(NSInteger)arg1 error:(*id)arg2 ;
+(id)flexFetchQueue;
+(id)recipe:(id)arg0 withPHPhotoLibrary:(id)arg1 error:(*id)arg2 ;
+(id)recipeAssetFromAudioAsset:(id)arg0 withCategory:(NSInteger)arg1 subcategory:(NSInteger)arg2 error:(*id)arg3 ;
+(id)requestAudioAssetFromRecipeAsset:(id)arg0 recipe:(id)arg1 resultHandler:(id)arg2 ;
+(id)schemeForPHAssets;
+(id)schemeForSyntheticAssets;
+(id)syntheticAssetsInRecipe:(id)arg0 withCategory:(NSInteger)arg1 error:(*id)arg2 ;
+(void)enumerateDisplayAssetsFromRecipe:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif