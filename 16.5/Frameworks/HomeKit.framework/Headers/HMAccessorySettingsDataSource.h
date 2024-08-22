// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSORYSETTINGSDATASOURCE_H
#define HMACCESSORYSETTINGSDATASOURCE_H

@class NSString;
@protocol HMEEventConsumer, HMFLogging, HMELastEventStoreWriter, HMESubscriptionProviding, OS_dispatch_queue, HMELastEventStoreReadHandle, HMELastEventStoreWriteHandle, HMAccessorySettingsDataSourceDataSource, HMAccessorySettingsDataSourceDelegate, HMAccessorySettingsMessengerFactory;

#import <Foundation/Foundation.h>

#import "HMAccessorySettingsMessenger.h"
#import "HMLocalization.h"
#import "HMAccessorySettingsMetricsDispatcher.h"
#import "_HMContext.h"

@interface HMAccessorySettingsDataSource : NSObject <HMEEventConsumer, HMFLogging, HMELastEventStoreWriter>

 {
    os_unfair_lock_s _lock;
    HMAccessorySettingsMessenger *_messenger;
    HMLocalization *_localizationManager;
    id<HMESubscriptionProviding> *_eventSubscriptionProvider;
    HMAccessorySettingsMetricsDispatcher *_metricsDispatcher;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<HMELastEventStoreReadHandle> *_lastEventStoreReadHandle;
    id<HMELastEventStoreWriteHandle> *_lastEventStoreWriteHandle;
}


@property (readonly) _HMContext *context; // ivar: _context
@property (weak) NSObject<HMAccessorySettingsDataSourceDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMAccessorySettingsDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) NSObject<HMAccessorySettingsMessengerFactory> *messengerFactory; // ivar: _messengerFactory
@property (readonly) Class superclass;


+(id)defaultLanguageValue;
+(id)logCategory;
-(id)defaultSettingsWithHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPaths:(id)arg2 ;
-(id)initWithContext:(id)arg0 localizationManager:(id)arg1 messengerFactory:(id)arg2 subscriptionProvider:(id)arg3 lastEventStoreReadHandle:(id)arg4 lastEventStoreWriteHandle:(id)arg5 metricsDispatcher:(id)arg6 ;
-(id)localizedTitleForKeyPath:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveCachedEvent:(id)arg0 topic:(id)arg1 source:(id)arg2 ;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)fetchAccessorySettingsWithAccessoryIdentifier:(id)arg0 keyPaths:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchAccessorySettingsWithHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPaths:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchCachedAccessorySettingsWithHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPaths:(id)arg2 completionHandler:(id)arg3 ;
-(void)resetSubscriptions;
-(void)subscribeToAccessorySettingsWithAccessoryIdentifier:(id)arg0 keyPaths:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)subscribeToAccessorySettingsWithHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPaths:(id)arg2 options:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)subscribeToMediaSystemSettingsWithHomeIdentifier:(id)arg0 mediaSystemIdentifier:(id)arg1 keyPaths:(id)arg2 options:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)unsubscribeToAccessorySettingsWithHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 keyPaths:(id)arg2 completionHandler:(id)arg3 ;
-(void)unsubscribeToMediaSystemSettingsWithHomeIdentifier:(id)arg0 mediaSystemIdentifier:(id)arg1 keyPaths:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif