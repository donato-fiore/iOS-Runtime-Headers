// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKREMOTEASSETMANAGER_H
#define PKREMOTEASSETMANAGER_H

@class NSMutableDictionary, NSMutableArray, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKDirectoryCoordinator.h"

@interface PKRemoteAssetManager : NSObject {
    PKDirectoryCoordinator *_coordinator;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_manifestItemsByRelativeURL;
    NSMutableDictionary *_sha1HexFromRelativeManifest;
    os_unfair_lock_s _lock;
    NSMutableArray *_completionHandlers;
}


@property (copy, nonatomic) NSArray *seids; // ivar: _seids


-(BOOL)addRemoteAssetData:(id)arg0 forManifestItem:(id)arg1 error:(*id)arg2 ;
-(BOOL)addRemoteAssetData:(id)arg0 shouldWriteData:(BOOL)arg1 forManifestItem:(id)arg2 error:(*id)arg3 ;
-(BOOL)assetExistsLocally:(id)arg0 ;
-(BOOL)hasEncryptedDeviceSpecificItemWithRelativePath:(id)arg0 ;
-(id)deviceSpecificItems;
-(id)deviceSpecificItemsForScreenScale:(CGFloat)arg0 suffix:(id)arg1 ;
-(id)init;
-(id)initWithDirectoryCoordinator:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(id)itemWithRelativePath:(id)arg0 ;
-(id)pendingRemoteAssetsItems;
-(id)pendingRemoteAssetsItemsForScreenScale:(CGFloat)arg0 suffix:(id)arg1 ;
-(id)remoteAssetManifests;
-(id)sha1HexFromRelativeManifestWithRelativePath:(id)arg0 ;
-(void)_callCompletionHandlersWithFinishState:(BOOL)arg0 progress:(float)arg1 error:(id)arg2 ;
-(void)_downloadRemoteAssetItem:(id)arg0 withCloudStoreCoordinatorDelegate:(id)arg1 shouldWriteData:(BOOL)arg2 completion:(id)arg3 ;
-(void)_downloadRemoteAssetsWithScreenScale:(CGFloat)arg0 suffix:(id)arg1 cloudStoreCoordinatorDelegate:(id)arg2 completion:(id)arg3 ;
-(void)_flushBundleCaches;
-(void)downloadRemoteAssetItem:(id)arg0 withCloudStoreCoordinatorDelegate:(id)arg1 completion:(id)arg2 ;
-(void)downloadRemoteAssetsWithCompletion:(id)arg0 ;
-(void)downloadRemoteAssetsWithScreenScale:(CGFloat)arg0 suffix:(id)arg1 cloudStoreCoordinatorDelegate:(id)arg2 completion:(id)arg3 ;
-(void)downloadRemoteAssetsWithScreenScale:(CGFloat)arg0 suffix:(id)arg1 completion:(id)arg2 ;


@end


#endif