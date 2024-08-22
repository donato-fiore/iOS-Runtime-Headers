// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDEVICENOTIFICATIONHANDLER_H
#define HMDDEVICENOTIFICATIONHANDLER_H

@class HMFObject, HMFTimer, NSString, NSMutableOrderedSet, HMFMessageDispatcher;
@protocol HMFLogging, HMFTimerDelegate, HMDDeviceNotificationHandlerDataSource, OS_dispatch_queue;


#import "HMDHome.h"

@interface HMDDeviceNotificationHandler : HMFObject <HMFLogging, HMFTimerDelegate>



@property (retain, nonatomic) HMFTimer *coalesceTimer; // ivar: _coalesceTimer
@property (readonly, nonatomic) NSObject<HMDDeviceNotificationHandlerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delaySupported; // ivar: _delaySupported
@property (retain, nonatomic) HMFTimer *delayTimer; // ivar: _delayTimer
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *destination; // ivar: _destination
@property (retain) NSMutableOrderedSet *deviceNotificationsByRequestIDs; // ivar: _deviceNotificationsByRequestIDs
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)_notificationUpdateWithRequestID:(id)arg0 allowAdd:(BOOL)arg1 ;
-(id)initWithDestination:(id)arg0 watchDevice:(BOOL)arg1 withRequestIdentifier:(id)arg2 messageDispatcher:(id)arg3 home:(id)arg4 ;
-(id)initWithDestination:(id)arg0 watchDevice:(BOOL)arg1 withRequestIdentifier:(id)arg2 messageDispatcher:(id)arg3 home:(id)arg4 dataSource:(id)arg5 ;
-(id)logIdentifier;
-(void)_beginCoalesce:(BOOL)arg0 ;
-(void)_dispatchNotification;
-(void)_dispatchNotificationUpdate:(id)arg0 ;
-(void)sendCoalescedRemoteNotificationForAccessories:(id)arg0 ;
-(void)sendNotificationForCharacteristicUpdates:(id)arg0 withRequestIdentifier:(id)arg1 notificationUpdateIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)sendNotificationForMediaProperties:(id)arg0 withRequestIdentifier:(id)arg1 notificationUpdateIdentifier:(id)arg2 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif