// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDDEVICENOTIFICATIONHANDLER_H
#define HMDDEVICENOTIFICATIONHANDLER_H

@class HMFObject, HMFTimer, NSString, NSMutableArray, NSMutableDictionary;
@protocol HMFTimerDelegate, HMFLocking;


#import "HMDHome.h"

@interface HMDDeviceNotificationHandler : HMFObject <HMFTimerDelegate>

 {
    id<HMFLocking> *_lock;
}


@property (retain, nonatomic) HMFTimer *coalesceTimer; // ivar: _coalesceTimer
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delaySupported; // ivar: _delaySupported
@property (retain, nonatomic) HMFTimer *delayTimer; // ivar: _delayTimer
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *destination; // ivar: _destination
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (retain, nonatomic) NSString *notificationUpdateIdentifier; // ivar: _notificationUpdateIdentifier
@property (retain, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *updatedCharacteristicsTuples; // ivar: _updatedCharacteristicsTuples
@property (retain, nonatomic) NSMutableDictionary *updatedMediaPropertiesByMediaProfile; // ivar: _updatedMediaPropertiesByMediaProfile


-(id)initWithDestination:(id)arg0 watchDevice:(BOOL)arg1 withRequestIdentifier:(id)arg2 home:(id)arg3 ;
-(void)_beginCoalesce:(BOOL)arg0 ;
-(void)_dispatchNotification;
-(void)sendNotificationForCharacteristicChanges:(id)arg0 withRequestIdentifier:(id)arg1 notificationUpdateIdentifier:(id)arg2 broadcast:(BOOL)arg3 ;
-(void)sendNotificationForMediaProperties:(id)arg0 withRequestIdentifier:(id)arg1 notificationUpdateIdentifier:(id)arg2 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif