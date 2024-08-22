// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPXPCCONNECTION_H
#define SPXPCCONNECTION_H

@class NSString;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SPXPCConnection : NSObject {
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_eventQueue;
    BOOL _ownsQueue;
    NSString *_bundleID;
}


@property (readonly, weak) NSString *bundleID;
@property (retain, nonatomic) id *context; // ivar: _context
@property (copy, nonatomic) id *disconnectHandler; // ivar: _disconnectHandler
@property (copy, nonatomic) id *messageHandler; // ivar: _messageHandler
@property (readonly, weak) NSString *serviceName;


-(id)eventQueue;
-(id)eventQueueWithQOS:(unsigned int)arg0 ;
-(id)initWithServiceName:(id)arg0 onQueue:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg0 qos:(unsigned int)arg1 ;
-(void)_handleXPCError:(id)arg0 ;
-(void)_handleXPCMessage:(id)arg0 ;
-(void)_sendMessage:(id)arg0 handler:(id)arg1 ;
-(void)_setEventHandlerOnConnection:(id)arg0 ;
-(void)barrier:(id)arg0 ;
-(void)dealloc;
-(void)sendMessage:(id)arg0 ;
-(void)sendMessage:(id)arg0 withReply:(id)arg1 ;
-(void)shutdown;


@end


#endif