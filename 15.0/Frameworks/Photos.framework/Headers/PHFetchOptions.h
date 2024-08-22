// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHFETCHOPTIONS_H
#define PHFETCHOPTIONS_H

@class NSNumber, NSMutableSet, NSArray, NSSet, NSString, NSPredicate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PHQueryChangeDetectionCriteria.h"
#import "PHPhotoLibrary.h"

@interface PHFetchOptions : NSObject <NSCopying>

 {
    NSNumber *_includeHiddenAssetsNumber;
    NSNumber *_includeAllBurstAssetsNumber;
    NSNumber *_includeAssetSourceTypesNumber;
    NSNumber *_fetchLimitNumber;
    NSNumber *_fetchOffsetNumber;
    NSNumber *_curationTypeNumber;
    NSNumber *_wantsIncrementalChangeDetailsNumber;
    NSNumber *_chunkSizeForFetchNumber;
    NSNumber *_cacheSizeForFetchNumber;
    NSNumber *_reverseSortOrderNumber;
    NSNumber *_includeDuplicateAssetsNumber;
    NSNumber *_includeGuestAssetsNumber;
    NSNumber *_includePlaceholderAssetsNumber;
    NSNumber *_includePendingMemoriesNumber;
    NSNumber *_includeRejectedMemoriesNumber;
    NSNumber *_includeGraphEphemeralMemoriesNumber;
    NSNumber *_personContextNumber;
    NSNumber *_includeTrashedAssetsNumber;
    NSNumber *_includeTrashedSharesNumber;
    NSNumber *_includeExpiredSharesNumber;
    NSNumber *_includeFavoriteMemoriesCollectionListNumber;
    NSNumber *_includePlacesSmartAlbumNumber;
    NSNumber *_includeAllPhotosSmartAlbumNumber;
    NSNumber *_includeRecentlyEditedSmartAlbumNumber;
    NSNumber *_includeScreenRecordingsSmartAlbumNumber;
    NSNumber *_includeCinematicVideoSmartAlbumNumber;
    NSNumber *_includeProResSmartAlbumNumber;
    NSNumber *_includeTrashBinAlbumNumber;
    NSNumber *_includeRootFolderNumber;
    NSNumber *_excludeMontageAssetsNumber;
    NSNumber *_minimumVerifiedFaceCountNumber;
    NSNumber *_minimumUnverifiedFaceCountNumber;
    NSNumber *_includeNonvisibleFacesNumber;
    NSNumber *_includeOnlyPersonsWithVisibleKeyFacesNumber;
    NSNumber *_includeOnlyFacesNeedingFaceCropNumber;
    NSNumber *_includeOnlyFacesWithFaceprintsNumber;
    NSNumber *_includeOnlyFacesInFaceGroupsNumber;
    NSNumber *_isExclusivePredicateNumber;
    NSMutableSet *_propertySets;
    NSNumber *_shouldPrefetchCountNumber;
    NSNumber *_highlightCurationTypeNumber;
    NSNumber *_sharingStreamNumber;
    NSNumber *_includeUserSmartAlbumsNumber;
    NSNumber *_includeOnlyAssetsAllowedForAnalysisNumber;
    NSNumber *_includeOnlyContentContributedByCurrentUserNumber;
    NSNumber *_includeTorsoOnlyDetectionDataNumber;
    NSNumber *_includeTorsoOnlyPersonNumber;
}


