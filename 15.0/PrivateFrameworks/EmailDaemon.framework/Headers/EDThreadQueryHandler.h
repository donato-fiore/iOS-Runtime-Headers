// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDTHREADQUERYHANDLER_H
#define EDTHREADQUERYHANDLER_H

@class NSString, EMObjectID, EFQuery, EMThreadScope, EFLocked;
@protocol EDThreadChangeHookResponder, EDThreadMigratorDelegate, EMMessageListItemQueryResultsObserver, EFLoggable, EDMessageRepositoryQueryHandler, EDThreadQueryHandlerDelegate, EDResumable, EDRemoteSearchProvider;

#import <Foundation/Foundation.h>

#import "EDPersistenceHookRegistry.h"
#import "EDMessagePersistence.h"
#import "EDThreadPersistence.h"
#import "EDVIPManager.h"

@interface EDThreadQueryHandler : NSObject <EDThreadChangeHookResponder, EDThreadMigratorDelegate, EMMessageListItemQueryResultsObserver, EFLoggable, EDMessageRepositoryQueryHandler>

 {
    uint8_t _state;
    atomic_flag _isRunning;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<EDThreadQueryHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // ivar: _hookRegistry
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly, nonatomic) EMObjectID *observationIdentifier; // ivar: _observationIdentifier
@property (readonly, nonatomic) NSObject<EDResumable> *observerResumer; // ivar: _observerResumer
@property (readonly, copy, nonatomic) EFQuery *query; // ivar: _query
@property (readonly, nonatomic) NSObject<EDRemoteSearchProvider> *remoteSearchProvider; // ivar: _remoteSearchProvider
@property (readonly, nonatomic) NSObject<EMMessageListItemQueryResultsObserver> *resultsObserver; // ivar: _resultsObserver
@property (readonly) Class superclass;
@property (readonly, nonatomic) EDThreadPersistence *threadPersistence; // ivar: _threadPersistence
@property (readonly, nonatomic) EMThreadScope *threadScope; // ivar: _threadScope
@property (readonly, nonatomic) EFLocked *underlyingHandler; // ivar: _underlyingHandler
@property (readonly, nonatomic) EDVIPManager *vipManager; // ivar: _vipManager


+(id)log;
-(BOOL)isStarted;
-(BOOL)start;
-(id)inMemoryMessageObjectIDsForThread:(id)arg0 ;
-(id)initWithQuery:(id)arg0 messagePersistence:(id)arg1 threadPersistence:(id)arg2 hookRegistry:(id)arg3 vipManager:(id)arg4 remoteSearchProvider:(id)arg5 observer:(id)arg6 observationIdentifier:(id)arg7 delegate:(id)arg8 observationResumer:(id)arg9 ;
-(id)messageReconciliationQueries;
-(id)threadForObjectID:(id)arg0 isPersisted:(*BOOL)arg1 error:(*id)arg2 ;
-(id)threadReconciliationQueries;
-(void)_createUnderlyingHandlerIfNeededAndStart;
-(void)_tearDownWithQueryHandlerBlock:(id)arg0 ;
-(void)cancel;
-(void)checkIfPrecomputedStateIsAvailable;
-(void)observer:(id)arg0 matchedAddedObjectIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3 ;
-(void)observer:(id)arg0 matchedAddedObjectIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3 ;
-(void)observer:(id)arg0 matchedChangesForObjectIDs:(id)arg1 ;
-(void)observer:(id)arg0 matchedDeletedObjectIDs:(id)arg1 ;
-(void)observer:(id)arg0 matchedMovedObjectIDs:(id)arg1 after:(id)arg2 ;
-(void)observer:(id)arg0 matchedMovedObjectIDs:(id)arg1 before:(id)arg2 ;
-(void)observer:(id)arg0 matchedOldestItemsUpdatedForMailboxes:(id)arg1 ;
-(void)observer:(id)arg0 replacedExistingObjectID:(id)arg1 withNewObjectID:(id)arg2 ;
-(void)observer:(id)arg0 wasUpdated:(id)arg1 ;
-(void)observerDidFinishInitialLoad:(id)arg0 ;
-(void)observerDidFinishRemoteSearch:(id)arg0 ;
-(void)observerWillRestart:(id)arg0 ;
-(void)requestSummaryForMessageObjectID:(id)arg0 ;
-(void)tearDown;
-(void)test_tearDown;
-(void)threadMigratorDidComplete:(id)arg0 ;
-(void)triggerMigration;


@end


#endif