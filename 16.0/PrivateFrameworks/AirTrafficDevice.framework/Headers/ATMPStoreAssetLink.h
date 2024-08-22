// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATMPSTOREASSETLINK_H
#define ATMPSTOREASSETLINK_H

@class MPStoreDownloadManager, NSMutableDictionary, NSString;
@protocol MPStoreDownloadManagerObserver, ATAssetLink, OS_dispatch_queue, ATAssetLinkDelegate;

#import <Foundation/Foundation.h>


@interface ATMPStoreAssetLink : NSObject <MPStoreDownloadManagerObserver, ATAssetLink>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    MPStoreDownloadManager *_downloadManager;
    NSMutableDictionary *_assetMap;
    NSMutableDictionary *_downloadsMap;
}


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
-(id)_assetTypeForStoreKind:(id)arg0 ;
-(id)_dataClassForStoreKind:(id)arg0 ;
-(id)_errorForFinishedDownload:(id)arg0 ;
-(id)enqueueAssets:(id)arg0 force:(BOOL)arg1 ;
-(id)init;
-(void)_enqueueAssets:(id)arg0 ;
-(void)_finishAsset:(id)arg0 error:(id)arg1 retryable:(BOOL)arg2 ;
-(void)cancelAssets:(id)arg0 ;
-(void)close;
-(void)downloadManager:(id)arg0 didAddActiveDownloads:(id)arg1 removeActiveDownloads:(id)arg2 ;
-(void)downloadManager:(id)arg0 didAddDownloads:(id)arg1 removeDownloads:(id)arg2 ;
-(void)downloadManager:(id)arg0 downloadDidFinish:(id)arg1 ;
-(void)downloadManager:(id)arg0 downloadDidProgress:(id)arg1 ;
-(void)prioritizeAsset:(id)arg0 ;


@end


#endif