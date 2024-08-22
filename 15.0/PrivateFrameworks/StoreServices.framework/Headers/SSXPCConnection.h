// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSXPCCONNECTION_H
#define SSXPCCONNECTION_H

@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSXPCConnection : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id *_disconnectBlock;
    NSObject<OS_dispatch_queue> *_replyQueue;
    id *_messageBlock;
}


@property (copy) id *disconnectBlock;
@property (copy) id *messageBlock;


-(id)_initSSXPCConnection;
-(id)copyReplyQueue;
-(id)createXPCEndpoint;
-(id)init;
-(id)initWithServiceName:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 ;
-(void)_reloadEventHandler;
-(void)dealloc;
-(void)sendMessage:(id)arg0 ;
-(void)sendMessage:(id)arg0 withReply:(id)arg1 ;
-(void)sendSynchronousMessage:(id)arg0 withReply:(id)arg1 ;
-(void)setReplyQueue:(id)arg0 ;


@end


#endif