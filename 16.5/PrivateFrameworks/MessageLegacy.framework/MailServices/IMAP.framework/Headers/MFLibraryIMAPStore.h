// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFLIBRARYIMAPSTORE_H
#define MFLIBRARYIMAPSTORE_H

@class MFLibraryStore, NSString, NSArray, NSLock, EFCancelationToken;
@protocol MFIMAPConnectionDelegate, MFIMAPSequenceIdentifierProvider;


#import "MFIMAPDownloadCache.h"
#import "MFIMAPCommandPipeline.h"
#import "MFIMAPConnection.h"

@interface MFLibraryIMAPStore : MFLibraryStore <MFIMAPConnectionDelegate, MFIMAPSequenceIdentifierProvider>

 {
    BOOL _supportsCustomPermanentFlags;
    BOOL _supportsJunkFlag;
    BOOL _supportsDollarJunkFlag;
    BOOL _supportsNotJunkFlag;
    BOOL _supportsDollarNotJunkFlag;
    BOOL _supportsForwardedFlag;
    BOOL _supportsDollarForwardedFlag;
    BOOL _updatingCache;
    BOOL _updateMetadata;
    BOOL _readyToDealloc;
    BOOL _didSynchronizeOldMessages;
    BOOL _recentsExist;
    BOOL _settingServerCount;
    BOOL _reserved;
    NSString *_mailboxName;
    MFIMAPDownloadCache *_downloadCache;
    MFIMAPCommandPipeline *_fetchPipeline;
    NSUInteger _serverDeletedCount;
    NSUInteger _serverUidNext;
    NSUInteger _lastHighestModSequence;
    NSUInteger _highestModSequence;
    NSString *_selectedUID;
    unsigned int _currentFetchUid;
    NSString *_relativePath;
    NSArray *_additionalSynchronizationSearchArguments;
    NSArray *_additionalFetchHeaders;
    id *_downloadDelegate;
    MFIMAPConnection *_cachedConnection;
    NSLock *_cachedConnectionLock;
}


@property (retain, nonatomic) EFCancelationToken *cancelationToken; // ivar: _cancelationToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL shouldUseIDLE; // ivar: _shouldUseIDLE
@property (readonly) Class superclass;


