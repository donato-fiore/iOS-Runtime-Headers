// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERASIGNIFICANTEVENTNOTIFICATIONDEBOUNCER_H
#define HMDCAMERASIGNIFICANTEVENTNOTIFICATIONDEBOUNCER_H

@class HMFObject, HMFTimer, NSString, NSMutableDictionary;
@protocol HMFTimerDelegate, HMFLogging;



@interface HMDCameraSignificantEventNotificationDebouncer : HMFObject <HMFTimerDelegate, HMFLogging>



@property (readonly) HMFTimer *cleanupTimer; // ivar: _cleanupTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CGFloat distinctPersonDebounceTimeInterval; // ivar: _distinctPersonDebounceTimeInterval
@property (readonly) NSUInteger hash;
@property (readonly) NSMutableDictionary *lastDateNotifiedByPersonIdentifier; // ivar: _lastDateNotifiedByPersonIdentifier
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, copy) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithLogIdentifier:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)trackCameraSignificantEvent:(id)arg0 shouldNotify:(*BOOL)arg1 ;


@end


#endif