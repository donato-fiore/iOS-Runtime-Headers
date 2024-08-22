// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMSIMULATEDCHAT_H
#define IMSIMULATEDCHAT_H

@class NSMutableArray, NSString;
@protocol IMSimulatedChatDelegate, IMSimulatedDaemonListener;


#import "IMChat.h"
#import "IMSimulatedAccount.h"

@interface IMSimulatedChat : IMChat <IMSimulatedChatDelegate, IMSimulatedDaemonListener>



@property (readonly, nonatomic) NSUInteger currentMessageID; // ivar: _currentMessageID
@property (weak, nonatomic) NSObject<IMSimulatedChatDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) IMSimulatedAccount *simulatedAccount; // ivar: _simulatedAccount
@property (readonly, nonatomic) NSMutableArray *simulatedAttachments; // ivar: _simulatedAttachments
@property (copy, nonatomic) NSString *simulatedChatIdentifier; // ivar: _simulatedChatIdentifier
@property (copy, nonatomic) NSString *simulatedDisplayName; // ivar: _simulatedDisplayName


-(BOOL)_handleIncomingItem:(id)arg0 ;
-(NSInteger)joinState;
-(id)_messageWithGUID:(id)arg0 ;
-(id)account;
-(id)attachments;
-(id)chatIdentifier;
-(id)displayName;
-(id)initWithIncomingIDs:(id)arg0 messageIDOffset:(NSUInteger)arg1 account:(id)arg2 ;
-(id)loadMessagesBeforeDate:(id)arg0 limit:(NSUInteger)arg1 loadImmediately:(BOOL)arg2 ;
-(void)chat:(id)arg0 didSendMessage:(id)arg1 ;
-(void)markAsAutoSpamReported;
-(void)sendMessage:(id)arg0 ;
-(void)setDisplayName:(id)arg0 ;
-(void)simulatedDaemon:(id)arg0 willSendBalloonPayload:(id)arg1 attachments:(id)arg2 messageGUID:(id)arg3 bundleID:(id)arg4 ;


@end


#endif