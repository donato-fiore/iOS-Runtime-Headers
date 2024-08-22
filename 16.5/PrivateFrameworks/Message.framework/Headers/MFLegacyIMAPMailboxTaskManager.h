// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFLEGACYIMAPMAILBOXTASKMANAGER_H
#define MFLEGACYIMAPMAILBOXTASKMANAGER_H

@class NSString, NSLock, EFCancelationToken;
@protocol MFIMAPConnectionDelegate, MFIMAPSequenceIdentifierProvider, ECIMAPLocalActionReplayerDelegate, EFLoggable, MFIMAPMailboxTaskManager;

#import <Foundation/Foundation.h>

#import "MFIMAPConnection.h"
#import "IMAPAccount.h"
#import "MFMailMessageLibrary.h"
#import "MFMailboxUid.h"

@interface MFLegacyIMAPMailboxTaskManager : NSObject <MFIMAPConnectionDelegate, MFIMAPSequenceIdentifierProvider, ECIMAPLocalActionReplayerDelegate, EFLoggable, MFIMAPMailboxTaskManager>

 {
    BOOL _supportsForwardedFlag;
    BOOL _supportsDollarForwardedFlag;
    BOOL _supportsFlagColorBitFlags;
    BOOL _settingServerCount;
    os_unfair_lock_s _activeFetchVsReplayLock;
    NSString *_mailboxName;
    os_unfair_lock_s _serverCountLock;
    NSUInteger _serverMessageCount;
    NSUInteger _serverDeletedCount;
    NSUInteger _lastHighestModSequence;
    NSUInteger _highestModSequence;
    MFIMAPConnection *_cachedConnection;
    NSLock *_cachedConnectionLock;
    NSString *_loggingPrefix;
}


@property (readonly, nonatomic) IMAPAccount *account; // ivar: _account
@property (readonly, nonatomic) BOOL canFetchMessageIDs;
@property (retain, nonatomic) EFCancelationToken *cancelationToken; // ivar: _cancelationToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MFMailMessageLibrary *library; // ivar: _library
@property (readonly, nonatomic) MFMailboxUid *mailbox; // ivar: _mailbox
@property (readonly, copy, nonatomic) NSString *mailboxName;
@property BOOL shouldUseIDLE; // ivar: _shouldUseIDLE
@property (readonly) Class superclass;


