// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPCSERVER_H
#define ATXPCSERVER_H

@class NSMutableDictionary, NSSet;
@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ATXPCServer : NSObject {
    NSObject<OS_xpc_object> *_conn;
    NSMutableDictionary *_handlerMap;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_idleTimerSource;
    BOOL _timerHasFiredSinceLastMessage;
}


@property (readonly, nonatomic) NSSet *connections; // ivar: _connections
@property (copy, nonatomic) id *defaultMessageHandler; // ivar: _defaultMessageHandler
@property (copy, nonatomic) id *disconnectHandler; // ivar: _disconnectHandler
@property (copy, nonatomic) id *lockdownHandler; // ivar: _lockdownHandler
@property (copy, nonatomic) id *shutdownHandler; // ivar: _shutdownHandler


-(BOOL)_doingWork;
-(id)_handlerForMessageName:(SEL)arg0 ;
-(id)_highAvailabilityQueue;
-(id)initListenerWithServiceName:(id)arg0 ;
-(void)_handleNewConnection:(id)arg0 ;
-(void)_rescheduleIdleTimerSourceWithInterval:(CGFloat)arg0 ;
-(void)_resetMessageFlag;
-(void)_runShutdownHandler;
-(void)dealloc;
-(void)setHandlerForMessageName:(id)arg0 handler:(id)arg1 ;
-(void)setIdleTimerInterval:(CGFloat)arg0 ;


@end


#endif