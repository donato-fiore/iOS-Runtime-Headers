// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDMESSAGECHANGEMANAGER_H
#define EDMESSAGECHANGEMANAGER_H

@class NSString;
@protocol EFLoggable, EDMessageChangeHookResponder, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EDBIMIManager.h"
#import "EDPersistenceDatabase.h"
#import "EDLocalActionPersistence.h"
#import "EDMessagePersistence.h"
#import "EDReadLaterPersistence.h"
#import "EDServerMessagePersistenceFactory.h"

@interface EDMessageChangeManager : NSObject <EFLoggable>



@property (readonly, nonatomic) EDBIMIManager *bimiManager; // ivar: _bimiManager
@property (readonly, nonatomic) EDPersistenceDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<EDMessageChangeHookResponder> *hookResponder; // ivar: _hookResponder
@property (readonly, nonatomic) EDLocalActionPersistence *localActionPersistence; // ivar: _localActionPersistence
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *markAllWorkQueue; // ivar: _markAllWorkQueue
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // ivar: _messagePersistence
@property (readonly, nonatomic) EDReadLaterPersistence *readLaterPersistence; // ivar: _readLaterPersistence
@property (readonly, nonatomic) EDServerMessagePersistenceFactory *serverMessagePersistenceFactory; // ivar: _serverMessagePersistenceFactory
@property (readonly) Class superclass;


+(id)log;
+(id)signpostLog;
-(BOOL)_hookResponderRespondsToRequiredMethods:(id)arg0 ;
-(BOOL)_needToStoreServerMessagesForMailboxURL:(id)arg0 ;
-(BOOL)_persistFlagChangeResults:(id)arg0 forFlagChangeAction:(id)arg1 ;
-(BOOL)_persistResults:(id)arg0 forFlagChangeAction:(id)arg1 ;
-(BOOL)_persistResults:(id)arg0 forLabelChangeAction:(id)arg1 ;
-(BOOL)_persistResults:(id)arg0 forTransferAction:(id)arg1 ;
-(BOOL)mailboxURL:(id)arg0 isInSameAccountAsMailboxURL:(id)arg1 ;
-(BOOL)mailboxURLIsInRemoteAccount:(id)arg0 ;
-(BOOL)persistResults:(id)arg0 forAction:(id)arg1 ;
-(NSUInteger)signpostID;
-(id)_applyReadLaterDate:(id)arg0 toMessages:(id)arg1 changeIsRemote:(BOOL)arg2 ;
-(id)_applyReadLaterDate:(id)arg0 toMessages:(id)arg1 changeIsRemote:(BOOL)arg2 hookResponder:(id)arg3 ;
-(id)_findDestinationMessagesFromCompletedItems:(id)arg0 notInServerMessages:(id)arg1 ;
-(id)_handleDuplicateServerMessage:(id)arg0 serverMessagePersistence:(id)arg1 ;
-(id)_truncateReadLaterDate:(id)arg0 ;
-(id)accountForMailboxURL:(id)arg0 ;
-(id)addLabels:(id)arg0 removeLabels:(id)arg1 forMessages:(id)arg2 ;
-(id)addNewMessages:(id)arg0 mailboxURL:(id)arg1 userInitiated:(BOOL)arg2 ;
-(id)applyFlagChange:(id)arg0 toMessages:(id)arg1 ;
-(id)applyReadLaterDate:(id)arg0 toMessages:(id)arg1 ;
-(id)copyMessages:(id)arg0 destinationMailboxURL:(id)arg1 userInitiated:(BOOL)arg2 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 localActionPersistence:(id)arg1 messagePersistence:(id)arg2 serverMessagePersistenceFactory:(id)arg3 readLaterPersistence:(id)arg4 bimiManager:(id)arg5 hookResponder:(id)arg6 hookRegistry:(id)arg7 ;
-(id)messagesToJournalForMessages:(id)arg0 inMailbox:(id)arg1 ;
-(id)moveMessages:(id)arg0 destinationMailboxURL:(id)arg1 userInitiated:(BOOL)arg2 ;
-(id)reflectNewMessages:(id)arg0 mailboxURL:(id)arg1 ;
-(id)transferMessages:(id)arg0 transferType:(NSInteger)arg1 destinationMailboxURL:(id)arg2 userInitiated:(BOOL)arg3 ;
-(void)_clearFollowUpsFromThreadsForMessages:(id)arg0 ;
-(void)_deleteDestinationMessagesFromCompletedItems:(id)arg0 notInServerMessages:(id)arg1 ;
-(void)_handleFailedCopyItems:(id)arg0 transferAction:(id)arg1 generationWindow:(id)arg2 ;
-(void)_handleFailedDownload:(id)arg0 generationWindow:(id)arg1 ;
-(void)_reflectFlagChanges:(id)arg0 messages:(id)arg1 remoteIDs:(id)arg2 mailboxURL:(id)arg3 ;
-(void)_resetLocalFlagsToServerFlagsForMessagesWithRemoteIDs:(id)arg0 mailboxURL:(id)arg1 ;
-(void)_resetLocalLabelsToServerLabelsForMessagesWithRemoteIDs:(id)arg0 mailboxURL:(id)arg1 ;
-(void)_storeServerMessages:(id)arg0 mailboxURL:(id)arg1 generationWindow:(id)arg2 ;
-(void)applyFlagChange:(id)arg0 toAllMessagesFromMailboxes:(id)arg1 exceptMessages:(id)arg2 ;
-(void)applyFollowUp:(id)arg0 toMessages:(id)arg1 ;
-(void)applyFollowUp:(id)arg0 toMessages:(id)arg1 withNegativeFeedbackForSuggestions:(BOOL)arg2 ;
-(void)applyVIPStatus:(BOOL)arg0 forMessages:(id)arg1 ;
-(void)deleteAllMessageFromMailboxes:(id)arg0 exceptMessages:(id)arg1 ;
-(void)deleteMessages:(id)arg0 ;
-(void)didFinishPersistenceDidAddMessages:(id)arg0 ;
-(void)didReflectNewMessages:(id)arg0 ;
-(void)reflectAddedLabels:(id)arg0 removedLabels:(id)arg1 forMessagesWithRemoteIDs:(id)arg2 mailboxURL:(id)arg3 ;
-(void)reflectAllMessagesDeletedInMailboxURL:(id)arg0 ;
-(void)reflectDeletedAllClearedMessagesInMailboxURL:(id)arg0 ;
-(void)reflectDeletedMessages:(id)arg0 ;
-(void)reflectDeletedMessagesWithRemoteIDs:(id)arg0 mailboxURL:(id)arg1 ;
-(void)reflectFlagChanges:(id)arg0 forMessages:(id)arg1 ;
-(void)reflectFlagChanges:(id)arg0 forMessagesWithRemoteIDs:(id)arg1 mailboxURL:(id)arg2 ;
-(void)reflectSortedFlagChanges:(id)arg0 mailboxURL:(id)arg1 ;
-(void)remindMeCloudStorageChangedWithAddedOrChangedItems:(id)arg0 deletedItems:(id)arg1 ;
-(void)test_tearDown;
-(void)transferAllMessagesFromMailboxes:(id)arg0 exceptMessages:(id)arg1 transferType:(NSInteger)arg2 destinationMailboxURL:(id)arg3 userInitiated:(BOOL)arg4 ;
-(void)transferMessages:(id)arg0 transferType:(NSInteger)arg1 destinationMailboxURL:(id)arg2 userInitiated:(BOOL)arg3 oldMessagesByNewMessage:(id)arg4 ;
-(void)willStartPersistenceDidAddMessages:(id)arg0 ;


@end


#endif