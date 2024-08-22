// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACCESSORYINFODATAPROVIDER_H
#define HMACCESSORYINFODATAPROVIDER_H

@class NSString;
@protocol HMEEventConsumer, HMFLogging, HMAccessoryInfoDataProviderDataSource, HMAccessoryInfoDataProviderDelegate, HMESubscriptionProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HMContext.h"

@interface HMAccessoryInfoDataProvider : NSObject <HMEEventConsumer, HMFLogging>



@property (readonly) _HMContext *context; // ivar: _context
@property (weak) NSObject<HMAccessoryInfoDataProviderDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMAccessoryInfoDataProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMESubscriptionProviding> *eventSubscriptionProvider; // ivar: _eventSubscriptionProvider
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)accessoryUUIDForIdentifier:(id)arg0 homeIdentifier:(id)arg1 ;
-(id)dataSourceHomeWithHomeIdentifier:(id)arg0 ;
-(id)homeUUIDForIdentifier:(id)arg0 ;
-(id)initWithContext:(id)arg0 subscriptionProvider:(id)arg1 ;
-(void)_didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)didReceiveCachedEvent:(id)arg0 topic:(id)arg1 source:(id)arg2 ;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)notifyDelegateDidReceiveWifiNetworkInfoUpdatesForAccessoryWithIdentifier:(id)arg0 wifiNetworkInfo:(id)arg1 ;
-(void)subscribeToAccessoryInfoWithHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 accessoryInfoTypes:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)unsubscribeToAccessoryInfoWithHomeIdentifier:(id)arg0 accessoryIdentifier:(id)arg1 accessoryInfoTypes:(NSUInteger)arg2 completionHandler:(id)arg3 ;


@end


#endif