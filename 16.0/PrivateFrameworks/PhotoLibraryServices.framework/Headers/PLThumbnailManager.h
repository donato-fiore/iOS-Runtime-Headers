// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLTHUMBNAILMANAGER_H
#define PLTHUMBNAILMANAGER_H

@class PLThumbnailManagerCore, NSMutableSet, NSMutableArray, NSLock, NSPersistentStore, PLLazyObject;


#import "PLThumbnailCascadingDownscaleContext.h"

@interface PLThumbnailManager : PLThumbnailManagerCore {
    NSMutableSet *_previouslyRequestedThumbnailFixOIDs;
    NSMutableSet *_requestedThumbnailFixAssets;
    NSMutableArray *_alreadyFailedAssetObjectIDsForRebuild;
    NSLock *_fixLock;
    PLThumbnailCascadingDownscaleContext *_downscaleContext;
    BOOL _shouldRebuildThumbnails;
    BOOL _didCheckShouldRebuildThumbnails;
    BOOL _hasExceededThumbnailRebuildRequestLimit;
    BOOL _isRebuildingThumbnails;
    NSPersistentStore *_migrationStore;
    PLLazyObject *_slowPersistenceManagers;
}


@property (retain, nonatomic) id *observerToken; // ivar: _observerToken


+(id)masterThumbFilename;
+(id)thumbnailIdentifierWithAssetUUID:(id)arg0 directory:(id)arg1 filename:(id)arg2 bundleScope:(unsigned short)arg3 pathManager:(id)arg4 ;
-(BOOL)_downscaleAndWriteTableAndFileBackedThumbnailsWithIdentifier:(id)arg0 thumbnailIndex:(NSUInteger)arg1 image:(id)arg2 assetUUID:(id)arg3 ;
-(BOOL)_performUncompressedTableDownscaleIntoDatas:(id)arg0 image:(id)arg1 assetUUID:(id)arg2 ;
-(BOOL)_thumbnailLoadingAssetIsHiddenOrTrashed:(id)arg0 ;
-(BOOL)hasExceededRebuildThumbnailRequestLimit;
-(BOOL)hasMissingThumbnailsInLibrary:(id)arg0 ;
-(BOOL)hasRebuildThumbnailsRequest;
-(BOOL)isRebuildingThumbnails;
-(BOOL)resetThumbnailsForced:(BOOL)arg0 isMissingTables:(BOOL)arg1 inContext:(id)arg2 ;
-(BOOL)resetThumbnailsWithResetType:(NSInteger)arg0 deferHintChanges:(BOOL)arg1 inContext:(id)arg2 ;
-(BOOL)setThumbnailsForThumbIdentifier:(id)arg0 thumbnailIndex:(NSUInteger)arg1 assetUUID:(id)arg2 kind:(short)arg3 extension:(id)arg4 withImage:(id)arg5 ;
-(BOOL)wantsTableOnlyRebuild;
-(NSInteger)_diskFootprintOfTableThumbnailTables;
-(NSInteger)_rebuildAssetThumbnailsWithLimit:(int)arg0 library:(id)arg1 error:(*id)arg2 ;
-(id)_contextForConfigurationChanges;
-(id)_dataForAsset:(id)arg0 format:(unsigned short)arg1 width:(*int)arg2 height:(*int)arg3 bytesPerRow:(*int)arg4 dataWidth:(*int)arg5 dataHeight:(*int)arg6 imageDataOffset:(*int)arg7 imageDataFormat:(*unsigned short)arg8 ;
-(id)_missingThumbnailPredicate;
-(id)_rebuildThumbnailsQueue;
-(id)_tableDescriptions;
-(id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg0 ;
-(id)dataForPhoto:(id)arg0 format:(unsigned short)arg1 allowPlaceholder:(BOOL)arg2 width:(*int)arg3 height:(*int)arg4 bytesPerRow:(*int)arg5 dataWidth:(*int)arg6 dataHeight:(*int)arg7 imageDataOffset:(*int)arg8 ;
-(id)imageTableForFormat:(unsigned short)arg0 ;
-(id)imageTableForFormat:(unsigned short)arg0 readOnly:(BOOL)arg1 ;
-(id)indexStatisticsForLibrary:(id)arg0 ;
-(id)initWithPhotoLibraryPathManager:(id)arg0 storeFromMigration:(id)arg1 ;
-(id)newSlowPersistenceManagers;
-(id)placeholderDataForFormat:(unsigned short)arg0 photoImageSize:(struct CGSize )arg1 width:(*int)arg2 height:(*int)arg3 bytesPerRow:(*int)arg4 dataWidth:(*int)arg5 dataHeight:(*int)arg6 imageDataOffset:(*int)arg7 ;
-(id)thumbManagerForFormatID:(unsigned short)arg0 ;
-(id)thumbManagerForFormatID:(unsigned short)arg0 readOnly:(BOOL)arg1 ;
-(id)thumbnailJPEGPathForPhoto:(id)arg0 ;
-(id)thumbnailRebuildIndicatorPath;
-(struct CGImage *)newImageForAsset:(id)arg0 format:(id)arg1 ;
-(unsigned short)_supportedThumbnailFormatIDFromGeneralFormatID:(unsigned short)arg0 ;
-(void)_discardAlreadyFailedAssetObjectIDsForRebuild;
-(void)_recordRebuildThumbnailsAttempt;
-(void)_removeMasterThumbDirectories;
-(void)addRebuildThumbnailsRequest;
-(void)continueRebuildingTableThumbsInLibrary:(id)arg0 ;
-(void)dealloc;
-(void)deleteThumbnailsWithIdentifier:(id)arg0 orIndex:(NSUInteger)arg1 uuid:(id)arg2 ;
-(void)discardCachedThumbnailDownscalerContexts;
-(void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg0 withToken:(id)arg1 ;
-(void)handleRebuildThumbnailRequestPersistentFailureInPhotoLibrary:(id)arg0 ;
-(void)preheatThumbnailDataWithFormat:(unsigned short)arg0 thumbnailIndexes:(id)arg1 ;
-(void)reStampConfigAsNeedingTableThumbMigration;
-(void)rebuildAllMissingThumbnailsInLibrary:(id)arg0 ;
-(void)removeObsoleteMetadata;
-(void)removeRebuildThumbnailsRequest:(char *)arg0 ;
-(void)setThumbnailsForAsset:(id)arg0 withImage:(id)arg1 ;


@end


#endif