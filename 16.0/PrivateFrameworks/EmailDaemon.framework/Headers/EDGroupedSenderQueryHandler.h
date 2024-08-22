// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDGROUPEDSENDERQUERYHANDLER_H
#define EDGROUPEDSENDERQUERYHANDLER_H

@class NSString, EMThreadScope;
@protocol EDMessageQueryHelperDelegate, OS_dispatch_queue, EMMessageListItemQueryResultsObserver, EFScheduler;


#import "EDMessageRepositoryQueryHandler.h"
#import "_EDGroupedSenderList.h"
#import "EDMessageQueryHelper.h"

@interface EDGroupedSenderQueryHandler : EDMessageRepositoryQueryHandler <EDMessageQueryHelperDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL didCancel; // ivar: _didCancel
@property (readonly, nonatomic) EMThreadScope *filteredMailboxScope; // ivar: _filteredMailboxScope
@property (retain, nonatomic) _EDGroupedSenderList *groupedSenders; // ivar: _groupedSenders
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL keepMessagesInListOnBucketChange; // ivar: _keepMessagesInListOnBucketChange
@property (retain, nonatomic) EDMessageQueryHelper *messageQueryHelper; // ivar: _messageQueryHelper
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resultQueue; // ivar: _resultQueue
@property (readonly, nonatomic) NSObject<EMMessageListItemQueryResultsObserver> *resultsObserverIfUncanceled;
@property (readonly, nonatomic) NSObject<EFScheduler> *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;


-(BOOL)_queryHelperIsCurrent:(id)arg0 ;
-(BOOL)start;
-(id)_messageQueryFromGroupedQuery:(id)arg0 ;
-(id)groupedSenderForObjectID:(id)arg0 ;
-(id)initWithQuery:(id)arg0 messagePersistence:(id)arg1 hookRegistry:(id)arg2 remindMeNotificationController:(id)arg3 observer:(id)arg4 observationIdentifier:(id)arg5 keepMessagesInListOnBucketChange:(BOOL)arg6 ;
-(void)_filterGroupedSenderChanges:(id)arg0 withVisibleSenders:(id)arg1 ;
-(void)_messagesWereAdded:(id)arg0 ;
-(void)_messagesWereChanged:(id)arg0 forKeyPaths:(id)arg1 deleted:(BOOL)arg2 ;
-(void)_notifyResultsObserverOfChangesToVisibleGroupedSendersFrom:(id)arg0 to:(id)arg1 logMessage:(id)arg2 ;
-(void)cancel;
-(void)queryHelper:(id)arg0 conversationIDDidChangeForMessages:(id)arg1 fromConversationID:(NSInteger)arg2 ;
-(void)queryHelper:(id)arg0 conversationNotificationLevelDidChangeForConversation:(NSInteger)arg1 conversationID:(NSInteger)arg2 ;
-(void)queryHelper:(id)arg0 didAddMessages:(id)arg1 ;
-(void)queryHelper:(id)arg0 didDeleteMessages:(id)arg1 ;
-(void)queryHelper:(id)arg0 didFindMessages:(id)arg1 ;
-(void)queryHelper:(id)arg0 didUpdateMessages:(id)arg1 forKeyPaths:(id)arg2 ;
-(void)queryHelper:(id)arg0 messageFlagsDidChangeForMessages:(id)arg1 ;
-(void)queryHelper:(id)arg0 objectIDDidChangeForMessage:(id)arg1 oldObjectID:(id)arg2 oldConversationID:(NSInteger)arg3 ;
-(void)queryHelperDidFindAllMessages:(id)arg0 ;
-(void)queryHelperDidFinishRemoteSearch:(id)arg0 ;
-(void)queryHelperNeedsRestart:(id)arg0 ;
-(void)tearDown;
-(void)test_tearDown;


@end


#endif