+(id)log;
-(BOOL)_selectMailbox:(id)arg0 withConnection:(id)arg1 ;
-(BOOL)_shouldContinueToPreservedUID:(NSUInteger)arg0 ;
-(BOOL)_waitForDataFromDownload:(id)arg0 uid:(unsigned int)arg1 downloadCache:(id)arg2 connection:(id)arg3 ;
-(BOOL)checkUIDValidity:(unsigned int)arg0 mailboxURL:(id)arg1 ;
-(BOOL)connection:(id)arg0 shouldHandleUntaggedResponse:(id)arg1 forCommand:(id)arg2 ;
-(BOOL)downloadMimePartNumber:(id)arg0 message:(id)arg1 withProgressBlock:(id)arg2 ;
-(BOOL)errorIsIMAPError:(id)arg0 ;
-(BOOL)fetchDataForMimePart:(id)arg0 range:(struct _NSRange )arg1 isComplete:(*BOOL)arg2 consumer:(id)arg3 ;
-(BOOL)moveSupportedFromMailboxURL:(id)arg0 toURL:(id)arg1 ;
-(BOOL)performOperationRequiringConnection:(BOOL)arg0 withOptions:(int)arg1 failedToSelectMailbox:(*BOOL)arg2 operation:(id)arg3 ;
-(BOOL)shouldStartIdleForConnection:(id)arg0 ;
-(NSInteger)fetchMessagesWithMessageIDs:(id)arg0 andSetFlags:(NSUInteger)arg1 ;
-(NSInteger)fetchNumMessages:(NSUInteger)arg0 preservingUID:(id)arg1 options:(NSUInteger)arg2 ;
-(NSUInteger)_fetchMessagesWithArguments:(id)arg0 idRange:(id)arg1 onConnection:(id)arg2 synchronize:(BOOL)arg3 limit:(NSUInteger)arg4 topUIDToCompact:(NSUInteger)arg5 topKnownUID:(NSUInteger)arg6 success:(*BOOL)arg7 examinedRange:(struct _NSRange *)arg8 fetchableUIDsFound:(*NSUInteger)arg9 preserveUID:(*NSUInteger)arg10 numFetchedUIDs:(*NSUInteger)arg11 ;
-(NSUInteger)_fetchMessagesWithUIDs:(id)arg0 connection:(id)arg1 newCount:(NSUInteger)arg2 flagsToSet:(NSUInteger)arg3 queueClass:(Class)arg4 ;
-(NSUInteger)serverMessageCount;
-(NSUInteger)syncMessagesWithUIDs:(id)arg0 connection:(id)arg1 serverMessages:(id)arg2 flagSearchResults:(id)arg3 ;
-(id)_downloadForMessageBodyData:(id)arg0 usingDownloadCache:(id)arg1 ;
-(id)_fetchFullMessageDataForMessage:(id)arg0 download:(*id)arg1 ;
-(id)_idleConditionsObservable;
-(id)_newSearchResponseQueueForConnection:(id)arg0 limit:(unsigned int)arg1 ;
-(id)_observeChangesInIdleConditions;
-(id)_performBodyDataDownload:(id)arg0 usingConnection:(id)arg1 downloadCache:(id)arg2 isPartial:(*BOOL)arg3 ;
-(id)_remoteBodySearchForCriterion:(id)arg0 ;
-(id)_searchFlagsForUIDs:(id)arg0 usingConnection:(id)arg1 ;
-(id)deletedMessages;
-(id)fetchDataForMessage:(id)arg0 didDownload:(*BOOL)arg1 ;
-(id)fetchDataForMessage:(id)arg0 partial:(*BOOL)arg1 ;
-(id)fetchHeadersForMessage:(id)arg0 ;
-(id)flagsForIMAPUIDs:(id)arg0 mailboxURL:(id)arg1 ;
-(id)imapMailboxNameForMailboxURL:(id)arg0 ;
-(id)initWithMailbox:(id)arg0 ;
-(id)messageDataForMessage:(id)arg0 ;
-(id)messageDataForRemoteID:(id)arg0 mailboxURL:(id)arg1 ;
-(id)messageIdRollCall:(id)arg0 ;
-(id)offlineCache;
-(id)offlineCacheIfOffline;
-(id)replayAction:(id)arg0 ;
-(id)sequenceIdentifierForUIDs:(id)arg0 ;
-(id)storeSearchResultMatchingCriterion:(id)arg0 limit:(unsigned int)arg1 offset:(id)arg2 error:(*id)arg3 ;
-(void)_fetchMessagesMatchingCriterion:(id)arg0 limit:(unsigned int)arg1 withOptions:(int)arg2 handler:(id)arg3 ;
-(void)_fetchServerUnreadCountWithConnection:(id)arg0 ;
-(void)_performActionsOnConnection:(id)arg0 uidsToFetch:(*id)arg1 uidsToSync:(*id)arg2 messagesToCompact:(*id)arg3 serverMessages:(id)arg4 flagSearchResults:(id)arg5 shouldForce:(BOOL)arg6 newUIDsToFetch:(*unsigned int)arg7 ;
-(void)_scheduleIdleTransition:(BOOL)arg0 ;
-(void)_updateServerUnreadCount:(NSUInteger)arg0 ;
-(void)close;
-(void)compact;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 forCommand:(id)arg2 ;
-(void)dealloc;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg0 compact:(BOOL)arg1 ;
-(void)growFetchWindow;
-(void)handleFlagsChangedForMessages:(id)arg0 flags:(id)arg1 oldFlagsByMessage:(id)arg2 ;
-(void)reselectMailbox;
-(void)setHighestModSequence:(NSUInteger)arg0 ;
-(void)setSequenceIdentifier:(id)arg0 forUIDs:(id)arg1 ;
-(void)setServerMessageCount:(NSUInteger)arg0 ;
-(void)updateDeletedCount;
-(void)updateDeletedCountWithNotDeletedCount:(NSUInteger)arg0 ;
-(void)updateServerUnreadCountClosingConnection:(BOOL)arg0 ;
-(void)willRemoveDelegation:(id)arg0 ;


@end


#endif