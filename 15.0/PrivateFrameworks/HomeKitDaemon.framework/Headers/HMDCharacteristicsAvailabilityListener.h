// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCHARACTERISTICSAVAILABILITYLISTENER_H
#define HMDCHARACTERISTICSAVAILABILITYLISTENER_H

@class HMFObject, NSSet, NSString, NSDictionary;
@protocol HMFLogging, HMDCharacteristicsAvailabilityListenerDelegate, OS_dispatch_queue;


#import "HMDHAPAccessory.h"
#import "HMDNotificationRegistration.h"

@interface HMDCharacteristicsAvailabilityListener : HMFObject <HMFLogging>



@property (readonly, weak) HMDHAPAccessory *accessory; // ivar: _accessory
@property (copy) NSSet *availableCharacteristics; // ivar: _availableCharacteristics
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCharacteristicsAvailabilityListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSDictionary *interestedCharacteristicTypesByServiceType; // ivar: _interestedCharacteristicTypesByServiceType
@property (readonly, copy) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) HMDNotificationRegistration *notificationRegistration; // ivar: _notificationRegistration
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithAccessory:(id)arg0 workQueue:(id)arg1 interestedCharacteristicTypesByServiceType:(id)arg2 ;
-(void)_notifyDelegate;
-(void)_registerForNotifications;
-(void)handleCharacteristicsUpdated:(id)arg0 ;
-(void)handleServicesUpdated:(id)arg0 ;
-(void)start;


@end


#endif