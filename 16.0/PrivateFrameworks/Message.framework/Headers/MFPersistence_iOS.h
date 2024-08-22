// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFPERSISTENCE_IOS_H
#define MFPERSISTENCE_IOS_H

@class EDPersistence, EDConversationPersistence, EDPersistenceDatabase, EDDataDetectionPersistence, EDLocalActionPersistence, EDMailboxActionPersistence, EDMessageChangeManager, EDMessagePersistence, EDSearchableIndexManager, EDServerMessagePersistenceFactory, EDThreadPersistence, EDSenderPersistence, EDRemoteContentManager, EDRemoteContentPersistence, EDRichLinkPersistence, EDAttachmentPersistenceManager, EDRemoteContentCacheConfiguration, EMRemoteContentURLCache, EMRemoteContentURLSession, EDReadLaterPersistence, EDSendLaterPersistence, EDBIMIManager, EDRemindMeNotificationController, NSString, EDMailboxPersistence;
@protocol EFLoggable, EDRemoteSearchProvider, EDAccountsProvider, EMUserProfileProvider;


#import "MFMailMessageLibrary.h"

@interface MFPersistence_iOS : EDPersistence <EFLoggable>

 {
    EDConversationPersistence *_conversationPersistence;
    EDPersistenceDatabase *_database;
    EDDataDetectionPersistence *_dataDetectionPersistence;
    EDLocalActionPersistence *_localActionPersistence;
    EDMailboxActionPersistence *_mailboxActionPersistence;
    EDMessageChangeManager *_messageChangeManager;
    EDMessagePersistence *_messagePersistence;
    id<EDRemoteSearchProvider> *_remoteSearchProvider;
    EDSearchableIndexManager *_searchableIndexManager;
    EDServerMessagePersistenceFactory *_serverMessagePersistenceFactory;
    EDThreadPersistence *_threadPersistence;
    EDSenderPersistence *_senderPersistence;
    EDRemoteContentManager *_remoteContentManager;
    EDRemoteContentPersistence *_remoteContentPersistence;
    EDRichLinkPersistence *_richLinkPersistence;
    EDAttachmentPersistenceManager *_attachmentPersistenceManager;
    EDRemoteContentCacheConfiguration *_remoteContentCacheConfiguration;
    EMRemoteContentURLCache *_remoteContentURLCache;
    EMRemoteContentURLSession *_remoteContentURLSession;
    EDReadLaterPersistence *_readLaterPersistence;
    EDSendLaterPersistence *_sendLaterPersistence;
    EDBIMIManager *_bimiManager;
    EDRemindMeNotificationController *_remindMeNotificationController;
}


@property (retain, nonatomic) NSObject<EDAccountsProvider> *accountsProvider; // ivar: _accountsProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) MFMailMessageLibrary *library; // ivar: _library
@property (retain, nonatomic) EDMailboxPersistence *mailboxPersistence; // ivar: _mailboxPersistence
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<EMUserProfileProvider> *userProfileProvider; // ivar: _userProfileProvider


+(id)log;
-(id)attachmentPersistenceManager;
-(id)bimiManager;
-(id)conversationPersistence;
-(id)dataDetectionPersistence;
-(id)database;
-(id)initWithPath:(id)arg0 inMemoryIdentifier:(id)arg1 library:(id)arg2 propertyMapper:(id)arg3 ;
-(id)localActionPersistence;
-(id)mailboxActionPersistence;
-(id)messageChangeManager;
-(id)messagePersistence;
-(id)persistenceStatistics;
-(id)readLaterPersistence;
-(id)remindMeNotificationController;
-(id)remoteContentCacheConfiguration;
-(id)remoteContentManager;
-(id)remoteContentPersistence;
-(id)remoteContentURLCache;
-(id)remoteContentURLSession;
-(id)remoteSearchProvider;
-(id)richLinkPersistence;
-(id)searchableIndexManager;
-(id)sendLaterPersistence;
-(id)senderPersistence;
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