+(id)copyRemoteIDForTemporaryUid:(unsigned int)arg0 ;
+(void)setHandlerForTemporaryUidToRemoteIDMapping:(id)arg0 ;
-(BOOL)_changedFlagsForMessage:(id)arg0 fetchResponse:(id)arg1 newFlags:(*NSUInteger)arg2 ;
-(BOOL)_doUidCopy:(struct ? *)arg0 toStore:(id)arg1 newMessages:(id)arg2 ;
-(BOOL)_fetchDataForMimePart:(id)arg0 range:(struct _NSRange )arg1 isComplete:(*BOOL)arg2 consumer:(id)arg3 ;
-(BOOL)_selectMailbox:(id)arg0 withConnection:(id)arg1 ;
-(BOOL)_shouldContinueToPreservedUID:(NSUInteger)arg0 ;
-(BOOL)allowsAppend;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(BOOL)canCompact;
-(BOOL)canFetchMessageIDs;
-(BOOL)canFetchSearchResults;
-(BOOL)canPerformOfflineAppend;
-(BOOL)connection:(id)arg0 shouldHandleUntaggedResponse:(id)arg1 forCommand:(struct ? *)arg2 ;
-(BOOL)hasValidCacheFileForMessage:(id)arg0 ;
-(BOOL)performBatchOperationWithUIDs:(id)arg0 requiringConnection:(BOOL)arg1 withOptions:(int)arg2 operation:(id)arg3 ;
-(BOOL)performOperationRequiringConnection:(BOOL)arg0 withOptions:(int)arg1 operation:(id)arg2 ;
-(BOOL)setPreferredEncoding:(unsigned int)arg0 forMessage:(id)arg1 ;
-(BOOL)shouldRetryEmptyBodyDownloadForMessage:(id)arg0 ;
-(BOOL)shouldStartIdleForConnection:(id)arg0 ;
-(NSInteger)fetchMessagesMatchingCriterion:(id)arg0 limit:(unsigned int)arg1 ;
-(NSInteger)fetchMessagesWithMessageIDs:(id)arg0 andSetFlags:(NSUInteger)arg1 ;
-(NSInteger)fetchMessagesWithRemoteIDs:(id)arg0 andSetFlags:(NSUInteger)arg1 ;
-(NSInteger)fetchNumMessages:(NSUInteger)arg0 preservingUID:(id)arg1 options:(NSUInteger)arg2 ;
-(NSUInteger)_doAppend:(struct ? *)arg0 ;
-(NSUInteger)_fetchMessagesWithArguments:(id)arg0 idRange:(id)arg1 onConnection:(id)arg2 synchronize:(BOOL)arg3 limit:(NSUInteger)arg4 topUIDToCompact:(NSUInteger)arg5 topKnownUID:(NSUInteger)arg6 success:(*BOOL)arg7 examinedRange:(struct _NSRange *)arg8 fetchableUIDsFound:(*NSUInteger)arg9 preserveUID:(*NSUInteger)arg10 numFetchedUIDs:(*NSUInteger)arg11 ;
-(NSUInteger)appendMessages:(id)arg0 unsuccessfulOnes:(id)arg1 newMessageIDs:(id)arg2 newMessages:(id)arg3 flagsToSet:(id)arg4 ;
-(NSUInteger)appendMessages:(id)arg0 unsuccessfulOnes:(id)arg1 newMessageIDs:(id)arg2 newMessages:(id)arg3 flagsToSet:(id)arg4 customIMAPFlagsToSet:(id)arg5 ;
-(NSUInteger)fetchMessagesWithUIDs:(id)arg0 connection:(id)arg1 newCount:(NSUInteger)arg2 flagsToSet:(NSUInteger)arg3 queueClass:(Class)arg4 ;
-(NSUInteger)growFetchWindow;
-(NSUInteger)serverMessageCount;
-(NSUInteger)syncMessagesWithUIDs:(id)arg0 connection:(id)arg1 libraryDetails:(id)arg2 flagSearchResults:(id)arg3 ;
-(id)_dataForMessage:(id)arg0 readHeadersOnly:(BOOL)arg1 ;
-(id)_downloadForMessageBodyData:(id)arg0 ;
-(id)_fetchBodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 downloadIfNecessary:(BOOL)arg2 partial:(*BOOL)arg3 ;
-(id)_fetchFullBodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 downloadIfNecessary:(BOOL)arg2 didDownload:(*BOOL)arg3 ;
-(id)_fetchHeaderDataForMessage:(id)arg0 downloadIfNecessary:(BOOL)arg1 ;
-(id)_idleConditionsObservable;
-(id)_newSearchResponseQueueForConnection:(id)arg0 limit:(unsigned int)arg1 ;
-(id)_observeChangesInIdleConditions;
-(id)_performBodyDataDownload:(id)arg0 usingConnection:(id)arg1 isPartial:(*BOOL)arg2 ;
-(id)_searchArgumentsForSynchronize;
-(id)_searchFlagsForUIDs:(id)arg0 usingConnection:(id)arg1 ;
-(id)_uidsForMessages:(id)arg0 ;
-(id)_updateLibraryForTransferedMessages:(id)arg0 toDestinationMailbox:(id)arg1 newMessageInfo:(id)arg2 flagsToSet:(id)arg3 ;
-(id)addMessages:(id)arg0 newMessagesByOldMessage:(id)arg1 ;
-(id)deletedMessages;
-(id)downloadCache;
-(id)fetchPipeline;
-(id)initWithMailboxUid:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)mailboxName;
-(id)messageForRemoteID:(id)arg0 ;
-(id)messageForRemoteID:(id)arg0 inMailbox:(id)arg1 ;
-(id)messageIdRollCall:(id)arg0 ;
-(id)moveMessages:(id)arg0 toMailbox:(id)arg1 markAsRead:(BOOL)arg2 ;
-(id)newDictionaryForLocalFlags:(NSUInteger)arg0 serverFlags:(NSUInteger)arg1 existingDictionary:(id)arg2 ;
-(id)offlineCache;
-(id)offlineCacheIfOffline;
-(id)relativePath;
-(id)remoteIDsFromUniqueRemoteIDs:(id)arg0 ;
-(id)sequenceIdentifierForUIDs:(id)arg0 ;
-(id)setFlagsFromDictionary:(id)arg0 forMessages:(id)arg1 ;
-(id)storeSearchResultMatchingCriterion:(id)arg0 limit:(unsigned int)arg1 offset:(id)arg2 error:(*id)arg3 ;
-(id)uniqueRemoteIDsForMessages:(id)arg0 ;
-(id)willSetFlagsFromDictionary:(id)arg0 forMessages:(id)arg1 ;
-(void)_addOfflineTransferMessages:(id)arg0 ;
-(void)_fetchMessagesMatchingCriterion:(id)arg0 limit:(unsigned int)arg1 withOptions:(int)arg2 handler:(id)arg3 ;
-(void)_fetchServerUnreadCountWithConnection:(id)arg0 ;
-(void)_handleFlagsChangedForMessages:(id)arg0 flags:(id)arg1 oldFlagsByMessage:(id)arg2 ;
-(void)_performActionsOnConnection:(id)arg0 uidsToFetch:(*id)arg1 uidsToSync:(*id)arg2 messagesToCompact:(*id)arg3 libraryDetails:(id)arg4 flagSearchResults:(id)arg5 shouldForce:(BOOL)arg6 newUIDsToFetch:(*unsigned int)arg7 ;
-(void)_scheduleIdleTransition:(BOOL)arg0 ;
-(void)_setFlagsForMessages:(id)arg0 ;
-(void)_setFlagsFromDictionary:(id)arg0 forMessages:(id)arg1 ;
-(void)_synchronouslySetFlags:(id)arg0 clearFlags:(id)arg1 forMessages:(id)arg2 originalChanges:(id)arg3 ;
-(void)_updateSelectedUID:(*NSUInteger)arg0 ;
-(void)_updateServerUnreadCount:(NSUInteger)arg0 ;
-(void)addFlagChanges:(id)arg0 forMessages:(id)arg1 ;
-(void)close;
-(void)connection:(id)arg0 didBeginBodyLoad:(id)arg1 section:(id)arg2 ;
-(void)connection:(id)arg0 didFinishLoadingBodyData:(id)arg1 section:(id)arg2 ;
-(void)connection:(id)arg0 didLoadMoreBodyData:(id)arg1 section:(id)arg2 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 forCommand:(struct ? *)arg2 ;
-(void)connectionDidDisconnect:(id)arg0 ;
-(void)dealloc;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg0 compact:(BOOL)arg1 ;
-(void)doCompact;
-(void)focusedMessageDidChange:(id)arg0 ;
-(void)removeAllLocalMessages;
-(void)reselectMailbox;
-(void)setAdditionalFetchHeaders:(id)arg0 ;
-(void)setAdditionalSynchronizationSearchArguments:(id)arg0 ;
-(void)setDownloadDelegate:(id)arg0 ;
-(void)setFlagsCancelled:(id)arg0 forMessages:(id)arg1 ;
-(void)setFlagsForAllMessagesFromDictionary:(id)arg0 ;
-(void)setHighestModSequence:(NSUInteger)arg0 ;
-(void)setMailboxUidValidity:(unsigned int)arg0 ;
-(void)setSequenceIdentifier:(id)arg0 forUIDs:(id)arg1 ;
-(void)setServerMessageCount:(NSUInteger)arg0 ;
-(void)setUid:(unsigned int)arg0 forMessageWithTemporaryUid:(unsigned int)arg1 ;
-(void)updateDeletedCount;
-(void)updateDeletedCountWithNotDeletedCount:(NSUInteger)arg0 ;
-(void)updateServerUnreadCountClosingConnection:(BOOL)arg0 ;
-(void)willRemoveDelegation:(id)arg0 ;


@end


#endif