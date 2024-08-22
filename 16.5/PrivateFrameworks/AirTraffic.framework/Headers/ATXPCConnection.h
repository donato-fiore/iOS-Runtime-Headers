// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPCCONNECTION_H
#define ATXPCCONNECTION_H

@class NSMutableSet, NSString;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXPCConnection : NSObject {
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSMutableSet *_outstandingMessages;
}


@property (nonatomic) BOOL assertionHeld; // ivar: _assertionHeld
@property (retain, nonatomic) id *context; // ivar: _context
@property (copy, nonatomic) id *disconnectHandler; // ivar: _disconnectHandler
@property (copy, nonatomic) id *lockdownHandler; // ivar: _lockdownHandler
@property (copy, nonatomic) id *messageHandler; // ivar: _messageHandler
@property (readonly, nonatomic) NSString *serviceName;


-(NSUInteger)_outstandingMessages;
-(id)eventQueue;
-(id)initWithServiceName:(id)arg0 onQueue:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg0 ;
-(void)_handleLockdownMessage:(*void)arg0 ;
-(void)_handleXPCError:(id)arg0 ;
-(void)_handleXPCMessage:(id)arg0 ;
-(void)_registerMessage:(id)arg0 ;
-(void)_removeMessage:(id)arg0 ;
-(void)_sendMessage:(id)arg0 handler:(id)arg1 ;
-(void)_setEventHandlerOnConnection:(id)arg0 ;
-(void)dealloc;
-(void)sendMessage:(id)arg0 ;
-(void)sendMessage:(id)arg0 withReply:(id)arg1 ;
-(void)shutdown;


@end


#endif