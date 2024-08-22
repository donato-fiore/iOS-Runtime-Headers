// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCLIENTACCOUNT_H
#define ASCLIENTACCOUNT_H

@class NSMutableSet;


#import "ASAccount.h"

@interface ASClientAccount : ASAccount {
    NSMutableSet *_daemonMonitoredFolders;
    NSMutableSet *_foldersToRetryForMonitoring;
    NSMutableSet *_folderIDsOnRemoteHold;
}




-(BOOL)reattemptInvitationLinkageForMetaData:(id)arg0 inFolderWithId:(id)arg1 ;
-(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg0 deleted:(id)arg1 foldersTag:(id)arg2 ;
-(id)_copySetFlagsActionForRequest:(id)arg0 ;
-(id)_newPolicyManager;
-(id)initWithBackingAccountInfo:(id)arg0 ;
-(id)mailboxes;
-(id)onBehalfOfBundleIdentifier;
-(id)unactionableICSRepresentationForMetaData:(id)arg0 inFolderWithId:(id)arg1 outSummary:(*id)arg2 ;
-(int)performFetchAttachmentRequest:(id)arg0 consumer:(id)arg1 ;
-(int)performFetchMessageSearchResultRequests:(id)arg0 consumer:(id)arg1 ;
-(int)performMailboxRequest:(id)arg0 mailbox:(id)arg1 previousTag:(id)arg2 clientWinsOnSyncConflict:(BOOL)arg3 consumer:(id)arg4 ;
-(int)performMailboxRequests:(id)arg0 mailbox:(id)arg1 previousTag:(id)arg2 clientWinsOnSyncConflict:(BOOL)arg3 consumer:(id)arg4 ;
-(int)performMoveRequests:(id)arg0 consumer:(id)arg1 ;
-(int)performResolveRecipientsRequest:(id)arg0 consumer:(id)arg1 ;
-(void)_addFoldersToDaemonMonitoring:(id)arg0 ;
-(void)_daemonDied;
-(void)_folderHierarchyChanged;
-(void)_foldersThatExternalClientsCareAboutChanged;
-(void)_foldersUpdated:(id)arg0 ;
-(void)_logStatus:(id)arg0 ;
-(void)_monitorFoldersForUpdates:(id)arg0 persistent:(BOOL)arg1 sequentialRetryCount:(int)arg2 ;
-(void)_removeFoldersFromDaemonMonitoring:(id)arg0 ;
-(void)_reportFolderItemSyncSuccess:(BOOL)arg0 forFolderWithID:(id)arg1 withItemsCount:(NSUInteger)arg2 ;
-(void)_retryMonitoringWithRetryCount:(id)arg0 ;
-(void)_retryMonitoringWithRetryCount:(id)arg0 persistent:(BOOL)arg1 ;
-(void)_retryPersistentMonitoringWithRetryCount:(id)arg0 ;
-(void)_sync:(id)arg0 withConsumer:(id)arg1 ;
-(void)clearFolderHierarchyCache;
-(void)dealloc;
-(void)monitorFoldersForUpdates:(id)arg0 ;
-(void)monitorFoldersForUpdates:(id)arg0 persistent:(BOOL)arg1 ;
-(void)performFolderChange:(id)arg0 ;
-(void)resolveRecipientsTask:(id)arg0 completedWithStatus:(NSInteger)arg1 error:(id)arg2 queriedEmailAddressToRecpient:(id)arg3 ;
-(void)resumeMonitoringFoldersWithIDs:(id)arg0 ;
-(void)sendMailTask:(id)arg0 completedWithStatus:(NSInteger)arg1 error:(id)arg2 ;
-(void)stopMonitoringAllFolders;
-(void)stopMonitoringFoldersForUpdates:(id)arg0 ;
-(void)suspendMonitoringFoldersWithIDs:(id)arg0 ;


@end


#endif