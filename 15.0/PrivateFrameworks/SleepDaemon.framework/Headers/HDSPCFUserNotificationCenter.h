// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPCFUSERNOTIFICATIONCENTER_H
#define HDSPCFUSERNOTIFICATIONCENTER_H

@class NSString, NSMutableDictionary;
@protocol HDSPSource, HDSPSleepNotificationPublisher, HDSPEnvironmentAware;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPCFUserNotificationCenter : NSObject <HDSPSource, HDSPSleepNotificationPublisher, HDSPEnvironmentAware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) os_unfair_lock_s notificationLock; // ivar: _notificationLock
@property (readonly, nonatomic) NSMutableDictionary *notifications; // ivar: _notifications
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HDSPSource> *targetSource;


-(id)_wakeDetectionAlertBodyForAlarmEnabled:(BOOL)arg0 sleepModeOn:(BOOL)arg1 ;
-(id)_wakeDetectionAlertTitleForAlarmEnabled:(BOOL)arg0 sleepModeOn:(BOOL)arg1 ;
-(id)initWithEnvironment:(id)arg0 ;
-(void)_publishNotificationWithIdentifier:(id)arg0 title:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 bypassDND:(BOOL)arg5 actionHandler:(id)arg6 ;
-(void)_publishWakeDetectionNotificationForUserInfo:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)handleResponse:(NSUInteger)arg0 forUserNotification:(id)arg1 ;
-(void)publishNotificationForEvent:(id)arg0 userInfo:(id)arg1 ;
-(void)tearDownNotificationForEventIdentifier:(id)arg0 ;
-(void)tearDownNotifications;


@end


#endif