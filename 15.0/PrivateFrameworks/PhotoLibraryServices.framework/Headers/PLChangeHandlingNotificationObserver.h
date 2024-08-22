// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCHANGEHANDLINGNOTIFICATIONOBSERVER_H
#define PLCHANGEHANDLINGNOTIFICATIONOBSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLChangeHandlingNotificationObserver : NSObject {
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSObject<OS_dispatch_queue> *_lowNotifyQueue;
    NSObject<OS_dispatch_queue> *_highNotifyQueue;
    CGFloat _throttleInterval;
    os_unfair_lock_s _lock;
    int _notifyTokenLow;
    int _notifyTokenHigh;
    id *_notificationBlock;
}


@property (readonly, copy) id *notificationBlock;
@property (readonly) int notifyTokenHigh;
@property (readonly) int notifyTokenLow;


-(BOOL)_locked_stopObservingRemoteNotifications;
-(BOOL)stopObservingRemoteNotifications;
-(id)initWithLowPriorityThrottleInterval:(CGFloat)arg0 ;
-(void)_inq_handleHighPriorityNotification;
-(void)_inq_handleLowPriorityNotification;
-(void)_inq_handleThrottleTimer;
-(void)_inq_suspendIfThrottling;
-(void)_locked_startObservingRemoteNotificationsWithBlock:(id)arg0 ;
-(void)dealloc;
-(void)startObservingRemoteNotificationsWithBlock:(id)arg0 ;


@end


#endif