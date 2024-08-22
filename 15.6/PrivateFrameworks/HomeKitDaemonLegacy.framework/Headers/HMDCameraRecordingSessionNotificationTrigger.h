// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERARECORDINGSESSIONNOTIFICATIONTRIGGER_H
#define HMDCAMERARECORDINGSESSIONNOTIFICATIONTRIGGER_H

@class HMFObject, NSSet, NSString, NSNotificationCenter;
@protocol HMDCharacteristicsAvailabilityListenerDelegate, HMFLogging, HMDCameraRecordingSessionNotificationTriggerDelegate, OS_dispatch_queue;


#import "HMDCharacteristicsAvailabilityListener.h"
#import "HMDHAPAccessory.h"

@interface HMDCameraRecordingSessionNotificationTrigger : HMFObject <HMDCharacteristicsAvailabilityListenerDelegate, HMFLogging>



@property (readonly) HMDCharacteristicsAvailabilityListener *availabilityListener; // ivar: _availabilityListener
@property (retain) NSSet *availableCharacteristics; // ivar: _availableCharacteristics
@property (readonly, weak) HMDHAPAccessory *cameraAccessory; // ivar: _cameraAccessory
@property (readonly, copy) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCameraRecordingSessionNotificationTriggerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithCamera:(id)arg0 workQueue:(id)arg1 ;
-(id)initWithCamera:(id)arg0 workQueue:(id)arg1 availabilityListener:(id)arg2 notificationCenter:(id)arg3 ;
-(void)_handleObservedCharacteristicsValueUpdate:(id)arg0 ;
-(void)dealloc;
-(void)handleAccessoryConnected:(id)arg0 ;
-(void)handleCharacteristicsValueUpdated:(id)arg0 ;
-(void)listener:(id)arg0 didUpdateAvailableCharacteristics:(id)arg1 ;
-(void)start;


@end


#endif