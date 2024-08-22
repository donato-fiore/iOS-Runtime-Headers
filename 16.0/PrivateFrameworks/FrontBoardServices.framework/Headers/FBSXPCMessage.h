// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSXPCMESSAGE_H
#define FBSXPCMESSAGE_H

@protocol BSXPCServiceConnectionMessage, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface FBSXPCMessage : NSObject {
    id<BSXPCServiceConnectionMessage> *_reply;
}


@property (readonly, nonatomic) NSObject<OS_xpc_object> *payload; // ivar: _payload


+(id)message;
+(id)messageWithBSXPCMessage:(id)arg0 ownReply:(BOOL)arg1 ;
+(id)messageWithPacker:(id)arg0 ;
+(id)messageWithPayload:(id)arg0 ;
-(id)init;
-(id)initWithMessagePacker:(id)arg0 ;
-(id)initWithMessagePayload:(id)arg0 ;
-(void)sendReplyMessageWithPacker:(id)arg0 ;


@end


#endif