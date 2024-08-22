// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFIMAPCONNECTION_H
#define MFIMAPCONNECTION_H

@class NSString, NSMutableSet, NSMutableData;
@protocol EFLoggable, ECIMAPServerInterface, EFPubliclyDescribable, MFIMAPMailboxListFilter, MFIMAPConnectionDelegate, EFCancelable;


#import "MFConnection.h"
#import "MFInvocationQueue.h"
#import "MFIMAPDownloadCache.h"
#import "MFIMAPCommandPipeline.h"

@interface MFIMAPConnection : MFConnection <EFLoggable, ECIMAPServerInterface, EFPubliclyDescribable>

 {
    id<MFIMAPMailboxListFilter> *_mailboxListFilter;
    BOOL _capabilityFlags;
    BOOL _verifiedESearchResponse;
    BOOL _connectionState;
    NSString *_separatorChar;
    NSString *_serverNamespace;
    NSString *_selectedMailbox;
    NSMutableSet *_capabilities;
    NSString *_lastRequiredHeaders;
    unsigned int _commandNumber;
    NSMutableData *_data;
    unsigned int _readBufferSize;
    CGFloat _expirationTime;
    MFInvocationQueue *_streamEventQueue;
    BOOL _noModSequence;
    ? _delegateState;
}


@property (readonly, nonatomic) CGFloat connectTime; // ivar: _connectTime
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MFIMAPConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) MFIMAPDownloadCache *downloadCache; // ivar: _downloadCache
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, retain, nonatomic) MFIMAPCommandPipeline *fetchPipeline; // ivar: _fetchPipeline
@property (readonly, nonatomic) BOOL gotBadResponse; // ivar: _gotBadResponse
@property (readonly, nonatomic) BOOL hasValidConnection;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isIdle) BOOL idle;
@property (nonatomic) NSUInteger idleCommandSequenceNumber; // ivar: _idleCommandSequenceNumber
@property (retain, nonatomic) NSObject<EFCancelable> *idleSubscriptionCancelable; // ivar: _idleSubscriptionCancelable
@property (nonatomic) unsigned int permanentFlags; // ivar: _permanentFlags
@property (readonly) Class superclass;
@property (nonatomic) int tag; // ivar: _tag


