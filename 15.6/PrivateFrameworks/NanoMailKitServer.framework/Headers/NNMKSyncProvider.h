// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NNMKSYNCPROVIDER_H
#define NNMKSYNCPROVIDER_H

@class NSString;
@protocol NNMKMessagesSyncServiceServerDelegate, NNMKMessageContentSyncServiceServerDelegate, NNMKAccountsSyncServiceServerDelegate, NNMKFetchesSyncServiceServerDelegate, NNMKInitialSyncProgressTrackerDelegate, NNMKDeviceRegistryHolder, NNMKResendSchedulerDelegate, NNMKSyncStateManagerDelegate, NNMKBatchRequestHandlerDelegate, NNMKSyncProviderDelegate, NNMKDirectoryProvider, OS_dispatch_queue, NNMKSyncStateManager;


#import "NNMKSyncEndpoint.h"
#import "NNMKAccountsSyncServiceServer.h"
#import "NNMKBatchRequestHandler.h"
#import "NNMKMessageContentSyncServiceServer.h"
#import "NNMKFetchesSyncServiceServer.h"
#import "NNMKInitialSyncProgressTracker.h"
#import "NNMKMailboxSelection.h"
#import "NNMKMessagesSyncServiceServer.h"
#import "NNMKPairedDeviceInfo.h"
#import "NNMKDeviceSyncRegistry.h"
#import "NNMKSyncPersistenceHandler.h"
#import "NNMKProtectedContentSyncServiceServer.h"
#import "NNMKProtectedSyncServiceServer.h"
#import "NNMKResendScheduler.h"
#import "NNMKSyncSessionController.h"
#import "NNMKSyncController.h"

@interface NNMKSyncProvider : NNMKSyncEndpoint <NNMKMessagesSyncServiceServerDelegate, NNMKMessageContentSyncServiceServerDelegate, NNMKAccountsSyncServiceServerDelegate, NNMKFetchesSyncServiceServerDelegate, NNMKInitialSyncProgressTrackerDelegate, NNMKDeviceRegistryHolder, NNMKResendSchedulerDelegate, NNMKSyncStateManagerDelegate, NNMKBatchRequestHandlerDelegate>

 {
    BOOL _pairedDeviceSupportsMultipleMailboxes;
}


@property (retain, nonatomic) NNMKAccountsSyncServiceServer *accountsSyncService; // ivar: _accountsSyncService
@property (retain, nonatomic) NNMKBatchRequestHandler *batchRequestHandler; // ivar: _batchRequestHandler
@property (retain, nonatomic) NNMKMessageContentSyncServiceServer *contentSyncService; // ivar: _contentSyncService
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NNMKSyncProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<NNMKDirectoryProvider> *directoryProvider; // ivar: _directoryProvider
@property (retain, nonatomic) NNMKFetchesSyncServiceServer *fetchesSyncService; // ivar: _fetchesSyncService
@property (nonatomic) BOOL fullSyncRecoveredInThisSession; // ivar: _fullSyncRecoveredInThisSession
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NNMKInitialSyncProgressTracker *initialSyncProgressTracker; // ivar: _initialSyncProgressTracker
@property (readonly, nonatomic) BOOL isPaired;
@property (readonly, nonatomic) NNMKMailboxSelection *mailboxSelection;
@property (retain, nonatomic) NNMKMessagesSyncServiceServer *messagesSyncService; // ivar: _messagesSyncService
@property (nonatomic) BOOL organizeByThread;
@property (readonly, nonatomic) NNMKPairedDeviceInfo *pairedDeviceInfo;
@property (retain, nonatomic) NNMKDeviceSyncRegistry *pairedDeviceRegistry; // ivar: _pairedDeviceRegistry
@property (retain, nonatomic) NNMKSyncPersistenceHandler *persistenceHandler; // ivar: _persistenceHandler
@property (retain, nonatomic) NNMKProtectedContentSyncServiceServer *protectedContentSyncService; // ivar: _protectedContentSyncService
@property (retain, nonatomic) NNMKProtectedSyncServiceServer *protectedSyncService; // ivar: _protectedSyncService
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *providerQueue; // ivar: _providerQueue
@property (retain, nonatomic) NNMKResendScheduler *resendScheduler; // ivar: _resendScheduler
@property (retain, nonatomic) NNMKSyncSessionController *sessionController; // ivar: _sessionController
@property (readonly) Class superclass;
@property (retain, nonatomic) NNMKSyncController *syncController; // ivar: _syncController
@property (retain, nonatomic) NSObject<NNMKSyncStateManager> *syncStateManager; // ivar: _syncStateManager
@property (nonatomic) BOOL triggeredInitialSyncToRecoverFromSyncVersionMismatch; // ivar: _triggeredInitialSyncToRecoverFromSyncVersionMismatch


