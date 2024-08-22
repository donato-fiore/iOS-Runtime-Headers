// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDNATURALLIGHTINGCURVEWRITER_H
#define HMDNATURALLIGHTINGCURVEWRITER_H

@class HMFObject, NSUUID, NSString, NSNotificationCenter, HMFTimer;
@protocol HMFMessageReceiver, HMFLogging, HMDDevicePreferenceDataSource, HMFTimerDelegate, HMDLightProfileDataSource, OS_dispatch_queue;


#import "HMDLightProfile.h"

@interface HMDNaturalLightingCurveWriter : HMFObject <HMFMessageReceiver, HMFLogging, HMDDevicePreferenceDataSource, HMFTimerDelegate>



@property (readonly) NSUUID *UUID; // ivar: _UUID
@property (getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident; // ivar: _currentDevicePrimaryResident
@property (readonly) NSObject<HMDLightProfileDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMDLightProfile *lightProfile; // ivar: _lightProfile
@property (readonly) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) CGFloat naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold; // ivar: _naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold
@property (readonly) CGFloat naturalLightingCurveUpdateInterval; // ivar: _naturalLightingCurveUpdateInterval
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain) HMFTimer *periodicCharacteristicWriteTimer; // ivar: _periodicCharacteristicWriteTimer
@property (readonly) Class superclass;
@property (readonly) id *timerFactory; // ivar: _timerFactory
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)supportsDeviceWithCapabilities:(id)arg0 ;
-(id)initWithUUID:(id)arg0 workQueue:(id)arg1 logIdentifier:(id)arg2 ;
-(id)initWithUUID:(id)arg0 workQueue:(id)arg1 logIdentifier:(id)arg2 dataSource:(id)arg3 notificationCenter:(id)arg4 timerFactory:(id)arg5 ;
-(void)configureWithLightProfile:(id)arg0 ;
-(void)handleActiveTransitionContextUpdated:(id)arg0 ;
-(void)handleCurrentDevicePrimaryResidentChangedWithReason:(id)arg0 ;
-(void)handlePrimaryResidentUpdateNotification:(id)arg0 ;
-(void)synchronizeCurveWithActiveTransitionContext:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)writeForNaturalLightingEnabledWithReason:(id)arg0 ;
-(void)writeWithNaturalLightingEnabled:(BOOL)arg0 reason:(id)arg1 completion:(id)arg2 ;


@end


#endif