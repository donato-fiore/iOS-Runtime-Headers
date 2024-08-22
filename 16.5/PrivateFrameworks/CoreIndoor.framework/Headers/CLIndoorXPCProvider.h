// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLINDOORXPCPROVIDER_H
#define CLINDOORXPCPROVIDER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CLIndoorXPCProvider : NSObject {
    NSObject<OS_dispatch_queue> *_frameworkQueue;
    NSXPCConnection *_connection;
    optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> _lastReconnectTime;
    NSObject<OS_dispatch_source> *_interruptReconnection;
}




+(id)newConnectionFor:(id)arg0 ;
-(id)_defaultErrHandler:(SEL)arg0 forCaller:(id)arg1 ;
-(id)_defaultErrHandlerForCaller:(SEL)arg0 ;
-(id)impl;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 ;
-(int)withinQueueShouldReinitializeRemote:(struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> )arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)withinQueueHandleReconnect:(struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> )arg0 ;
-(void)withinQueueInitializeConnection;
-(void)withinQueueInterruptionHandler;
-(void)withinQueueInvalidate;
-(void)withinQueueReinitializeRemoteState;
-(void)withinQueueScheduleReconnect:(struct duration<long long, std::ratio<1, 1000000000>> )arg0 reason:(id)arg1 ;


@end


#endif