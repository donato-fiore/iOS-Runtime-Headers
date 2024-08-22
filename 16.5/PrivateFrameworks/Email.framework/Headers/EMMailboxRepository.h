// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMMAILBOXREPOSITORY_H
#define EMMAILBOXREPOSITORY_H

@class NSMutableDictionary, NSSet, NSString, NSOrderedSet, EFPromise, NSMapTable;
@protocol EFLoggable, EMMailboxChangeObserver, EMMailboxTypeResolver, EFCancelable;


#import "EMRepository.h"
#import "EMAccountRepository.h"

@interface EMMailboxRepository : EMRepository <EFLoggable, EMMailboxChangeObserver, EMMailboxTypeResolver>

 {
    os_unfair_lock_s _mailboxesPromiseLock;
    os_unfair_lock_s _lock;
    NSMutableDictionary *_mailboxesByObjectID;
}


@property (readonly, nonatomic) EMAccountRepository *accountRepository; // ivar: _accountRepository
@property (readonly, nonatomic) NSSet *allMailboxObjectIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSOrderedSet *mailboxesIfAvailable;
@property (retain, nonatomic) EFPromise *mailboxesPromise; // ivar: _mailboxesPromise
@property (retain, nonatomic) NSMapTable *observerMap; // ivar: _observerMap
@property (retain) NSObject<EFCancelable> *registrationCancelable; // ivar: _registrationCancelable
@property (readonly) Class superclass;


+(id)log;
+(id)remoteInterface;
-(NSInteger)mailboxTypeForMailboxObjectID:(id)arg0 ;
-(NSInteger)remoteMailboxTypeForMailboxObjectID:(id)arg0 ;
-(id)_filterIDsFromMailbox:(id)arg0 withQuery:(id)arg1 ;
-(id)_mailboxesFuture;
-(id)initInternal;
-(id)initWithRemoteConnection:(id)arg0 accountRepository:(id)arg1 ;
-(id)mailboxForObjectID:(id)arg0 ;
-(id)mailboxIfAvailableForObjectID:(id)arg0 ;
-(id)mailboxObjectIDsForMailboxType:(NSInteger)arg0 ;
-(id)mailboxesForObjectIDs:(id)arg0 ;
-(id)mailboxesIfAvailableForObjectIDs:(id)arg0 ;
-(id)performMailboxChangeAction:(id)arg0 ;
-(id)performQuery:(id)arg0 withObserver:(id)arg1 ;
-(id)remoteAllMailboxObjectIDs;
-(id)remoteMailboxObjectIDsForMailboxType:(NSInteger)arg0 ;
-(void)_prepareMailboxes:(id)arg0 ;
-(void)_restartObservingMailboxChangesIfNecessary;
-(void)_startObservingMailboxChangesIfNecessary;
-(void)dealloc;
-(void)mailboxListChanged:(id)arg0 ;
-(void)performQuery:(id)arg0 completionHandler:(id)arg1 ;
-(void)refreshMailboxList;
-(void)refreshQueryWithObserver:(id)arg0 ;


@end


#endif