@property (nonatomic) NSInteger cacheSizeForFetch;
@property (copy) PHQueryChangeDetectionCriteria *changeDetectionCriteria; // ivar: _changeDetectionCriteria
@property (nonatomic) NSInteger chunkSizeForFetch;
@property (nonatomic) NSInteger curationType;
@property (retain, nonatomic) NSArray *customObjectIDSortOrder; // ivar: _customObjectIDSortOrder
@property (nonatomic) BOOL excludeMontageAssets;
@property (nonatomic) NSUInteger fetchLimit;
@property (nonatomic) NSUInteger fetchOffset;
@property (retain, nonatomic) NSArray *fetchPropertySets;
@property (readonly, nonatomic) NSSet *fetchPropertySetsAsSet;
@property (readonly, nonatomic) BOOL hasAnySortDescriptors;
@property (nonatomic) unsigned short highlightCurationType;
@property (copy, nonatomic) NSString *importantFetchName; // ivar: _importantFetchName
@property (nonatomic) BOOL includeAllBurstAssets;
@property (nonatomic) BOOL includeAllPhotosSmartAlbum;
@property (nonatomic) NSUInteger includeAssetSourceTypes;
@property (nonatomic) BOOL includeCinematicVideoSmartAlbum;
@property (nonatomic) BOOL includeDuplicateAssets;
@property (nonatomic) BOOL includeExpiredShares;
@property (nonatomic) BOOL includeFavoriteMemoriesCollectionList;
@property (nonatomic) BOOL includeGraphEphemeralMemories;
@property (nonatomic) BOOL includeGuestAssets;
@property (nonatomic) BOOL includeHiddenAssets;
@property (nonatomic) BOOL includeNonvisibleFaces;
@property (nonatomic) BOOL includeOnlyAssetsAllowedForAnalysis;
@property (nonatomic) BOOL includeOnlyContentContributedByCurrentUser;
@property (nonatomic) BOOL includeOnlyFacesInFaceGroups;
@property (nonatomic) BOOL includeOnlyFacesNeedingFaceCrop;
@property (nonatomic) BOOL includeOnlyFacesWithFaceprints;
@property (nonatomic) BOOL includeOnlyPersonsWithVisibleKeyFaces;
@property (nonatomic) BOOL includePendingMemories;
@property (nonatomic) BOOL includePlaceholderAssets;
@property (nonatomic) BOOL includePlacesSmartAlbum;
@property (nonatomic) BOOL includeProResSmartAlbum;
@property (nonatomic) BOOL includeRecentlyEditedSmartAlbum;
@property (nonatomic) BOOL includeRejectedMemories;
@property (nonatomic) BOOL includeRootFolder;
@property (nonatomic) BOOL includeScreenRecordingsSmartAlbum;
@property (nonatomic) BOOL includeTorsoOnlyDetectionData;
@property (nonatomic) BOOL includeTorsoOnlyPerson;
@property (nonatomic) BOOL includeTrashBinAlbum;
@property (nonatomic) BOOL includeTrashedAssets;
@property (nonatomic) BOOL includeTrashedShares;
@property (nonatomic) BOOL includeUserSmartAlbums;
@property (retain, nonatomic) NSArray *includedDetectionTypes; // ivar: _includedDetectionTypes
@property (retain, nonatomic) NSPredicate *internalInclusionPredicate; // ivar: _internalInclusionPredicate
@property (retain, nonatomic) NSPredicate *internalPredicate; // ivar: _internalPredicate
@property (retain, nonatomic) NSArray *internalSortDescriptors; // ivar: _internalSortDescriptors
@property (nonatomic) BOOL isExclusivePredicate;
@property (nonatomic) NSUInteger minimumUnverifiedFaceCount;
@property (nonatomic) NSUInteger minimumVerifiedFaceCount;
@property (nonatomic) NSInteger personContext;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (nonatomic) BOOL reverseSortOrder;
@property (nonatomic) NSUInteger sharingStream;
@property (readonly, nonatomic) NSString *shortDescription;
@property (nonatomic) BOOL shouldPrefetchCount;
@property (retain, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors
@property (retain, nonatomic) NSString *transientIdentifier; // ivar: _transientIdentifier
@property (copy, nonatomic) NSSet *verifiedPersonTypes; // ivar: _verifiedPersonTypes
@property (nonatomic) BOOL wantsIncrementalChangeDetails;


+(id)defaultDetectionTypes;
+(id)effectivePhotoLibraryForFetchOptions:(id)arg0 object:(id)arg1 ;
+(id)fetchOptionsCopyFromNullableFetchOptions:(id)arg0 photoLibrary:(id)arg1 ;
+(id)fetchOptionsWithInclusiveDefaults;
+(id)fetchOptionsWithInclusiveDefaultsForPhotoLibrary:(id)arg0 ;
+(id)fetchOptionsWithPhotoLibrary:(id)arg0 orObject:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)addFetchPropertySets:(id)arg0 ;
-(void)mergeWithFetchOptions:(id)arg0 ;


@end


#endif