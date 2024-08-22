// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSASSERVERSIDEMODEL_H
#define MSASSERVERSIDEMODEL_H

@class NSString, NSCountedSet;
@protocol MSASModel, MSASStateMachineDelegate, OS_dispatch_queue;


#import "MSASModelBase.h"
#import "MSASStateMachine.h"
#import "MSASServerSideModelGroupedCommandQueue.h"
#import "MSAlbumSharingDaemon.h"
#import "MSASPendingChanges.h"

@interface MSASServerSideModel : MSASModelBase <MSASModel, MSASStateMachineDelegate>



@property (nonatomic) MSASStateMachine *MSASCounterpartInstance; // ivar: _counterpartInstance
@property (retain, nonatomic) MSASServerSideModelGroupedCommandQueue *commandQueue; // ivar: _commandQueue
@property (weak, nonatomic) MSAlbumSharingDaemon *daemon; // ivar: _daemon
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // ivar: _eventQueue
@property (readonly) NSUInteger hash;
@property (nonatomic) int maxGroupedCallbackEventBatchCount;
@property (nonatomic) CGFloat maxGroupedCallbackEventIdleInterval;
@property (nonatomic) CGFloat maxGroupedCallbackEventStaleness;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // ivar: _memberQueue
@property (retain, nonatomic) NSCountedSet *observers; // ivar: _observers
@property (retain, nonatomic) MSASPendingChanges *pendingChanges; // ivar: _pendingChanges
@property (readonly, retain, nonatomic) NSString *personID;
@property (readonly, nonatomic) MSASStateMachine *stateMachine;
@property (readonly) Class superclass;


