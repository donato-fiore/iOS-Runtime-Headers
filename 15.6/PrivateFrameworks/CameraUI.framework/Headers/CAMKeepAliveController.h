// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMKEEPALIVECONTROLLER_H
#define CAMKEEPALIVECONTROLLER_H

@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CAMKeepAliveController : NSObject

@property (retain, nonatomic, setter=_setConnection:) NSObject<OS_xpc_object> *_connection; // ivar: __connection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_heartbeatQueue; // ivar: __heartbeatQueue
@property (retain, nonatomic, setter=_setHeartbeatSource:) NSObject<OS_dispatch_source> *_heartbeatSource; // ivar: __heartbeatSource
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_keepAliveQueue; // ivar: __keepAliveQueue


-(id)init;
-(void)_handleApplicationDidEnterBackground:(id)arg0 ;
-(void)_handleApplicationWillEnterForeground:(id)arg0 ;
-(void)_handleHeartbeatConnectionReply:(id)arg0 ;
-(void)_handleHeartbeatSourceEvent;
-(void)_setupConnectionIfNecessary;
-(void)_teardownConnection;
-(void)_teardownHeartbeat;
-(void)dealloc;
-(void)sendCameraRollVisibilityChangedMessage:(BOOL)arg0 ;
-(void)startKeepAliveSession;
-(void)stopKeepAliveSession;


@end


#endif