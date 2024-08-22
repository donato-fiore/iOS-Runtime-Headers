// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASSETCOLLECTION_H
#define PHASSETCOLLECTION_H

@class NSString, NSManagedObjectID, CLLocation, NSArray, NSDate, NSURL, PLQuery;


#import "PHCollection.h"
#import "PHQuery.h"

@interface PHAssetCollection : PHCollection {
    NSString *_localizedTitle;
    NSManagedObjectID *_parentFolderObjectID;
    BOOL _didFetchDates;
    os_unfair_lock_s _datesLock;
}


@property (nonatomic, getter=_canShowCloudComments, setter=_setCanShowCloudComments:) BOOL _canShowCloudComments; // ivar: _canShowCloudComments
@property (readonly, nonatomic) NSUInteger approximateCount; // ivar: _approximateCount
@property (readonly, nonatomic) CLLocation *approximateLocation; // ivar: _approximateLocation
@property (readonly, nonatomic) NSUInteger approximatePhotosCount; // ivar: _approximatePhotosCount
@property (readonly, nonatomic) NSUInteger approximateVideosCount; // ivar: _approximateVideosCount
@property (readonly, nonatomic) NSInteger assetCollectionSubtype; // ivar: _assetCollectionSubtype
@property (readonly, nonatomic) NSInteger assetCollectionType; // ivar: _assetCollectionType
@property (readonly, nonatomic) NSArray *assetOids; // ivar: _assetOids
@property (readonly, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, nonatomic) BOOL canContainCustomKeyAssets;
@property (readonly, nonatomic) BOOL canContributeToCloudSharedAlbum; // ivar: _canContributeToCloudSharedAlbum
@property (readonly, nonatomic) BOOL canShowAvalancheStacks;
@property (readonly, nonatomic) BOOL canShowComments;
@property (readonly, nonatomic) NSString *cloudGUID; // ivar: _cloudGUID
@property (readonly, nonatomic) NSManagedObjectID *customKeyAsset; // ivar: _customKeyAsset
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSUInteger estimatedAssetCount;
@property (readonly, nonatomic) NSURL *groupURL; // ivar: _groupURL
@property (readonly, nonatomic) BOOL hasUnseenContentBoolValue; // ivar: _hasUnseenContentBoolValue
@property (readonly, nonatomic) NSString *importSessionID; // ivar: _importSessionID
@property (readonly, nonatomic) BOOL isCameraRoll; // ivar: _isCameraRoll
@property (readonly, nonatomic) BOOL isCloudSharedAlbum; // ivar: _isCloudSharedAlbum
@property (readonly, nonatomic) BOOL isLastImportedAlbum;
@property (readonly, nonatomic) BOOL isLibrary; // ivar: _isLibrary
@property (readonly, nonatomic) BOOL isMultipleContributorCloudSharedAlbum; // ivar: _isMultipleContributorCloudSharedAlbum
@property (readonly, nonatomic) BOOL isOwnedCloudSharedAlbum; // ivar: _isOwnedCloudSharedAlbum
@property (readonly, nonatomic) BOOL isPanoramasCollection; // ivar: _isPanoramasCollection
@property (readonly, nonatomic) BOOL isPendingPhotoStreamAlbum; // ivar: _isPendingPhotoStreamAlbum
@property (readonly, nonatomic) BOOL isPhotoStreamCollection; // ivar: _isPhotoStreamCollection
@property (readonly, nonatomic) BOOL isPlacesAlbum;
@property (readonly, nonatomic) BOOL isSmartCollection; // ivar: _isSmartCollection
@property (readonly, nonatomic) BOOL isStandInCollection; // ivar: _isStandInCollection
@property (readonly, nonatomic) BOOL isTrashBin;
@property (readonly, nonatomic) BOOL isUserSmartAlbum;
@property (readonly, nonatomic) BOOL keyAssetsAtEnd;
@property (readonly, nonatomic) NSArray *localizedLocationNames; // ivar: _localizedLocationNames
@property (readonly, nonatomic) int pendingItemsCount; // ivar: _pendingItemsCount
@property (readonly, nonatomic) int pendingItemsType; // ivar: _pendingItemsType
@property (readonly, nonatomic) int plAlbumKind; // ivar: _plAlbumKind
@property (readonly, nonatomic) PHQuery *query; // ivar: _query
@property (readonly, nonatomic) BOOL shouldDeleteWhenEmpty; // ivar: _shouldDeleteWhenEmpty
@property (readonly, nonatomic) BOOL shouldQueryForCustomKeyAsset;
@property (readonly, copy, nonatomic) id *sortingComparator; // ivar: _sortingComparator
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger titleCategory;
@property (readonly, nonatomic) NSString *titleFontName; // ivar: _titleFontName
@property (readonly, nonatomic) NSUInteger titleFontNameHash;
@property (readonly, nonatomic) NSString *transientIdentifier; // ivar: _transientIdentifier
@property (readonly, nonatomic) NSString *transientSubtitle; // ivar: _transientSubtitle
@property (retain, nonatomic) PLQuery *userQuery; // ivar: _userQuery


