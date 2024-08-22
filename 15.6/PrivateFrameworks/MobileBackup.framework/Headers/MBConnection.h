// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBCONNECTION_H
#define MBCONNECTION_H

@class NSString;
@protocol MBConnectionHandler, OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface MBConnection : NSObject {
    uint8_t _pid;
}


@property (weak, nonatomic) NSObject<MBConnectionHandler> *messageHandler; // ivar: _messageHandler
@property (retain) NSString *personaIdentifier; // ivar: _personaIdentifier
@property (retain) NSString *processName; // ivar: _processName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // ivar: _xpcConnection


-(id)description;
-(id)initWithServiceName:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 queue:(id)arg1 ;
-(id)sendMessageWithReplyAndSync:(id)arg0 error:(*id)arg1 ;
-(void)_handleXPCError:(id)arg0 ;
-(void)_handleXPCEvent:(id)arg0 ;
-(void)_refreshProcessInfoWithXPCConnection:(id)arg0 ;
-(void)_setEventHandlerForXPCConnection:(id)arg0 ;
-(void)cancel;
-(void)resume;
-(void)sendMessage:(id)arg0 ;
-(void)sendMessage:(id)arg0 barrierBlock:(id)arg1 ;
-(void)suspend;


@end


#endif