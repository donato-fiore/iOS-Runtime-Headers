// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMPMEDIAITEMASSETCONTROLLER_H
#define VUIMPMEDIAITEMASSETCONTROLLER_H

@class NSString, MPMediaItem, NSTimer;
@protocol VUIMPMediaItemDownloadControllerObserver, MPStoreDownloadManagerObserver, VUIMediaEntityAssetController, OS_dispatch_queue, VUIMediaEntityAssetControllerDelegate, VUIMediaEntityIdentifier;

#import <Foundation/Foundation.h>

#import "VUIMPMediaItemDownloadController.h"
#import "VUIMediaEntityType.h"
#import "VUIMediaEntityAssetControllerState.h"

@interface VUIMPMediaItemAssetController : NSObject <VUIMPMediaItemDownloadControllerObserver, MPStoreDownloadManagerObserver, VUIMediaEntityAssetController>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // ivar: _completionDispatchQueue
@property (readonly, nonatomic) BOOL contentAllowsCellularDownload;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUIMediaEntityAssetControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VUIMPMediaItemDownloadController *downloadController; // ivar: _downloadController
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier; // ivar: _mediaEntityIdentifier
@property (readonly, copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property (readonly, nonatomic) MPMediaItem *mediaItem; // ivar: _mediaItem
@property (nonatomic, getter=isRequestingPermissionToDownload) BOOL requestingPermissionToDownload; // ivar: _requestingPermissionToDownload
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // ivar: _serialProcessingDispatchQueue
@property (readonly, copy, nonatomic) VUIMediaEntityAssetControllerState *state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsRedownloadingContent;
@property (readonly, nonatomic) BOOL supportsStartingDownload; // ivar: _supportsStartingDownload
@property (retain, nonatomic) NSTimer *waitForDeletionTimer; // ivar: _waitForDeletionTimer


+(BOOL)_supportsStartingDownloadWithMediaItem:(id)arg0 ;
+(NSUInteger)_assetControllerStatusFromDownloadControllerState:(id)arg0 ;
+(void)initialize;
-(BOOL)_isDownloaded;
-(id)init;
-(id)initWithMediaItem:(id)arg0 mediaEntityIdentifier:(id)arg1 serialProcessingDispatchQueue:(id)arg2 ;
-(void)_enqueueAsyncProcessingQueueStrongSelfBlock:(id)arg0 ;
-(void)_enqueueCompletionQueueBlock:(id)arg0 ;
-(void)_handleMediaLibraryContentsDidChangeNotification:(id)arg0 ;
-(void)_notifyDelegateStateDidChange:(id)arg0 ;
-(void)_onProcessingQueue_calculateStateAndNotify:(BOOL)arg0 ;
-(void)_onProcessingQueue_cancelAndRemoveDownloadWithCompletion:(id)arg0 ;
-(void)_onProcessingQueue_invalidate;
-(void)_onProcessingQueue_invalidateAndSetState;
-(void)_onProcessingQueue_startDownloadAllowingCellular:(BOOL)arg0 quality:(NSInteger)arg1 completion:(id)arg2 ;
-(void)_onProcessingQueue_startMonitoringDownload;
-(void)_onProcessingQueue_updateStateWithStatus:(NSUInteger)arg0 downloadProgress:(CGFloat)arg1 bytesDownloaded:(NSUInteger)arg2 bytesToDownload:(NSUInteger)arg3 supportsPausing:(BOOL)arg4 supportsCancellation:(BOOL)arg5 notify:(BOOL)arg6 ;
-(void)_onProcessingQueue_updateStateWithStatus:(NSUInteger)arg0 notify:(BOOL)arg1 ;
-(void)cancelAndRemoveDownload;
-(void)cancelKeyFetch;
-(void)dealloc;
-(void)deleteAndRedownloadAllowingCellular:(BOOL)arg0 quality:(NSInteger)arg1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)arg2 completion:(id)arg3 ;
-(void)downloadManager:(id)arg0 didAddDownloads:(id)arg1 removeDownloads:(id)arg2 ;
-(void)fetchNewKeysForDownloadedVideo;
-(void)invalidate;
-(void)mediaItemDownloadController:(id)arg0 stateDidChange:(id)arg1 ;
-(void)pauseDownload;
-(void)resumeDownload;
-(void)startDownloadAllowingCellular:(BOOL)arg0 quality:(NSInteger)arg1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif