// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPHOTOSHARINGHELPER_H
#define PLPHOTOSHARINGHELPER_H


#import <Foundation/Foundation.h>


@interface PLPhotoSharingHelper : NSObject



+(BOOL)_derivativeExistsForAsset:(id)arg0 cloudPlaceholderKind:(short)arg1 ;
+(BOOL)_recentlyRequestedDownloadAsset:(id)arg0 cloudPlaceholderKind:(short)arg1 ;
+(BOOL)_sharedStreamsEnabled;
+(BOOL)_sharedStreamsExplicitlyDisabled;
+(BOOL)accountMatchesEmail:(id)arg0 ;
+(BOOL)canAcceptPendingInvitationForAlbum:(id)arg0 error:(*id)arg1 ;
+(BOOL)canCreateStreamInPhotoLibrary:(id)arg0 error:(*id)arg1 ;
+(BOOL)canSetUserCloudSharedLiked:(BOOL)arg0 forAssets:(id)arg1 error:(*id)arg2 ;
+(BOOL)debugAlwaysStreamSharedVideos;
+(BOOL)debugAutoAcceptInvitation;
+(BOOL)debugDownloadAllDerivatives;
+(BOOL)debugDownloadMetadataOnly;
+(BOOL)debugDownloadThumbnailsOnly;
+(BOOL)hasPhoneInvitationForAlbum:(id)arg0 ;
+(BOOL)hasReachedLimitOfOwnedStreamsInLibrary:(id)arg0 ;
+(BOOL)hasReachedLimitOfSubscribedStreamsInLibrary:(id)arg0 ;
+(BOOL)isBreadcrumbDebugEnabled;
+(BOOL)isCellularConnection;
+(BOOL)removeCloudSharingDirectories:(*id)arg0 ;
+(BOOL)sharedStreamsEnabledForPhotoLibraryURL:(id)arg0 ;
+(BOOL)sharedStreamsExplictlyDisabledForPhotoLibraryURL:(id)arg0 ;
+(CGFloat)derivedAssetSmallDimensionLimitForType:(int)arg0 ;
+(CGFloat)intervalBetweenAlbumPolls;
+(CGFloat)intervalBetweenPolls;
+(NSInteger)_serverLimitValueForKey:(id)arg0 withDefaultResult:(NSInteger)arg1 ;
+(NSInteger)maxAssetsPerStream;
+(NSInteger)maxCharactersPerComment;
+(NSInteger)maxCommentsPerAsset;
+(NSInteger)maxGIFSizeForPublishing;
+(NSInteger)maxNumDerivativesToDownloadPerPush;
+(NSInteger)maxNumDerivativesToPrefetchPerDay;
+(NSInteger)maxNumThumbnailsToPrefetchPerDay;
+(NSInteger)maxOwnedStreams;
+(NSInteger)maxSubscribedStreams;
+(NSInteger)maxSubscribersPerStream;
+(NSInteger)maxVideoLengthForPublishing;
+(NSUInteger)purgeSpace:(NSUInteger)arg0 ;
+(NSUInteger)purgeableSpace;
+(id)_downloadRequestQueue;
+(id)_localizationKeyForAssets:(id)arg0 ;
+(id)_pathToServerConfigurationCache;
+(id)_phoneInvitationFailureFile;
+(id)_processPhoneFailuresQueue;
+(id)_transactionWithName:(char *)arg0 ;
+(id)_videoDerivativeForVideoAtURL:(id)arg0 outputURL:(id)arg1 withPreset:(id)arg2 reason:(id)arg3 outputFileType:(id)arg4 ;
+(id)derivativesForMasterAsset:(id)arg0 withSpecifications:(id)arg1 ;
+(id)directoryPathForDownloadActivityForAlbumGUID:(id)arg0 create:(BOOL)arg1 ;
+(id)directoryPathForUploadActivityForAlbumGUID:(id)arg0 create:(BOOL)arg1 ;
+(id)downloadNotificationForAssetwithUUID:(id)arg0 cloudPlaceholderKind:(short)arg1 ;
+(id)photoSharingOriginalFilenameForAsset:(id)arg0 ;
+(id)prefixForBreadcrumbState:(int)arg0 ;
+(id)serverSideConfigurationDictionary;
+(id)sharingDisplayNameIncludingEmail:(BOOL)arg0 allowsEmail:(BOOL)arg1 ;
+(id)sharingFirstName;
+(id)sharingLastName;
+(id)sharingPersonID;
+(id)sharingUsername;
+(id)streamdVideoCache;
+(id)temporaryDerivativePathForCollectionGUID:(id)arg0 uti:(id)arg1 ;
+(id)temporaryLargeVideoDerivativePathForCollectionGUID:(id)arg0 ;
+(id)temporarySmallVideoDerivativePathForCollectionGUID:(id)arg0 ;
+(id)temporaryThumbnailPathForCollectionGUID:(id)arg0 ;
+(id)temporaryUploadDerivativesPathForCollectionGUID:(id)arg0 pathExtension:(id)arg1 ;
+(id)temporaryVideoPathForCollectionGUID:(id)arg0 ;
+(id)temporaryVideoPosterFramePathForCollectionGUID:(id)arg0 ;
+(id)videoDerivativesForAssetCollection:(id)arg0 withSpecifications:(id)arg1 ;
+(struct CGSize )derivedAssetSizeForMasterSizeWidth:(CGFloat)arg0 height:(CGFloat)arg1 derivativeType:(int)arg2 withSpecificationInfo:(id)arg3 ;
+(struct CGSize )videoPosterFrameDimension;
+(unsigned int)registerIdleStateChangeObserverWithToken:(*int)arg0 handler:(id)arg1 ;
+(unsigned int)unregisterIdleStateChangeObserverWithToken:(int)arg0 ;
+(void)_markStreamVideosAsPurgeable;
+(void)_resetServerSideConfigurationDictionary;
+(void)_userDidDeleteSharedAlbum:(id)arg0 ;
+(void)_userDidDeleteSharedAssets:(id)arg0 ;
+(void)acceptPendingInvitationForAlbum:(id)arg0 completionHandler:(id)arg1 ;
+(void)accountSettingsChanged;
+(void)applicationIsInForeground:(BOOL)arg0 photoLibraryURL:(id)arg1 ;
+(void)checkServerModelForAlbum:(id)arg0 photoLibrary:(id)arg1 ;
+(void)clearCachedAccountState;
+(void)declinePendingInvitationForAlbum:(id)arg0 ;
+(void)deleteCloudSharedAlbumFromServer:(id)arg0 ;
+(void)deleteCloudSharedAssetsFromServer:(id)arg0 inSharedAlbum:(id)arg1 ;
+(void)deleteCommentWithGUIDFromServer:(id)arg0 ;
+(void)deleteDebugBreadcrumbsForAlbumGUID:(id)arg0 ;
+(void)deleteLocalAlbumsForMSASAlbumsWithGUID:(id)arg0 inviterAddress:(id)arg1 ;
+(void)deleteLocalAlbumsForMSASAlbumsWithGUIDs:(id)arg0 ;
+(void)downloadAsset:(id)arg0 cloudPlaceholderKind:(short)arg1 shouldPrioritize:(BOOL)arg2 shouldExtendTimer:(BOOL)arg3 ;
+(void)enqueueCloudSharedAssetsForPublishToServer:(id)arg0 inSharedAlbum:(id)arg1 ;
+(void)forgetSharingPersonID:(id)arg0 ;
+(void)handlePhoneInvitationFailuresWithCompletionBlock:(id)arg0 ;
+(void)initializeMSPlatform;
+(void)markAlbumGUIDAsViewed:(id)arg0 clearUnseenAssetsCount:(BOOL)arg1 ;
+(void)markCommentsForAssetCollectionWithGUID:(id)arg0 asViewedWithLastViewedDate:(id)arg1 ;
+(void)markPendingInvitationAsSpamForAlbum:(id)arg0 completionHandler:(id)arg1 ;
+(void)photosPreferencesChanged;
+(void)pollForAlbumListUpdates;
+(void)pollForAlbumListUpdatesIfNecessary;
+(void)prioritizeDownloadsForAlbumGUID:(id)arg0 ;
+(void)pruneCloudSharingContentIfNecessaryInLibrary:(id)arg0 ;
+(void)publishCloudSharedAlbumToServer:(id)arg0 ;
+(void)publishCloudSharedCommentToServer:(id)arg0 ;
+(void)refreshSubscriberListForAlbumGUID:(id)arg0 ;
+(void)removeSubscribers:(id)arg0 fromOwnedAlbum:(id)arg1 ;
+(void)requestVideoPlaybackURLForAsset:(id)arg0 videoType:(NSUInteger)arg1 completion:(id)arg2 ;
+(void)resetAllLocalState;
+(void)retryOutstandingActivities;
+(void)savePhoneInvitationFailuresForPhoneNumber:(id)arg0 inAlbum:(id)arg1 ;
+(void)sendPendingInvitationsForNewlyCreatedAlbum:(id)arg0 ;
+(void)unsubscribeFromAlbum:(id)arg0 ;
+(void)updateCloudSharedAlbumMetadataOnServer:(id)arg0 ;
+(void)updateCloudSharedAlbumMultipleContributorsStateOnServer:(id)arg0 ;
+(void)updateCloudSharedAlbumPublicURLStateOnServer:(id)arg0 ;
+(void)updateLocalAlbumMetadataForMSASAlbum:(id)arg0 info:(id)arg1 ;
+(void)updateSharedAlbumsCachedServerConfigurationLimits;
+(void)writeAlbumNameBreadCrumb:(id)arg0 forAlbumGUID:(id)arg1 isUpload:(BOOL)arg2 ;
+(void)writeDownloadDebugBreadcrumbForAsset:(id)arg0 albumGUID:(id)arg1 content:(id)arg2 state:(int)arg3 error:(id)arg4 ;
+(void)writeUploadDebugBreadcrumbForAssetCollections:(id)arg0 state:(int)arg1 error:(id)arg2 ;


@end


#endif