// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFIMAPCONNECTION_H
#define MFIMAPCONNECTION_H

@class MFConnection, NSString, NSMutableSet, NSArray, NSMutableData, MFInvocationQueue;
@protocol MFIMAPMailboxListFilter, MFIMAPConnectionDelegate, EFCancelable;



@interface MFIMAPConnection : MFConnection {
    id<MFIMAPMailboxListFilter> *_mailboxListFilter;
    BOOL _capabilityFlags;
    BOOL _verifiedESearchResponse;
    BOOL _connectionState;
    NSString *_separatorChar;
    NSString *_serverNamespace;
    NSString *_selectedMailbox;
    NSMutableSet *_capabilities;
    NSArray *_lastRequiredHeadersArray;
    NSString *_lastRequiredHeaders;
    unsigned int _commandNumber;
    NSMutableData *_data;
    unsigned int _readBufferSize;
    CGFloat _expirationTime;
    MFInvocationQueue *_streamEventQueue;
    NSArray *_additionalHeadersForFetch;
    BOOL _noModSequence;
    ? _delegateState;
}


@property (copy) NSArray *additionalHeadersForFetch;
@property (readonly, nonatomic) CGFloat connectTime; // ivar: _connectTime
@property (weak, nonatomic) NSObject<MFIMAPConnectionDelegate> *delegate;
@property (readonly, nonatomic) BOOL gotBadResponse; // ivar: _gotBadResponse
@property (readonly, nonatomic, getter=isIdle) BOOL idle;
@property (nonatomic) NSUInteger idleCommandSequenceNumber; // ivar: _idleCommandSequenceNumber
@property (retain, nonatomic) NSObject<EFCancelable> *idleSubscriptionCancelable; // ivar: _idleSubscriptionCancelable
@property (nonatomic) int tag; // ivar: _tag
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(id)_UIDPlusInfoFromIMAPResponses:(id)arg0 ;
+(void)initialize;
+(void)setReadSizeParameters;
-(BOOL)_doBasicConnectionUsingAccount:(id)arg0 ;
-(BOOL)_doUidFetchWithRange:(struct ? )arg0 arguments:(id)arg1 validateMessage:(BOOL)arg2 responses:(id)arg3 ;
-(BOOL)_isFetchResponseValid:(id)arg0 ;
-(BOOL)_sendMailboxCommand:(int)arg0 withArguments:(id)arg1 ;
-(BOOL)_tryConnectionUsingAccount:(id)arg0 ;
-(BOOL)appendData:(id)arg0 toMailboxNamed:(id)arg1 flags:(id)arg2 dateReceived:(id)arg3 newMessageInfo:(*id)arg4 ;
-(BOOL)authenticateUsingAccount:(id)arg0 ;
-(BOOL)authenticateUsingAccount:(id)arg0 authenticator:(id)arg1 ;
-(BOOL)closeAndLogout;
-(BOOL)connectUsingAccount:(id)arg0 ;
-(BOOL)copyUids:(id)arg0 toMailboxNamed:(id)arg1 newMessageInfo:(*id)arg2 ;
-(BOOL)createMailbox:(id)arg0 ;
-(BOOL)deleteMailbox:(id)arg0 ;
-(BOOL)deleteMessagesOlderThanNumberOfDays:(int)arg0 ;
-(BOOL)examineMailbox:(id)arg0 ;
-(BOOL)expunge;
-(BOOL)expungeUids:(id)arg0 ;
-(BOOL)getQuotaForRootName:(id)arg0 ;
-(BOOL)loginDisabled;
-(BOOL)loginWithAccount:(id)arg0 password:(id)arg1 ;
-(BOOL)logout;
-(BOOL)performCustomCommand:(id)arg0 withArguments:(id)arg1 ;
-(BOOL)renameMailbox:(id)arg0 toMailbox:(id)arg1 ;
-(BOOL)selectMailbox:(id)arg0 withAccount:(id)arg1 ;
-(BOOL)sendResponsesForCommand:(struct ? *)arg0 toQueue:(id)arg1 ;
-(BOOL)sendResponsesForCondStoreFlagFetchForUIDs:(id)arg0 withSequenceIdentifier:(*id)arg1 toQueue:(id)arg2 ;
-(BOOL)sendResponsesForUIDFetchForUIDs:(id)arg0 fields:(id)arg1 toQueue:(id)arg2 ;
-(BOOL)sendResponsesForUIDs:(id)arg0 fields:(id)arg1 flagSearchResults:(id)arg2 toQueue:(id)arg3 ;
-(BOOL)sendSkeletonResponsesForUIDs:(id)arg0 includeTo:(BOOL)arg1 toQueue:(id)arg2 ;
-(BOOL)sendUidAndFlagResponsesForUIDs:(id)arg0 sequenceIdentifierProvider:(id)arg1 flagSearchResults:(id)arg2 toQueue:(id)arg3 ;
-(BOOL)sendUidResponsesForSearchArguments:(id)arg0 toQueue:(id)arg1 ;
-(BOOL)startTLSForAccount:(id)arg0 ;
-(BOOL)storeFlags:(id)arg0 state:(BOOL)arg1 forMessageSet:(id)arg2 ;
-(BOOL)storeFlags:(id)arg0 state:(BOOL)arg1 forRange:(struct ? )arg2 ;
-(BOOL)storeFlags:(id)arg0 state:(BOOL)arg1 forUids:(id)arg2 ;
-(BOOL)subscribeMailbox:(id)arg0 ;
-(BOOL)supportsCapability:(int)arg0 ;
-(BOOL)unsubscribeMailbox:(id)arg0 ;
-(NSInteger)_moveMessageSet:(id)arg0 toMailboxName:(id)arg1 command:(int)arg2 newMessageInfo:(*id)arg3 ;
-(NSInteger)moveSequenceSet:(id)arg0 toMailboxName:(id)arg1 newMessageInfo:(*id)arg2 ;
-(NSInteger)moveUIDSet:(id)arg0 toMailboxNamed:(id)arg1 newMessageInfo:(*id)arg2 ;
-(NSUInteger)_sendCommands:(struct ? *)arg0 count:(NSUInteger)arg1 response:(*id)arg2 ;
-(NSUInteger)countForSearchOfIDSet:(id)arg0 forTerms:(id)arg1 success:(*BOOL)arg2 ;
-(NSUInteger)countForSearchOfUidSet:(id)arg0 forTerms:(id)arg1 success:(*BOOL)arg2 ;
-(id)_copyNextServerResponseForCommand:(struct ? *)arg0 ;
-(id)_copyNextTaggedOrContinuationResponseForCommand:(struct ? *)arg0 ;
-(id)_doListCommand:(int)arg0 withReference:(id)arg1 mailboxName:(id)arg2 options:(int)arg3 getSpecialUse:(BOOL)arg4 statusDataItems:(id)arg5 statusEntriesByMailbox:(*id)arg6 ;
-(id)_doNamespaceCommand;
-(id)_errorForResponse:(id)arg0 commandParams:(struct ? *)arg1 ;
-(id)_fetchArgumentForMessageSkeletonsWithHeaders:(id)arg0 ;
-(id)_fetchArgumentForMessageUidsAndFlags;
-(id)_getFirstLevelMessageIDsForReference:(id)arg0 ;
-(id)_getReferencesForMessageSet:(id)arg0 ;
-(id)_headersToFetchIncludingThoseRequiredForRouting:(BOOL)arg0 withRecipients:(BOOL)arg1 ;
-(id)_listingForMailbox:(id)arg0 options:(int)arg1 getSpecialUse:(BOOL)arg2 statusDataItems:(id)arg3 statusEntriesByMailbox:(*id)arg4 withCommand:(int)arg5 ;
-(id)_messageIDsFromFetchResultData:(id)arg0 ;
-(id)_readDataOfLength:(NSInteger)arg0 ;
-(id)_responseFromSendingCommand:(struct ? *)arg0 andPossiblyCreateMailbox:(id)arg1 ;
-(id)_responseFromSendingCommands:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(id)_searchUidsForMessageIDs:(id)arg0 excludeDeleted:(BOOL)arg1 ;
-(id)_serverErrorForAccount:(id)arg0 response:(id)arg1 command:(struct ? *)arg2 ;
-(id)_uidsForMessageIDs:(id)arg0 excludeDeleted:(BOOL)arg1 ;
-(id)capabilities;
-(id)copyArgumentForSearchTerm:(id)arg0 ;
-(id)copyDiagnosticInformation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)eSearchIDSet:(id)arg0 areMessageSequenceNumbers:(BOOL)arg1 arguments:(id)arg2 success:(*BOOL)arg3 returning:(int)arg4 ;
-(id)eSearchIDSet:(id)arg0 areMessageSequenceNumbers:(BOOL)arg1 forTerms:(id)arg2 success:(*BOOL)arg3 returning:(int)arg4 ;
-(id)fetchArgumentForMessageSkeletonsWithTo:(BOOL)arg0 ;
-(id)fetchHeadersForUid:(unsigned int)arg0 ;
-(id)fetchMessageIdsForUids:(id)arg0 ;
-(id)fetchUniqueRemoteIDsForUids:(id)arg0 ;
-(id)init;
-(id)listingForMailbox:(id)arg0 options:(int)arg1 getSpecialUse:(BOOL)arg2 statusDataItems:(id)arg3 statusEntriesByMailbox:(*id)arg4 ;
-(id)mailboxListFilter;
-(id)messageSetForNumbers:(id)arg0 ;
-(id)messageSetForNumbers:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)messageSetForNumbers:(id)arg0 range:(struct _NSRange )arg1 maxTokens:(NSUInteger)arg2 indexOfLastNumber:(*NSUInteger)arg3 ;
-(id)messageSetForRange:(struct ? )arg0 ;
-(id)messageSetForRange:(struct ? )arg0 butNotNumbers:(id)arg1 ;
-(id)parenthesizedStringWithObjects:(id)arg0 ;
-(id)parseIndexSetFromSequenceSet:(id)arg0 ;
-(id)quotaPercentagesForMailbox:(id)arg0 ;
-(id)searchIDSet:(id)arg0 forTerms:(id)arg1 success:(*BOOL)arg2 ;
-(id)searchUIDs:(id)arg0 withFlagRequests:(id)arg1 ;
-(id)searchUidSet:(id)arg0 forNewMessageIDs:(id)arg1 ;
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
-(void)_sendApplePushForAccountIfSupported:(id)arg0 ;
-(void)_sendClientInfoIfSupported;
-(void)_updateCapabilitiesForAccount:(id)arg0 withAuthenticationResponse:(id)arg1 ;
-(void)_updateSearchCapabilityWithAccount:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)didFinishCommands:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)disconnect;
-(void)disconnectAndNotifyDelegate:(BOOL)arg0 ;
-(void)fetchStatusForMailboxes:(id)arg0 args:(id)arg1 ;
-(void)fetchTotalSize:(*NSUInteger)arg0 andMessageCount:(*unsigned int)arg1 ;
-(void)finishIdle;
-(void)handleBytesAvailable;
-(void)handleStreamEvent:(NSUInteger)arg0 ;
-(void)lock;
-(void)locked_finishIdle;
-(void)locked_scheduleIdle;
-(void)locked_scheduleIdleResetAfterDelay:(CGFloat)arg0 ;
-(void)locked_startIdle;
-(void)noop;
-(void)notifyDelegateOfBodyLoadAppendage:(id)arg0 section:(id)arg1 ;
-(void)notifyDelegateOfBodyLoadCompletion:(id)arg0 section:(id)arg1 ;
-(void)notifyDelegateOfBodyLoadStart:(id)arg0 section:(id)arg1 ;
-(void)parseESearchResponseWithContext:(id)arg0 ;
-(void)parseSearchReturn:(id)arg0 ;
-(void)scheduleIdleReset;
-(void)setMailboxListFilter:(id)arg0 ;
-(void)setReadBufferSize:(unsigned int)arg0 ;
-(void)setReadBufferSizeFromElapsedTime:(CGFloat)arg0 bytesRead:(NSUInteger)arg1 ;
-(void)unselect;


@end


#endif