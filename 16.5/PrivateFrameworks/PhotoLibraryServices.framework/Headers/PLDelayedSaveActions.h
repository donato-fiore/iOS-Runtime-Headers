// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDELAYEDSAVEACTIONS_H
#define PLDELAYEDSAVEACTIONS_H

@class NSMapTable, NSMutableSet, NSMutableArray, NSMutableDictionary, NSPredicate;

#import <Foundation/Foundation.h>

#import "PLClientServerTransaction.h"

@interface PLDelayedSaveActions : NSObject {
    NSMapTable *_delayedMomentAssetDeletions;
    NSMutableSet *_delayedHighlightAssetUpdates;
    NSMutableArray *_delayedMomentAssetUpdates;
    NSMutableDictionary *_delayedSharedAssetContainerIncrementalChangesByAssetID;
    NSMutableSet *_delayedHighlightMomentUpdates;
    NSMutableSet *_delayedCloudFeedDeletionEntries;
    NSMutableArray *_delayedCloudFeedAlbumUpdates;
    NSMutableArray *_delayedCloudFeedAssetInserts;
    NSMutableArray *_delayedCloudFeedAssetUpdates;
    NSMutableArray *_delayedCloudFeedCommentInserts;
    NSMutableArray *_delayedCloudFeedInvitationRecordUpdates;
    NSMutableArray *_delayedDupeAnalysisNormalInserts;
    NSMutableArray *_delayedDupeAnalysisCloudInserts;
    NSMutableSet *_delayedAssetsForFileSystemPersistency;
    NSMutableDictionary *_delayedSearchIndexUpdateUUIDs;
    NSPredicate *_assetBaseSearchIndexPredicate;
    NSMutableSet *_delayedAlbumCountsAndDateRangeUpdates;
    NSMutableSet *_delayedImportSessionCountsAndDateRangeUpdates;
    NSMutableDictionary *_delayedWorkerTypesToAnalyzeByAssetUUID;
    NSMutableSet *_delayedAssetsForDuetDelete;
    NSMutableSet *_delayedMemoriesForDuetDelete;
    NSMutableSet *_delayedMemoriesAssetUpdate;
    BOOL _delayedWidgetTimelineReloadNeeded;
    BOOL _delayedFeaturedContentUpdateNeeded;
    NSMutableSet *_delayedWallpaperSuggestionUUIDs;
    NSMutableSet *_delayedLibraryScopeParticipantsUpdateUUIDs;
    BOOL _delayedLibraryScopeRulesUpdated;
}


@property (readonly, nonatomic) PLClientServerTransaction *clientTransaction; // ivar: _clientTransaction


