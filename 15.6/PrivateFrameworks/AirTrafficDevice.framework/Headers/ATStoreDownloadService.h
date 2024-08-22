// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATSTOREDOWNLOADSERVICE_H
#define ATSTOREDOWNLOADSERVICE_H

@class NSOperationQueue, NSMutableDictionary, NSMutableSet, ICUnfairLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATStoreDownloadService : NSObject {
    NSOperationQueue *_prepareOperationQueue;
    NSOperationQueue *_downloadOperationQueue;
    NSOperationQueue *_processAssetsOperationQueue;
    NSMutableDictionary *_downloadOperations;
    NSMutableDictionary *_progressForAsset;
    NSMutableSet *_observers;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    ICUnfairLock *_lock;
}




+(id)downloadDirectoryPath;
+(id)sharedService;
-(id)_newAssetOperationForAsset:(id)arg0 prepareOperationResult:(id)arg1 ;
-(id)_newPrepareOperationForAsset:(id)arg0 ;
-(id)_newProcessAssetOperationForasset:(id)arg0 assetsOperationResult:(id)arg1 ;
-(id)init;
-(void)_finishAsset:(id)arg0 withError:(id)arg1 cancelPendingDownloads:(BOOL)arg2 ;
-(void)_updateProgressForAsset:(id)arg0 progress:(float)arg1 ;
-(void)_updateStateForAsset:(id)arg0 oldState:(NSInteger)arg1 newState:(NSInteger)arg2 ;
-(void)addDownloadObserver:(id)arg0 ;
-(void)cancelAsset:(id)arg0 ;
-(void)enqueueAsset:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)prioritizeAsset:(id)arg0 ;
-(void)removeDownloadObserver:(id)arg0 ;


@end


#endif