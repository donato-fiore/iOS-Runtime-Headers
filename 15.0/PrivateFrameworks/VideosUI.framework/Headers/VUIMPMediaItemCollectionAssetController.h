// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIMPMEDIAITEMCOLLECTIONASSETCONTROLLER_H
#define VUIMPMEDIAITEMCOLLECTIONASSETCONTROLLER_H

@class NSArray, NSString, MPMediaItemCollection;
@protocol VUIMediaEntityAssetControllerDelegate, VUIMediaEntityAssetController, OS_dispatch_queue, VUIMediaEntityIdentifier;

#import <Foundation/Foundation.h>

#import "VUIMediaEntityType.h"
#import "VUIMediaEntityAssetControllerState.h"

@interface VUIMPMediaItemCollectionAssetController : NSObject <VUIMediaEntityAssetControllerDelegate, VUIMediaEntityAssetController>



@property (retain, nonatomic) NSArray *assetControllers; // ivar: _assetControllers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // ivar: _completionDispatchQueue
@property (readonly, nonatomic) BOOL contentAllowsCellularDownload;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUIMediaEntityAssetControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger fullyDownloadedAssetBytes; // ivar: _fullyDownloadedAssetBytes
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier; // ivar: _mediaEntityIdentifier
@property (readonly, copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property (retain, nonatomic) MPMediaItemCollection *mediaItemCollection; // ivar: _mediaItemCollection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // ivar: _serialProcessingDispatchQueue
@property (copy, nonatomic) VUIMediaEntityAssetControllerState *state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsRedownloadingContent;
@property (readonly, nonatomic) BOOL supportsStartingDownload; // ivar: _supportsStartingDownload


+(id)_downloadingAssetControllersWithAssetControllers:(id)arg0 ;
+(id)_stateFromDownloadingAssetControllers:(id)arg0 fullyDownloadedAssetBytes:(NSUInteger)arg1 ;
-(BOOL)_allAssetsDownloaded;
-(id)init;
-(id)initWithMediaItemCollection:(id)arg0 mediaEntityIdentifier:(id)arg1 serialProcessingDispatchQueue:(id)arg2 ;
-(void)_enqueueAsyncProcessingQueueStrongSelfBlock:(id)arg0 ;
-(void)_enqueueCompletionQueueBlock:(id)arg0 ;
-(void)_notifyDelegateStateDidChange:(id)arg0 ;
-(void)_onProcessingQueue_cancelAndRemoveDownload;
-(void)_onProcessingQueue_invalidate;
-(void)_onProcessingQueue_pauseDownload;
-(void)_onProcessingQueue_resumeDownload;
-(void)_onProcessingQueue_startDownloadAllowingCellular:(BOOL)arg0 quality:(NSInteger)arg1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)arg2 completion:(id)arg3 ;
-(void)_onProcessingQueue_updateStateAndNotifyDelegate:(BOOL)arg0 ;
-(void)cancelAndRemoveDownload;
-(void)cancelKeyFetch;
-(void)dealloc;
-(void)deleteAndRedownloadAllowingCellular:(BOOL)arg0 quality:(NSInteger)arg1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)arg2 completion:(id)arg3 ;
-(void)fetchNewKeysForDownloadedVideo;
-(void)invalidate;
-(void)mediaEntityAssetController:(id)arg0 stateDidChange:(id)arg1 ;
-(void)pauseDownload;
-(void)resumeDownload;
-(void)startDownloadAllowingCellular:(BOOL)arg0 quality:(NSInteger)arg1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif