// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMSIMULATEDCHAT_H
#define IMSIMULATEDCHAT_H

@class NSString, NSMutableDictionary, NSMutableArray;
@protocol IMSimulatedChatDelegate, IMSimulatedDaemonListener;


#import "IMChat.h"
#import "IMSimulatedAccount.h"

@interface IMSimulatedChat : IMChat <IMSimulatedChatDelegate, IMSimulatedDaemonListener>



@property (readonly, nonatomic) NSUInteger currentMessageID; // ivar: _currentMessageID
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IMSimulatedChatDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *guidToMessageItemNeedingAckMap; // ivar: _guidToMessageItemNeedingAckMap
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) IMSimulatedAccount *simulatedAccount; // ivar: _simulatedAccount
@property (readonly, nonatomic) NSMutableArray *simulatedAttachments; // ivar: _simulatedAttachments
@property (copy, nonatomic) NSString *simulatedChatIdentifier; // ivar: _simulatedChatIdentifier
@property (copy, nonatomic) NSString *simulatedDisplayName; // ivar: _simulatedDisplayName
@property (readonly) Class superclass;
@property (nonatomic, getter=shouldUseTimedAck) BOOL useTimedAck; // ivar: _useTimedAck


-(BOOL)_handleIncomingItem:(id)arg0 ;
-(NSInteger)joinState;
-(id)_messageWithGUID:(id)arg0 ;
-(id)_messagesToProcessFromMessage:(id)arg0 ;
-(id)account;
-(id)attachments;
-(id)chatIdentifier;
-(id)daemonController;
-(id)displayName;
-(id)initWithIncomingIDs:(id)arg0 messageIDOffset:(NSUInteger)arg1 account:(id)arg2 ;
-(id)loadMessagesBeforeDate:(id)arg0 limit:(NSUInteger)arg1 loadImmediately:(BOOL)arg2 ;
-(void)_processMessage:(id)arg0 receivingHandle:(id)arg1 sendingHandle:(id)arg2 ;
-(void)beginObservingHandleAvailability;
-(void)markAsAutoSpamReported;
-(void)markAsHasBeenBlockContact;
-(void)receiveDemoMessage:(id)arg0 ;
-(void)sendMessage:(id)arg0 ;
-(void)setDisplayName:(id)arg0 ;
-(void)simulateMessageDeliveryForGUID:(id)arg0 ;
-(void)simulatedChat:(id)arg0 didHandleItem:(id)arg1 ;
-(void)simulatedChat:(id)arg0 didSendMessage:(id)arg1 ;
-(void)simulatedDaemon:(id)arg0 willSendBalloonPayload:(id)arg1 attachments:(id)arg2 messageGUID:(id)arg3 bundleID:(id)arg4 ;


@end


#endif