// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PASASSET_H
#define _PASASSET_H

@class NSString, NSDictionary;
@protocol _PASAssetProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_PASNotificationTracker.h"
#import "_PASLock.h"

@interface _PASAsset : NSObject <_PASAssetProtocol>

 {
    NSString *_bundleIdentifier;
    NSDictionary *_requiredMobileAssetProperties;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _installNotificationToken;
    int _metadataNotificationToken;
    _PASNotificationTracker *_updateNotificationTracker;
    _PASLock *_lock;
}


@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSUInteger assetVersion;
@property (readonly, nonatomic) NSUInteger bestAssetVersionObserved;
@property (readonly, nonatomic) NSUInteger compatibilityVersion; // ivar: _compatibilityVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_updateAssetMetadataUsingQueryResults:(id)arg0 ;
-(BOOL)deregisterUpdateHandlerAsyncWithToken:(id)arg0 ;
-(BOOL)deregisterUpdateHandlerWithToken:(id)arg0 ;
-(id)_initWithBundleIdentifier:(id)arg0 defaultBundlePath:(id)arg1 compatibilityVersion:(NSUInteger)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 enableAssetUpdates:(BOOL)arg5 ;
-(id)bundlePath;
-(id)init;
-(id)initWithAssetTypeDescriptorPath:(id)arg0 defaultBundlePath:(id)arg1 matchingKeysAndValues:(id)arg2 notificationQueue:(id)arg3 ;
-(id)initWithAssetTypeDescriptorPath:(id)arg0 defaultBundlePath:(id)arg1 matchingKeysAndValues:(id)arg2 notificationQueue:(id)arg3 enableAssetUpdates:(BOOL)arg4 ;
-(id)pathForResourceWithName:(id)arg0 extension:(id)arg1 ;
-(id)pathForResourceWithName:(id)arg0 extension:(id)arg1 assetVersion:(*NSUInteger)arg2 ;
-(id)pathForResourceWithNameAndExtension:(id)arg0 ;
-(id)pathForResourceWithNameAndExtension:(id)arg0 assetVersion:(*NSUInteger)arg1 ;
-(id)pathsForResourcesWithNames:(id)arg0 ;
-(id)pathsForResourcesWithNames:(id)arg0 assetVersion:(*NSUInteger)arg1 ;
-(id)registerUpdateHandler:(id)arg0 ;
-(void)_issueUpdateNotificationsWithCallback:(id)arg0 ;
-(void)_loadDefaultBundleVersionWithGuardedData:(id)arg0 ;
-(void)_updateAssetMetadata;
-(void)addOverridePath:(id)arg0 forResource:(id)arg1 ofType:(id)arg2 ;
-(void)callAssetUpdateHandlers;
-(void)clearOverrides;
-(void)dealloc;
-(void)invokeWithBundleOverride:(id)arg0 block:(id)arg1 ;
-(void)setBundlePath:(id)arg0 ;


@end


#endif