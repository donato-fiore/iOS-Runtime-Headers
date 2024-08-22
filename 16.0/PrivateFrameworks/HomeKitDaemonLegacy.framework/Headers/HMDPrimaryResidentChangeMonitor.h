// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDPRIMARYRESIDENTCHANGEMONITOR_H
#define HMDPRIMARYRESIDENTCHANGEMONITOR_H

@class HMFObject, NSUUID, NSString, NSNotificationCenter;
@protocol HMFLogging, HMDPrimaryResidentChangeMonitorDataSource;



@interface HMDPrimaryResidentChangeMonitor : HMFObject <HMFLogging>



@property (retain) NSUUID *confirmedPrimaryResidentDeviceIdentifier; // ivar: _confirmedPrimaryResidentDeviceIdentifier
@property (weak) NSObject<HMDPrimaryResidentChangeMonitorDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property BOOL isCurrentDevicePrimaryResident; // ivar: _isCurrentDevicePrimaryResident
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) Class superclass;


+(id)logCategory;
-(id)confirmedPrimaryResidentDevice;
-(id)initWithIdentifier:(id)arg0 notificationCenter:(id)arg1 ;
-(id)logIdentifier;
-(void)configureWithHome:(id)arg0 ;
-(void)handlePrimaryResidentChangedNotification:(id)arg0 ;
-(void)notifyChangeToConfirmedPrimaryResidentDeviceIdentifier;
-(void)notifyChangeToIsCurrentPrimaryResident;
-(void)refreshMonitor;
-(void)registerForNotificationsWithHome:(id)arg0 ;


@end


#endif