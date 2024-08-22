// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKXPCCONNECTION_H
#define SKXPCCONNECTION_H

@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SKXPCConnection : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id *_disconnectBlock;
    id *_messageBlock;
}


@property (copy) id *disconnectBlock;
@property (copy) id *messageBlock;


-(id)_initSKXPCConnection;
-(id)createXPCEndpoint;
-(id)init;
-(id)initWithServiceName:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 ;
-(void)_reloadEventHandler;
-(void)sendMessage:(id)arg0 ;
-(void)sendMessage:(id)arg0 withReply:(id)arg1 ;
-(void)sendSynchronousMessage:(id)arg0 withReply:(id)arg1 ;


@end


#endif