// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMRIDSMESSAGECENTER_H
#define NMRIDSMESSAGECENTER_H

@class IDSService, NSMutableDictionary, NSString;
@protocol IDSServiceDelegate, OS_dispatch_queue, NMRIDSMessageCenterDelegate;

#import <Foundation/Foundation.h>


@interface NMRIDSMessageCenter : NSObject <IDSServiceDelegate>

 {
    NSObject<OS_dispatch_queue> *_idsQueue;
    IDSService *_idsService;
    NSMutableDictionary *_messageHandlers;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NMRIDSMessageCenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_sendMessageWithProtobufData:(id)arg0 messageType:(unsigned short)arg1 priority:(NSUInteger)arg2 timeout:(CGFloat)arg3 bypassDuet:(BOOL)arg4 skipStorage:(BOOL)arg5 isResponse:(BOOL)arg6 additionalOptions:(id)arg7 resultingMessageIdentifier:(*id)arg8 error:(*id)arg9 ;
-(BOOL)sendMessageWithProtobufData:(id)arg0 messageType:(unsigned short)arg1 priority:(NSUInteger)arg2 timeout:(CGFloat)arg3 bypassDuet:(BOOL)arg4 skipStorage:(BOOL)arg5 expectReply:(BOOL)arg6 queueOneIdentifier:(id)arg7 resultingMessageIdentifier:(*id)arg8 error:(*id)arg9 ;
-(BOOL)sendMessageWithProtobufData:(id)arg0 messageType:(unsigned short)arg1 priority:(NSUInteger)arg2 timeout:(CGFloat)arg3 bypassDuet:(BOOL)arg4 skipStorage:(BOOL)arg5 inReplyTo:(id)arg6 resultingMessageIdentifier:(*id)arg7 error:(*id)arg8 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingUnhandledProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)setMessageHandlerTarget:(id)arg0 action:(SEL)arg1 forIncomingMessagesOfType:(unsigned short)arg2 ;
-(void)startHandlingMessages;


@end


#endif