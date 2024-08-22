// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDMESSAGEQUERYHANDLER_H
#define EDMESSAGEQUERYHANDLER_H

@class NSString, NSMutableDictionary, EMCollectionItemIDStateCapturer;
@protocol EMCollectionItemIDStateCapturerDelegate, EDMessageQueryHelperDelegate, EFLoggable, EFContentProtectionObserver, OS_dispatch_queue, EDRemoteSearchProvider, EFScheduler;


#import "EDMessageRepositoryQueryHandler.h"
#import "EDMessageQueryHelper.h"

@interface EDMessageQueryHandler : EDMessageRepositoryQueryHandler <EMCollectionItemIDStateCapturerDelegate, EDMessageQueryHelperDelegate, EFLoggable, EFContentProtectionObserver>

 {
    EFAtomicObject _updateOldestMessagesCancelationToken;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue; // ivar: _contentProtectionQueue
@property (retain, nonatomic) EDMessageQueryHelper *currentQueryHelper; // ivar: _currentQueryHelper
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didCancel; // ivar: _didCancel
@property (nonatomic) BOOL hasEverReconciledJournal; // ivar: _hasEverReconciledJournal
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInitialized; // ivar: _isInitialized
@property (readonly, copy, nonatomic) NSMutableDictionary *oldestMessageIDsByMailboxObjectIDs; // ivar: _oldestMessageIDsByMailboxObjectIDs
@property (readonly, nonatomic) NSObject<EDRemoteSearchProvider> *remoteSearchProvider; // ivar: _remoteSearchProvider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resultQueue; // ivar: _resultQueue
@property (readonly, nonatomic) NSObject<EFScheduler> *scheduler; // ivar: _scheduler
@property (readonly, nonatomic) EMCollectionItemIDStateCapturer *stateCapturer; // ivar: _stateCapturer
@property (readonly) Class superclass;


+(id)findMessagesByPreviousObjectIDForAddedMessages:(id)arg0 messageSource:(id)arg1 ;
+(id)log;
-(BOOL)_queryHelperIsCurrent:(id)arg0 ;
-(BOOL)start;
-(id)_createChangesForMessagesWithConversationID:(NSInteger)arg0 block:(id)arg1 ;
-(id)_objectIDsAndUnreadObjectIDsFromMessages:(id)arg0 unreadObjectIDs:(*id)arg1 ;
-(id)_oldestItemQueryForMailbox:(id)arg0 ;
-(id)findMessagesByPreviousObjectIDForAddedMessages:(id)arg0 helper:(id)arg1 ;
-(id)initWithQuery:(id)arg0 messagePersistence:(id)arg1 hookRegistry:(id)arg2 remindMeNotificationController:(id)arg3 remoteSearchProvider:(id)arg4 observer:(id)arg5 observationIdentifier:(id)arg6 ;
-(id)itemIDsForStateCaptureWithErrorString:(*id)arg0 ;
-(id)labelForStateCapture;
-(void)_contentProtectionChangedToLocked;
-(void)_contentProtectionChangedToUnlocked;
-(void)_createHelper;
-(void)_initializeOldestMessagesByMailbox;
-(void)_oldestMessagesByMailboxObjectIDsWasUpdated;
-(void)_oldestMessagesNeedUpdate;
-(void)_restartHelper;
-(void)_updateOldestMessagesForMailboxes:(id)arg0 cancelationToken:(id)arg1 ;
-(void)cancel;
-(void)contentProtectionStateChanged:(NSInteger)arg0 previousState:(NSInteger)arg1 ;
-(void)dealloc;
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


@end


#endif