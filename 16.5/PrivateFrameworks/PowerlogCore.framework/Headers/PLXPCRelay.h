// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLXPCRELAY_H
#define PLXPCRELAY_H

@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface PLXPCRelay : NSObject

@property (retain) NSObject<OS_dispatch_queue> *crashMoverQueue; // ivar: _crashMoverQueue
@property BOOL relayActive; // ivar: _relayActive
@property (retain, nonatomic) NSObject<OS_xpc_object> *relayConnection; // ivar: _relayConnection
@property (retain) NSObject<OS_xpc_object> *xpcConnection; // ivar: _xpcConnection
@property (retain) NSObject<OS_xpc_object> *xpcCrashMoverConn; // ivar: _xpcCrashMoverConn


+(id)sharedInstance;
-(BOOL)isDebugEnabled;
-(id)init;
-(void)handleCrashMoverConnection:(id)arg0 ;
-(void)handlePeer:(id)arg0 forEvent:(id)arg1 ;
-(void)movePowerlogs;
-(void)startRelay;
-(void)stopRelay;


@end


#endif