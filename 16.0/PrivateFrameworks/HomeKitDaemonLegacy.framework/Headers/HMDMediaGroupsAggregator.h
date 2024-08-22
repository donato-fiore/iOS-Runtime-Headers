// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIAGROUPSAGGREGATOR_H
#define HMDMEDIAGROUPSAGGREGATOR_H

@class HMFObject, NSMutableDictionary, NSString, NSArray, NSUUID, HMFTimer;
@protocol HMDMediaSystemsAggregateDataGeneratorDataSource, HMDMediaRoomGroupsDataGeneratorDataSource, HMDTimerProvider, HMFLogging, HMFTimerDelegate, HMEEventConsumer, HMDMediaGroupsAggregatorMessengerDelegate, HMDMediaGroupsAggregatorDataSource, HMDMediaGroupsAggregatorDelegate, HMEEventForwarder, HMELastEventStoreReadHandle, HMDFeaturesDataSource, HMESubscriptionProviding;


#import "HMDMediaGroupsAggregateData.h"
#import "HMDMediaGroupsLocalDataStorage.h"
#import "HMDMediaGroupsAggregatorMessenger.h"

@interface HMDMediaGroupsAggregator : HMFObject <HMDMediaSystemsAggregateDataGeneratorDataSource, HMDMediaRoomGroupsDataGeneratorDataSource, HMDTimerProvider, HMFLogging, HMFTimerDelegate, HMEEventConsumer, HMDMediaGroupsAggregatorMessengerDelegate>

 {
    os_unfair_lock_s _lock;
    BOOL _isRunning;
    NSMutableDictionary *_destinations;
    NSMutableDictionary *_destinationControllersData;
}


@property (retain) HMDMediaGroupsAggregateData *aggregateData; // ivar: _aggregateData
@property (weak) NSObject<HMDMediaGroupsAggregatorDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDMediaGroupsAggregatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMEEventForwarder> *eventForwarder; // ivar: _eventForwarder
@property (readonly) NSObject<HMELastEventStoreReadHandle> *eventStoreReadHandle; // ivar: _eventStoreReadHandle
@property (readonly) NSObject<HMDFeaturesDataSource> *featuresDataSource; // ivar: _featuresDataSource
@property (readonly) NSArray *generators; // ivar: _generators
@property (retain) HMDMediaGroupsLocalDataStorage *groupLocalDataStorage; // ivar: _groupLocalDataStorage
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) HMDMediaGroupsAggregatorMessenger *messenger; // ivar: _messenger
@property (readonly) NSObject<HMESubscriptionProviding> *subscriptionProvider; // ivar: _subscriptionProvider
@property (readonly) Class superclass;
@property (weak) NSObject<HMDTimerProvider> *timerProvider; // ivar: _timerProvider
@property (retain) HMFTimer *warmUpTimer; // ivar: _warmUpTimer


+(id)logCategory;
-(BOOL)isRunning;
-(BOOL)removeDestinationControllerDataWithParentIdentifier:(id)arg0 ;
-(BOOL)removeDestinationWithParentIdentifier:(id)arg0 ;
-(BOOL)shouldWarmUp;
-(BOOL)updateAssociatedGroupIdentifier:(id)arg0 forGroupIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)appleMediaAccessories;
-(id)createGenerators;
-(id)destinationControllersData;
-(id)destinations;
-(id)eventSource;
-(id)groups;
-(id)initWithIdentifier:(id)arg0 messenger:(id)arg1 eventForwarder:(id)arg2 subscriptionProvider:(id)arg3 eventStoreReadHandle:(id)arg4 groupsLocalDataStorage:(id)arg5 ;
-(id)initWithIdentifier:(id)arg0 messenger:(id)arg1 eventForwarder:(id)arg2 subscriptionProvider:(id)arg3 eventStoreReadHandle:(id)arg4 groupsLocalDataStorage:(id)arg5 timerProvider:(id)arg6 featuresDataSource:(id)arg7 ;
-(id)localGroupWithIdentifier:(id)arg0 ;
-(id)logIdentifier;
-(id)participantAccessoryUUIDFromTopic:(id)arg0 ;
-(id)participantDataTopicForAccessory:(id)arg0 ;
-(id)roomForAllDestinationParentIdentifiers:(id)arg0 mediaSystemsAggregateDataGenerator:(id)arg1 ;
-(id)roomForDestination:(id)arg0 mediaRoomGroupsDataGenerator:(id)arg1 ;
-(id)roomsForMediaRoomGroupsDataGenerator:(id)arg0 ;
-(id)timerWithTimeInterval:(CGFloat)arg0 options:(NSUInteger)arg1 ;
-(void)clearCachedData;
-(void)clearCachedDataForParticipantAccessoryUUID:(id)arg0 ;
-(void)configureWithHome:(id)arg0 messageDispatcher:(id)arg1 notificationCenter:(id)arg2 primaryResidentChangeMonitor:(id)arg3 ;
-(void)didReceiveCachedEvent:(id)arg0 topic:(id)arg1 source:(id)arg2 ;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)didReceiveUpdateAssociatedGroupRequestMessage:(id)arg0 withGroupIdentifier:(id)arg1 associatedGroupIdentifier:(id)arg2 messenger:(id)arg3 ;
-(void)forwardAggregateData;
-(void)handleAccessoryChangedRoomNotification:(id)arg0 ;
-(void)handleHomeAddedAccessoryNotification:(id)arg0 ;
-(void)handleHomeRemovedAccessoryNotification:(id)arg0 ;
-(void)handleParticipantDataEvent:(id)arg0 accessoryUUID:(id)arg1 ;
-(void)handleParticipantDestinationControllerEventData:(id)arg0 ;
-(void)handleParticipantDestinationEventData:(id)arg0 backedUpGroupsEventData:(id)arg1 participantAccessoryUUID:(id)arg2 ;
-(void)handlePrimaryResidentIsCurrentDeviceChangeNotification:(id)arg0 ;
-(void)notifyOfStoppedState;
-(void)notifyOfUpdateAggregateData:(id)arg0 ;
-(void)refreshAggregateData;
-(void)refreshRunningStateUsingPrimaryResidentChangeMonitor:(id)arg0 ;
-(void)registerForEvents;
-(void)registerForEventsForAccessory:(id)arg0 ;
-(void)registerForNotificationsWithHome:(id)arg0 notificationCenter:(id)arg1 primaryResidentChangeMonitor:(id)arg2 ;
-(void)removeGroupWithIdentifier:(id)arg0 ;
-(void)run;
-(void)setDestination:(id)arg0 ;
-(void)setDestinationControllerData:(id)arg0 ;
-(void)startWarmUpTimer;
-(void)stop;
-(void)stopWarmUpTimer;
-(void)timerDidFire:(id)arg0 ;
-(void)unregisterForAllEvents;
-(void)unregisterForEventsForAccessory:(id)arg0 ;
-(void)updateGroup:(id)arg0 ;
-(void)updateGroup:(id)arg0 participantAccessoryUUIDs:(id)arg1 ;


@end


#endif