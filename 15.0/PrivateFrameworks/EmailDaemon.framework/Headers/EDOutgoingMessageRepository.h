// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDOUTGOINGMESSAGEREPOSITORY_H
#define EDOUTGOINGMESSAGEREPOSITORY_H

@class NSString;
@protocol EMOutgoingMessageRepositoryInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EDMessageChangeManager.h"
#import "EDMessagePersistence.h"

@interface EDOutgoingMessageRepository : NSObject <EMOutgoingMessageRepositoryInterface>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EDMessageChangeManager *messageChangeManager; // ivar: _messageChangeManager
@property (retain, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly) Class superclass;


+(id)log;
+(id)signpostLog;
-(NSUInteger)signpostID;
-(id)initWithMessagePersistence:(id)arg0 messageChangeManager:(id)arg1 ;
-(id)messagesForDocumentID:(id)arg0 mailboxID:(id)arg1 ;
-(void)cancelObservation:(id)arg0 ;
-(void)deleteDraftsInMailboxID:(id)arg0 documentID:(id)arg1 previousDraftObjectID:(id)arg2 ;
-(void)deliverMessage:(id)arg0 usingMailDrop:(BOOL)arg1 completion:(id)arg2 ;
-(void)isProcessingWithCompletion:(id)arg0 ;
-(void)numberOfPendingMessagesWithCompletion:(id)arg0 ;
-(void)outboxContainsMessageFromAccountObjectID:(id)arg0 completion:(id)arg1 ;
-(void)performBlock:(id)arg0 ;
-(void)processAllQueuedMessages;
-(void)resumeDeliveryQueue;
-(void)saveDraftMessage:(id)arg0 mailboxID:(id)arg1 previousDraftObjectID:(id)arg2 completion:(id)arg3 ;
-(void)startObservingPendingMessageChangesWithChangeObserver:(id)arg0 observationIdentifier:(id)arg1 ;
-(void)suspendDeliveryQueue;


@end


#endif