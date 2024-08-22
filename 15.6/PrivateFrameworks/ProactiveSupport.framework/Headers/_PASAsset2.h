// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASASSET2_H
#define _PASASSET2_H

@class NSString, NSDictionary;
@protocol OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>

#import "_PASNotificationTracker.h"
#import "_PASLock.h"

@interface _PASAsset2 : NSObject {
    NSString *_assetTypeIdentifier;
    NSString *_defaultBundlePathBackup;
    NSDictionary *_requiredMobileAssetProperties;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_os_log> *_logHandle;
    int _installNotificationToken;
    int _metadataNotificationToken;
    _PASNotificationTracker *_updateNotificationTracker;
    _PASLock *_lock;
}


@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSUInteger assetVersion;
@property (readonly, nonatomic) NSUInteger bestAssetVersionObserved;
@property (readonly, nonatomic) NSString *bundlePath;
@property (readonly, nonatomic) NSUInteger compatibilityVersion; // ivar: _compatibilityVersion


-(BOOL)_loadDefaultBundleVersionWithGuardedData:(id)arg0 ;
-(BOOL)deregisterUpdateHandlerAsyncWithToken:(id)arg0 ;
-(BOOL)deregisterUpdateHandlerWithToken:(id)arg0 ;
-(BOOL)overrideDefaultBundleWithBundleAtPath:(id)arg0 ;
-(BOOL)updateAssetMetadataUsingQueryResults:(id)arg0 ;
-(id)_assetDescription;
-(id)_defaultBundleFilesystemPathsForAssetDataRelativePaths:(id)arg0 guardedData:(id)arg1 assetVersion:(*NSUInteger)arg2 ;
-(id)_initWithAssetTypeIdentifier:(id)arg0 defaultBundlePath:(id)arg1 compatibilityVersion:(NSUInteger)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5 enableAssetUpdates:(BOOL)arg6 purgeObsoleteInstalledAssets:(BOOL)arg7 ;
-(id)_maFilesystemPathsForAssetDataRelativePaths:(id)arg0 guardedData:(id)arg1 isMissingData:(*BOOL)arg2 assetVersion:(*NSUInteger)arg3 ;
-(id)filesystemPathForAssetDataRelativePath:(id)arg0 ;
-(id)filesystemPathForAssetDataRelativePath:(id)arg0 assetVersion:(*NSUInteger)arg1 ;
-(id)filesystemPathsForAssetDataRelativePaths:(id)arg0 ;
-(id)filesystemPathsForAssetDataRelativePaths:(id)arg0 assetVersion:(*NSUInteger)arg1 ;
-(id)init;
-(id)initWithAssetTypeDescriptorPath:(id)arg0 defaultBundlePath:(id)arg1 matchingKeysAndValues:(id)arg2 notificationQueue:(id)arg3 logHandle:(id)arg4 ;
-(id)initWithAssetTypeDescriptorPath:(id)arg0 defaultBundlePath:(id)arg1 matchingKeysAndValues:(id)arg2 notificationQueue:(id)arg3 logHandle:(id)arg4 enableAssetUpdates:(BOOL)arg5 ;
-(id)initWithAssetTypeDescriptorPath:(id)arg0 defaultBundlePath:(id)arg1 matchingKeysAndValues:(id)arg2 notificationQueue:(id)arg3 logHandle:(id)arg4 enableAssetUpdates:(BOOL)arg5 purgeObsoleteInstalledAssets:(BOOL)arg6 ;
-(id)registerUpdateHandler:(id)arg0 ;
-(void)_issueUpdateNotificationsWithCallback:(id)arg0 ;
-(void)_purgeObsoleteInstalledAssetsFromCandidates:(id)arg0 guardedData:(id)arg1 ;
-(void)_updateAssetMetadata;
-(void)addOverridePath:(id)arg0 forResourceWithRelativePath:(id)arg1 ;
-(void)callAssetUpdateHandlers;
-(void)clearOverrides;
-(void)dealloc;
-(void)downloadMetadataWithCompletion:(id)arg0 ;
-(void)invokeWithBundleOverride:(id)arg0 block:(id)arg1 ;


@end


#endif