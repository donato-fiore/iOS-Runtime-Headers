// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDINTERACTIONLOGGER_H
#define EDINTERACTIONLOGGER_H

@class NSMutableDictionary, NSString;
@protocol EDMessageChangeHookResponder, EDMessageDeliveryHookResponder, EMInteractionLoggerInterface, EDInteractionEventLog, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EDMailboxPersistence.h"
#import "EDMessagePersistence.h"

@interface EDInteractionLogger : NSObject <EDMessageChangeHookResponder, EDMessageDeliveryHookResponder, EMInteractionLoggerInterface>



@property (retain, nonatomic) NSObject<EDInteractionEventLog> *_eventLog; // ivar: _eventLog
@property (retain, nonatomic) NSMutableDictionary *_messageListMessages; // ivar: _messageListMessages
@property (nonatomic) _NSRange _messageListVisibleRows; // ivar: _messageListVisibleRows
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_stateTrackingQueue; // ivar: _stateTrackingQueue
@property (retain, nonatomic) NSMutableDictionary *_viewedMessages; // ivar: _viewedMessages
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EDMailboxPersistence *mailboxPersistence; // ivar: _mailboxPersistence
@property (retain, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (readonly) Class superclass;


-(id)_range:(struct _NSRange )arg0 minusRange:(struct _NSRange )arg1 ;
-(id)_stateForMessage:(id)arg0 extra:(id)arg1 container:(id)arg2 ;
-(id)initWithMessagePersistence:(id)arg0 mailboxPersistence:(id)arg1 eventLog:(id)arg2 ;
-(void)_composeStartedForMessage:(id)arg0 eventName:(id)arg1 ;
-(void)_conversationFlagsChanged:(id)arg0 ;
-(void)_logMessageListDisplayEndedForState:(id)arg0 now:(id)arg1 ;
-(void)_logMessageListDisplayStartedMessage:(id)arg0 now:(id)arg1 type:(id)arg2 row:(NSInteger)arg3 cellStyle:(id)arg4 ;
-(void)_viewingEndedForAllMessages;
-(void)applicationLaunched;
-(void)applicationWillResume;
-(void)applicationWillSuspend;
-(void)archivedMessages:(id)arg0 ;
-(void)clickedLinkInMessage:(id)arg0 scheme:(id)arg1 ;
-(void)composeFowardStartedForMessage:(id)arg0 ;
-(void)composeReplyStartedForMessage:(id)arg0 ;
-(void)composedMessageSent:(id)arg0 account:(id)arg1 ;
-(void)copiedMessages:(id)arg0 toMailbox:(id)arg1 ;
-(void)deletedMessages:(id)arg0 ;
-(void)deliveredMessage:(id)arg0 account:(id)arg1 ;
-(void)logEvent:(id)arg0 date:(id)arg1 data:(id)arg2 ;
-(void)logEvent:(id)arg0 date:(id)arg1 messageID:(id)arg2 data:(id)arg3 ;
-(void)messageListDisplayEndedForAllMessages;
-(void)messageListDisplayEndedForMessage:(id)arg0 cellStyle:(id)arg1 ;
-(void)messageListDisplayStartedForMessage:(id)arg0 messageListType:(id)arg1 row:(NSInteger)arg2 cellStyle:(id)arg3 ;
-(void)messageListDisplayVisibleRowsChanged:(struct _NSRange )arg0 ;
-(void)movedMessages:(id)arg0 toMailbox:(id)arg1 ;
-(void)movedMessages:(id)arg0 toMailboxType:(NSInteger)arg1 ;
-(void)persistenceDidAddMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceWillChangeFlags:(id)arg0 messages:(id)arg1 ;
-(void)persistenceWillTransferMessages:(id)arg0 transferType:(NSInteger)arg1 destinationMailboxURL:(id)arg2 userInitiated:(BOOL)arg3 ;
-(void)scrolledToEndOfMessage:(id)arg0 ;
-(void)viewingEndedForMessage:(id)arg0 ;
-(void)viewingStartedForMessage:(id)arg0 ;
-(void)waitForPendingStateChanges;


@end


#endif