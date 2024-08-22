// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSALBUMSHARINGDAEMON_H
#define MSALBUMSHARINGDAEMON_H

@class NSMutableDictionary;
@protocol MSAlbumSharingDaemonDelegate, OS_dispatch_queue;


#import "MSDaemon.h"
#import "MSASDaemonModel.h"

@interface MSAlbumSharingDaemon : MSDaemon

@property (nonatomic) int busyCount; // ivar: _busyCount
@property (retain, nonatomic) MSASDaemonModel *daemonModel; // ivar: _daemonModel
@property (weak, nonatomic) NSObject<MSAlbumSharingDaemonDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isRetryingOutstandingActivities; // ivar: _isRetryingOutstandingActivities
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mapQueue; // ivar: _mapQueue
@property (retain, nonatomic) NSMutableDictionary *nextUpdateDateByPersonID; // ivar: _nextUpdateDateByPersonID
@property (retain, nonatomic) NSMutableDictionary *personIDToDelegateMap; // ivar: _personIDToDelegateMap
@property (retain, nonatomic) NSMutableDictionary *personIDToStateMachineMap; // ivar: _personIDToStateMachineMap
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)hasCommandsInGroupedCommandQueue;
-(BOOL)isInRetryState;
-(BOOL)isWaitingForAuth;
-(id)_delegateForPersonID:(id)arg0 ;
-(id)boundStateMachineForPersonID:(id)arg0 ;
-(id)existingModelForPersonID:(id)arg0 ;
-(id)existingStateMachineForPersonID:(id)arg0 ;
-(id)init;
-(id)modelForPersonID:(id)arg0 ;
-(id)nextActivityDate;
-(id)persistentObjectForKey:(id)arg0 personID:(id)arg1 ;
-(id)personIDListeningToPushNotification;
-(id)serverSideConfigurationForPersonID:(id)arg0 ;
-(void)_postModelShutdownForPersonID:(id)arg0 completionBlock:(id)arg1 ;
-(void)acceptInvitationWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)acceptInvitationWithGUID:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)acceptInvitationWithToken:(id)arg0 personID:(id)arg1 completionBlock:(id)arg2 ;
-(void)acceptInvitationWithToken:(id)arg0 personID:(id)arg1 info:(id)arg2 completionBlock:(id)arg3 ;
-(void)addAccessControlEntries:(id)arg0 toAlbumWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)addAccessControlEntries:(id)arg0 toAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)addAlbum:(id)arg0 ;
-(void)addAlbum:(id)arg0 personID:(id)arg1 ;
-(void)addAlbum:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)addAssetCollections:(id)arg0 toAlbumWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)addAssetCollections:(id)arg0 toAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)addComments:(id)arg0 toAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)addComments:(id)arg0 toAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)cancelActivitiesForPersonID:(id)arg0 ;
-(void)deleteAlbumWithGUID:(id)arg0 inviterAddress:(id)arg1 ;
-(void)deleteAlbumWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)deleteAlbumWithGUID:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)deleteAssetCollectionWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)deleteAssetCollectionWithGUID:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)deleteAssetCollectionsWithGUIDs:(id)arg0 personID:(id)arg1 ;
-(void)deleteCommentWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)deleteCommentWithGUID:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)didCreateStateMachineForPersonID:(id)arg0 ;
-(void)didDestroyStateMachineForPersonID:(id)arg0 ;
-(void)didIdle;
-(void)didReceiveAuthFailureForPersonID:(id)arg0 ;
-(void)didReceiveAuthSuccessForPersonID:(id)arg0 ;
-(void)didReceiveCommentTooLongError:(id)arg0 forAssetCollection:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 ;
-(void)didReceiveGlobalResetSyncForPersonID:(id)arg0 ;
-(void)didReceivePushNotificationForPersonID:(id)arg0 ;
-(void)didReceiveTooManyAlbumsError:(id)arg0 personID:(id)arg1 ;
-(void)didReceiveTooManyCommentsError:(id)arg0 forAssetCollection:(id)arg1 inAlbum:(id)arg2 personID:(id)arg3 ;
-(void)didReceiveTooManyPhotosError:(id)arg0 forAlbum:(id)arg1 personID:(id)arg2 ;
-(void)didReceiveTooManySubscriptionsError:(id)arg0 personID:(id)arg1 ;
-(void)didUnidle;
-(void)forgetEverythingAboutPersonID:(id)arg0 ;
-(void)forgetEverythingAboutPersonID:(id)arg0 completionBlock:(id)arg1 ;
-(void)forgetEverythingCompletionBlock:(id)arg0 ;
-(void)mapQueueShutDownStateMachineInMap:(id)arg0 personIDs:(id)arg1 index:(NSUInteger)arg2 forDestruction:(BOOL)arg3 completionBlock:(id)arg4 ;
-(void)markAlbumGUIDAsViewed:(id)arg0 personID:(id)arg1 ;
-(void)markAlbumGUIDAsViewed:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)markAlbumGUIDAsViewed:(id)arg0 personID:(id)arg1 moveLastViewedAssetCollectionMarker:(BOOL)arg2 info:(id)arg3 ;
-(void)markAsSpamAlbumWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)markAsSpamInvitationWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)markAsSpamInvitationWithToken:(id)arg0 personID:(id)arg1 ;
-(void)markCommentsForAssetCollectionWithGUID:(id)arg0 asViewedWithLastViewedDate:(id)arg1 personID:(id)arg2 ;
-(void)markCommentsForAssetCollectionWithGUID:(id)arg0 asViewedWithLastViewedDate:(id)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)modifyAlbumMetadata:(id)arg0 personID:(id)arg1 ;
-(void)modifyAlbumMetadata:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)arg0 ;
-(void)refreshAccessControlListOfAlbumWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)refreshAccessControlListOfAlbumWithGUID:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)arg0 resetSync:(BOOL)arg1 personID:(id)arg2 ;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)arg0 resetSync:(BOOL)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)refreshContentOfAlbumWithGUID:(id)arg0 resetSync:(BOOL)arg1 personID:(id)arg2 ;
-(void)refreshContentOfAlbumWithGUID:(id)arg0 resetSync:(BOOL)arg1 personID:(id)arg2 info:(id)arg3 ;
-(void)refreshResetSync:(BOOL)arg0 personID:(id)arg1 ;
-(void)refreshResetSync:(BOOL)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)refreshServerSideConfigurationForPersonID:(id)arg0 ;
-(void)rejectInvitationWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)rejectInvitationWithGUID:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)removeAccessControlEntryWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)removeAccessControlEntryWithGUID:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)retrieveAssets:(id)arg0 inAlbumWithGUID:(id)arg1 personID:(id)arg2 ;
-(void)retrieveAssetsInAssetCollectionsWithGUIDs:(id)arg0 assetTypeFlags:(int)arg1 personID:(id)arg2 ;
-(void)retryOutstandingActivities;
-(void)retryOutstandingActivitiesForPersonID:(id)arg0 ;
-(void)sendServerSideConfigurationDidChangeNotificationForPersonID:(id)arg0 ;
-(void)setFocusAlbumGUID:(id)arg0 forPersonID:(id)arg1 ;
-(void)setFocusAssetCollectionGUID:(id)arg0 forPersonID:(id)arg1 ;
-(void)setMultipleContributorsEnabled:(BOOL)arg0 forAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id)arg3 ;
-(void)setMultipleContributorsEnabled:(BOOL)arg0 forAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 completionBlock:(id)arg4 ;
-(void)setNextActivityDate:(id)arg0 forPersonID:(id)arg1 ;
-(void)setPersistentObject:(id)arg0 forKey:(id)arg1 personID:(id)arg2 ;
-(void)setPublicAccessEnabled:(BOOL)arg0 forAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(id)arg3 ;
-(void)setPublicAccessEnabled:(BOOL)arg0 forAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3 completionBlock:(id)arg4 ;
-(void)shutDown;
-(void)shutDownCompletionBlock:(id)arg0 ;
-(void)shutDownStateMachine:(id)arg0 forDestruction:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)start;
-(void)stopAssetDownloadsForPersonID:(id)arg0 ;
-(void)subscribeToAlbumWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)subscribeToAlbumWithGUID:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)unsubscribeFromAlbumWithGUID:(id)arg0 personID:(id)arg1 ;
-(void)unsubscribeFromAlbumWithGUID:(id)arg0 personID:(id)arg1 info:(id)arg2 ;
-(void)updateOwnerReputationScoreForAlbum:(id)arg0 ;
-(void)willDestroyStateMachineForPersonID:(id)arg0 ;
-(void)workQueueForgetEverythingAboutPersonID:(id)arg0 completionBlock:(id)arg1 ;
-(void)workQueueForgetEverythingAboutPersonIDs:(id)arg0 index:(NSUInteger)arg1 completionBlock:(id)arg2 ;


@end


#endif