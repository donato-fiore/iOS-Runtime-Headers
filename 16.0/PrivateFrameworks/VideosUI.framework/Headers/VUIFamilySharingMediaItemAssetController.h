// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIFAMILYSHARINGMEDIAITEMASSETCONTROLLER_H
#define VUIFAMILYSHARINGMEDIAITEMASSETCONTROLLER_H

@class NSString, SSDownload, SSDownloadManager, NSTimer;
@protocol SSPurchaseManagerDelegate, SSDownloadManagerObserver, VUIMediaEntityAssetController, OS_dispatch_queue, VUIMediaEntityAssetControllerDelegate, VUIMediaEntityIdentifier;

#import <Foundation/Foundation.h>

#import "VUIMediaEntityType.h"
#import "VUIFamilySharingMediaItem.h"
#import "VUIMediaEntityAssetControllerState.h"

@interface VUIFamilySharingMediaItemAssetController : NSObject <SSPurchaseManagerDelegate, SSDownloadManagerObserver, VUIMediaEntityAssetController>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueueInternal; // ivar: _completionDispatchQueueInternal
@property (readonly, nonatomic) BOOL contentAllowsCellularDownload;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUIMediaEntityAssetControllerDelegate> *delegate;
@property (weak, nonatomic) NSObject<VUIMediaEntityAssetControllerDelegate> *delegateInternal; // ivar: _delegateInternal
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SSDownload *downloadInternal; // ivar: _downloadInternal
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier;
@property (copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifierInternal; // ivar: _mediaEntityIdentifierInternal
@property (readonly, copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property (retain, nonatomic) VUIFamilySharingMediaItem *mediaItemInternal; // ivar: _mediaItemInternal
@property (nonatomic) BOOL observingDownload; // ivar: _observingDownload
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (retain, nonatomic) SSDownloadManager *ssDownloadManager; // ivar: _ssDownloadManager
@property (readonly, copy, nonatomic) VUIMediaEntityAssetControllerState *state;
@property (retain, nonatomic) VUIMediaEntityAssetControllerState *stateInternal; // ivar: _stateInternal
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsRedownloadingContent;
@property (readonly, nonatomic) BOOL supportsStartingDownload;
@property (retain, nonatomic) NSTimer *waitForDeletionTimer; // ivar: _waitForDeletionTimer


+(void)initialize;
-(id)init;
-(id)initWithFamilySharingMediaItem:(id)arg0 mediaEntityIdentifier:(id)arg1 ;
-(id)initWithVideosPlayable:(id)arg0 ;
-(void)_cancelAndRemoveDownloadWithCompletion:(id)arg0 ;
-(void)_updateDownloadStateAndNotifyDelegates;
-(void)_updateObservedDownload;
-(void)cancelAndRemoveDownload;
-(void)cancelKeyFetch;
-(void)deleteAndRedownloadAllowingCellular:(BOOL)arg0 quality:(NSInteger)arg1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)arg2 completion:(id)arg3 ;
-(void)downloadManager:(id)arg0 downloadStatesDidChange:(id)arg1 ;
-(void)fetchNewKeysForDownloadedVideo;
-(void)invalidate;
-(void)pauseDownload;
-(void)resumeDownload;
-(void)startDownloadAllowingCellular:(BOOL)arg0 quality:(NSInteger)arg1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif