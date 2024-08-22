// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRUITESTMESSAGECENTER_H
#define BRUITESTMESSAGECENTER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BRUITestMessageCenter : NSObject {
    NSMutableDictionary *_pendingReplies;
    NSMutableDictionary *_messageHandlers;
    NSObject<OS_dispatch_queue> *_messageQueue;
    BOOL _started;
    BOOL _isSender;
}




+(id)defaultCenter;
-(id)_init;
-(id)init;
-(void)_sendMessageNamed:(id)arg0 userInfo:(id)arg1 isReply:(BOOL)arg2 messageUUID:(id)arg3 reply:(id)arg4 ;
-(void)didReceiveMessage:(id)arg0 ;
-(void)sendMessageNamed:(id)arg0 userInfo:(id)arg1 reply:(id)arg2 ;
-(void)setHandler:(id)arg0 forMessageNamed:(id)arg1 ;
-(void)startReceiver;
-(void)startSender;
-(void)stop;


@end


#endif