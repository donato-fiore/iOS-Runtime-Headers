// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCASSETMANAGER_H
#define FCASSETMANAGER_H

@class NSString, NFUnfairLock, NSURL;
@protocol FCAssetHandleDelegate, FCCacheCoordinatorDelegate, FCCacheFlushing, FCAssetKeyManagerType, OS_dispatch_queue, FCAVAssetFactoryType;

#import <Foundation/Foundation.h>

#import "FCKeyValueStore.h"
#import "FCAssetStore.h"
#import "FCCacheCoordinator.h"
#import "FCMapTable.h"
#import "FCNetworkBehaviorMonitor.h"

@interface FCAssetManager : NSObject <FCAssetHandleDelegate, FCCacheCoordinatorDelegate, FCCacheFlushing>

 {
    BOOL _shouldUseSecureConnectionForCKAssetDownloads;
    NSString *_name;
    NSString *_parentDirectory;
    FCKeyValueStore *_keyValueStore;
    FCAssetStore *_assetStore;
    FCCacheCoordinator *_cacheCoordinator;
    FCMapTable *_assetHandles;
    NFUnfairLock *_assetHandlesLock;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    id<FCAssetKeyManagerType> *_keyManager;
    NSObject<OS_dispatch_queue> *_initQueue;
    NSURL *_directoryURLForCachedAssets;
    id<FCAVAssetFactoryType> *_avAssetFactory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)cacheCoordinatorCurrentSizeWithReadLock:(id)arg0 ;
-(id)assetHandleForCKAssetURL:(id)arg0 lifetimeHint:(NSInteger)arg1 ;
-(id)assetHandleForCKAssetURLString:(id)arg0 lifetimeHint:(NSInteger)arg1 ;
-(id)assetHandleForCKAssetURLString:(id)arg0 prefetchedData:(id)arg1 unzipIfNeeded:(BOOL)arg2 lifetimeHint:(NSInteger)arg3 ;
-(id)assetHandleForRecordID:(id)arg0 field:(NSInteger)arg1 lifetimeHint:(NSInteger)arg2 contentDatabase:(id)arg3 ;
-(id)assetHandleForResourceID:(id)arg0 contentContext:(id)arg1 ;
-(id)assetHandleForResourceID:(id)arg0 lifetimeHint:(NSInteger)arg1 contentContext:(id)arg2 ;
-(id)assetHandleForURL:(id)arg0 lifetimeHint:(NSInteger)arg1 ;
-(id)assetHandleForURL:(id)arg0 prefetchedFileURL:(id)arg1 importMethod:(NSInteger)arg2 lifetimeHint:(NSInteger)arg3 ;
-(id)contentArchiveForAssetHandle:(id)arg0 ;
-(id)importAsset:(id)arg0 remoteURL:(id)arg1 fileURL:(id)arg2 ;
-(id)init;
-(id)initWithName:(id)arg0 directory:(id)arg1 keyManager:(id)arg2 avAssetFactory:(id)arg3 networkBehaviorMonitor:(id)arg4 ;
-(id)interestTokenForAssetURLs:(id)arg0 ;
-(id)operationToFetchDataProviderForAssetHandle:(id)arg0 completion:(id)arg1 ;
-(void)cacheCoordinator:(id)arg0 flushKeysWithWriteLock:(id)arg1 ;
-(void)d_resetAssetHandle:(id)arg0 ;
-(void)enableFlushingWithFlushingThreshold:(NSUInteger)arg0 ;
-(void)saveWithCompletionHandler:(id)arg0 ;
-(void)t_save;


@end


#endif