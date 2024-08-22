// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSXPCREPLY_H
#define BSXPCREPLY_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface BSXPCReply : NSObject {
    NSObject<OS_xpc_object> *_reply;
    int _sent;
}




+(id)messageWithReply:(id)arg0 ;
+(id)replyForMessage:(id)arg0 ;
-(NSInteger)messageKind;
-(id)initForMessage:(id)arg0 ;
-(id)initWithReply:(id)arg0 ;
-(id)message;
-(void)sendReply:(id)arg0 ;


@end


#endif