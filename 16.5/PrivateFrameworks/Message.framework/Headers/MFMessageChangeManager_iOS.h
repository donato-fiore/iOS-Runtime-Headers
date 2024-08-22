// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMESSAGECHANGEMANAGER_IOS_H
#define MFMESSAGECHANGEMANAGER_IOS_H

@class EDMessageChangeManager, NSString;
@protocol EDMessageChangeManagerSubClassMethods;


#import "MFMailMessageLibrary.h"

@interface MFMessageChangeManager_iOS : EDMessageChangeManager <EDMessageChangeManagerSubClassMethods>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) MFMailMessageLibrary *library; // ivar: _library
@property (readonly) Class superclass;


-(BOOL)haveCompleteMIMEForMessage:(id)arg0 ;
-(BOOL)mailboxIsAllMail:(id)arg0 ;
-(BOOL)mailboxPartOfAllMail:(id)arg0 ;
-(BOOL)persistNewMessages:(id)arg0 mailboxURL:(id)arg1 oldMessagesByNewMessage:(id)arg2 fromSyncing:(BOOL)arg3 ;
-(NSInteger)mailboxDatabaseIDForURL:(id)arg0 ;
-(id)accountForMailboxURL:(id)arg0 ;
-(id)addLabels:(id)arg0 removeLabels:(id)arg1 toMessagesInDatabase:(id)arg2 ;
-(id)addNewMessages:(id)arg0 mailboxURL:(id)arg1 userInitiated:(BOOL)arg2 ;
-(id)applyFlagChange:(id)arg0 toMessagesInDatabase:(id)arg1 ;
-(id)copyMessages:(id)arg0 destinationMailboxURL:(id)arg1 userInitiated:(BOOL)arg2 ;
-(id)initWithLibrary:(id)arg0 database:(id)arg1 localActionPersistence:(id)arg2 messagePersistence:(id)arg3 serverMessagePersistenceFactory:(id)arg4 readLaterPersistence:(id)arg5 bimiManager:(id)arg6 hookResponder:(id)arg7 hookRegistry:(id)arg8 ;
-(id)iterateMessagesInMailboxURLs:(id)arg0 excludingMessages:(id)arg1 batchSize:(NSUInteger)arg2 returnMessagesForFlagChange:(id)arg3 handler:(id)arg4 ;
-(id)messageForDatabaseID:(NSInteger)arg0 ;
-(id)messagesForRemoteIDs:(id)arg0 mailboxURL:(id)arg1 ;
-(id)messagesToJournalForMessages:(id)arg0 inMailbox:(id)arg1 ;
-(id)moveMessages:(id)arg0 destinationMailboxURL:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)actionHasChangedAccount:(id)arg0 ;
-(void)applyVIPStatus:(BOOL)arg0 toMessagesInDatabase:(id)arg1 ;
-(void)checkForNewActionsInMailboxID:(NSInteger)arg0 ;
-(void)deletePersistedMessages:(id)arg0 ;
-(void)didFinishPersistenceDidAddMessages:(id)arg0 ;
-(void)didReflectNewMessages:(id)arg0 ;
-(void)displayErrorForTransferAction:(id)arg0 withResults:(id)arg1 ;
-(void)messageWasAppended:(id)arg0 ;
-(void)resetStatusCountsForMailboxWithURL:(id)arg0 ;
-(void)setData:(id)arg0 onMessage:(id)arg1 ;
-(void)setRemoteID:(id)arg0 onMessageWithDatabaseID:(NSInteger)arg1 ;
-(void)willStartPersistenceDidAddMessages:(id)arg0 ;


@end


#endif