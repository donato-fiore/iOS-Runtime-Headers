// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXUIMESSAGESENDER_H
#define AXUIMESSAGESENDER_H

@class NSMutableArray, AXAccessQueue;
@protocol AXUIMessageSenderDelegate;

#import <Foundation/Foundation.h>


@interface AXUIMessageSender : NSObject

@property (weak, nonatomic) NSObject<AXUIMessageSenderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableArray *messageQueue; // ivar: _messageQueue
@property (retain, nonatomic) AXAccessQueue *messageSchedulingSerializationQueue; // ivar: _messageSchedulingSerializationQueue
@property (nonatomic, getter=isSendingMessage) BOOL sendingMessage; // ivar: _sendingMessage


-(id)init;
-(id)sendSynchronousMessage:(id)arg0 withIdentifier:(NSUInteger)arg1 context:(*void)arg2 error:(*id)arg3 ;
-(void)_didFinishSendingXPCMessage:(id)arg0 replyCustomData:(*void)arg1 ;
// -(void)_performBlock:(id)arg0 inAccessQueue:(unk)arg1 treatAsWritingBlock:(id)arg2  ;
-(void)_sendLaunchAngelMessage:(id)arg0 context:(*void)arg1 remainingAttempts:(NSUInteger)arg2 previousError:(id)arg3 completion:(id)arg4 ;
-(void)_sendXPCMessage:(id)arg0 context:(*void)arg1 remainingAttempts:(NSUInteger)arg2 previousError:(id)arg3 completion:(id)arg4 ;
-(void)sendAsynchronousMessage:(id)arg0 withIdentifier:(NSUInteger)arg1 context:(*void)arg2 targetAccessQueue:(id)arg3 completionRequiresWritingBlock:(BOOL)arg4 completion:(id)arg5 ;


@end


#endif