// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMACCESSORYSETTINGSDATASOURCE_H
#define HMACCESSORYSETTINGSDATASOURCE_H

@class NSMutableDictionary, NSString;
@protocol HMEEventConsumer, HMFLogging, HMAccessorySettingsDataSourceDataSource, HMAccessorySettingsDataSourceDelegate, HMESubscriptionProviding, HMAccessorySettingsMessengerFactory, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMAccessorySettingsMessenger.h"
#import "HMCacheManager.h"
#import "_HMContext.h"
#import "HMLocalization.h"
#import "HMAccessorySettingsMetricsDispatcher.h"

@interface HMAccessorySettingsDataSource : NSObject <HMEEventConsumer, HMFLogging>

 {
    os_unfair_lock_s _lock;
    HMAccessorySettingsMessenger *_messenger;
}


@property (readonly) HMCacheManager *cacheManager; // ivar: _cacheManager
@property (readonly) NSMutableDictionary *cacheMap; // ivar: _cacheMap
@property (readonly) _HMContext *context; // ivar: _context
@property (weak) NSObject<HMAccessorySettingsDataSourceDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMAccessorySettingsDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMESubscriptionProviding> *eventSubscriptionProvider; // ivar: _eventSubscriptionProvider
@property (readonly) NSUInteger hash;
@property (readonly) HMLocalization *localizationManager; // ivar: _localizationManager
@property (readonly) NSObject<HMAccessorySettingsMessengerFactory> *messengerFactory; // ivar: _messengerFactory
@property (readonly) HMAccessorySettingsMetricsDispatcher *metricsDispatcher; // ivar: _metricsDispatcher
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)defaultLanguageValue;
+(id)logCategory;
-(id)_loadCacheForHomeUUID:(id)arg0 accessoryUUID:(id)arg1 ;
-(id)_settingsFromCache:(id)arg0 forKeyPaths:(id)arg1 ;
-(id)accessoryUUIDForIdentifier:(id)arg0 homeIdentifier:(id)arg1 ;
-(id)cacheForHomeUUID:(id)arg0 accessoryUUID:(id)arg1 ;
-(id)dataSourceHomeWithHomeIdentifier:(id)arg0 ;
-(id)defaultSettingsWithHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPaths:(id)arg2 ;
-(id)homeUUIDForIdentifier:(id)arg0 ;
-(id)initWithContext:(id)arg0 localizationManager:(id)arg1 messengerFactory:(id)arg2 subscriptionProvider:(id)arg3 cacheManager:(id)arg4 metricsDispatcher:(id)arg5 ;
-(id)localizationKeyForKeyPath:(id)arg0 ;
-(id)localizedTitleForKeyPath:(id)arg0 ;
-(id)messengerWithHomeUUID:(id)arg0 ;
-(id)readAccessorySettingsFromCache:(id)arg0 homeUUID:(id)arg1 accessoryUUID:(id)arg2 keyPaths:(id)arg3 ;
-(void)_cacheSettings:(id)arg0 homeUUID:(id)arg1 accessoryUUID:(id)arg2 ;
-(void)_cacheSettingsToDisk:(id)arg0 homeUUID:(id)arg1 accessoryUUID:(id)arg2 ;
-(void)_didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)_loadCacheIfNeededHomeUUID:(id)arg0 accessoryUUID:(id)arg1 completion:(id)arg2 ;
-(void)_saveSettings:(id)arg0 toCache:(id)arg1 ;
-(void)dealloc;
-(void)didReceiveCachedEvent:(id)arg0 topic:(id)arg1 source:(id)arg2 ;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)fetchAccessorySettingsWithAccessoryIdentifier:(id)arg0 keyPaths:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchAccessorySettingsWithHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPaths:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchCachedAccessorySettingsWithHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPaths:(id)arg2 completionHandler:(id)arg3 ;
-(void)notifyDelegateDidReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)arg0 settings:(id)arg1 ;
-(void)setCache:(id)arg0 forHomeUUID:(id)arg1 accessoryUUID:(id)arg2 ;
-(void)subscribeToAccessorySettingsOnDaemonWithHomeUUID:(id)arg0 accessoryUUID:(id)arg1 keyPaths:(id)arg2 options:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)subscribeToAccessorySettingsWithAccessoryIdentifier:(id)arg0 keyPaths:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)subscribeToAccessorySettingsWithHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPaths:(id)arg2 options:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)unsubscribeToAccessorySettingsWithHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPaths:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif