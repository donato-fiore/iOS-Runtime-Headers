// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFPERSISTENCE_IOS_H
#define MFPERSISTENCE_IOS_H

@class EDPersistence, EDConversationPersistence, EDPersistenceDatabase, EDLocalActionPersistence, EDMessageChangeManager, EDMessagePersistence, EDSearchableIndexManager, EDServerMessagePersistenceFactory, EDThreadPersistence, EDRemoteContentManager, EDRemoteContentPersistence, EDAttachmentPersistenceManager, EDRemoteContentCacheConfiguration, EMRemoteContentURLCache, EMRemoteContentURLSession, NSString, EDListUnsubscribeHandler, EDMailboxPersistence;
@protocol EFLoggable, EDRemoteSearchProvider, EDAccountsProvider, EMUserProfileProvider;


#import "MFMailMessageLibrary.h"

@interface MFPersistence_iOS : EDPersistence <EFLoggable>

 {
    EDConversationPersistence *_conversationPersistence;
    EDPersistenceDatabase *_database;
    EDLocalActionPersistence *_localActionPersistence;
    EDMessageChangeManager *_messageChangeManager;
    EDMessagePersistence *_messagePersistence;
    id<EDRemoteSearchProvider> *_remoteSearchProvider;
    EDSearchableIndexManager *_searchableIndexManager;
    EDServerMessagePersistenceFactory *_serverMessagePersistenceFactory;
    EDThreadPersistence *_threadPersistence;
    EDRemoteContentManager *_remoteContentManager;
    EDRemoteContentPersistence *_remoteContentPersistence;
    EDAttachmentPersistenceManager *_attachmentPersistenceManager;
    EDRemoteContentCacheConfiguration *_remoteContentCacheConfiguration;
    EMRemoteContentURLCache *_remoteContentURLCache;
    EMRemoteContentURLSession *_remoteContentURLSession;
}


@property (retain, nonatomic) NSObject<EDAccountsProvider> *accountsProvider; // ivar: _accountsProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) MFMailMessageLibrary *library; // ivar: _library
@property (retain, nonatomic) EDListUnsubscribeHandler *listUnsubscribeHandler; // ivar: _listUnsubscribeHandler
@property (retain, nonatomic) EDMailboxPersistence *mailboxPersistence; // ivar: _mailboxPersistence
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<EMUserProfileProvider> *userProfileProvider; // ivar: _userProfileProvider


+(id)log;
-(id)attachmentPersistenceManager;
-(id)conversationPersistence;
-(id)database;
-(id)initWithPath:(id)arg0 inMemoryIdentifier:(id)arg1 library:(id)arg2 propertyMapper:(id)arg3 ;
-(id)localActionPersistence;
-(id)messageChangeManager;
-(id)messagePersistence;
-(id)persistenceStatistics;
-(id)remoteContentCacheConfiguration;
-(id)remoteContentManager;
-(id)remoteContentPersistence;
-(id)remoteContentURLCache;
-(id)remoteContentURLSession;
-(id)remoteSearchProvider;
-(id)searchableIndexManager;
-(id)serverMessagePersistenceFactory;
-(id)threadPersistence;
-(void)_configureAttachmentPersistenceManager;
-(void)_configureSearchableIndexManagerIfNecessary;
-(void)scheduleRecurringActivity;
-(void)setRemoteContentURLCache:(id)arg0 ;
-(void)setRemoteContentURLSession:(id)arg0 ;
-(void)setUpWithMailboxProvider:(id)arg0 remoteSearchProvider:(id)arg1 ;
-(void)test_tearDown;


@end


#endif