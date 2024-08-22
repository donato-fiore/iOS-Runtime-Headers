// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLRESOURCEGENERATOR_H
#define PLRESOURCEGENERATOR_H


#import <Foundation/Foundation.h>


@interface PLResourceGenerator : NSObject



+(id)expectedLocalResourceRecipesForAsset:(id)arg0 versions:(id)arg1 ;
+(id)expectedLocalResourceRecipesForAssetWithLibraryID:(id)arg0 versions:(id)arg1 assetHasAdjustments:(BOOL)arg2 assetIsRAWOrRawPlugJPEGWithRawOnTop:(BOOL)arg3 assetWidth:(NSInteger)arg4 assetHeight:(NSInteger)arg5 assetKind:(short)arg6 assetkindSubtype:(short)arg7 deferredProcessingNeeded:(unsigned short)arg8 videoDeferredProcessingNeeded:(unsigned short)arg9 ;
+(id)fileAndTableBackedThumbnailManagerRecipesForLibraryID:(id)arg0 ;
+(id)generateAndStoreMissingExpectedLocalResourcesForAsset:(id)arg0 versions:(id)arg1 imageConversionClient:(id)arg2 videoConversionClient:(id)arg3 reason:(id)arg4 completion:(id)arg5 ;
+(id)locallyUnavailableRecipesFromRecipes:(id)arg0 versions:(id)arg1 asset:(id)arg2 ;
+(void)_continueGeneratingResourcesForAsset:(id)arg0 versions:(id)arg1 imageConversionClient:(id)arg2 videoConversionClient:(id)arg3 remainingRecipes:(id)arg4 storedRecipes:(id)arg5 attemptedRecipes:(id)arg6 errorsEncountered:(id)arg7 progress:(id)arg8 reason:(id)arg9 completion:(id)arg10 ;


@end


#endif