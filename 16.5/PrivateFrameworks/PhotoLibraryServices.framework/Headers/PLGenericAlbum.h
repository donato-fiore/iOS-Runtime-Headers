// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLGENERICALBUM_H
#define PLGENERICALBUM_H

@class NSOrderedSet, NSString, NSDate, NSURL, NSNumber, NSArray, NSMutableOrderedSet, NSData;
@protocol PLSearchableAssetCollection, PLSyncableObject, PLAlbumProtocol, PLDerivedAlbumOrigin, PLIndexMappersDataOrigin;

#import <Foundation/Foundation.h>

#import "PLGenericAlbum.h"
#import "PLManagedAsset.h"
#import "PLPhotoLibrary.h"

@interface PLGenericAlbum : PLGenericAlbum <PLSearchableAssetCollection, PLSyncableObject, PLAlbumProtocol, PLDerivedAlbumOrigin, PLIndexMappersDataOrigin>

 {
    NSObject<PLIndexMappingCache>" _derivedAlbums;
    BOOL _didAutomaticallyAssignParentFolder;
}


@property (readonly, nonatomic) NSUInteger approximateCount;
@property (readonly, retain, nonatomic) NSOrderedSet *assets;
@property (readonly, nonatomic) NSUInteger assetsCount;
@property (readonly, nonatomic) NSUInteger assetsCountPrivate;
@property (readonly, nonatomic) NSUInteger assetsCountShared;
@property (nonatomic) NSUInteger batchSize;
@property (readonly, nonatomic) BOOL canContributeToCloudSharedAlbum;
@property (readonly, nonatomic) BOOL canShowAvalancheStacks;
@property (readonly, nonatomic) BOOL canShowComments;
@property (nonatomic) short cloudDeleteState;
@property (retain, nonatomic) NSString *cloudGUID;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short cloudLocalState;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRegisteredWithUserInterfaceContext; // ivar: didRegisteredWithUserInterfaceContext
@property (retain, nonatomic) NSDate *endDate;
@property (readonly, retain, nonatomic) NSURL *groupURL;
@property (nonatomic) BOOL hasUnseenContentBoolValue;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *importSessionID;
@property (retain, nonatomic) NSString *importedByBundleIdentifier;
@property (readonly, nonatomic) BOOL isCameraAlbum;
@property (readonly, nonatomic) BOOL isCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isDuplicateAlbum;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isFamilyCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, nonatomic) BOOL isInTrash;
@property (readonly, nonatomic) BOOL isLibrary;
@property (readonly, nonatomic) BOOL isMultipleContributorCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isOwnPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL isOwnedCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isPanoramasAlbum;
@property (readonly, nonatomic) BOOL isPendingPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property (nonatomic) BOOL isPinned;
@property (readonly, nonatomic) BOOL isProjectAlbum;
@property (readonly, nonatomic) BOOL isProjectAlbumRootFolder;
@property (nonatomic) BOOL isPrototype;
@property (readonly, nonatomic) BOOL isRecentlyAddedAlbum;
@property (nonatomic) BOOL isRegisteredForChanges; // ivar: isRegisteredForChanges
@property (readonly, nonatomic) BOOL isRegularRootFolder;
@property (readonly, nonatomic) BOOL isSmartAlbum;
@property (readonly, nonatomic) BOOL isStandInAlbum;
@property (readonly, nonatomic) BOOL isUserCreated;
@property (readonly, nonatomic) BOOL isUserLibraryAlbum;
@property (retain, nonatomic) PLManagedAsset *keyAsset;
@property (readonly, nonatomic) NSDate *keyAssetCreationDatePrivate;
@property (readonly, nonatomic) NSDate *keyAssetCreationDateShared;
@property (readonly, nonatomic) NSString *keyAssetUUIDPrivate;
@property (readonly, nonatomic) NSString *keyAssetUUIDShared;
@property (readonly, retain, nonatomic) NSNumber *kind;
@property (nonatomic) int kindValue;
@property (readonly, retain, nonatomic) id *localID;
@property (readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, retain, nonatomic) NSMutableOrderedSet *mutableAssets;
@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) int pendingItemsCount;
@property (nonatomic) int pendingItemsType;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSUInteger photosCount;
@property (readonly, retain, nonatomic) NSObject *posterImage;
@property (nonatomic) short privacyState;
@property (readonly, nonatomic) NSDate *searchableEndDate;
@property (readonly, nonatomic) NSDate *searchableStartDate;
@property (retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property (readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
@property (readonly, copy, nonatomic) id *sortingComparator;
@property (retain, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property (readonly, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *trashedDate;
@property (nonatomic) short trashedState;
@property (retain, nonatomic) NSData *userQueryData;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSUInteger videosCount;


+(BOOL)is1WaySyncKind:(int)arg0 ;
+(BOOL)isFolder:(int)arg0 ;
+(BOOL)isSmartAlbumForKind:(int)arg0 ;
+(BOOL)isUserCreatedForKind:(int)arg0 ;
+(id)_albumsMatchingPredicate:(id)arg0 expectedResultCount:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)_insertNewAlbumWithKind:(int)arg0 title:(id)arg1 lastInterestingDate:(id)arg2 intoLibrary:(id)arg3 ;
+(id)_predicateForSupportedAlbumTypes;
+(id)_singletonFetchingAlbumWithKind:(int)arg0 library:(id)arg1 ;
+(id)_singletonManagedAlbumWithKind:(int)arg0 library:(id)arg1 ;
+(id)_unpushedParentsOfAlbums:(id)arg0 ;
+(id)albumFromGroupURL:(id)arg0 photoLibrary:(id)arg1 ;
+(id)albumWithCloudGUID:(id)arg0 inLibrary:(id)arg1 ;
+(id)albumWithKind:(int)arg0 inManagedObjectContext:(id)arg1 ;
+(id)albumWithName:(id)arg0 inLibrary:(id)arg1 ;
+(id)albumWithObjectID:(id)arg0 inLibrary:(id)arg1 ;
+(id)albumWithUUID:(id)arg0 inLibrary:(id)arg1 ;
+(id)albumsForStreamID:(id)arg0 inLibrary:(id)arg1 ;
+(id)albumsMatchingPredicate:(id)arg0 expectedResultCount:(id)arg1 inLibrary:(id)arg2 ;
+(id)albumsToUploadInitiallyInLibrary:(id)arg0 limit:(NSUInteger)arg1 ;
+(id)albumsWithCloudGUIDs:(id)arg0 inLibrary:(id)arg1 ;
+(id)albumsWithKind:(int)arg0 inManagedObjectContext:(id)arg1 ;
+(id)allAlbumsInLibrary:(id)arg0 ;
+(id)allAlbumsInManagedObjectContext:(id)arg0 ;
+(id)allAlbumsRegisteredWithManagedObjectContext:(id)arg0 ;
+(id)allAssetsAlbumInLibrary:(id)arg0 ;
+(id)allFavoritesAlbumInLibrary:(id)arg0 ;
+(id)allHorizontalPanoramasAlbumInLibrary:(id)arg0 ;
+(id)allPanoramasAlbumInLibrary:(id)arg0 ;
+(id)allPhotoStreamAssetsAlbumInLibrary:(id)arg0 ;
+(id)allSyncedAlbumsInManagedObjectContext:(id)arg0 ;
+(id)allVerticalPanoramasAlbumInLibrary:(id)arg0 ;
+(id)allVideosAlbumInLibrary:(id)arg0 ;
+(id)baseSearchIndexPredicate;
+(id)childKeyForOrdering;
+(id)defaultAlbumKindsForFetchingWithCPLEnabled:(BOOL)arg0 ;
+(id)eventsWithName:(id)arg0 andImportSessionIdentifier:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)filesystemImportProgressAlbumInLibrary:(id)arg0 ;
+(id)iTunesLibraryAlbumInLibrary:(id)arg0 ;
+(id)includeUnpushedParentsForAlbums:(id)arg0 limit:(NSUInteger)arg1 ;
+(id)insertAlbumWithKind:(int)arg0 title:(id)arg1 uuid:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)insertNewAlbumIntoLibrary:(id)arg0 ;
+(id)insertNewAlbumWithKind:(int)arg0 title:(id)arg1 intoLibrary:(id)arg2 ;
+(id)insertNewAlbumWithTitle:(id)arg0 intoLibrary:(id)arg1 ;
+(id)insertNewCloudSharedAlbumWithTitle:(id)arg0 lastInterestingDate:(id)arg1 intoLibrary:(id)arg2 ;
+(id)insertNewLegacyFaceAlbumIntoLibrary:(id)arg0 ;
+(id)insertNewProjectAlbumWithTitle:(id)arg0 documentType:(id)arg1 intoLibrary:(id)arg2 ;
+(id)insertNewSmartAlbumIntoLibrary:(id)arg0 ;
+(id)insertNewSyncedEventIntoLibrary:(id)arg0 ;
+(id)insertNewSyncedEventWithTitle:(id)arg0 intoLibrary:(id)arg1 ;
+(id)isEligibleForSearchIndexingPredicate;
+(id)keyPathsForValuesAffectingKindValue;
+(id)keyPathsForValuesAffectingName;
+(id)localizedRecoveredTitle;
+(id)localizedTitleForAlbumKind:(int)arg0 cplEnabled:(BOOL)arg1 ;
+(id)needsSearchIndexingForRebuildPredicate:(id)arg0 ;
+(id)otaRestoreProgressAlbumInLibrary:(id)arg0 ;
+(id)projectAlbumRootFolderInLibrary:(id)arg0 ;
+(id)rootFolderInLibrary:(id)arg0 ;
+(id)searchIndexAllowedPredicate;
+(id)syncProgressAlbumInLibrary:(id)arg0 ;
+(id)trashBinAlbumInLibrary:(id)arg0 ;
+(id)unableToUploadAlbumInLibrary:(id)arg0 ;
+(id)userLibraryAlbumInLibrary:(id)arg0 ;
+(id)uuidFromGroupURL:(id)arg0 ;
+(void)_removeAlbumsAndFolders:(id)arg0 inManagedObjectContext:(id)arg1 ;
+(void)addSingletonObjectsToContext:(id)arg0 ;
+(void)removeAllUserAlbumsAndFoldersInLibrary:(id)arg0 ;
+(void)removeEmptyAlbumsAndFoldersForCloudResetInManagedObjectContext:(id)arg0 ;
+(void)removeInvalidAlbumsAndFoldersInManagedObjectContext:(id)arg0 ;
+(void)removeTrashedAlbumsAndFoldersForCloudResetInManagedObjectContext:(id)arg0 ;
+(void)resetAlbumStateForCloudInLibrary:(id)arg0 ;
-(BOOL)_isGoldilocksEnabled;
-(BOOL)canMoveToTrash;
-(BOOL)canPerformEditOperation:(NSUInteger)arg0 ;
-(BOOL)hasDerivedIndexMappers;
-(BOOL)isEligibleForSearchIndexing;
-(BOOL)isSyncableChange;
-(BOOL)supportsCloudUpload;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countForAssetsOfKind:(short)arg0 ;
-(id)_compactDebugDescription;
-(id)_prettyDescription;
-(id)_scopedIdentifier;
-(id)_searchableExtremityDateFromStart:(BOOL)arg0 ;
-(id)assetsByObjectIDAtIndexes:(id)arg0 ;
-(id)childKeyForOrdering;
-(id)childManagedObject;
-(id)cplAlbumChangeInPhotoLibrary:(id)arg0 ;
-(id)cplFullRecord;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg0 ;
-(id)searchIndexContents;
-(void)_appendLibraryScopeToCollection:(id)arg0 ;
-(void)_applyTrashedState:(short)arg0 date:(BOOL)arg1 cascade:(BOOL)arg3 ;
-(void)_repairTitleIfEmpty;
-(void)addSearchIndexContentsToCollection:(id)arg0 ;
-(void)applyPropertiesFromAlbumChange:(id)arg0 ;
-(void)applyTrashedState:(short)arg0 cascade:(BOOL)arg1 ;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)batchFetchAssets:(id)arg0 ;
-(void)dealloc;
-(void)delete;
-(void)didSave;
-(void)enumerateDerivedAlbums:(id)arg0 ;
-(void)enumerateDerivedIndexMappers:(id)arg0 ;
-(void)reducePendingItemsCountBy:(NSUInteger)arg0 ;
-(void)registerDerivedAlbum:(id)arg0 ;
-(void)registerForChanges;
-(void)repairUuidAndTitleWithRecoveryReason:(char *)arg0 ;
-(void)unregisterAllDerivedAlbums;
-(void)unregisterForChanges;
-(void)updateAlbumFolderRelation:(id)arg0 inLibrary:(id)arg1 ;
-(void)willSave;
-(void)willTurnIntoFault;


@end


#endif