+(BOOL)prepareForSystemAppDeletion:(*id)arg0 ;
-(BOOL)_isConnectedToWatch;
-(BOOL)_isUsingCompaionSync;
-(BOOL)_pairedDeviceSupportsMultipleMailboxes;
-(BOOL)_verifyDatabaseOkForFullSyncVersion:(NSUInteger)arg0 ;
-(BOOL)_verifyDatabaseOkForFullSyncVersion:(NSUInteger)arg0 mailbox:(id)arg1 ;
-(BOOL)containsSyncedMailbox:(id)arg0 ;
-(BOOL)isMessageOkForSyncedMailboxes:(id)arg0 ;
-(BOOL)pairedDeviceSupportsMultipleMailboxes;
-(BOOL)pairedDeviceSupportsStandaloneMode;
-(BOOL)syncStateManagerShouldAddFavoriteSubsectionForMailboxId:(id)arg0 ;
-(NSUInteger)resendScheduler:(id)arg0 didRequestNewResendIntervalForPreviousResendInterval:(NSUInteger)arg1 errorCode:(NSInteger)arg2 ;
-(id)_bbSubsectionIdsForMessage:(id)arg0 ;
-(id)_createDefaultSyncStateManager;
-(id)_handleFetchRequest:(id)arg0 shouldResumeSync:(*BOOL)arg1 ;
-(id)_initialSyncForMailbox:(id)arg0 messages:(id)arg1 shouldUseProtectedChannel:(BOOL)arg2 ;
-(id)_legacy_sendFirstMessages:(id)arg0 syncedMailbox:(id)arg1 shouldUseProtectedChannel:(BOOL)arg2 ;
-(id)_messageProtobufForMessage:(id)arg0 ;
-(id)_sendFirstMessages:(id)arg0 mailboxes:(id)arg1 shouldUseProtectedChannel:(BOOL)arg2 ;
-(id)_watchAccounts;
-(id)bulletinFlagsForMessageStatus:(NSUInteger)arg0 dateReceived:(id)arg1 messageWillBeAddedToSyncProvider:(BOOL)arg2 mailboxId:(id)arg3 ;
-(id)currentDeviceRegistry;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 syncStateManager:(id)arg1 directoryProvider:(id)arg2 ;
-(id)requestWatchAccounts;
-(id)syncServiceEndpoints;
-(id)syncedMailboxes;
-(id)watchAccounts;
-(void)_addAttachmentData:(id)arg0 forMessageId:(id)arg1 contentId:(id)arg2 loadedProtected:(BOOL)arg3 mailbox:(id)arg4 ;
-(void)_addMessageContent:(id)arg0 forMessage:(id)arg1 loadedProtected:(BOOL)arg2 mailbox:(id)arg3 ;
-(void)_addMessages:(id)arg0 mailbox:(id)arg1 ;
-(void)_addMessages:(id)arg0 messagesAreNew:(BOOL)arg1 mailbox:(id)arg2 ;
-(void)_checkBatchFetchedMessages;
-(void)_checkConnectivityBasedSuspensionTimer:(BOOL)arg0 ;
-(void)_deleteMessagesWithIds:(id)arg0 mailbox:(id)arg1 ;
-(void)_fastForwardToFullSyncVersion:(NSUInteger)arg0 ;
-(void)_handleDidFailSendingProtobufWithIDSIdentifier:(id)arg0 errorCode:(NSInteger)arg1 ;
-(void)_handleDidPairWithNewDevice;
-(void)_handleDidUnpair;
-(void)_handleFetchRequestFromWatch:(id)arg0 ;
-(void)_handleHaltSyncForMailbox:(id)arg0 ;
-(void)_handleMailboxesDesync;
-(void)_markConversationIdForNotify:(id)arg0 messages:(id)arg1 includesProtectedMessages:(BOOL)arg2 mailbox:(id)arg3 ;
-(void)_markConversationWithId:(id)arg0 forState:(NSUInteger)arg1 include:(BOOL)arg2 mailbox:(id)arg3 ;
-(void)_notifyDelegateThatMessagesStatusWereUpdated:(id)arg0 ;
-(void)_replyWithMessagesToResend:(id)arg0 includesProtectedMessages:(BOOL)arg1 mailbox:(id)arg2 ;
-(void)_replyWithMoreMessages:(id)arg0 forConversationWithId:(id)arg1 includesProtectedMessages:(BOOL)arg2 mailbox:(id)arg3 ;
-(void)_replyWithMoreMessages:(id)arg0 forDateReceivedBefore:(id)arg1 includesProtectedMessages:(BOOL)arg2 mailbox:(id)arg3 messagesForSpecialMailbox:(NSUInteger)arg4 ;
-(void)_reportMessageContentDownloadFailureForMessageId:(id)arg0 mailbox:(id)arg1 ;
-(void)_requestDelegateForAccounts;
-(void)_requestDelegateForContentForMessageIds:(id)arg0 highPriority:(BOOL)arg1 ;
-(void)_requestDelegateForContentForMessageWithId:(id)arg0 highPriority:(BOOL)arg1 ;
-(void)_requestDelegateForFetchForMailboxes:(id)arg0 ;
-(void)_requestDelegateForFirstMessagesForMailboxes:(id)arg0 ;
-(void)_requestDelegateForMessagesToSendAsFetchResponseForMessageIds:(id)arg0 ;
-(void)_requestDelegateForMoreMessagesBeforeDateReceived:(id)arg0 forConversationWithId:(id)arg1 mailbox:(id)arg2 ;
-(void)_requestDelegateForMoreMessagesWithMailbox:(id)arg0 beforeDate:(id)arg1 messagesForspecialMailboxFilterType:(NSUInteger)arg2 ;
-(void)_requestDelegateForResendingAccountWithId:(id)arg0 ;
-(void)_requestDelegateForResendingMessagesWithIds:(id)arg0 ;
-(void)_requestDelegateForVIPList:(id)arg0 ;
-(void)_requestDelegateToSendComposedMessage:(id)arg0 ;
-(void)_requestDelegateToStopDownloadingAllMessageElements;
-(void)_requestDelegateToStopDownloadingMessageElementsForMessageWithId:(id)arg0 ;
-(void)_sendStandaloneAccountIdentity:(id)arg0 resendInterval:(NSUInteger)arg1 ;
-(void)_sendUpdatedMailboxSelection:(NSUInteger)arg0 ;
-(void)_sendUpdatedMailboxSelection:(NSUInteger)arg0 resendInterval:(NSUInteger)arg1 ;
-(void)_sendWatchAccountStatusRequest;
-(void)_setPairedDeviceSupportsMultipleMailboxes:(BOOL)arg0 ;
-(void)_shouldHandleForwardForNotification:(id)arg0 withCompletion:(id)arg1 ;
-(void)_stopTaks;
-(void)_storeScreenRelatedValues;
-(void)_triggerFullSyncForMailbox:(id)arg0 ;
-(void)_triggerFullSyncForMailboxes:(id)arg0 ;
-(void)_triggerInitialSync;
-(void)_triggerInitialSyncToRecoverFromSyncVersionMismatch;
-(void)_triggerInitialSyncTrackingProgress:(BOOL)arg0 ;
-(void)_updateMailboxSelection:(id)arg0 notifyClient:(BOOL)arg1 ;
-(void)_updateMessagesStatus:(id)arg0 mailbox:(id)arg1 ;
-(void)_verifyPairingForcingSync:(BOOL)arg0 ;
-(void)accountsSyncServiceServer:(id)arg0 didChangeAccountSourceType:(id)arg1 ;
-(void)accountsSyncServiceServer:(id)arg0 didFailSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(NSInteger)arg2 ;
-(void)accountsSyncServiceServer:(id)arg0 didReceivedAccountAuthenticationStatus:(id)arg1 requestTime:(CGFloat)arg2 ;
-(void)accountsSyncServiceServer:(id)arg0 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg1 ;
-(void)addAttachmentData:(id)arg0 forMessageId:(id)arg1 contentId:(id)arg2 loadedProtected:(BOOL)arg3 ;
-(void)addImageAttachment:(id)arg0 forMessageId:(id)arg1 contentId:(id)arg2 loadedProtected:(BOOL)arg3 ;
-(void)addMessageContent:(id)arg0 forMessage:(id)arg1 loadedProtected:(BOOL)arg2 ;
-(void)addMessages:(id)arg0 ;
-(void)addUpdateOrDeleteAccounts:(id)arg0 ;
-(void)batchRequestHandlerDidTimeoutFetchRequest:(id)arg0 ;
-(void)dealloc;
-(void)deleteMessagesWithIds:(id)arg0 ;
-(void)fetchesSyncServiceServer:(id)arg0 didFailSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(NSInteger)arg2 ;
-(void)fetchesSyncServiceServer:(id)arg0 didNotifyAboutWebKitStatus:(id)arg1 ;
-(void)fetchesSyncServiceServer:(id)arg0 didNotifyInitialSyncFinished:(id)arg1 ;
-(void)fetchesSyncServiceServer:(id)arg0 didRequestContent:(id)arg1 ;
-(void)fetchesSyncServiceServer:(id)arg0 didRequestFetch:(id)arg1 ;
-(void)fetchesSyncServiceServer:(id)arg0 didRequestFetchInBatch:(id)arg1 ;
-(void)fetchesSyncServiceServer:(id)arg0 didRequestFullSync:(id)arg1 ;
-(void)fetchesSyncServiceServer:(id)arg0 didRequestHaltSync:(id)arg1 ;
-(void)fetchesSyncServiceServer:(id)arg0 didRequestMoreMessages:(id)arg1 ;
-(void)fetchesSyncServiceServer:(id)arg0 didRequestMoreMessagesForConversation:(id)arg1 ;
-(void)fetchesSyncServiceServer:(id)arg0 didRequestMoreMessagesInBatch:(id)arg1 ;
-(void)fetchesSyncServiceServer:(id)arg0 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg1 ;
-(void)markConversationIdForNotNotify:(id)arg0 ;
-(void)markConversationIdForNotify:(id)arg0 messages:(id)arg1 includesProtectedMessages:(BOOL)arg2 ;
-(void)messageContentSyncServiceServer:(id)arg0 didFailSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(NSInteger)arg2 ;
-(void)messageContentSyncServiceServer:(id)arg0 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg1 ;
-(void)messagesSyncServiceServer:(id)arg0 didDeleteMessages:(id)arg1 ;
-(void)messagesSyncServiceServer:(id)arg0 didFailSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(NSInteger)arg2 ;
-(void)messagesSyncServiceServer:(id)arg0 didMoveMessages:(id)arg1 ;
-(void)messagesSyncServiceServer:(id)arg0 didRecieveAttachmentsAtURL:(id)arg1 composedMessageId:(id)arg2 ;
-(void)messagesSyncServiceServer:(id)arg0 didRequestCompactMessages:(id)arg1 ;
-(void)messagesSyncServiceServer:(id)arg0 didRequestSendMessage:(id)arg1 ;
-(void)messagesSyncServiceServer:(id)arg0 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg1 ;
-(void)messagesSyncServiceServer:(id)arg0 didUpdateMailboxSelection:(id)arg1 ;
-(void)messagesSyncServiceServer:(id)arg0 didUpdateMessagesStatus:(id)arg1 ;
-(void)messagesSyncServiceServer:(id)arg0 didWarnMessagesFilteredOut:(id)arg1 ;
-(void)messagesSyncServiceServerConnectivityChanged:(id)arg0 ;
-(void)messagesSyncServiceServerSpaceBecameAvailable:(id)arg0 ;
-(void)notifyFetchCompleted;
-(void)notifyFetchCompletedForMailboxId:(id)arg0 error:(id)arg1 ;
-(void)replyWithAccountToResend:(id)arg0 ;
-(void)replyWithAccounts:(id)arg0 ;
-(void)replyWithFirstMessages:(id)arg0 includesProtectedMessages:(BOOL)arg1 mailboxes:(id)arg2 organizedByThread:(BOOL)arg3 ;
-(void)replyWithMessageSendingProgress:(NSInteger)arg0 forComposedMessageId:(id)arg1 ;
-(void)replyWithMessagesToResend:(id)arg0 includesProtectedMessages:(BOOL)arg1 ;
-(void)replyWithMessagesToSendAsFetchResponse:(id)arg0 includesProtectedMessages:(BOOL)arg1 ;
-(void)replyWithMoreMessages:(id)arg0 context:(id)arg1 ;
-(void)reportMessageContentDownloadFailureForMessageId:(id)arg0 ;
-(void)reportWillDownloadFirstMessages;
-(void)resendObjectsForIDSIdentifier:(id)arg0 ;
-(void)resendScheduler:(id)arg0 didRequestDequeueIDSIdentifierForResend:(id)arg1 ;
-(void)resendScheduler:(id)arg0 didRequestEnqueueIDSIdentifierForResend:(id)arg1 date:(id)arg2 silent:(BOOL)arg3 ;
-(void)resendScheduler:(id)arg0 didRequestEnqueueIDSIdentifiersForResend:(id)arg1 ;
-(void)resendScheduler:(id)arg0 didRequestRetryFullSyncForMailboxes:(id)arg1 ;
-(void)resendScheduler:(id)arg0 didRequestRetrySendingAccountIdentifier:(id)arg1 resendInterval:(NSUInteger)arg2 ;
-(void)resendScheduler:(id)arg0 didRequestRetrySendingAccountWithId:(id)arg1 ;
-(void)resendScheduler:(id)arg0 didRequestRetrySendingComposeMessageProgress:(NSInteger)arg1 messageId:(id)arg2 resendInterval:(NSUInteger)arg3 ;
-(void)resendScheduler:(id)arg0 didRequestRetrySendingContentForMessageId:(id)arg1 highPriority:(BOOL)arg2 ;
-(void)resendScheduler:(id)arg0 didRequestRetrySendingDeletionForAccountWithId:(id)arg1 resendInterval:(NSUInteger)arg2 ;
-(void)resendScheduler:(id)arg0 didRequestRetrySendingMailboxSelectionWithResendInterval:(NSUInteger)arg1 ;
-(void)resendScheduler:(id)arg0 didRequestRetrySendingMessageDeletions:(id)arg1 deletionsMessageIds:(id)arg2 resendInterval:(NSUInteger)arg3 ;
-(void)resendScheduler:(id)arg0 didRequestRetrySendingMessageWithIds:(id)arg1 ;
-(void)resendScheduler:(id)arg0 didRequestRetrySendingVIPListWithResendInterval:(NSUInteger)arg1 ;
-(void)syncStandaloneAccountIdentity:(id)arg0 ;
-(void)syncStateManager:(id)arg0 handleForwardForNotification:(id)arg1 completion:(id)arg2 ;
-(void)syncStateManagerDidBeginSyncSession:(id)arg0 syncSessionType:(id)arg1 syncSessionIdentifier:(id)arg2 ;
-(void)syncStateManagerDidChangePairedDevice:(id)arg0 ;
-(void)syncStateManagerDidInvalidateSyncSession:(id)arg0 syncSessionIdentifier:(id)arg1 ;
-(void)syncStateManagerDidUnpair:(id)arg0 ;
-(void)trackerDidFinishSendingInitialSyncContentToPairedDevice:(id)arg0 ;
-(void)updateConversationId:(id)arg0 mute:(BOOL)arg1 ;
-(void)updateConversationId:(id)arg0 notify:(BOOL)arg1 messages:(id)arg2 ;
-(void)updateMailboxSelection:(id)arg0 ;
-(void)updateMessagesStatus:(id)arg0 ;
-(void)updateVIPSenderList:(id)arg0 ;
-(void)updateVIPSenderList:(id)arg0 requestContext:(id)arg1 ;


@end


#endif