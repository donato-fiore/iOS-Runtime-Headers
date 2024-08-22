// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSXPCMESSAGE_H
#define BSXPCMESSAGE_H

@protocol OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface BSXPCMessage : NSObject {
    id *_replyHandler;
    NSObject<OS_dispatch_queue> *_replyQueue;
    int _invalidated;
    int _replied;
}


@property (readonly, nonatomic) NSObject<OS_xpc_object> *payload; // ivar: _message


+(char *)messageTypeKey;
+(id)message:(NSInteger)arg0 withPacker:(id)arg1 ;
// +(id)message:(NSInteger)arg0 withPacker:(id)arg1 replyHandler:(unk)arg2 replyQueue:(id)arg3  ;
+(id)messageWithPacker:(id)arg0 ;
// +(id)messageWithPacker:(id)arg0 replyHandler:(unk)arg1 replyQueue:(id)arg2  ;
+(id)messageWithPayload:(id)arg0 ;
+(void)sendMessage:(NSInteger)arg0 toConnection:(id)arg1 withMessagePacker:(id)arg2 ;
// +(void)sendMessage:(NSInteger)arg0 toConnection:(id)arg1 withMessagePacker:(id)arg2 replyHandler:(unk)arg3 replyQueue:(id)arg4  ;
// +(void)sendMessageWithPacker:(id)arg0 toConnection:(unk)arg1  ;
// +(void)sendMessageWithPacker:(id)arg0 toConnection:(unk)arg1 replyHandler:(id)arg2 replyQueue:(id)arg3  ;
-(BOOL)sendToConnection:(id)arg0 ;
-(BOOL)sendToConnection:(id)arg0 replyQueue:(id)arg1 replyHandler:(id)arg2 ;
-(id)description;
// -(id)initWithMessage:(NSInteger)arg0 packer:(id)arg1 replyHandler:(unk)arg2 replyQueue:(id)arg3  ;
-(id)sendSynchronouslyToConnection:(id)arg0 error:(*id)arg1 ;
-(void)forcefullyInvokeReplyHandler:(id)arg0 ;


@end


#endif