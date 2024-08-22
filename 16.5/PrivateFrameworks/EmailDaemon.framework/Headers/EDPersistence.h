// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDPERSISTENCE_H
#define EDPERSISTENCE_H

@class EFXPCAlarmScheduler, EMBlockedSenderManager, MEContentRuleListManager, NSString, EMRemoteContentURLCache, EMRemoteContentURLSession;
@protocol EFLoggable, EDAccountsProvider, EDRemoteSearchProvider, EMUserProfileProvider;

#import <Foundation/Foundation.h>

#import "EDActivityPersistence.h"
#import "EDAttachmentPersistenceManager.h"
#import "EDBIMIManager.h"
#import "EDConversationPersistence.h"
#import "EDDataDetectionPersistence.h"
#import "EDPersistenceDatabase.h"
#import "EDGmailLabelPersistence.h"
#import "EDPersistenceHookRegistry.h"
#import "EDListUnsubscribeHandler.h"
#import "EDLocalActionPersistence.h"
#import "EDMailboxActionPersistence.h"
#import "EDMailboxPersistence.h"
#import "EDMessageChangeManager.h"
#import "EDMessagePersistence.h"
#import "EDReadLaterPersistence.h"
#import "EDRemindMeNotificationController.h"
#import "EDRemoteContentCacheConfiguration.h"
#import "EDRemoteContentManager.h"
#import "EDRemoteContentPersistence.h"
#import "EDRichLinkPersistence.h"
#import "EDSearchableIndexManager.h"
#import "EDSendLaterPersistence.h"
#import "EDSenderPersistence.h"
#import "EDServerMessagePersistenceFactory.h"
#import "EDThreadPersistence.h"
#import "EDVIPManager.h"

@interface EDPersistence : NSObject <EFLoggable>



@property (retain, nonatomic) NSObject<EDAccountsProvider> *accountsProvider; // ivar: _accountsProvider
@property (readonly) EDActivityPersistence *activityPersistence; // ivar: _activityPersistence
@property (readonly, nonatomic) EFXPCAlarmScheduler *alarmScheduler; // ivar: _alarmScheduler
@property (readonly) EDAttachmentPersistenceManager *attachmentPersistenceManager;
@property (readonly, nonatomic) EDBIMIManager *bimiManager; // ivar: _bimiManager
@property (readonly, nonatomic) EMBlockedSenderManager *blockedSenderManager; // ivar: _blockedSenderManager
@property (readonly, nonatomic) MEContentRuleListManager *contentRuleListManager; // ivar: _contentRuleListManager
@property (readonly) EDConversationPersistence *conversationPersistence;
@property (readonly) EDDataDetectionPersistence *dataDetectionPersistence;
@property (readonly) EDPersistenceDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) EDGmailLabelPersistence *gmailLabelPersistence; // ivar: _gmailLabelPersistence
@property (readonly) NSUInteger hash;
@property (readonly) EDPersistenceHookRegistry *hookRegistry; // ivar: _hookRegistry
@property (retain, nonatomic) EDListUnsubscribeHandler *listUnsubscribeHandler; // ivar: _listUnsubscribeHandler
@property (readonly) EDLocalActionPersistence *localActionPersistence;
@property (readonly, nonatomic) EDMailboxActionPersistence *mailboxActionPersistence;
@property (readonly, nonatomic) EDMailboxPersistence *mailboxPersistence; // ivar: _mailboxPersistence
@property (readonly) EDMessageChangeManager *messageChangeManager;
@property (readonly) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly) EDReadLaterPersistence *readLaterPersistence;
@property (readonly, nonatomic) EDRemindMeNotificationController *remindMeNotificationController; // ivar: _remindMeNotificationController
@property (readonly, nonatomic) EDRemoteContentCacheConfiguration *remoteContentCacheConfiguration; // ivar: _remoteContentCacheConfiguration
@property (readonly) EDRemoteContentManager *remoteContentManager;
@property (readonly) EDRemoteContentPersistence *remoteContentPersistence;
@property (retain, nonatomic) EMRemoteContentURLCache *remoteContentURLCache; // ivar: _remoteContentURLCache
@property (retain, nonatomic) EMRemoteContentURLSession *remoteContentURLSession; // ivar: _remoteContentURLSession
@property (readonly, nonatomic) NSObject<EDRemoteSearchProvider> *remoteSearchProvider; // ivar: _remoteSearchProvider
@property (readonly) EDRichLinkPersistence *richLinkPersistence;
@property (readonly) EDSearchableIndexManager *searchableIndexManager;
@property (readonly) EDSendLaterPersistence *sendLaterPersistence;
@property (readonly) EDSenderPersistence *senderPersistence; // ivar: _senderPersistence
@property (readonly) EDServerMessagePersistenceFactory *serverMessagePersistenceFactory;
@property (readonly) Class superclass;
@property (readonly) EDThreadPersistence *threadPersistence;
@property (readonly, nonatomic) NSObject<EMUserProfileProvider> *userProfileProvider; // ivar: _userProfileProvider
@property (retain) EDVIPManager *vipManager; // ivar: _vipManager


+(id)log;
-(id)init;
-(id)persistenceStateWithStatistics:(id)arg0 ;
-(id)persistenceStatistics;
-(void)dealloc;
-(void)scheduleRecurringActivity;
-(void)test_tearDown;


@end


#endif