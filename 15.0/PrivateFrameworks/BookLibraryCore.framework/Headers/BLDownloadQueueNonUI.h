// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLDOWNLOADQUEUENONUI_H
#define BLDOWNLOADQUEUENONUI_H

@class NSMutableDictionary, NSString, NSArray, NSHashTable;
@protocol BUUserAccountObserving;

#import <Foundation/Foundation.h>

#import "BLServiceProxy.h"

@interface BLDownloadQueueNonUI : NSObject <BUUserAccountObserving>

 {
    os_unfair_lock_s _observersLock;
    os_unfair_lock_s _activeDownloadsLock;
}


@property (retain, nonatomic) NSMutableDictionary *activeDownloads; // ivar: _activeDownloads
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *downloads;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) BLServiceProxy *serviceProxy; // ivar: _serviceProxy
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)cancelAllActiveDownloads;
-(id)_dateFromObject:(id)arg0 ;
-(id)_downloadStatusFromDictionary:(id)arg0 outParamNewlyTrackedDownload:(*BOOL)arg1 ;
-(id)_downloadStatusStoreID:(id)arg0 storePlaylistID:(id)arg1 orPermLink:(id)arg2 downloadID:(id)arg3 title:(id)arg4 collectionTitle:(id)arg5 isPaused:(BOOL)arg6 isAudiobook:(BOOL)arg7 ;
-(id)_numberFromObject:(id)arg0 ;
-(id)_stringFromObject:(id)arg0 ;
-(id)init;
-(void)_addDownloadWithMetadata:(id)arg0 isRestore:(BOOL)arg1 completion:(id)arg2 ;
-(void)_cancelAllPausedDownloads;
-(void)_notifyComplete:(id)arg0 ;
-(void)_notifyFailed:(id)arg0 ;
-(void)_notifyProgress:(id)arg0 ;
-(void)_postDownloadCompleteNotificationWithDictionary:(id)arg0 failed:(BOOL)arg1 ;
-(void)_postUpdatesForCurrentlyPausedDownloadsForObserver:(id)arg0 ;
-(void)_purchaseDidCompleteWithResponse:(id)arg0 ;
-(void)_purchaseDidFailedWithResponse:(id)arg0 ;
-(void)_purchaseWithRequest:(id)arg0 uiHostProxy:(id)arg1 completion:(id)arg2 ;
-(void)_sendCancelCompletionNotificationForDownloadWithDownloadID:(id)arg0 ;
-(void)_sendInitialProgressNotificationForDownloadWithStoreID:(id)arg0 storePlaylistID:(id)arg1 orPermlink:(id)arg2 downloadID:(id)arg3 title:(id)arg4 collectionTitle:(id)arg5 isPaused:(BOOL)arg6 isAudiobook:(BOOL)arg7 targetObserver:(id)arg8 ;
-(void)addDownloadWithMetadata:(id)arg0 completion:(id)arg1 ;
-(void)addDownloadWithPermlink:(id)arg0 title:(id)arg1 completion:(id)arg2 ;
-(void)addDownloadWithPurchaseParameters:(id)arg0 completion:(id)arg1 ;
-(void)addDownloadWithPurchaseParameters:(id)arg0 storeID:(id)arg1 completion:(id)arg2 ;
-(void)addDownloadsWithManifestRequest:(id)arg0 completion:(id)arg1 ;
-(void)addDownloadsWithMetadata:(id)arg0 completion:(id)arg1 ;
-(void)addDownloadsWithRestoreContentRequestItems:(id)arg0 completion:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)addRestoreDownloadWithMetadata:(id)arg0 completion:(id)arg1 ;
-(void)addRestoreDownloadsWithMetadata:(id)arg0 completion:(id)arg1 ;
-(void)cancelAllActiveDownloadsWithCompletion:(id)arg0 ;
-(void)cancelDownloadWithID:(id)arg0 withCompletion:(id)arg1 ;
-(void)dealloc;
-(void)pauseDownloadWithID:(id)arg0 withCompletion:(id)arg1 ;
-(void)processAutomaticDownloadsWithReply:(id)arg0 ;
-(void)purchaseWithBuyParameters:(id)arg0 storeID:(id)arg1 completion:(id)arg2 ;
-(void)purchaseWithBuyParameters:(id)arg0 storeID:(id)arg1 isAudiobook:(BOOL)arg2 completion:(id)arg3 ;
-(void)purchaseWithBuyParameters:(id)arg0 storeID:(id)arg1 isAudiobook:(BOOL)arg2 userInfo:(id)arg3 completion:(id)arg4 ;
-(void)purchaseWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)reloadFromServerWithCompletion:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)restartDownloadWithID:(id)arg0 withCompletion:(id)arg1 ;
-(void)resumeDownloadWithID:(id)arg0 withCompletion:(id)arg1 ;
-(void)userAccount:(NSUInteger)arg0 didChangeWithReason:(NSUInteger)arg1 ;


@end


#endif