// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDMESSAGESUPPRESSIONCONTROLLER_H
#define IMDMESSAGESUPPRESSIONCONTROLLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IMDMessageSuppressionController : NSObject {
    NSMutableDictionary *_chatSuppressionFlagMap;
    NSMutableDictionary *_chatSuppressionTimerMap;
    NSMutableDictionary *_suppressedMessages;
}


@property (nonatomic) CGFloat timeToSuppressMessages; // ivar: _timeToSuppressMessages


+(id)sharedInstance;
-(BOOL)hasSuppressedMessageID:(id)arg0 chatGUID:(id)arg1 ;
-(BOOL)setupTimerForChatGUID:(id)arg0 ;
-(BOOL)shouldSuppressMessageForChat:(id)arg0 message:(id)arg1 ;
-(BOOL)shouldSuppressMessageForChat:(id)arg0 messageGUID:(id)arg1 ;
-(id)broadcaster;
-(id)messageStore;
-(id)storageController;
-(void)_handleReceiptForChatGUID:(id)arg0 messageGUID:(id)arg1 unsuppressEarlierMessages:(BOOL)arg2 IDSService:(id)arg3 ;
-(void)_suppressionTimerFired:(id)arg0 ;
-(void)endMessageSuppression;
-(void)endMessageSuppressionForChatGUID:(id)arg0 ;
-(void)handleIncomingMessageForChatGUID:(id)arg0 messageGUID:(id)arg1 ;
-(void)handlePlayedReceiptForChatGUID:(id)arg0 messageGUID:(id)arg1 ;
-(void)handleReadReceiptForChatGUID:(id)arg0 messageGUID:(id)arg1 IDSService:(id)arg2 ;
-(void)noteMessagesMarkedAsReadForChatWithGUID:(id)arg0 ;
-(void)setSuppressedMessage:(id)arg0 inChatWithGUID:(id)arg1 ;
-(void)setSuppressedMessageGUID:(id)arg0 inChatWithGUID:(id)arg1 ;
-(void)setupTimerForChatGUID:(id)arg0 message:(id)arg1 ;
-(void)setupTimerForChatGUID:(id)arg0 messageGUID:(id)arg1 ;


@end


#endif