// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EMMESSAGEREPOSITORYQUERYOBSERVER_H
#define _EMMESSAGEREPOSITORYQUERYOBSERVER_H

@class EFQuery, EFCancelationToken, NSString;
@protocol EMMessageListItemQueryResultsObserver, EMRecoverableObserver, EMQueryResultsObserver, EFCancelable, EFScheduler;

#import <Foundation/Foundation.h>

#import "EMMessageRepository.h"
#import "EMObjectID.h"

@interface _EMMessageRepositoryQueryObserver : NSObject <EMMessageListItemQueryResultsObserver, EMRecoverableObserver>

 {
    EMMessageRepository *_repository;
    EFQuery *_query;
    EMObjectID *_observationIdentifier;
    id<EMQueryResultsObserver> *_observer;
    EFCancelationToken *_token;
    id<EFCancelable> *_remoteCancelable;
    id<EFScheduler> *_recoveryScheduler;
    os_unfair_lock_s _recoveryLock;
    NSInteger _recoveryAttempt;
    BOOL _recoveryIsScheduled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithRepository:(id)arg0 query:(id)arg1 observer:(id)arg2 ;
-(id)trampoliningObserver;
-(void)_performQueryWithRemoteConnection:(id)arg0 forRecovery:(BOOL)arg1 ;
-(void)cancel;
-(void)dealloc;
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
-(void)performQueryWithRemoteConnection:(id)arg0 ;
-(void)recoverQueryWithRemoteConnection:(id)arg0 ;
-(void)refreshQueryWithRemoteConnection:(id)arg0 ;


@end


#endif