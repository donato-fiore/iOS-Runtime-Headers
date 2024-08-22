// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDMAILBOXPROVIDER_H
#define EDMAILBOXPROVIDER_H

@class NSArray, NSSet, NSString, NSMapTable;
@protocol EMMailboxTypeResolver, EDAccountsProvider, EDMailboxProviderDelegate, OS_dispatch_queue, EFScheduler;

#import <Foundation/Foundation.h>


@interface EDMailboxProvider : NSObject <EMMailboxTypeResolver>

 {
    uint8_t _deferringInvalidationCount;
    BOOL _needsToInvalidate;
}


@property (weak, nonatomic) NSObject<EDAccountsProvider> *accountsProvider; // ivar: _accountsProvider
@property (retain) NSArray *allMailboxCache; // ivar: _allMailboxCache
@property (readonly, nonatomic) NSSet *allMailboxObjectIDs;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EDMailboxProviderDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMapTable *legacyMailboxToMailboxMap; // ivar: _legacyMailboxToMailboxMap
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mailboxCacheQueue; // ivar: _mailboxCacheQueue
@property (retain) NSMapTable *objectIDToLegacyMailboxMap; // ivar: _objectIDToLegacyMailboxMap
@property (retain, nonatomic) NSObject<EFScheduler> *observerScheduler; // ivar: _observerScheduler
@property (readonly) Class superclass;


-(BOOL)_isDeferringInvalidation;
-(NSInteger)mailboxTypeForMailboxObjectID:(id)arg0 ;
-(id)_transformMailbox:(id)arg0 legacyMailboxToMailboxMap:(id)arg1 objectIDToLegacyMailboxMap:(id)arg2 ;
-(id)allMailboxes;
-(id)initWithAccountsProvider:(id)arg0 ;
-(id)legacyMailboxForObjectID:(id)arg0 ;
-(id)legacyMailboxesForObjectIDs:(id)arg0 ;
-(id)mailboxForObjectID:(id)arg0 ;
-(id)mailboxFromLegacyMailbox:(id)arg0 ;
-(id)mailboxObjectIDsForMailboxType:(NSInteger)arg0 ;
-(id)mailboxesFromLegacyMailboxes:(id)arg0 ;
-(void)_beginDeferringInvalidation;
-(void)_didChangeMailboxList:(id)arg0 ;
-(void)_didFetchMailboxList:(id)arg0 ;
-(void)_didReloadMailboxList:(id)arg0 ;
-(void)_endDeferringInvalidation;
-(void)_fetchMailboxesForAccount:(id)arg0 ;
-(void)_invalidateCache;
-(void)_mailboxInvalidated:(id)arg0 ;
-(void)_populateCache;
-(void)_willFetchMailboxList:(id)arg0 ;
-(void)_willReloadMailboxList:(id)arg0 ;
-(void)enumerateAccountsWithBlock:(id)arg0 ;
-(void)fetchMailboxes;
-(void)invalidateMailboxes;
-(void)test_tearDown;


@end


#endif