// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPXPCSERVER_H
#define SPXPCSERVER_H

@class NSMutableSet, NSMutableDictionary;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SPXPCServer : NSObject {
    CGFloat _idleTimerInterval;
    NSObject<OS_xpc_object> *_conn;
    NSMutableSet *_connections;
    NSMutableDictionary *_handlerMap;
    NSObject<OS_dispatch_queue> *_connectionsQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    unsigned int _qos;
    BOOL hadConnection;
    BOOL _shutdown;
}


@property (copy, nonatomic) id *defaultMessageHandler; // ivar: _defaultMessageHandler
@property (copy, nonatomic) id *disconnectHandler; // ivar: _disconnectHandler
@property (copy, nonatomic) id *firstConnectionBlock; // ivar: _firstConnectionBlock


-(BOOL)shutdown;
-(id)_handlerForMessageName:(SEL)arg0 ;
-(id)_highAvailabilityQueue;
-(id)initListenerWithServiceName:(id)arg0 ;
-(id)initListenerWithServiceName:(id)arg0 onQueue:(id)arg1 qos:(unsigned int)arg2 ;
-(void)_handleNewConnection:(id)arg0 qos:(unsigned int)arg1 ;
-(void)dealloc;
-(void)setHandlerForMessageName:(id)arg0 handler:(id)arg1 ;
-(void)startListening;


@end


#endif