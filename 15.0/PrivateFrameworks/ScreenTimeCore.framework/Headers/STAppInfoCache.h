// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STAPPINFOCACHE_H
#define STAPPINFOCACHE_H

@class NSCache, NSMutableSet, NSOperationQueue, NSPersistentContainer, NSURLSession;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface STAppInfoCache : NSObject

@property (readonly, nonatomic) NSCache *appInfoByBundleIdentifier; // ivar: _appInfoByBundleIdentifier
@property (readonly, nonatomic) NSMutableSet *bundleIdentifiersWithPendingRequests; // ivar: _bundleIdentifiersWithPendingRequests
@property (readonly, nonatomic) NSOperationQueue *completionHandlerQueue; // ivar: _completionHandlerQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *lookupQueue; // ivar: _lookupQueue
@property (retain) NSPersistentContainer *persistentContainer; // ivar: _persistentContainer
@property (readonly, nonatomic) NSURLSession *urlSession; // ivar: _urlSession


+(id)sharedCache;
-(id)_appInfoForBundleIdentifier:(id)arg0 ;
-(id)_fetchAppInfoFromLaunchServicesWithBundleIdentifier:(id)arg0 ;
-(id)_fetchSyncedInstalledAppInfoForBundleIdentifier:(id)arg0 ;
-(id)_localAppNameForBundleIdentifier:(id)arg0 ;
-(id)_placeholderAppInfoWithBundleIdentifier:(id)arg0 ;
-(id)_preloadedAppInfoWithBundleIdentifier:(id)arg0 ;
-(id)appInfoForBundleIdentifier:(id)arg0 ;
-(id)appInfoForBundleIdentifier:(id)arg0 localOnly:(BOOL)arg1 ;
-(id)init;
-(void)_fetchAppStoreInfoAndNotifyWithBundleIdentifiers:(id)arg0 ;
-(void)_fetchAppStoreInfoAndNotifyWithBundleIdentifiers:(id)arg0 timeoutInterval:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)_finishedFetchingAppInfoByBundleIdentifier:(id)arg0 ;
-(void)_handleiTunesResponseForBundleIdentifiers:(id)arg0 response:(id)arg1 data:(id)arg2 error:(id)arg3 completionHandler:(id)arg4 ;
-(void)addObserver:(id)arg0 selector:(SEL)arg1 bundleIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)fetchAppInfoForBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchAppInfoForBundleIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeObserver:(id)arg0 bundleIdentifier:(id)arg1 ;


@end


#endif