-(BOOL)MSASStateMachine:(id)arg0 didQueryIsAssetCollectionWithGUIDInModel:(id)arg1 ;
-(BOOL)dbQueueAccessControlWithGUID:(id)arg0 outObject:(*id)arg1 outAlbumGUID:(*id)arg2 outEmail:(*id)arg3 outUserInfoData:(*id)arg4 ;
-(BOOL)dbQueueAlbumMetadataWithAlbumGUID:(id)arg0 key:(id)arg1 outValue:(*id)arg2 ;
-(BOOL)dbQueueAlbumWithGUID:(id)arg0 outObject:(*id)arg1 outName:(*id)arg2 outCtag:(*id)arg3 outForeignCtag:(*id)arg4 outURLString:(*id)arg5 outUserInfoData:(*id)arg6 ;
-(BOOL)dbQueueAssetCollectionContainsCommentsFromMeAssetCollectionGUID:(id)arg0 ;
-(BOOL)dbQueueAssetCollectionMetadataWithAssetCollectionGUID:(id)arg0 key:(id)arg1 outValue:(*id)arg2 ;
-(BOOL)dbQueueAssetCollectionWithGUID:(id)arg0 outObject:(*id)arg1 outCtag:(*id)arg2 outAlbumGUID:(*id)arg3 outBatchDate:(*id)arg4 outPhotoDate:(*id)arg5 outPhotoNumber:(*NSInteger)arg6 outUserInfoData:(*id)arg7 ;
-(BOOL)dbQueueCheckToClearUnviewedStateOnAlbumWithGUID:(id)arg0 info:(id)arg1 ;
-(BOOL)dbQueueCheckToClearUnviewedStateOnAssetCollectionWithGUID:(id)arg0 info:(id)arg1 ;
-(BOOL)dbQueueCommentWithGUID:(id)arg0 outObject:(*id)arg1 outID:(*NSUInteger)arg2 outTimestamp:(*id)arg3 outAssetCollectionGUID:(*id)arg4 outIsCaption:(*BOOL)arg5 outUserInfoData:(*id)arg6 ;
-(BOOL)dbQueueCommentWithID:(int)arg0 assetCollectionGUID:(id)arg1 outObject:(*id)arg2 outGUID:(*id)arg3 outTimestamp:(*id)arg4 outIsCaption:(*BOOL)arg5 outUserInfoData:(*id)arg6 ;
-(BOOL)dbQueueInvitationWithAlbumGUID:(id)arg0 outObject:(*id)arg1 outInvitationGUID:(*id)arg2 outEmail:(*id)arg3 outUserInfoData:(*id)arg4 ;
-(BOOL)dbQueueInvitationWithGUID:(id)arg0 outObject:(*id)arg1 outAlbumGUID:(*id)arg2 outEmail:(*id)arg3 outUserInfoData:(*id)arg4 ;
-(BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg0 currentVersion:(int)arg1 ;
-(BOOL)errorIsCancellation:(id)arg0 ;
-(BOOL)hasCommandsInGroupedCommandQueue;
-(BOOL)hasEnqueuedActivities;
-(BOOL)isAlbumWithGUIDMarkedAsUnviewed:(id)arg0 ;
-(BOOL)isAssetCollectionWithGUIDMarkedAsUnviewed:(id)arg0 ;
-(id)MSASStateMachineDidRequestAlbumStateCtagForAlbumWithGUID:(id)arg0 info:(id)arg1 ;
-(id)MSASStateMachineDidRequestAlbumURLStringForAlbumWithGUID:(id)arg0 info:(id)arg1 ;
-(id)MSASStateMachineDidRequestAlbumWithGUID:(id)arg0 ;
-(id)MSASStateMachineDidRequestAssetCollectionStateCtagForAssetCollectionWithGUID:(id)arg0 info:(id)arg1 ;
-(id)_invalidAccessControlGUIDErrorwithGUID:(id)arg0 ;
-(id)_invalidAssetCollectionGUIDErrorwithGUID:(id)arg0 ;
-(id)_invalidInvitationGUIDErrorWithGUID:(id)arg0 ;
-(id)_protocolErrorForUnderlyingError:(id)arg0 ;
-(id)accessControlGUIDsForAlbumWithGUID:(id)arg0 ;
-(id)accessControlWithGUID:(id)arg0 ;
-(id)accessControlsForAlbumWithGUID:(id)arg0 ;
-(id)albumGUIDs;
-(id)albumWithGUID:(id)arg0 ;
-(id)albums;
-(id)assetCollectionGUIDsInAlbumWithGUID:(id)arg0 ;
-(id)assetCollectionWithGUID:(id)arg0 ;
-(id)assetCollectionsInAlbumWithGUID:(id)arg0 ;
-(id)captionForAssetCollectionWithGUID:(id)arg0 ;
-(id)commentWithGUID:(id)arg0 ;
-(id)commentsForAssetCollectionWithGUID:(id)arg0 ;
-(id)dbQueueAccessControlGUIDsForAlbumWithGUID:(id)arg0 ;
-(id)dbQueueAccessControlsForAlbumWithGUID:(id)arg0 ;
-(id)dbQueueAlbumGUIDs;
-(id)dbQueueAssetCollectionGUIDsInAlbumWithGUID:(id)arg0 ;
-(id)dbQueueCommentsForAssetCollectionWithGUID:(id)arg0 ;
-(id)dbQueueInvitationForAlbumWithGUID:(id)arg0 ;
-(id)dbQueueLookupOrCreateAlbumWithGUID:(id)arg0 ;
-(id)dbQueueLookupOrCreateAssetCollectionWithGUID:(id)arg0 outAlbum:(*id)arg1 ;
-(id)dbQueueLookupOrCreateCommentWithGUID:(id)arg0 outAssetCollection:(*id)arg1 outAlbum:(*id)arg2 ;
-(id)dbQueueMaximumCommentIDForAssetCollectionWithGUID:(id)arg0 ;
-(id)dbQueueMaximumPhotoNumberForAlbumWithGUID:(id)arg0 ;
-(id)dbQueuePendingCommentCheckOperations;
-(id)earliestUnviewedAssetCollectionGUIDInAlbumWithGUID:(id)arg0 ;
-(id)focusAssetCollectionGUID;
-(id)initWithPersonID:(id)arg0 ;
-(id)initWithPersonID:(id)arg0 databasePath:(id)arg1 ;
-(id)initWithPersonID:(id)arg0 databasePath:(id)arg1 eventQueue:(id)arg2 ;
-(id)invitationForAlbumWithGUID:(id)arg0 ;
-(id)invitationGUIDs;
-(id)invitationWithGUID:(id)arg0 ;
-(id)invitations;
-(id)isPublicAccessEnabledForAlbumWithGUID:(id)arg0 ;
-(id)lastViewedCommentDateForAssetCollectionWithGUID:(id)arg0 ;
-(id)nextCommandGroupMaxCount:(int)arg0 outCommand:(*id)arg1 outLastCommandIndex:(*NSInteger)arg2 ;
-(id)serverCommunicationBackoffDate;
-(id)serverSideConfiguration;
-(id)userInfoForAccessControlWithGUID:(id)arg0 ;
-(id)userInfoForAlbumWithGUID:(id)arg0 ;
-(id)userInfoForAssetCollectionWithGUID:(id)arg0 ;
-(id)userInfoForCommentWithGUID:(id)arg0 ;
-(id)userInfoForInvitationWithGUID:(id)arg0 ;
-(int)commandCount;
-(int)dbQueueCountOfUnviewedAssetCollectionsInAlbumWithGUID:(id)arg0 ;
-(int)dbQueueUnviewedAlbumCount;
-(int)dbQueueUnviewedAssetCollectionCountForAlbumWithGUID:(id)arg0 ;
-(int)unviewedAlbumCount;
-(int)unviewedAssetCollectionCountForAlbumWithGUID:(id)arg0 ;
-(void)MSASStateMachine:(id)arg0 didFindAccessControlChangesForAlbumGUIDS:(id)arg1 info:(id)arg2 ;
-(void)MSASStateMachine:(id)arg0 didFindAlbumChanges:(id)arg1 info:(id)arg2 ;
-(void)MSASStateMachine:(id)arg0 didFindAlbumSyncedState:(id)arg1 forAlbum:(id)arg2 info:(id)arg3 ;
-(void)MSASStateMachine:(id)arg0 didFindAssetCollectionChanges:(id)arg1 forAlbum:(id)arg2 info:(id)arg3 ;
-(void)MSASStateMachine:(id)arg0 didFindAssetCollectionSyncedState:(id)arg1 forAssetCollectionGUID:(id)arg2 inAlbum:(id)arg3 assetCollectionStateCtag:(id)arg4 info:(id)arg5 ;
-(void)MSASStateMachine:(id)arg0 didFindChangesInAlbum:(id)arg1 info:(id)arg2 error:(id)arg3 ;
-(void)MSASStateMachine:(id)arg0 didFindCommentChanges:(id)arg1 inAssetCollectionWithGUID:(id)arg2 inAlbumWithGUID:(id)arg3 info:(id)arg4 ;
-(void)MSASStateMachine:(id)arg0 didFindNewURLString:(id)arg1 forAlbumWithGUID:(id)arg2 info:(id)arg3 ;
-(void)MSASStateMachine:(id)arg0 didFindSyncedKeyValueChangesForAlbumGUIDS:(id)arg1 albumChanges:(id)arg2 accessControlChangesForAlbumGUIDS:(id)arg3 info:(id)arg4 ;
-(void)MSASStateMachine:(id)arg0 didFindSyncedKeyValueChangesForAlbumGUIDS:(id)arg1 info:(id)arg2 ;
-(void)MSASStateMachine:(id)arg0 didFinishAddingAssetCollection:(id)arg1 toAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)MSASStateMachine:(id)arg0 didFinishAddingComment:(id)arg1 toAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 error:(id)arg5 ;
-(void)MSASStateMachine:(id)arg0 didFinishAddingSharingRelationships:(id)arg1 toOwnedAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)MSASStateMachine:(id)arg0 didFinishCheckingForAlbumSyncedStateChangesInAlbum:(id)arg1 info:(id)arg2 error:(id)arg3 newAlbumStateCtag:(id)arg4 ;
-(void)MSASStateMachine:(id)arg0 didFinishCheckingForChangesInfo:(id)arg1 error:(id)arg2 ;
-(void)MSASStateMachine:(id)arg0 didFinishCheckingForCommentChangesInAssetCollectionWithGUID:(id)arg1 largestCommentID:(int)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)MSASStateMachine:(id)arg0 didFinishCheckingForUpdatesInAlbum:(id)arg1 info:(id)arg2 error:(id)arg3 ;
-(void)MSASStateMachine:(id)arg0 didFinishCheckingForUpdatesInAlbums:(id)arg1 info:(id)arg2 ;
-(void)MSASStateMachine:(id)arg0 didFinishCreatingAlbum:(id)arg1 info:(id)arg2 error:(id)arg3 ;
-(void)MSASStateMachine:(id)arg0 didFinishDeletingAlbum:(id)arg1 info:(id)arg2 error:(id)arg3 ;
-(void)MSASStateMachine:(id)arg0 didFinishDeletingAssetCollection:(id)arg1 inAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)MSASStateMachine:(id)arg0 didFinishDeletingComment:(id)arg1 inAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 error:(id)arg5 ;
-(void)MSASStateMachine:(id)arg0 didFinishEnqueueingAssetsForDownload:(id)arg1 inAlbumWithGUID:(id)arg2 ;
-(void)MSASStateMachine:(id)arg0 didFinishGettingAccessControls:(id)arg1 forAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)MSASStateMachine:(id)arg0 didFinishMarkingAsSpamInvitationForAlbum:(id)arg1 invitationGUID:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)MSASStateMachine:(id)arg0 didFinishMarkingAsSpamInvitationForToken:(id)arg1 info:(id)arg2 error:(id)arg3 ;
-(void)MSASStateMachine:(id)arg0 didFinishRemovingSharingRelationship:(id)arg1 fromOwnedAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)MSASStateMachine:(id)arg0 didFinishRetrievingAsset:(id)arg1 inAlbum:(id)arg2 error:(id)arg3 ;
-(void)MSASStateMachine:(id)arg0 didFinishSendingInvitationByPhone:(id)arg1 toOwnedAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)MSASStateMachine:(id)arg0 didFinishSettingSyncedStateForAlbum:(id)arg1 info:(id)arg2 error:(id)arg3 newAlbumStateCtag:(id)arg4 ;
-(void)MSASStateMachine:(id)arg0 didFinishSettingSyncedStateForAssetCollection:(id)arg1 inAlbum:(id)arg2 assetStateCtag:(id)arg3 info:(id)arg4 error:(id)arg5 ;
-(void)MSASStateMachine:(id)arg0 didFinishSubscribingToAlbum:(id)arg1 info:(id)arg2 error:(id)arg3 ;
-(void)MSASStateMachine:(id)arg0 didFinishUnsubscribingFromAlbum:(id)arg1 info:(id)arg2 error:(id)arg3 ;
-(void)MSASStateMachine:(id)arg0 didFinishUpdatingAlbum:(id)arg1 info:(id)arg2 error:(id)arg3 ;
-(void)MSASStateMachine:(id)arg0 didFinishUpdatingAssetCollections:(id)arg1 inAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)MSASStateMachine:(id)arg0 didFireScheduledEvent:(id)arg1 forAssetCollectionGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4 ;
-(void)MSASStateMachine:(id)arg0 didRequestAssetsForAddingAssetCollections:(id)arg1 inAlbum:(id)arg2 specifications:(id)arg3 info:(id)arg4 ;
-(void)MSASStateMachine:(id)arg0 willCheckForAlbumSyncedStateChangesInAlbum:(id)arg1 info:(id)arg2 ;
-(void)MSASStateMachine:(id)arg0 willCheckForUpdatesInAlbum:(id)arg1 info:(id)arg2 ;
-(void)MSASStateMachine:(id)arg0 willUpdateAssetCollections:(id)arg1 inAlbum:(id)arg2 info:(id)arg3 ;
-(void)MSASStateMachineDidFindGlobalResetSync:(id)arg0 info:(id)arg1 ;
-(void)MSASStateMachineDidStart:(id)arg0 ;
-(void)MSASStateMachineDidUpdateServerCommunicationBackoffDate:(id)arg0 ;
-(void)_reconstruct;
-(void)acceptInvitationWithGUID:(id)arg0 ;
-(void)acceptInvitationWithGUID:(id)arg0 info:(id)arg1 ;
-(void)acceptInvitationWithToken:(id)arg0 completionBlock:(id)arg1 ;
-(void)acceptInvitationWithToken:(id)arg0 info:(id)arg1 completionBlock:(id)arg2 ;
-(void)addAccessControlEntries:(id)arg0 toAlbumWithGUID:(id)arg1 ;
-(void)addAccessControlEntries:(id)arg0 toAlbumWithGUID:(id)arg1 info:(id)arg2 ;
-(void)addAlbum:(id)arg0 ;
-(void)addAlbum:(id)arg0 info:(id)arg1 ;
-(void)addAssetCollections:(id)arg0 toAlbumWithGUID:(id)arg1 ;
-(void)addAssetCollections:(id)arg0 toAlbumWithGUID:(id)arg1 info:(id)arg2 ;
-(void)addComments:(id)arg0 toAssetCollectionWithGUID:(id)arg1 ;
-(void)addComments:(id)arg0 toAssetCollectionWithGUID:(id)arg1 info:(id)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)cancel;
-(void)dbQueueAddCommentCheckOperation:(id)arg0 ;
-(void)dbQueueDeleteAccessControlWithGUID:(id)arg0 info:(id)arg1 ;
-(void)dbQueueDeleteAlbumMetadataAlbumGUID:(id)arg0 key:(id)arg1 info:(id)arg2 ;
-(void)dbQueueDeleteAlbumWithGUID:(id)arg0 info:(id)arg1 ;
-(void)dbQueueDeleteAllAlbumMetadataForAlbumWithGUID:(id)arg0 info:(id)arg1 ;
-(void)dbQueueDeleteAllAssetCollectionMetadataForAssetCollectionWithGUID:(id)arg0 info:(id)arg1 ;
-(void)dbQueueDeleteAllPendingCommentCheckOperations;
-(void)dbQueueDeleteAssetCollectionMetadataAssetCollectionGUID:(id)arg0 key:(id)arg1 info:(id)arg2 ;
-(void)dbQueueDeleteAssetCollectionWithGUID:(id)arg0 info:(id)arg1 ;
-(void)dbQueueDeleteCommentWithGUID:(id)arg0 info:(id)arg1 ;
-(void)dbQueueDeleteInvitationForAlbumWithGUID:(id)arg0 info:(id)arg1 ;
-(void)dbQueueDeleteInvitationWithGUID:(id)arg0 info:(id)arg1 ;
-(void)dbQueueFlushAllPendingCommentCheckOperations;
-(void)dbQueueSetAccessControl:(id)arg0 info:(id)arg1 ;
-(void)dbQueueSetAlbum:(id)arg0 info:(id)arg1 ;
-(void)dbQueueSetAlbumMetadataAlbumGUID:(id)arg0 key:(id)arg1 value:(id)arg2 info:(id)arg3 ;
-(void)dbQueueSetAssetCollection:(id)arg0 inAlbumWithGUID:(id)arg1 info:(id)arg2 ;
-(void)dbQueueSetAssetCollectionMetadataAssetCollectionGUID:(id)arg0 key:(id)arg1 value:(id)arg2 info:(id)arg3 ;
-(void)dbQueueSetComment:(id)arg0 forAssetCollectionWithGUID:(id)arg1 info:(id)arg2 ;
-(void)dbQueueSetInvitation:(id)arg0 info:(id)arg1 ;
-(void)dbQueueSetUnviewedState:(BOOL)arg0 onAlbumWithGUID:(id)arg1 info:(id)arg2 ;
-(void)dbQueueSetUnviewedState:(BOOL)arg0 onAssetCollectionWithGUID:(id)arg1 info:(id)arg2 ;
-(void)dbQueueUpdateAlbumCtag:(id)arg0 ;
-(void)deleteAlbumWithGUID:(id)arg0 ;
-(void)deleteAlbumWithGUID:(id)arg0 info:(id)arg1 ;
-(void)deleteAssetCollectionWithGUID:(id)arg0 ;
-(void)deleteAssetCollectionWithGUID:(id)arg0 info:(id)arg1 ;
-(void)deleteAssetCollectionsWithGUIDs:(id)arg0 ;
-(void)deleteCommentWithGUID:(id)arg0 ;
-(void)deleteCommentWithGUID:(id)arg0 info:(id)arg1 ;
-(void)enqueueCommand:(id)arg0 ;
-(void)eventQueueNotifyObserversOfUpdatedUnviewedCountInAlbum:(id)arg0 unviewedCount:(int)arg1 info:(id)arg2 ;
-(void)eventQueuePerformBlockOnObservers:(id)arg0 ;
-(void)flushAllPendingCommentCheckOperations;
-(void)forgetEverything;
-(void)forgetEverythingInfo:(id)arg0 ;
-(void)forgetEverythingInfo:(id)arg0 completionBlock:(id)arg1 ;
-(void)markAlbumGUIDAsViewed:(id)arg0 ;
-(void)markAlbumGUIDAsViewed:(id)arg0 info:(id)arg1 ;
-(void)markAlbumGUIDAsViewed:(id)arg0 moveLastViewedAssetCollectionMarker:(BOOL)arg1 info:(id)arg2 ;
-(void)markAsSpamAlbumWithGUID:(id)arg0 info:(id)arg1 ;
-(void)markAsSpamInvitationWithGUID:(id)arg0 info:(id)arg1 ;
-(void)markAsSpamInvitationWithToken:(id)arg0 info:(id)arg1 ;
-(void)markCommentsForAssetCollectionWithGUID:(id)arg0 asViewedWithLastViewedDate:(id)arg1 ;
-(void)markCommentsForAssetCollectionWithGUID:(id)arg0 asViewedWithLastViewedDate:(id)arg1 info:(id)arg2 ;
-(void)modifyAlbumMetadata:(id)arg0 ;
-(void)modifyAlbumMetadata:(id)arg0 info:(id)arg1 ;
-(void)performBlockOnObservers:(id)arg0 ;
-(void)reconstruct;
-(void)refreshAccessControlListForAlbumWithGUID:(id)arg0 ;
-(void)refreshAccessControlListForAlbumWithGUID:(id)arg0 info:(id)arg1 ;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)arg0 resetSync:(BOOL)arg1 ;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)arg0 resetSync:(BOOL)arg1 info:(id)arg2 ;
-(void)refreshContentOfAlbumWithGUID:(id)arg0 resetSync:(BOOL)arg1 ;
-(void)refreshContentOfAlbumWithGUID:(id)arg0 resetSync:(BOOL)arg1 info:(id)arg2 ;
-(void)refreshResetSync:(BOOL)arg0 ;
-(void)refreshResetSync:(BOOL)arg0 info:(id)arg1 ;
-(void)rejectInvitationWithGUID:(id)arg0 ;
-(void)rejectInvitationWithGUID:(id)arg0 info:(id)arg1 ;
-(void)releaseBusy;
-(void)removeAccessControlEntryWithGUID:(id)arg0 ;
-(void)removeAccessControlEntryWithGUID:(id)arg0 info:(id)arg1 ;
-(void)removeCommandsUpToCommandIndex:(NSInteger)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)retainBusy;
-(void)retrieveAssets:(id)arg0 inAlbumWithGUID:(id)arg1 ;
-(void)retrieveAssetsFromAssetCollectionsWithGUIDs:(id)arg0 assetTypeFlags:(int)arg1 ;
-(void)setFocusAlbumGUID:(id)arg0 ;
-(void)setFocusAssetCollectionGUID:(id)arg0 ;
-(void)setMultipleContributorsEnabled:(BOOL)arg0 forAlbumWithGUID:(id)arg1 completionBlock:(id)arg2 ;
-(void)setMultipleContributorsEnabled:(BOOL)arg0 forAlbumWithGUID:(id)arg1 info:(id)arg2 completionBlock:(id)arg3 ;
-(void)setPublicAccessEnabled:(BOOL)arg0 forAlbumWithGUID:(id)arg1 completionBlock:(id)arg2 ;
-(void)setPublicAccessEnabled:(BOOL)arg0 forAlbumWithGUID:(id)arg1 info:(id)arg2 completionBlock:(id)arg3 ;
-(void)setUserInfo:(id)arg0 forAccessControlWithGUID:(id)arg1 ;
-(void)setUserInfo:(id)arg0 forAlbumWithGUID:(id)arg1 ;
-(void)setUserInfo:(id)arg0 forAssetCollectionWithGUID:(id)arg1 ;
-(void)setUserInfo:(id)arg0 forCommentWithGUID:(id)arg1 ;
-(void)setUserInfo:(id)arg0 forInvitationWithGUID:(id)arg1 ;
-(void)shutDown;
-(void)shutDownForDestruction:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)start;
-(void)subscribeToAlbumWithGUID:(id)arg0 ;
-(void)subscribeToAlbumWithGUID:(id)arg0 info:(id)arg1 ;
-(void)unsubscribeFromAlbumWithGUID:(id)arg0 ;
-(void)unsubscribeFromAlbumWithGUID:(id)arg0 info:(id)arg1 ;
-(void)validateInvitationForAlbum:(id)arg0 completionBlock:(id)arg1 ;
-(void)videoURLForAssetCollectionWithGUID:(id)arg0 completionBlock:(id)arg1 ;
-(void)videoURLsForAssetCollectionWithGUID:(id)arg0 forMediaAssetType:(NSUInteger)arg1 completionBlock:(id)arg2 ;


@end


#endif