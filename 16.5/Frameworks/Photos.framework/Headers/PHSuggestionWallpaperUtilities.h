// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHSUGGESTIONWALLPAPERUTILITIES_H
#define PHSUGGESTIONWALLPAPERUTILITIES_H


#import <Foundation/Foundation.h>


@interface PHSuggestionWallpaperUtilities : NSObject



+(BOOL)hasAnyKnownPersonLocalIdentifierInPhotoLibrary:(id)arg0 ;
+(NSUInteger)mediaAnalysisTypeForParallaxClassification:(NSUInteger)arg0 ;
+(NSUInteger)parallaxClassificationForMedia:(id)arg0 descriptorType:(NSInteger)arg1 ;
+(NSUInteger)parallaxClassificationForSuggestionMedia:(id)arg0 ;
+(NSUInteger)parallaxClassificationForSuggestionSubtype:(unsigned short)arg0 ;
+(id)_assetSortComparatorForPortraitWallpaper:(SEL)arg0 ;
+(id)_blockedImportedByBundleIdentifiers;
+(id)_facePredicateForPortraitWallpaperCandidatesWithPersonLocalIdentifiers:(id)arg0 deviceAspectRatio:(CGFloat)arg1 ;
+(id)_fetchMeContactIdentifier;
+(id)_fetchSuggestedMePersonLocalIdentifierInPhotoLibrary:(id)arg0 ;
+(id)_mostRecentAssetDateInPhotoLibrary:(id)arg0 ;
+(id)_personFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(id)fallbackPortraitWallpaperGallerySortedFeaturedPhotosInPhotoLibrary:(id)arg0 ;
// +(id)fallbackPortraitWallpaperGallerySortedFeaturedPhotosInPhotoLibrary:(id)arg0 passingFilterBlock:(id)arg1 maximumNumberOfTries:(unk)arg2  ;
+(id)fetchKnownPersonLocalIdentifiersInPhotoLibrary:(id)arg0 fetchLimit:(NSUInteger)arg1 ;
+(id)fetchPersonLocalIdentifiersForSuggestionSubtype:(unsigned short)arg0 photoLibrary:(id)arg1 ;
+(id)fetchPortraitAssetsWithOptions:(id)arg0 ;
+(id)fetchWallpaperGallerySuggestionsInPhotoLibrary:(id)arg0 ;
+(id)knownPersonLocalIdentifiersInPhotoLibrary:(id)arg0 ;
+(id)predicateForPortraitWallpaperCandidatesWithPersonLocalIdentifiers:(id)arg0 ;
+(id)predicateForPortraitWallpaperCandidatesWithPersonLocalIdentifiers:(id)arg0 deviceAspectRatio:(CGFloat)arg1 ;
+(id)randomNumberGeneratorForWallpaperDonation;
+(id)wallpaperGalleryFeaturedPhotoSortedSuggestionsFromSuggestions:(id)arg0 ;
+(id)wallpaperGallerySmartAlbumSuggestionsFromSuggestions:(id)arg0 ;
+(struct CGRect )bestWallpaperCropForAsset:(id)arg0 classification:(NSUInteger)arg1 outputCropScore:(*CGFloat)arg2 outputLayoutAcceptable:(*BOOL)arg3 ;
+(struct CGRect )bestWallpaperCropForAsset:(id)arg0 classification:(NSUInteger)arg1 outputCropScore:(*CGFloat)arg2 outputLayoutAcceptable:(*BOOL)arg3 layoutConfiguration:(id)arg4 ;
+(struct CGRect )bestWallpaperCropForSuggestion:(id)arg0 outputCropScore:(*CGFloat)arg1 outputLayoutAcceptable:(*BOOL)arg2 ;
+(void)rejectWallpaperSuggestions:(id)arg0 completionHandler:(id)arg1 ;
+(void)rejectWallpaperSuggestionsUsingAsset:(id)arg0 completionHandler:(id)arg1 ;
+(void)rejectWallpaperSuggestionsUsingAssetOfSuggestion:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif