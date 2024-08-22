// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSDISTRIBUTEDNOTIFICATIONOBSERVER_H
#define WBSDISTRIBUTEDNOTIFICATIONOBSERVER_H

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface WBSDistributedNotificationObserver : NSObject {
    NSString *_notificationName;
    NSInteger _notificationType;
    BOOL _observing;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    id *_notificationHandler;
    id *_timeoutHandler;
}


@property (copy) id *notificationHandler;
@property (copy) id *timeoutHandler;


-(id)init;
-(id)initWithNotificationName:(id)arg0 ;
-(id)initWithNotificationName:(id)arg0 type:(NSInteger)arg1 ;
-(void)_didReceiveNotification:(id)arg0 ;
-(void)_didTimeOut;
-(void)_invalidateTimeoutTimer;
-(void)_scheduleTimeoutTimerWithTimeout:(CGFloat)arg0 ;
-(void)_startObserving;
-(void)_stopObserving;
-(void)stopWaiting;
-(void)waitWithTimeout:(CGFloat)arg0 ;


@end


#endif