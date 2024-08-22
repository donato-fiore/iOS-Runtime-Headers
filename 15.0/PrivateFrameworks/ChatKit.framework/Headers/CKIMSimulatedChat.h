// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKIMSIMULATEDCHAT_H
#define CKIMSIMULATEDCHAT_H

@class IMChat, NSArray, IMHandle, NSString;
@protocol CKIMSimulatedChatDelegate, CKIMSimulatedDaemonListener;


#import "CKIMSimulatedAccount.h"

@interface CKIMSimulatedChat : IMChat <CKIMSimulatedChatDelegate, CKIMSimulatedDaemonListener>



@property (readonly, nonatomic) NSUInteger currentMessageID; // ivar: _currentMessageID
@property (weak, nonatomic) NSObject<CKIMSimulatedChatDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSArray *incomingHandles; // ivar: _incomingHandles
@property (readonly, nonatomic) IMHandle *outgoingHandle; // ivar: _outgoingHandle
@property (readonly, nonatomic) CKIMSimulatedAccount *simulatedAccount; // ivar: _simulatedAccount
@property (copy, nonatomic) NSString *simulatedChatIdentifier; // ivar: _simulatedChatIdentifier
@property (readonly, nonatomic) NSString *simulatedGUID; // ivar: _simulatedGUID


+(id)prepopulatedChat;
-(BOOL)_handleIncomingItem:(id)arg0 ;
-(id)_messageWithGUID:(id)arg0 ;
-(id)account;
-(id)chatIdentifier;
-(id)guid;
-(id)initWithIncomingIDs:(id)arg0 outgoingID:(id)arg1 messageIDOffset:(NSUInteger)arg2 service:(id)arg3 ;
-(id)loadMessagesBeforeDate:(id)arg0 limit:(NSUInteger)arg1 loadImmediately:(BOOL)arg2 ;
-(id)participants;
-(id)recipient;
-(unsigned char)chatStyle;
-(void)_sendMessage:(id)arg0 adjustingSender:(BOOL)arg1 shouldQueue:(BOOL)arg2 ;
-(void)chat:(id)arg0 didSendMessage:(id)arg1 finished:(BOOL)arg2 ;
-(void)markAsAutoSpamReported;
-(void)sendMessage:(id)arg0 ;
-(void)simulatedDaemon:(id)arg0 willSendBalloonPayload:(id)arg1 attachments:(id)arg2 messageGUID:(id)arg3 bundleID:(id)arg4 ;


@end


#endif