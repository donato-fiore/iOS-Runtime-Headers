// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSASSTATEMACHINE_H
#define MSASSTATEMACHINE_H

@class NSString, NSDictionary, NSMutableArray, NSArray;
@protocol MSBackoffManagerDelegate, MSASAssetUploaderDelegate, MSASAssetDownloaderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MSASPersonModel.h"
#import "MSBackoffManager.h"
#import "MSASAssetUploader.h"
#import "MSASAssetDownloader.h"
#import "MSAlbumSharingDaemon.h"
#import "MSImageScalingSpecification.h"
#import "MSASPhoneInvitations.h"
#import "MSASProtocol.h"

@interface MSASStateMachine : NSObject <MSBackoffManagerDelegate, MSASAssetUploaderDelegate, MSASAssetDownloaderDelegate>

 {
    int _commandState;
    MSASPersonModel *_model;
    NSString *_currentCommand;
    NSInteger _currentCommandID;
    NSDictionary *_currentCommandParams;
    MSBackoffManager *_metadataBackoffManager;
    MSBackoffManager *_MMCSBackoffManager;
    MSASAssetUploader *_assetUploader;
    MSASAssetDownloader *_assetDownloader;
}


@property (retain, nonatomic) NSDictionary *MMCSBackoffManagerParameters; // ivar: _MMCSBackoffManagerParameters
@property (retain, nonatomic, setter=_setAssetInfoToReauthForDownload:) NSMutableArray *_assetInfoToReauthForDownload; // ivar: _assetInfoToReauthForDownload
@property (copy, nonatomic, setter=_setStopHandlerBlock:) id *_stopHandlerBlock; // ivar: _stopHandlerBlock
@property (weak, nonatomic) MSAlbumSharingDaemon *daemon; // ivar: _daemon
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, retain, nonatomic) MSImageScalingSpecification *derivativeImageScalingSpecification; // ivar: _derivativeImageScalingSpecification
@property (readonly, retain, nonatomic) NSArray *derivativeSpecifications; // ivar: _derivativeSpecifications
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // ivar: _eventQueue
@property (retain, nonatomic) NSString *focusAlbumGUID; // ivar: _focusAlbumGUID
@property (retain, nonatomic) NSString *focusAssetCollectionGUID; // ivar: _focusAssetCollectionGUID
@property (nonatomic) BOOL hasShutDown; // ivar: _hasShutDown
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRetryingOutstandingActivities; // ivar: _isRetryingOutstandingActivities
@property (nonatomic) int maxMetadataRetryCount; // ivar: _maxMetadataRetryCount
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // ivar: _memberQueue
@property (retain, nonatomic) NSDictionary *metadataBackoffManagerParameters; // ivar: _metadataBackoffManagerParameters
@property (retain, nonatomic) NSString *personID; // ivar: _personID
@property (retain, nonatomic) MSASPhoneInvitations *phoneInvitations; // ivar: _phoneInvitations
@property (copy, nonatomic) id *postCommandCompletionBlock; // ivar: _postCommandCompletionBlock
@property (retain, nonatomic) MSASProtocol *protocol; // ivar: _protocol
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverSideConfigQueue; // ivar: _serverSideConfigQueue
@property (retain, nonatomic) NSDictionary *serverSideConfiguration; // ivar: _serverSideConfiguration
@property (readonly, retain, nonatomic) NSString *serverSideConfigurationVersion; // ivar: _serverSideConfigurationVersion
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) MSImageScalingSpecification *thumbnailImageScalingSpecification; // ivar: _thumbnailImageScalingSpecification
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)hasEnqueuedActivities;
-(BOOL)isInRetryState;
-(BOOL)workQueueEndCommandWithError:(id)arg0 command:(id)arg1 params:(id)arg2 albumGUID:(id)arg3 assetCollectionGUID:(id)arg4 ;
-(id)_URLReauthFailureWithUnderlyingError:(id)arg0 ;
-(id)_assetCollectionFailedError;
-(id)_assetCollectionRejectedError;
-(id)_assetDownloader;
-(id)_assetUploader;
-(id)_canceledError;
-(id)_createCopiedAssetsInAssetCollections:(id)arg0 ;
-(id)_metadataBackoffManager;
-(id)_model;
-(id)_serverSideConfigDictionaryByApplyingDefaultsToDictionary:(id)arg0 ;
-(id)_stoppedError;
-(id)init;
-(id)initWithPersonID:(id)arg0 ;
-(id)initWithPersonID:(id)arg0 eventQueue:(id)arg1 ;
-(id)latestNextActivityDate;
-(id)persistentObjectForKey:(id)arg0 ;
-(id)rootCtagToCheckForChanges;
-(id)serverCommunicationBackoffDate;
-(id)serverSideQueueServerSideConfiguration;
-(void)MSASAssetDownloader:(id)arg0 didFinishDownloadingAsset:(id)arg1 inAlbumGUID:(id)arg2 error:(id)arg3 ;
-(void)MSASAssetDownloader:(id)arg0 willBeginBatchCount:(NSUInteger)arg1 ;
-(void)MSASAssetDownloaderDidFinishBatch:(id)arg0 ;
-(void)MSASAssetUploader:(id)arg0 didFinishUploadingAssetCollection:(id)arg1 intoAlbum:(id)arg2 error:(id)arg3 ;
-(void)MSBackoffManagerDidUpdateNextExpiryDate:(id)arg0 ;
-(void)_addAssetCollectionsDisposition:(int)arg0 params:(id)arg1 ;
-(void)_addCommentDisposition:(int)arg0 params:(id)arg1 ;
-(void)_addSharingRelationshipsDisposition:(int)arg0 params:(id)arg1 ;
-(void)_cancelOutstandingCommandsDisposition:(int)arg0 params:(id)arg1 ;
-(void)_checkForAlbumSyncedStateDisposition:(int)arg0 params:(id)arg1 ;
-(void)_checkForAssetCollectionUpdatesDisposition:(int)arg0 params:(id)arg1 ;
-(void)_checkForChangesDisposition:(int)arg0 params:(id)arg1 ;
-(void)_checkForCommentChangesDisposition:(int)arg0 params:(id)arg1 ;
-(void)_checkForUpdatesInAlbumDisposition:(int)arg0 params:(id)arg1 ;
-(void)_continueAddingAssetCollectionsDisposition:(int)arg0 params:(id)arg1 ;
-(void)_createAlbumDisposition:(int)arg0 params:(id)arg1 ;
-(void)_deleteAlbumDisposition:(int)arg0 params:(id)arg1 ;
-(void)_deleteAssetCollectionsDisposition:(int)arg0 params:(id)arg1 ;
-(void)_deleteAssetFilesInAssetCollection:(id)arg0 ;
-(void)_deleteAssetFilesInAssetCollections:(id)arg0 ;
-(void)_deleteCommentDisposition:(int)arg0 params:(id)arg1 ;
-(void)_didFinishCheckingUpdatesInAlbumsDisposition:(int)arg0 params:(id)arg1 ;
-(void)_getAccessControlsDisposition:(int)arg0 params:(id)arg1 ;
-(void)_getAlbumURLDisposition:(int)arg0 params:(id)arg1 ;
-(void)_markAsSpamInvitationForAlbumDisposition:(int)arg0 params:(id)arg1 ;
-(void)_markAsSpamInvitationForTokenDisposition:(int)arg0 params:(id)arg1 ;
-(void)_removeSharingRelationshipsDisposition:(int)arg0 params:(id)arg1 ;
-(void)_scheduleEventDisposition:(int)arg0 params:(id)arg1 ;
-(void)_sendGetServerSideConfigurationDisposition:(int)arg0 params:(id)arg1 ;
-(void)_sendGetUploadTokensDisposition:(int)arg0 params:(id)arg1 ;
-(void)_sendPutAssetCollectionsDisposition:(int)arg0 params:(id)arg1 ;
-(void)_sendReauthorizeAssetsForDownloadDisposition:(int)arg0 params:(id)arg1 ;
-(void)_sendUploadCompleteDisposition:(int)arg0 params:(id)arg1 ;
-(void)_setAlbumSyncedStateDisposition:(int)arg0 params:(id)arg1 ;
-(void)_setAssetCollectionSyncedStateDisposition:(int)arg0 params:(id)arg1 ;
-(void)_subscribeToAlbumDisposition:(int)arg0 params:(id)arg1 ;
-(void)_unsubscribeFromAlbumDisposition:(int)arg0 params:(id)arg1 ;
-(void)_updateAlbumDisposition:(int)arg0 params:(id)arg1 ;
-(void)_workQueueEmptyFileTransferQueuesCompletionBlock:(id)arg0 ;
-(void)acceptInvitationWithToken:(id)arg0 info:(id)arg1 completionBlock:(id)arg2 ;
-(void)addAssetCollections:(id)arg0 toAlbum:(id)arg1 info:(id)arg2 ;
-(void)addComments:(id)arg0 toAssetCollection:(id)arg1 inAlbum:(id)arg2 info:(id)arg3 ;
-(void)addSharingRelationships:(id)arg0 toOwnedAlbum:(id)arg1 info:(id)arg2 ;
-(void)cancelCompletionBlock:(id)arg0 ;
-(void)cancelOutstandingCommandsForAlbumWithGUID:(id)arg0 ;
-(void)cancelOutstandingCommandsForAssetCollectionWithGUID:(id)arg0 ;
-(void)checkForAlbumSyncedStateChangesInAlbums:(id)arg0 info:(id)arg1 ;
-(void)checkForAssetCollectionUpdates:(id)arg0 inAlbum:(id)arg1 info:(id)arg2 ;
-(void)checkForChangesIfMissingRootCtag;
-(void)checkForChangesResetSync:(BOOL)arg0 info:(id)arg1 ;
-(void)checkForCommentChanges:(id)arg0 inAlbumWithGUID:(id)arg1 ;
-(void)checkForUpdatesInAlbums:(id)arg0 resetSync:(BOOL)arg1 info:(id)arg2 ;
-(void)continueAddingAssetCollections:(id)arg0 skipAssetCollections:(id)arg1 toAlbum:(id)arg2 info:(id)arg3 ;
-(void)createAlbum:(id)arg0 info:(id)arg1 ;
-(void)deleteAlbum:(id)arg0 info:(id)arg1 ;
-(void)deleteAssetCollections:(id)arg0 inAlbum:(id)arg1 info:(id)arg2 ;
-(void)deleteComments:(id)arg0 inAssetCollection:(id)arg1 inAlbum:(id)arg2 info:(id)arg3 ;
-(void)getAccessControlsForAlbums:(id)arg0 info:(id)arg1 ;
-(void)markAsSpamInvitationForAlbum:(id)arg0 invitationGUID:(id)arg1 info:(id)arg2 ;
-(void)markAsSpamInvitationForToken:(id)arg0 info:(id)arg1 ;
-(void)purgeEverythingCompletionBlock:(id)arg0 ;
-(void)refreshServerSideConfig;
-(void)removeSharingRelationships:(id)arg0 fromOwnedAlbum:(id)arg1 info:(id)arg2 ;
-(void)retrieveAssets:(id)arg0 inAlbumWithGUID:(id)arg1 ;
-(void)retryOutstandingActivities;
-(void)scheduleEvent:(id)arg0 assetCollectionGUID:(id)arg1 albumGUID:(id)arg2 info:(id)arg3 ;
-(void)serverSideQueueSetServerSideConfiguration:(id)arg0 ;
-(void)setAlbumSyncedState:(id)arg0 forAlbum:(id)arg1 info:(id)arg2 ;
-(void)setAssetCollectionSyncedState:(id)arg0 forAssetCollection:(id)arg1 album:(id)arg2 info:(id)arg3 ;
-(void)setMultipleContributorsEnabled:(BOOL)arg0 forAlbum:(id)arg1 info:(id)arg2 completionBlock:(id)arg3 ;
-(void)setPendingRootCtag:(id)arg0 ;
-(void)setPersistentObject:(id)arg0 forKey:(id)arg1 ;
-(void)setPublicAccessEnabled:(BOOL)arg0 forAlbum:(id)arg1 info:(id)arg2 completionBlock:(id)arg3 ;
-(void)setRootCtagFromPendingRootCtag;
-(void)shutDownCompletionBlock:(id)arg0 ;
-(void)start;
-(void)stopAssetDownloadsCompletionBlock:(id)arg0 ;
-(void)subscribeToAlbum:(id)arg0 info:(id)arg1 ;
-(void)unsubscribeFromAlbum:(id)arg0 info:(id)arg1 ;
-(void)updateAlbum:(id)arg0 updateAlbumFlags:(int)arg1 info:(id)arg2 ;
-(void)validateInvitationToken:(id)arg0 albumName:(id)arg1 completionBlock:(id)arg2 ;
-(void)videoURLForAssetCollection:(id)arg0 inAlbum:(id)arg1 completionBlock:(id)arg2 ;
-(void)videoURLsForAssetCollection:(id)arg0 forMediaAssetType:(NSUInteger)arg1 inAlbum:(id)arg2 completionBlock:(id)arg3 ;
-(void)workQueueCancelAllCommandsFilteredByAlbumGUID:(id)arg0 assetCollectionGUID:(id)arg1 ;
-(void)workQueueCancelCompletionBlock:(id)arg0 ;
-(void)workQueueDidFailToFinishCommandDueToTemporaryError:(id)arg0 ;
-(void)workQueueDidFinishCommandByReplacingCurrentCommandWithCommand:(id)arg0 params:(id)arg1 personID:(id)arg2 albumGUID:(id)arg3 assetCollectionGUID:(id)arg4 ;
-(void)workQueueScheduleReauthForAssets:(id)arg0 inAlbum:(id)arg1 ;


@end


#endif