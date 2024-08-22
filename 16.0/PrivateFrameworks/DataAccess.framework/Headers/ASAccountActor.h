// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASACCOUNTACTOR_H
#define ASACCOUNTACTOR_H

@class DADisableableObject;
@protocol ASAccountActorMessages;



@interface ASAccountActor : DADisableableObject <ASAccountActorMessages>





-(BOOL)generatesBulletins;
-(BOOL)reattemptInvitationLinkageForMetaData:(id)arg0 inFolderWithId:(id)arg1 ;
-(BOOL)searchQueriesRunning;
-(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg0 deleted:(id)arg1 foldersTag:(id)arg2 ;
-(id)customSignature;
-(id)deletedItemsFolder;
-(id)draftsFolder;
-(id)encryptionIdentityPersistentReference;
-(id)folderIDsThatExternalClientsCareAboutForDataclasses:(NSInteger)arg0 withTag:(*id)arg1 ;
-(id)folderIDsThatExternalClientsCareAboutWithTag:(*id)arg0 ;
-(id)foldersTag;
-(id)inboxFolder;
-(id)initWithDAAccount:(id)arg0 ;
-(id)mailboxes;
-(id)sentItemsFolder;
-(id)signingIdentityPersistentReference;
-(id)unactionableICSRepresentationForMetaData:(id)arg0 inFolderWithId:(id)arg1 outSummary:(*id)arg2 ;
-(int)mailNumberOfPastDaysToSync;
-(int)performFetchAttachmentRequest:(id)arg0 consumer:(id)arg1 ;
-(int)performFetchMessageSearchResultRequests:(id)arg0 consumer:(id)arg1 ;
-(int)performMailboxRequest:(id)arg0 mailbox:(id)arg1 previousTag:(id)arg2 clientWinsOnSyncConflict:(BOOL)arg3 isUserRequested:(BOOL)arg4 consumer:(id)arg5 ;
-(int)performMailboxRequest:(id)arg0 mailbox:(id)arg1 previousTag:(id)arg2 isUserRequested:(BOOL)arg3 consumer:(id)arg4 ;
-(int)performMailboxRequests:(id)arg0 mailbox:(id)arg1 previousTag:(id)arg2 clientWinsOnSyncConflict:(BOOL)arg3 isUserRequested:(BOOL)arg4 consumer:(id)arg5 ;
-(int)performMailboxRequests:(id)arg0 mailbox:(id)arg1 previousTag:(id)arg2 isUserRequested:(BOOL)arg3 consumer:(id)arg4 ;
-(int)performMoveRequests:(id)arg0 consumer:(id)arg1 ;
-(int)performResolveRecipientsRequest:(id)arg0 consumer:(id)arg1 ;
-(int)sendMessageWithRFC822Data:(id)arg0 messageID:(id)arg1 outgoingMessageType:(int)arg2 originalMessageFolderID:(id)arg3 originalMessageItemID:(id)arg4 originalMessageLongID:(id)arg5 originalAccountID:(id)arg6 useSmartTasksIfPossible:(BOOL)arg7 isUserRequested:(BOOL)arg8 consumer:(id)arg9 context:(id)arg10 ;
-(int)sendSmartMessageWithRFC822Data:(id)arg0 messageID:(id)arg1 outgoingMessageType:(int)arg2 originalMessageFolderID:(id)arg3 originalMessageItemID:(id)arg4 originalMessageLongID:(id)arg5 originalAccountID:(id)arg6 replaceOriginalMime:(BOOL)arg7 isUserRequested:(BOOL)arg8 consumer:(id)arg9 context:(id)arg10 ;
-(int)supportsConversations;
-(int)supportsDraftFolderSync;
-(int)supportsEmailFlagging;
-(int)supportsMailboxSearch;
-(int)supportsSmartForwardReply;
-(int)supportsUniqueServerId;
-(void)_accountPasswordChanged;
-(void)_daemonDiedNotification:(id)arg0 ;
-(void)_folderHierarchyChanged;
-(void)_folderUpdatedNotification:(id)arg0 ;
-(void)_foldersThatExternalClientsCareAboutChanged;
-(void)_newASPolicyKeyNotification:(id)arg0 ;
-(void)cancelAllSearchQueries;
-(void)cancelSearchQuery:(id)arg0 ;
-(void)cancelTaskWithID:(int)arg0 ;
-(void)monitorFoldersForUpdates:(id)arg0 ;
-(void)monitorFoldersForUpdates:(id)arg0 persistent:(BOOL)arg1 ;
-(void)performFolderChange:(id)arg0 isUserRequested:(BOOL)arg1 ;
-(void)performSearchQuery:(id)arg0 ;
-(void)setAccount:(id)arg0 ;
-(void)setCustomSignature:(id)arg0 ;
-(void)setEncryptionIdentityPersistentReference:(id)arg0 ;
-(void)setGeneratesBulletins:(BOOL)arg0 ;
-(void)setMailNumberOfPastDaysToSync:(int)arg0 ;
-(void)setSigningIdentityPersistentReference:(id)arg0 ;
-(void)shutdown;
-(void)startup;
-(void)stopMonitoringAllFolders;
-(void)stopMonitoringFoldersForUpdates:(id)arg0 ;


@end


#endif