+(void)_considerHighlightRelationshipChangeFromChangedValues:(id)arg0 onAsset:(id)arg1 intoChange:(id)arg2 forRelationshipKey:(id)arg3 ;
-(id)assetBaseSearchIndexPredicate;
-(id)initWithClientTransaction:(id)arg0 ;
-(id)popDelayedSaveActionsDetail;
-(void)_popAlbumCountChangesIntoDetail:(id)arg0 ;
-(void)_popAssetsForFilesystemPersistencyChangesIntoDetail:(id)arg0 ;
-(void)_popCloudFeedChangesIntoDetail:(id)arg0 ;
-(void)_popDelayedAlbumCountsAndDateRangeUpdates:(*id)arg0 ;
-(void)_popDelayedAssetsForAnalysis:(*id)arg0 ;
-(void)_popDelayedAssetsForFilesystemPersistencyUpdates:(*id)arg0 ;
-(void)_popDelayedCloudFeedAlbumUpdates:(*id)arg0 assetInserts:(*id)arg1 assetUpdates:(*id)arg2 commentInserts:(*id)arg3 invitationRecordUpdates:(*id)arg4 deletionEntries:(*id)arg5 ;
-(void)_popDelayedDupeAnalysisNormalInserts:(*id)arg0 cloudInserts:(*id)arg1 ;
-(void)_popDelayedImportSessionCountsAndDateRangeUpdates:(*id)arg0 ;
-(void)_popDelayedMomentInsertsAndUpdates:(*id)arg0 deletes:(*id)arg1 updatedAssetIDsForHighlights:(*id)arg2 updatedMomentIDsForHighlights:(*id)arg3 sharedAssetContainerIncrementalChanges:(*id)arg4 ;
-(void)_popDelayedSearchIndexUpdates:(*id)arg0 ;
-(void)_popDuetDeletedAssetsIntoDetail:(id)arg0 ;
-(void)_popDuetDeletedMemoriesIntoDetail:(id)arg0 ;
-(void)_popDupeAnalysisChangesIntoDetail:(id)arg0 ;
-(void)_popFeaturedContentUpdateNeeded:(id)arg0 ;
-(void)_popImportSessionCountChangesIntoDetail:(id)arg0 ;
-(void)_popLibraryScopeParticipantsUpdateIntoDetail:(id)arg0 ;
-(void)_popLibraryScopeRulesUpdatedIntoDetail:(id)arg0 ;
-(void)_popMemoryAssetUpdateIntoDetail:(id)arg0 ;
-(void)_popMomentChangesIntoDetail:(id)arg0 ;
-(void)_popSearchIndexChangesIntoDetail:(id)arg0 ;
-(void)_popWallpaperSuggestionReloadIntoDetail:(id)arg0 ;
-(void)_popWidgetTimelineReloadNeeded:(id)arg0 ;
-(void)_recordAlbumUUIDForSearchIndexUpdate:(id)arg0 isInsert:(BOOL)arg1 ;
-(void)_recordAssetForSearchIndexUpdate:(id)arg0 ;
-(void)_recordAssetUUIDForSearchIndexUpdate:(id)arg0 isInsert:(BOOL)arg1 ;
-(void)_recordDelayedAlbumCountsAndDateRangeUpdate:(id)arg0 ;
-(void)_recordDelayedCloudFeedAlbumUpdate:(id)arg0 ;
-(void)_recordDelayedCloudFeedAssetInsert:(id)arg0 ;
-(void)_recordDelayedCloudFeedAssetUpdate:(id)arg0 ;
-(void)_recordDelayedCloudFeedCommentInsert:(id)arg0 ;
-(void)_recordDelayedCloudFeedDeletionEntries:(id)arg0 ;
-(void)_recordDelayedCloudFeedInvitationRecordUpdate:(id)arg0 ;
-(void)_recordDelayedHighlightMomentUpdates:(id)arg0 ;
-(void)_recordDelayedImportSessionCountsAndDateRangeUpdate:(id)arg0 ;
-(void)_recordDelayedMomentAssetDeletionsDictionary:(id)arg0 forKey:(id)arg1 ;
-(void)_recordDelayedMomentAssetUpdates:(id)arg0 ;
-(void)_recordDetectedFaceUUIDInsertForSearchIndexUpdate:(id)arg0 ;
-(void)_recordHighlightUUIDForSearchIndexUpdate:(id)arg0 isInsert:(BOOL)arg1 ;
-(void)_recordManagedObjectUUID:(id)arg0 forSearchIndexUpdateKey:(id)arg1 ;
-(void)_recordMemoryUUIDForSearchIndexUpdate:(id)arg0 isInsert:(BOOL)arg1 ;
-(void)_recordNormalAssetForDupeAnalysis:(id)arg0 ;
-(void)_recordPersonUUIDInsertForSearchIndexUpdate:(id)arg0 ;
-(void)_recordPersonUUIDRenameForSearchIndexUpdate:(id)arg0 ;
-(void)_recordSharedAssetIncrementalChange:(id)arg0 forAsset:(id)arg1 ;
-(void)_recordStreamAssetForDupeAnalysis:(id)arg0 ;
-(void)_searchIndexNeedsUpdatingForChangesInPhotolibrary:(id)arg0 ;
-(void)forceAlbumCountsAndDateRangeUpdate:(id)arg0 ;
-(void)persistDelayedActionsScope:(id)arg0 ;
-(void)recordAdditionalAssetAttributesForMomentUpdate:(id)arg0 ;
-(void)recordAdditionalAssetAttributesForSearchIndexUpdate:(id)arg0 ;
-(void)recordAlbumCountsAndDateRangeUpdate:(id)arg0 ;
-(void)recordAlbumForCloudFeedUpdate:(id)arg0 ;
-(void)recordAlbumForSearchIndexUpdate:(id)arg0 ;
-(void)recordAssetDescriptionForSearchIndexUpdate:(id)arg0 ;
-(void)recordAssetForAlbumCountsAndDateRangeUpdate:(id)arg0 ;
-(void)recordAssetForAnalysis:(id)arg0 workerFlags:(int)arg1 workerType:(short)arg2 ;
-(void)recordAssetForCloudFeedUpdate:(id)arg0 ;
-(void)recordAssetForDuetDelete:(id)arg0 ;
-(void)recordAssetForDupeAnalysis:(id)arg0 ;
-(void)recordAssetForFileSystemPersistencyUpdate:(id)arg0 ;
-(void)recordAssetForImportSessionCountsAndDateRangeUpdate:(id)arg0 ;
-(void)recordAssetForMomentUpdate:(id)arg0 ;
-(void)recordAssetForSearchIndexUpdate:(id)arg0 ;
-(void)recordCommentForCloudFeedUpdate:(id)arg0 ;
-(void)recordDetectedFaceForSearchIndexUpdate:(id)arg0 ;
-(void)recordFeaturedContentUpdateNeeded;
-(void)recordHighlightForSearchIndexUpdate:(id)arg0 ;
-(void)recordImportSessionCountsAndDateRangeUpdate:(id)arg0 ;
-(void)recordInvitationRecordForCloudFeedUpdate:(id)arg0 ;
-(void)recordLibraryScopeParticipantsUpdateForLibraryScope:(id)arg0 ;
-(void)recordLibraryScopeRulesUpdated;
-(void)recordMediaAnalysisAssetAttributesForSearchIndexUpdate:(id)arg0 ;
-(void)recordMemoryAssetsUpdate:(id)arg0 ;
-(void)recordMemoryForDuetDelete:(id)arg0 ;
-(void)recordMemoryForSearchIndexUpdate:(id)arg0 ;
-(void)recordMomentForHighlightUpdate:(id)arg0 ;
-(void)recordPersonForSearchIndexUpdate:(id)arg0 ;
-(void)recordWallpaperSuggestionReloadForUUID:(id)arg0 ;
-(void)recordWidgetTimelineReloadNeeded;


@end


#endif