+(BOOL)managedObjectSupportsTrashedState;
+(NSInteger)titleCategoryForTitleFontName:(id)arg0 ;
+(NSUInteger)titleFontNameHashFromDate:(id)arg0 ;
+(NSUInteger)titleFontNameHashFromHash:(NSUInteger)arg0 andHash:(NSUInteger)arg1 ;
+(NSUInteger)titleFontNameHashFromString:(id)arg0 ;
+(id)_composePropertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)assetsMetadataFromAssets:(id)arg0 ;
+(id)corePropertiesToFetch;
+(id)defaultTitleFontNames;
+(id)descriptionForSubtype:(NSInteger)arg0 ;
+(id)descriptionForType:(NSInteger)arg0 ;
+(id)descriptionOfTitleCategory:(NSInteger)arg0 ;
+(id)entityKeyMap;
+(id)fetchAssetCollectionsContainingAsset:(id)arg0 withType:(NSInteger)arg1 options:(id)arg2 ;
+(id)fetchAssetCollectionsContainingAssets:(id)arg0 withType:(NSInteger)arg1 options:(id)arg2 ;
+(id)fetchAssetCollectionsForReferences:(id)arg0 photoLibrary:(id)arg1 ;
+(id)fetchAssetCollectionsWithLocalIdentifiers:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetCollectionsWithObjectIDs:(id)arg0 options:(id)arg1 ;
+(id)fetchAssetCollectionsWithType:(NSInteger)arg0 localIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchAssetCollectionsWithType:(NSInteger)arg0 subtype:(NSInteger)arg1 options:(id)arg2 ;
+(id)fetchMomentsBackingMemory:(id)arg0 options:(id)arg1 ;
+(id)fetchMomentsBackingSuggestion:(id)arg0 options:(id)arg1 ;
+(id)fetchMomentsInHighlight:(id)arg0 options:(id)arg1 ;
+(id)fetchMomentsInMomentList:(id)arg0 options:(id)arg1 ;
+(id)fetchMomentsWithOptions:(id)arg0 ;
+(id)fetchPhotosHighlightsContainingMoments:(id)arg0 options:(id)arg1 ;
+(id)fetchRecentContentSyndicationAssetCollectionsWithOptions:(id)arg0 maxNumberOfStacks:(NSInteger)arg1 maxNumberOfAssetsPerStack:(NSInteger)arg2 ;
+(id)fetchSuggestedContributionsForAssetsFetchResult:(id)arg0 options:(id)arg1 ;
+(id)fetchSuggestedContributionsForAssetsMetadata:(id)arg0 options:(id)arg1 ;
+(id)fetchSuggestedContributionsForFileURLs:(id)arg0 options:(id)arg1 ;
+(id)fetchType;
+(id)fetchUserLibraryAlbumWithOptions:(id)arg0 ;
+(id)graphOptionsForTransientAssetCollection:(id)arg0 needsCompleteMomentsInfo:(BOOL)arg1 options:(id)arg2 ;
+(id)identifierCode;
+(id)managedEntityName;
+(id)pl_PHAssetCollectionForAssetContainer:(id)arg0 photoLibrary:(id)arg1 ;
+(id)pl_PHAssetCollectionForAssetContainer:(id)arg0 photoLibrary:(id)arg1 includeTrash:(BOOL)arg2 ;
+(id)posterImageForAssetCollection:(id)arg0 ;
+(id)propertiesToFetchWithHint:(NSUInteger)arg0 ;
+(id)titleFontNameForTitleCategory:(NSInteger)arg0 ;
+(id)transformValueExpression:(id)arg0 forKeyPath:(id)arg1 ;
+(id)transientAssetCollectionWithAssetFetchResult:(id)arg0 subtype:(NSInteger)arg1 ;
+(id)transientAssetCollectionWithAssetFetchResult:(id)arg0 title:(id)arg1 ;
+(id)transientAssetCollectionWithAssetFetchResult:(id)arg0 title:(id)arg1 identifier:(id)arg2 ;
+(id)transientAssetCollectionWithAssetFetchResult:(id)arg0 title:(id)arg1 subtitle:(id)arg2 titleFontName:(id)arg3 ;
+(id)transientAssetCollectionWithAssetFetchResult:(id)arg0 title:(id)arg1 subtype:(NSInteger)arg2 ;
+(id)transientAssetCollectionWithAssetFetchResult:(id)arg0 type:(NSInteger)arg1 subtype:(NSInteger)arg2 title:(id)arg3 subtitle:(id)arg4 titleFontName:(id)arg5 ;
+(id)transientAssetCollectionWithAssets:(id)arg0 subtype:(NSInteger)arg1 identifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 title:(id)arg5 ;
+(id)transientAssetCollectionWithAssets:(id)arg0 title:(id)arg1 ;
+(id)transientAssetCollectionWithAssets:(id)arg0 title:(id)arg1 identifier:(id)arg2 photoLibrary:(id)arg3 ;
+(id)transientAssetCollectionWithFetchOptions:(id)arg0 title:(id)arg1 subtitle:(id)arg2 titleFontName:(id)arg3 identifier:(id)arg4 ;
-(BOOL)_shouldFetchDatesIfNeeded;
-(BOOL)alwaysRecalculateCounts;
-(BOOL)canContainAssets;
-(BOOL)canPerformEditOperation:(NSInteger)arg0 ;
-(BOOL)collectionHasFixedOrder;
-(BOOL)hasLocationInfo;
-(BOOL)isAlbumContentSort;
-(BOOL)isAlbumContentTitleSort;
-(BOOL)startsAtEnd;
-(Class)changeRequestClass;
-(NSUInteger)collectionFixedOrderPriority;
-(NSUInteger)estimatedPhotosCount;
-(NSUInteger)estimatedVideosCount;
-(id)_fetchAggregateDatesForSmartAlbum;
-(id)description;
-(id)effectiveCustomSortKey;
-(id)identifier;
-(id)initTransientWithAssets:(id)arg0 orFetchResult:(id)arg1 orQuery:(id)arg2 title:(id)arg3 subtitle:(id)arg4 titleFontName:(id)arg5 identifier:(id)arg6 albumKind:(int)arg7 subtype:(NSInteger)arg8 photoLibrary:(id)arg9 ;
-(id)initTransientWithAssets:(id)arg0 orFetchResult:(id)arg1 orQuery:(id)arg2 title:(id)arg3 subtitle:(id)arg4 titleFontName:(id)arg5 identifier:(id)arg6 albumKind:(int)arg7 subtype:(NSInteger)arg8 startDate:(id)arg9 endDate:(id)arg10 photoLibrary:(id)arg11 ;
-(id)initTransientWithAssets:(id)arg0 orFetchResult:(id)arg1 orQuery:(id)arg2 title:(id)arg3 subtitle:(id)arg4 titleFontName:(id)arg5 identifier:(id)arg6 albumKind:(int)arg7 type:(NSInteger)arg8 subtype:(NSInteger)arg9 startDate:(id)arg10 endDate:(id)arg11 photoLibrary:(id)arg12 ;
-(id)initTransientWithAssets:(id)arg0 orFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3 ;
-(id)initTransientWithAssets:(id)arg0 orFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3 albumKind:(int)arg4 ;
-(id)initTransientWithAssets:(id)arg0 orFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3 albumKind:(int)arg4 subtype:(NSInteger)arg5 ;
-(id)initTransientWithAssets:(id)arg0 orFetchResult:(id)arg1 title:(id)arg2 subtitle:(id)arg3 titleFontName:(id)arg4 identifier:(id)arg5 albumKind:(int)arg6 subtype:(NSInteger)arg7 photoLibrary:(id)arg8 ;
-(id)initWithFetchDictionary:(id)arg0 propertyHint:(NSUInteger)arg1 photoLibrary:(id)arg2 ;
-(id)localizedSharedByLabelAllowsEmail:(BOOL)arg0 ;
-(id)localizedTitle;
-(id)objectReference;
-(id)parentFolderID;
-(id)pl_assetContainer;
-(void)_fetchDatesIfNeeded;


@end


#endif