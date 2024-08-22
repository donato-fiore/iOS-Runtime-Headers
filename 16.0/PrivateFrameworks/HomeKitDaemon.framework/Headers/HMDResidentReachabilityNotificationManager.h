// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDRESIDENTREACHABILITYNOTIFICATIONMANAGER_H
#define HMDRESIDENTREACHABILITYNOTIFICATIONMANAGER_H

@class HMFObject, NSString, HMFTimer;
@protocol HMFLogging, HMFTimerDelegate, OS_dispatch_queue;


#import "HMDBulletinBoard.h"
#import "HMDRemoteDeviceMonitor.h"
#import "HMDHome.h"
#import "HMDResidentReachabilityContext.h"

@interface HMDResidentReachabilityNotificationManager : HMFObject <HMFLogging, HMFTimerDelegate>



@property (readonly) BOOL anyEnabledResidentSupportsCameraRecordingReachabilityNotifications;
@property (readonly) HMDBulletinBoard *bulletinBoard; // ivar: _bulletinBoard
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak) HMDRemoteDeviceMonitor *deviceMonitor; // ivar: _deviceMonitor
@property (readonly) BOOL hasMultipleResidentsSupportingCameraRecording;
@property (readonly) BOOL hasReachableResidentSupportingCameraRecording;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (retain) HMFTimer *notificationDebounceTimer; // ivar: _notificationDebounceTimer
@property BOOL notificationEnabled; // ivar: _notificationEnabled
@property (retain) HMDResidentReachabilityContext *reachabilityContext; // ivar: _reachabilityContext
@property (readonly, getter=isReachabilityEventNotificationEnabledForAnyCamera) BOOL reachabilityEventNotificationEnabledForAnyCamera;
@property (readonly) Class superclass;
@property (readonly, copy) id *timerFactory; // ivar: _timerFactory
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)shouldPostReachableNotification;
-(BOOL)shouldPostUnreachableNotification;
-(id)initWithResidentReachabilityContext:(id)arg0 workQueue:(id)arg1 ;
// -(id)initWithResidentReachabilityContext:(id)arg0 workQueue:(id)arg1 timerFactory:(id)arg2 bulletinBoard:(unk)arg3  ;
-(id)logIdentifier;
-(void)_evaluateReachabilityBulletin;
-(void)_handleCameraProfileSettingsDidChange:(id)arg0 ;
-(void)_handleCameraProfileUnconfigured:(id)arg0 ;
-(void)_handleNetworkReachabilityChange:(id)arg0 ;
-(void)_handleResidentAdded:(id)arg0 ;
-(void)_handleResidentRemoved:(id)arg0 ;
-(void)_handleResidentUpdated:(id)arg0 ;
-(void)_startDebounceTimer;
-(void)configureWithHome:(id)arg0 deviceMonitor:(id)arg1 ;
-(void)configureWithHome:(id)arg0 deviceMonitor:(id)arg1 notificationCenter:(id)arg2 completionHandler:(id)arg3 ;
-(void)timerDidFire:(id)arg0 ;
-(void)updateNotificationEnabled;


@end


#endif