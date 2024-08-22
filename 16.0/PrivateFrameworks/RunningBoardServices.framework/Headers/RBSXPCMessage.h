// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBSXPCMESSAGE_H
#define RBSXPCMESSAGE_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>

#import "RBSXPCCoder.h"
#import "RBSXPCMessageReply.h"

@interface RBSXPCMessage : NSObject {
    NSObject<OS_xpc_object> *_xpc_message;
    RBSXPCCoder *_payload;
}


@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) SEL method; // ivar: _method
@property (readonly, nonatomic) RBSXPCMessageReply *reply;


+(id)messageForMethod:(SEL)arg0 varguments:(id)arg1 ;
+(id)messageForXPCMessage:(id)arg0 ;
-(id)decodeArgumentCollection:(Class)arg0 withClass:(Class)arg1 atIndex:(NSUInteger)arg2 allowNil:(BOOL)arg3 error:(*id)arg4 ;
-(id)decodeArgumentWithClass:(Class)arg0 atIndex:(NSUInteger)arg1 allowNil:(BOOL)arg2 error:(*id)arg3 ;
-(id)init;
-(id)sendToConnection:(id)arg0 error:(*id)arg1 ;
-(void)sendToConnection:(id)arg0 ;
-(void)sendToConnection:(id)arg0 completion:(id)arg1 ;
-(void)sendToConnection:(id)arg0 replyQueue:(id)arg1 completion:(id)arg2 ;


@end


#endif