+(id)log;
+(void)initialize;
+(void)setReadSizeParameters;
-(BOOL)_connectSocketUsingAccount:(id)arg0 ;
-(BOOL)_doBasicConnectionUsingAccount:(id)arg0 ;
-(BOOL)_isFetchResponseValid:(id)arg0 ;
-(BOOL)_sendMailboxCommand:(int)arg0 withArguments:(id)arg1 ;
-(BOOL)_tryConnectionUsingAccount:(id)arg0 ;
-(BOOL)appendData:(id)arg0 toMailboxNamed:(id)arg1 flags:(id)arg2 dateReceived:(id)arg3 appendInfo:(*id)arg4 error:(*id)arg5 ;
-(BOOL)appendData:(id)arg0 toMailboxNamed:(id)arg1 flags:(id)arg2 dateReceived:(id)arg3 newMessageInfo:(*id)arg4 ;
-(BOOL)authenticateUsingAccount:(id)arg0 ;
-(BOOL)authenticateUsingAccount:(id)arg0 authenticator:(id)arg1 ;
-(BOOL)closeAndLogout;
-(BOOL)connectUsingAccount:(id)arg0 ;
-(BOOL)copyUIDs:(id)arg0 toMailboxNamed:(id)arg1 copyInfo:(*id)arg2 error:(*id)arg3 ;
-(BOOL)createMailbox:(id)arg0 ;
-(BOOL)deleteMailbox:(id)arg0 ;
-(BOOL)deleteMessagesOlderThanNumberOfDays:(int)arg0 ;
-(BOOL)examineMailbox:(id)arg0 ;
-(BOOL)expunge;
-(BOOL)expungeUIDs:(id)arg0 ;
-(BOOL)loginDisabled;
-(BOOL)loginWithAccount:(id)arg0 password:(id)arg1 ;
-(BOOL)logout;
-(BOOL)moveUIDs:(id)arg0 toMailboxNamed:(id)arg1 copyInfo:(*id)arg2 error:(*id)arg3 ;
-(BOOL)performCustomCommand:(id)arg0 withArguments:(id)arg1 ;
-(BOOL)renameMailbox:(id)arg0 toMailbox:(id)arg1 ;
-(BOOL)selectMailbox:(id)arg0 withAccount:(id)arg1 ;
-(BOOL)sendResponsesForCommand:(id)arg0 toQueue:(id)arg1 ;
-(BOOL)sendResponsesForCondStoreFlagFetchForUIDs:(id)arg0 withSequenceIdentifier:(*id)arg1 toQueue:(id)arg2 ;
-(BOOL)sendResponsesForUIDFetchForUIDs:(id)arg0 fields:(id)arg1 toQueue:(id)arg2 ;
-(BOOL)sendResponsesForUIDs:(id)arg0 fields:(id)arg1 flagSearchResults:(id)arg2 toQueue:(id)arg3 ;
-(BOOL)sendSkeletonResponsesForUIDs:(id)arg0 includeTo:(BOOL)arg1 toQueue:(id)arg2 ;
-(BOOL)sendUidAndFlagResponsesForUIDs:(id)arg0 sequenceIdentifierProvider:(id)arg1 flagSearchResults:(id)arg2 toQueue:(id)arg3 ;
-(BOOL)sendUidResponsesForSearchArguments:(id)arg0 toQueue:(id)arg1 ;
-(BOOL)startTLSForAccount:(id)arg0 ;
-(BOOL)storeFlagChange:(id)arg0 forUIDs:(id)arg1 ;
-(BOOL)storeFlags:(id)arg0 state:(BOOL)arg1 forMessageSet:(id)arg2 ;
-(BOOL)storeFlags:(id)arg0 state:(BOOL)arg1 forRange:(struct ? )arg2 ;
-(BOOL)storeFlags:(id)arg0 state:(BOOL)arg1 forUIDs:(id)arg2 ;
-(BOOL)storeGmailLabels:(id)arg0 state:(BOOL)arg1 forUIDs:(id)arg2 ;
-(BOOL)subscribeMailbox:(id)arg0 ;
-(BOOL)supportsCapability:(int)arg0 ;
-(BOOL)unsubscribeMailbox:(id)arg0 ;
-(NSUInteger)_sendCommands:(id)arg0 response:(*id)arg1 ;
-(NSUInteger)countForSearchOfIDSet:(id)arg0 forTerms:(id)arg1 success:(*BOOL)arg2 ;
-(NSUInteger)countForSearchOfUidSet:(id)arg0 forTerms:(id)arg1 success:(*BOOL)arg2 ;
-(id)_connectionLogPrefix;
-(id)_connectionStateDescription;
-(id)_copyNextServerResponseForCommand:(id)arg0 ;
-(id)_copyNextTaggedOrContinuationResponseForCommand:(id)arg0 ;
-(id)_dictionaryFromSourceUIDs:(id)arg0 destinationUIDs:(id)arg1 ;
-(id)_doListCommand:(int)arg0 withReference:(id)arg1 mailboxName:(id)arg2 options:(int)arg3 getSpecialUse:(BOOL)arg4 statusDataItems:(id)arg5 statusEntriesByMailbox:(*id)arg6 ;
-(id)_doNamespaceCommand;
-(id)_errorForResponse:(id)arg0 commandParams:(id)arg1 ;
-(id)_fetchArgumentForMessageSkeletonsWithAllHeaders;
-(id)_fetchArgumentForMessageUidsAndFlags;
-(id)_getFirstLevelMessageIDsForReference:(id)arg0 ;
-(id)_getReferencesForMessageSet:(id)arg0 ;
-(id)_headersToFetchIncludingThoseRequiredForRouting:(BOOL)arg0 withRecipients:(BOOL)arg1 ;
-(id)_indexSetForIMAPInlineSet:(id)arg0 ;
-(id)_listingForMailbox:(id)arg0 options:(int)arg1 getSpecialUse:(BOOL)arg2 statusDataItems:(id)arg3 statusEntriesByMailbox:(*id)arg4 withCommand:(int)arg5 ;
-(id)_logStringForCommand:(id)arg0 ;
-(id)_logStringForIDs:(id)arg0 ;
-(id)_messageIDsFromFetchResultData:(id)arg0 ;
-(id)_readDataOfLength:(NSInteger)arg0 ;
-(id)_responseFromSendingCommand:(id)arg0 andPossiblyCreateMailbox:(id)arg1 ;
-(id)_responseFromSendingCommands:(id)arg0 ;
-(id)_searchUidsForMessageIDs:(id)arg0 excludeDeleted:(BOOL)arg1 ;
-(id)_serverErrorForAccount:(id)arg0 response:(id)arg1 command:(id)arg2 ;
-(id)_uidsForMessageIDs:(id)arg0 excludeDeleted:(BOOL)arg1 ;
-(id)capabilities;
-(id)copyArgumentForSearchTerm:(id)arg0 ;
-(id)copyDiagnosticInformation;
-(id)copyInfoForMessageInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)eSearchIDSet:(id)arg0 areMessageSequenceNumbers:(BOOL)arg1 arguments:(id)arg2 success:(*BOOL)arg3 returning:(int)arg4 ;
-(id)eSearchIDSet:(id)arg0 areMessageSequenceNumbers:(BOOL)arg1 forTerms:(id)arg2 success:(*BOOL)arg3 returning:(int)arg4 ;
-(id)fetchMessageIdsForUids:(id)arg0 ;
-(id)init;
-(id)listingForMailbox:(id)arg0 options:(int)arg1 getSpecialUse:(BOOL)arg2 statusDataItems:(id)arg3 statusEntriesByMailbox:(*id)arg4 ;
-(id)mailboxListFilter;
-(id)messageSetForNumbers:(id)arg0 ;
-(id)messageSetForRange:(struct ? )arg0 ;
-(id)messageSetForRange:(struct ? )arg0 butNotNumbers:(id)arg1 ;
-(id)messageSetForUIDs:(id)arg0 ;
-(id)messageSetForUIDs:(id)arg0 maxTokens:(NSUInteger)arg1 remainder:(*id)arg2 ;
-(id)parenthesizedStringWithObjects:(id)arg0 ;
-(id)parseIndexSetFromSequenceSet:(id)arg0 ;
-(id)quotaPercentagesForMailbox:(id)arg0 ;
-(id)searchIDSet:(id)arg0 forTerms:(id)arg1 success:(*BOOL)arg2 ;
-(id)searchUIDs:(id)arg0 withFlagRequests:(id)arg1 ;
-(id)searchUidSet:(id)arg0 forTerms:(id)arg1 success:(*BOOL)arg2 ;
-(id)selectedMailbox;
-(id)separatorChar;
-(id)serverPathPrefix;
-(id)subscribedListingForMailbox:(id)arg0 options:(int)arg1 ;
-(id)uidsReferencedBy:(id)arg0 ;
-(int)_doIMAPLoginForAccount:(id)arg0 quotedUsername:(id)arg1 password:(id)arg2 ;
-(int)connectionState;
-(int)fillLiteralBuffer:(char *)arg0 count:(NSUInteger)arg1 dataLength:(NSUInteger)arg2 nonSynchronizingLiteral:(*BOOL)arg3 ;
-(unsigned int)getMailboxIDForUID:(unsigned int)arg0 ;
-(unsigned int)literalChunkSize;
-(unsigned int)readBufferSize;
-(void)_addCapabilities:(id)arg0 ;
-(void)_clearCapabilities;
-(void)_enableCompressionIfSupported;
-(void)_fetchCapabilities;
-(void)_handleBytesAvailableInternal;
-(void)_sendApplePushForAccountIfSupported:(id)arg0 ;
-(void)_sendClientInfoIfSupported;
-(void)_updateCapabilitiesForAccount:(id)arg0 withAuthenticationResponse:(id)arg1 ;
-(void)_updateSearchCapabilityWithAccount:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)didFinishCommands:(id)arg0 ;
-(void)disconnect;
-(void)disconnectAndNotifyDelegate:(BOOL)arg0 ;
-(void)fetchStatusForMailboxes:(id)arg0 args:(id)arg1 ;
-(void)finishIdle;
-(void)handleBytesAvailable;
-(void)lock;
-(void)locked_finishIdle;
-(void)locked_scheduleIdle;
-(void)locked_scheduleIdleResetAfterDelay:(CGFloat)arg0 ;
-(void)locked_startIdle;
-(void)noop;
-(void)parseESearchResponseWithContext:(id)arg0 ;
-(void)parseSearchReturn:(id)arg0 ;
-(void)scheduleIdleReset;
-(void)setMailboxListFilter:(id)arg0 ;
-(void)setReadBufferSize:(unsigned int)arg0 ;
-(void)setReadBufferSizeFromElapsedTime:(CGFloat)arg0 bytesRead:(NSUInteger)arg1 ;
-(void)unselect;


@end


#endif