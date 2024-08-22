// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDPRECOMPUTEDTHREADQUERYHANDLER_H
#define EDPRECOMPUTEDTHREADQUERYHANDLER_H

@class EFCancelationToken, NSString, EMMailboxScope, NSMutableDictionary, NSMutableArray, EMCollectionItemIDStateCapturer, EMThreadScope, NSMutableSet;
@protocol EDMessageChangeHookResponder, EDThreadChangeHookResponder, EFLoggable, EMCollectionItemIDStateCapturerDelegate, EFScheduler, EFCancelable;


#import "EDMessageRepositoryQueryHandler.h"
#import "EDThreadReloadSummaryHelper.h"
#import "EDThreadPersistence.h"
#import "EDUpdateThrottler.h"

@interface EDPrecomputedThreadQueryHandler : EDMessageRepositoryQueryHandler <EDMessageChangeHookResponder, EDThreadChangeHookResponder, EFLoggable, EMCollectionItemIDStateCapturerDelegate>



@property (readonly, nonatomic) NSObject<EFScheduler> *backgroundWorkScheduler; // ivar: _backgroundWorkScheduler
@property (retain, nonatomic) EFCancelationToken *cancelationToken; // ivar: _cancelationToken
@property (readonly, nonatomic) NSObject<EFScheduler> *changeScheduler; // ivar: _changeScheduler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope; // ivar: _mailboxScope
@property (retain, nonatomic) NSMutableDictionary *oldestThreadObjectIDsByMailbox; // ivar: _oldestThreadObjectIDsByMailbox
@property (retain, nonatomic) NSMutableDictionary *pendingChanges; // ivar: _pendingChanges
@property (retain, nonatomic) NSMutableArray *pendingPositionChanges; // ivar: _pendingPositionChanges
@property (readonly, nonatomic) EDThreadReloadSummaryHelper *reloadSummaryHelper; // ivar: _reloadSummaryHelper
@property (retain, nonatomic) NSMutableDictionary *reportedJournaledObjectIDs; // ivar: _reportedJournaledObjectIDs
@property (readonly, nonatomic) EMCollectionItemIDStateCapturer *stateCapturer; // ivar: _stateCapturer
@property (readonly) Class superclass;
@property (readonly, nonatomic) EDThreadPersistence *threadPersistence; // ivar: _threadPersistence
@property (readonly, nonatomic) EMThreadScope *threadScope; // ivar: _threadScope
@property (retain, nonatomic) NSMutableSet *unreportedJournaledObjectIDs; // ivar: _unreportedJournaledObjectIDs
@property (retain, nonatomic) NSObject<EFCancelable> *updateOldestThreadsCancelationToken; // ivar: _updateOldestThreadsCancelationToken
@property (readonly, nonatomic) EDUpdateThrottler *updateThrottler; // ivar: _updateThrottler


+(id)log;
-(BOOL)_isAddingOrDeletingObjectID:(id)arg0 ;
-(BOOL)_keyPathsAffectSorting:(id)arg0 ;
-(BOOL)start;
-(id)_messageForPersistedMessage:(id)arg0 ;
-(id)initWithQuery:(id)arg0 threadScope:(id)arg1 messagePersistence:(id)arg2 threadPersistence:(id)arg3 hookRegistry:(id)arg4 observer:(id)arg5 observationIdentifier:(id)arg6 observationResumer:(id)arg7 ;
-(id)itemIDsForStateCaptureWithErrorString:(*id)arg0 ;
-(id)labelForStateCapture;
-(id)threadForObjectID:(id)arg0 error:(*id)arg1 ;
-(void)_addChangeToPendingChanges:(id)arg0 forThreadObjectID:(id)arg1 ;
-(void)_flushUpdatesWithReason:(id)arg0 ;
-(void)_getInitialResults;
-(void)_oldestThreadsNeedUpdate;
-(void)_onScheduler:(id)arg0 performCancelableBlock:(id)arg1 ;
-(void)_persistenceIsAddingThreadWithObjectID:(id)arg0 ;
-(void)_persistenceIsChangingThreadWithObjectID:(id)arg0 changedKeyPaths:(id)arg1 ;
-(void)cancel;
-(void)persistenceDidChangeConversationNotificationLevel:(NSInteger)arg0 conversationID:(NSInteger)arg1 generationWindow:(id)arg2 ;
-(void)persistenceDidChangeGlobalMessageID:(NSInteger)arg0 orConversationID:(NSInteger)arg1 message:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidFinishThreadUpdates;
-(void)persistenceDidUpdateProperties:(id)arg0 message:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceIsAddingThreadWithObjectID:(id)arg0 journaled:(BOOL)arg1 generationWindow:(id)arg2 ;
-(void)persistenceIsChangingThreadWithObjectID:(id)arg0 changedKeyPaths:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceIsDeletingThreadWithObjectID:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceIsMarkingThreadAsJournaledWithObjectID:(id)arg0 generationWindow:(id)arg1 ;
-(void)persistenceIsReconcilingJournaledThreadsWithObjectIDs:(id)arg0 generationWindow:(id)arg1 ;
-(void)test_tearDown;


@end


#endif