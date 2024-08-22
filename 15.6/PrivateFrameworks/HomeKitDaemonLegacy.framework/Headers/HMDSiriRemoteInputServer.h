// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSIRIREMOTEINPUTSERVER_H
#define HMDSIRIREMOTEINPUTSERVER_H

@class NSString, NSHashTable;
@protocol HMFLogging, OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface HMDSiriRemoteInputServer : NSObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSHashTable *siriSessions; // ivar: _siriSessions
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // ivar: _xpcConnection
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcServer; // ivar: _xpcServer


+(id)logCategory;
-(BOOL)registerSiriSession:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)sessionForIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)deregisterSiriSession:(id)arg0 ;
-(void)handleCheckInMsg:(id)arg0 ;
-(void)handleConnection:(id)arg0 ;
-(void)handleConnectionEvent:(id)arg0 ;
-(void)handleDisconnection;
-(void)handleMsg:(id)arg0 ;
-(void)handleServerEvent:(id)arg0 ;
-(void)handleStartStreamMsg:(id)arg0 args:(id)arg1 ;
-(void)handleStopStreamMsg:(id)arg0 ;
-(void)invalidate;
-(void)sendMsg:(id)arg0 args:(id)arg1 ;
-(void)sendMsgIfCheckedIn:(id)arg0 args:(id)arg1 ;


@end


#endif