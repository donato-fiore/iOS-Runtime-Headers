// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDWIDGETTIMELINEREFRESHER_H
#define HMDWIDGETTIMELINEREFRESHER_H

@class HMFObject, NSMutableDictionary, NSSet, NSString, NSUUID, NSNotificationCenter;
@protocol HMFLogging, OS_dispatch_source, OS_dispatch_queue;


#import "HMDHomeManager.h"

@interface HMDWidgetTimelineRefresher : HMFObject <HMFLogging>



@property (readonly) NSMutableDictionary *accessoryIsReachableByUUID; // ivar: _accessoryIsReachableByUUID
@property (retain) NSSet *activeWidgetKinds; // ivar: _activeWidgetKinds
@property (readonly) NSMutableDictionary *characteristicsToPreviouslySeenValues; // ivar: _characteristicsToPreviouslySeenValues
@property (readonly, copy) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (copy) NSUUID *currentHomeUUID; // ivar: _currentHomeUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *fetchAndStoreActiveWidgetKindsHandler; // ivar: _fetchAndStoreActiveWidgetKindsHandler
@property (copy, nonatomic) id *forceUpdateWidgetTimelineHandler; // ivar: _forceUpdateWidgetTimelineHandler
@property (readonly) NSUInteger hash;
@property (weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (copy) NSSet *monitoredCharacteristics; // ivar: _monitoredCharacteristics
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) Class superclass;
@property (copy) NSSet *widgetKindsToUpdate; // ivar: _widgetKindsToUpdate
@property (readonly) NSObject<OS_dispatch_source> *widgetRefreshDispatchTimer; // ivar: _widgetRefreshDispatchTimer
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)fetchSpecificationsForWidgetKinds:(id)arg0 ;
+(id)logCategory;
-(id)initWithHomeManager:(id)arg0 ;
-(id)initWithHomeManager:(id)arg0 notificationCenter:(id)arg1 ;
-(id)internalMonitorCharacteristicsForCurrentHome:(id)arg0 activeWidgetKinds:(id)arg1 ;
-(id)monitorCharacteristicsForHome:(id)arg0 fetchSpecifications:(id)arg1 ;
-(id)widgetKindsToUpdateFromFetchSpecifications:(id)arg0 assumingChangedCharacteristic:(id)arg1 ;
-(id)widgetKindsToUpdateFromFetchSpecifications:(id)arg0 changedCharacteristics:(id)arg1 ;
-(void)configure;
-(void)fetchAndStoreActiveWidgetKinds;
-(void)forceUpdateTimelineForWidgetKinds:(id)arg0 ;
-(void)handleAccessoryAddedNotification:(id)arg0 ;
-(void)handleAccessoryReachabilityChangedNotification:(id)arg0 ;
-(void)handleAccessoryRemovedNotification:(id)arg0 ;
-(void)handleCurrentOrPrimaryHomeChangedNotification:(id)arg0 ;
-(void)handleHomeAddedNotification:(id)arg0 ;
-(void)handleHomeRemovedNotification:(id)arg0 ;
-(void)handleNotificationOfPossibleNewWidget:(id)arg0 ;
-(void)handleResidentDeviceChangedNotification:(id)arg0 ;
-(void)internalProcessChangedCharacteristics:(id)arg0 activeWidgetKinds:(id)arg1 ;
-(void)processCharacteristicsChangedNotification:(id)arg0 ;
-(void)stopMonitoringOldCharacteristics;
-(void)updateMonitoredCharacteristicsAndRefreshWidgetTimelines;


@end


#endif