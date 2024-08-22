// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSPOTLIGHTDONATIONUTILITIES_H
#define PLSPOTLIGHTDONATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface PLSpotlightDonationUtilities : NSObject



+(BOOL)isFullLocationDataEnabled;
+(BOOL)isUniversalSearchEnabledForPhotoLibrary:(id)arg0 ;
+(BOOL)searchableItemsFromManagedObjectIDs:(id)arg0 entityName:(id)arg1 translatorConfiguration:(id)arg2 photoLibrary:(id)arg3 searchableItemsToIndex:(*id)arg4 searchableItemUUIDsToRemove:(*id)arg5 ;
+(BOOL)shouldDisablePhotosLegacySearchDonationForPhotoLibrary:(id)arg0 ;
+(BOOL)shouldForceSpotlightReindexForCurrentBundleIdentifierWithLastKnownSearchIndexVersion:(NSInteger)arg0 ;
+(NSInteger)_wellKnownPhotoLibraryIdentifierFromPLPhotoLibrary:(id)arg0 ;
+(NSUInteger)universalSearchIneligibilityReasonsForPhotoLibraryWithURL:(id)arg0 ;
+(id)bundleIdentifierForAsset:(id)arg0 ;
+(id)domainIdentifierForPhotoLibrary:(id)arg0 ;
+(id)domainIdentifierForSystemPhotoLibrary;
+(id)photosBundleIdentifier;
+(id)searchableItemsFromManagedObjects:(id)arg0 entityName:(id)arg1 translatorConfiguration:(id)arg2 ;
+(id)spotlightUniqueIdentifierForAsset:(id)arg0 ;
+(void)_searchableItemsFromManagedObjects:(id)arg0 entityName:(id)arg1 translatorConfiguration:(id)arg2 itemsToUpdate:(*id)arg3 searchableItemUUIDsToRemove:(*id)arg4 ;


@end


#endif