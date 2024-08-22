// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDIMESSAGEINCOMINGMESSAGEHANDLER_H
#define IMDIMESSAGEINCOMINGMESSAGEHANDLER_H


#import <Foundation/Foundation.h>


@interface IMDiMessageIncomingMessageHandler : NSObject



// -(void)_enqueueBlock:(id)arg0 withTimeout:(unk)arg1 description:(CGFloat)arg2  ;
-(void)handleMessageDeliveredQuietlyReceiptWithPipeline:(id)arg0 input:(id)arg1 completionBlock:(id)arg2 ;
-(void)handleMessageDeliveryReceiptWithPipeline:(id)arg0 input:(id)arg1 completionBlock:(id)arg2 ;
-(void)handleMessagePlayedReceiptWithPipeline:(id)arg0 input:(id)arg1 completionBlock:(id)arg2 ;
-(void)handleMessageReadReceiptWithPipeline:(id)arg0 input:(id)arg1 completionBlock:(id)arg2 ;
-(void)handleMessageWithPipeline:(id)arg0 input:(id)arg1 completionBlock:(id)arg2 ;
-(void)handleNotifyRecipientCommandWithPipeline:(id)arg0 input:(id)arg1 completionBlock:(id)arg2 ;
-(void)handleSyndicatedActionWithPipeline:(id)arg0 input:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif