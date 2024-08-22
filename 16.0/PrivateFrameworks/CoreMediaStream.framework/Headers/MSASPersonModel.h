// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSASPERSONMODEL_H
#define MSASPERSONMODEL_H



#import "MSASModelBase.h"

@interface MSASPersonModel : MSASModelBase

@property (nonatomic) BOOL shouldDownloadEarliestPhotosFirst; // ivar: _shouldDownloadEarliestPhotosFirst


-(BOOL)dbQueueIsAssetCollectionWithGUIDPending:(id)arg0 ;
-(BOOL)dbQueueIsGUIDQueued:(id)arg0 inQueue:(id)arg1 ;
-(BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg0 currentVersion:(int)arg1 ;
-(BOOL)hasItemsForDownloadCountFocusAlbumGUID:(id)arg0 focusAssetCollectionGUID:(id)arg1 ;
-(BOOL)isAssetCollectionWithGUIDPending:(id)arg0 ;
-(NSInteger)countOfEnqueuedCommand:(id)arg0 ;
-(NSInteger)countOfEnqueuedCommands;
-(NSInteger)dbQueueNextCommandSequenceNumber;
-(NSInteger)dbQueueSmallestCommandSequenceNumber;
-(NSInteger)nextMMCSItemID;
-(id)_commandWithMinimumIdentifier:(id)arg0 outParams:(*id)arg1 outCommandIdentifier:(*NSInteger)arg2 outPersonID:(*id)arg3 outAlbumGUID:(*id)arg4 outAssetCollectionGUID:(*id)arg5 ;
-(id)commandAtHeadOfQueueOutParams:(*id)arg0 outCommandIdentifier:(*NSInteger)arg1 outPersonID:(*id)arg2 outAlbumGUID:(*id)arg3 outAssetCollectionGUID:(*id)arg4 ;
-(id)commandWithMinimumIdentifier:(NSInteger)arg0 outParams:(*id)arg1 outCommandIdentifier:(*NSInteger)arg2 outPersonID:(*id)arg3 outAlbumGUID:(*id)arg4 outAssetCollectionGUID:(*id)arg5 ;
-(id)initWithPersonID:(id)arg0 ;
-(id)itemsForUpload;
-(id)nextItemsForDownloadFocusAlbumGUID:(id)arg0 focusAssetCollectionGUID:(id)arg1 maxCount:(int)arg2 ;
-(id)nextItemsForDownloadFocusAlbumGUID:(id)arg0 focusAssetCollectionGUID:(id)arg1 thumbnails:(BOOL)arg2 maxCount:(int)arg3 isInflight:(BOOL)arg4 ;
-(id)nextItemsForUploadAlbumGUID:(id)arg0 maxPriority:(int)arg1 maxCount:(int)arg2 ;
-(id)nextItemsForUploadMaxCount:(int)arg0 ;
-(int)assetCollectionsInUploadQueue;
-(int)assetCollectionsInUploadQueueAlbumGUID:(id)arg0 ;
-(int)assetsInDownloadQueue;
-(int)assetsInDownloadQueueAlbumGUID:(id)arg0 ;
-(int)dbQueueAssetCountAlbumGUID:(id)arg0 inQueue:(id)arg1 ;
-(int)itemsForDownloadCountFocusAlbumGUID:(id)arg0 focusAssetCollectionGUID:(id)arg1 ;
-(void)addPendingAssetCollectionGUID:(id)arg0 albumGUID:(id)arg1 ;
-(void)dbQueueEnqueueCommand:(id)arg0 params:(id)arg1 personID:(id)arg2 albumGUID:(id)arg3 assetCollectionGUID:(id)arg4 ;
-(void)dbQueueEnqueueCommand:(id)arg0 params:(id)arg1 personID:(id)arg2 albumGUID:(id)arg3 assetCollectionGUID:(id)arg4 sequenceNumber:(NSInteger)arg5 ;
-(void)dbQueueRemoveAllEntriesFromTable:(id)arg0 ;
-(void)dbQueueRemoveCommandAtHeadOfQueue;
-(void)dbQueueRemoveCommandIdentifier:(NSInteger)arg0 ;
-(void)dbQueueRemoveGUID:(id)arg0 fromQueue:(id)arg1 ;
-(void)dbQueueRequeuePendingCommandsWithAlbumGUID:(id)arg0 ;
-(void)dbQueueRequeuePendingCommandsWithAssetCollectionGUID:(id)arg0 ;
-(void)dbQueueRequeuePendingCommandsWithQueryStatement:(struct sqlite3_stmt *)arg0 deleteStatement:(struct sqlite3_stmt *)arg1 ;
-(void)dbQueueSetErrorCount:(int)arg0 forGUID:(id)arg1 inQueue:(id)arg2 ;
-(void)enqueueAssetCollectionForUpload:(id)arg0 album:(id)arg1 ;
-(void)enqueueAssetForDownload:(id)arg0 inAlbumWithGUID:(id)arg1 ;
-(void)enqueueCommand:(id)arg0 params:(id)arg1 personID:(id)arg2 albumGUID:(id)arg3 assetCollectionGUID:(id)arg4 ;
-(void)enqueueCommand:(id)arg0 params:(id)arg1 personID:(id)arg2 albumGUID:(id)arg3 pendingOnAssetCollectionGUID:(id)arg4 ;
-(void)enqueueCommandAtHeadOfQueue:(id)arg0 params:(id)arg1 personID:(id)arg2 albumGUID:(id)arg3 assetCollectionGUID:(id)arg4 ;
-(void)purgeCompletionBlock:(id)arg0 ;
-(void)removeAssetCollectionsFromUploadQueue:(id)arg0 ;
-(void)removeAssetsFromDownloadQueue:(id)arg0 ;
-(void)removeCommandIdentifier:(NSInteger)arg0 ;
-(void)requeuePendingAssetCollectionGUID:(id)arg0 ;
-(void)requeuePendingAssetCollectionsWithAlbumGUID:(id)arg0 ;
-(void)setErrorCount:(int)arg0 forAssetCollectionInUploadQueue:(id)arg1 ;
-(void)setErrorCount:(int)arg0 forAssetInDownloadQueue:(id)arg1 ;
-(void)setInFlightAssets:(id)arg0 ;
-(void)setParams:(id)arg0 forCommandWithIdentifier:(NSInteger)arg1 ;


@end


#endif