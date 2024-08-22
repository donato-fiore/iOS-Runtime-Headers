// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATSTOREASSETLINK_H
#define ATSTOREASSETLINK_H

@class SSDownloadManager, NSMutableDictionary, NSMapTable, NSString;
@protocol SSDownloadManagerObserver, SSDownloadHandlerDelegate, ATAssetLink, OS_dispatch_queue, ATAssetLinkDelegate;

#import <Foundation/Foundation.h>


@interface ATStoreAssetLink : NSObject <SSDownloadManagerObserver, SSDownloadHandlerDelegate, ATAssetLink>

 {
    SSDownloadManager *_downloadManager;
    NSMutableDictionary *_assetsByStoreID;
    NSMapTable *_downloadsByAsset;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATAssetLinkDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isOpen) BOOL open; // ivar: _open
@property (readonly) Class superclass;


-(BOOL)canEnqueueAsset:(id)arg0 ;
-(BOOL)linkIsReady;
-(BOOL)open;
-(NSUInteger)maximumBatchSize;
-(NSUInteger)priority;
-(id)_assetForDownload:(id)arg0 ;
-(id)_assetTypeForStoreKind:(id)arg0 ;
-(id)_dataClassForStoreKind:(id)arg0 ;
-(id)_downloadForAsset:(id)arg0 error:(*id)arg1 ;
-(id)_storeKindForAssetType:(id)arg0 ;
-(id)downloadManager;
-(id)enqueueAssets:(id)arg0 force:(BOOL)arg1 ;
-(id)init;
-(void)_enqueueAssets:(id)arg0 ;
-(void)_finishAsset:(id)arg0 error:(id)arg1 retryable:(BOOL)arg2 ;
-(void)_updateInstallProgress:(CGFloat)arg0 forAsset:(id)arg1 ;
-(void)cancelAssets:(id)arg0 ;
-(void)close;
-(void)downloadManager:(id)arg0 downloadStatesDidChange:(id)arg1 ;
-(void)prioritizeAsset:(id)arg0 ;


@end


#endif