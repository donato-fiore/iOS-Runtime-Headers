// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLDOWNLOADQUEUESERVERPROGRESSOBSERVER_H
#define BLDOWNLOADQUEUESERVERPROGRESSOBSERVER_H

@class NSMutableDictionary, NSString, NSArray, NSHashTable;
@protocol BLProgressReceiving, BLServiceProxyConnectionMonitoring;

#import <Foundation/Foundation.h>

#import "BLDownloadQueueNonUI.h"
#import "BLServiceProxy.h"

@interface BLDownloadQueueServerProgressObserver : NSObject <BLProgressReceiving, BLServiceProxyConnectionMonitoring>

 {
    os_unfair_lock_s _observersLock;
    os_unfair_lock_s _activeDownloadsLock;
}


@property (retain, nonatomic) NSMutableDictionary *activeDownloads; // ivar: _activeDownloads
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) BLDownloadQueueNonUI *downloadQueue; // ivar: _downloadQueue
@property (readonly, nonatomic) NSArray *downloads;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) BLServiceProxy *serviceProxy; // ivar: _serviceProxy
@property (readonly) Class superclass;


-(id)_dateFromObject:(id)arg0 ;
-(id)_downloadStatusFromDictionary:(id)arg0 outParamNewlyTrackedDownload:(*BOOL)arg1 ;
-(id)_downloadStatusStoreID:(id)arg0 storePlaylistID:(id)arg1 orPermLink:(id)arg2 downloadID:(id)arg3 title:(id)arg4 collectionTitle:(id)arg5 assetKind:(id)arg6 isPaused:(BOOL)arg7 ;
-(id)_numberFromObject:(id)arg0 ;
-(id)_stringFromObject:(id)arg0 ;
-(id)initWithDownloadQueue:(id)arg0 ;
-(void)_postDownloadCompleteNotificationWithDictionary:(id)arg0 failed:(BOOL)arg1 ;
-(void)_postDownloadProgressNotificationWithDictionary:(id)arg0 ;
-(void)_postUpdatesForCurrentlyPausedDownloadsForObserver:(id)arg0 ;
-(void)cancelAllPausedDownloads;
-(void)dealloc;
-(void)didFailWithUserInfo:(id)arg0 ;
-(void)downloadCompleteWithUserInfo:(id)arg0 ;
-(void)notifyDidCompleteForDownloadID:(id)arg0 ;
-(void)notifyPurchaseAttemptForRequest:(id)arg0 ;
-(void)progressWithUserInfo:(id)arg0 ;
-(void)purchaseDidCompleteWithResponse:(id)arg0 ;
-(void)purchaseDidFailedWithResponse:(id)arg0 ;
-(void)purchaseFailedWithUserInfo:(id)arg0 ;
-(void)purchaseSucceededWithUserInfo:(id)arg0 ;
-(void)reconnectingToServiceForProxy:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)sendCancelCompletionNotificationForDownloadWithDownloadID:(id)arg0 ;
-(void)sendInitialProgressNotificationForDownloadWithStoreID:(id)arg0 storePlaylistID:(id)arg1 orPermlink:(id)arg2 downloadID:(id)arg3 title:(id)arg4 collectionTitle:(id)arg5 assetKind:(id)arg6 isPaused:(BOOL)arg7 targetObserver:(id)arg8 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif