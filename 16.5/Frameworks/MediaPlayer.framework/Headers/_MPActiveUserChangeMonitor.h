// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPACTIVEUSERCHANGEMONITOR_H
#define _MPACTIVEUSERCHANGEMONITOR_H

@class NSSet, NSMutableSet;
@protocol _MPActiveUserChangeMonitorDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface _MPActiveUserChangeMonitor : NSObject

@property (weak, nonatomic) NSObject<_MPActiveUserChangeMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSSet *expectedNotifications; // ivar: _expectedNotifications
@property (retain, nonatomic) NSObject<OS_dispatch_source> *notificationTimer; // ivar: _notificationTimer
@property (retain, nonatomic) NSMutableSet *receivedNotifications; // ivar: _receivedNotifications
@property (readonly, nonatomic) os_unfair_lock_s stateLock; // ivar: _stateLock


-(id)initWithDelegate:(id)arg0 ;
-(void)_cancelNotificationTimerWithReason:(id)arg0 ;
-(void)_startNotificationTimerWithEventHandler:(id)arg0 ;
-(void)ingestNotificationName:(id)arg0 ;


@end


#endif