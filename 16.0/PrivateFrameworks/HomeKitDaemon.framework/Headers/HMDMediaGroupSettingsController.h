// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIAGROUPSETTINGSCONTROLLER_H
#define HMDMEDIAGROUPSETTINGSCONTROLLER_H

@class NSMutableDictionary, NSString;
@protocol HMFLogging, HMEEventConsumer, HMDMediaGroupsAggregatorDelegate, HMDMediaGroupSettingsControllerDataSource, HMEEventForwarder, HMELastEventStoreReadHandle, HMESubscriptionProviding;

#import <Foundation/Foundation.h>


@interface HMDMediaGroupSettingsController : NSObject <HMFLogging, HMEEventConsumer, HMDMediaGroupsAggregatorDelegate>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_targetAccessoryUUIDs;
}


@property (weak) NSObject<HMDMediaGroupSettingsControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMEEventForwarder> *eventForwarder; // ivar: _eventForwarder
@property (readonly) NSObject<HMELastEventStoreReadHandle> *eventStoreReadHandle; // ivar: _eventStoreReadHandle
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<HMESubscriptionProviding> *subscriptionProvider; // ivar: _subscriptionProvider
@property (readonly) Class superclass;


+(id)logCategory;
-(id)_targetAccessoryTopicsHomeUUID:(id)arg0 targetAccessoryUUID:(id)arg1 ;
-(id)deriveTargetAccessoryUUIDForGroup:(id)arg0 ;
-(id)groupIdentifierForTargetAccessoryUUID:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 EventForwarder:(id)arg1 subscriptionProvider:(id)arg2 eventStoreReadHandle:(id)arg3 ;
-(id)targetAccessoriesWithDestinationIdentifiers:(id)arg0 ;
-(id)targetAccessoryUUIDForGroupIdentifier:(id)arg0 ;
-(void)_postAsMediaGroupEventsIfDifferentForHome:(id)arg0 groupIdentifier:(id)arg1 keyPath:(id)arg2 setting:(id)arg3 ;
-(void)_processReceivedEvent:(id)arg0 topic:(id)arg1 home:(id)arg2 mediaGroup:(id)arg3 ;
-(void)_subscribeToHomeUUID:(id)arg0 targetAccessoryUUID:(id)arg1 groupIdentifier:(id)arg2 ;
-(void)_unsubscribeToHomeUUID:(id)arg0 targetAccessoryUUID:(id)arg1 ;
-(void)clearCachedData;
-(void)didReceiveCachedEvent:(id)arg0 topic:(id)arg1 source:(id)arg2 ;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)didStopMediaGroupsAggregator:(id)arg0 ;
-(void)mediaGroupsAggregator:(id)arg0 didUpdateGroup:(id)arg1 ;
-(void)setTargetAccessoryUUID:(id)arg0 forGroupIdentifier:(id)arg1 ;
-(void)unregisterForAllSettings;
-(void)updateRegisteredSettingsForGroup:(id)arg0 ;


@end


#endif