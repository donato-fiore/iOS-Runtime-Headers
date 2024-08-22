// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLNOTIFICATIONMANAGER_H
#define PLNOTIFICATIONMANAGER_H

@class CNContactStore, NSMutableDictionary, NSString;
@protocol PLNotificationUNCenterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLNotificationUNCenter.h"

@interface PLNotificationManager : NSObject <PLNotificationUNCenterDelegate>

 {
    BOOL _badgeCountIsInvalid;
    BOOL _enableTemporaryDebugMode;
    CNContactStore *_contactStore;
    int _alertFiltrationEnabled;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableDictionary *_waitingAssetsAddNotifications;
    *__CFUserNotification _processCinematicVideoItemsPrompt;
    os_unfair_lock_s _processCinematicVideoItemsPromptLock;
}


@property (retain, nonatomic) PLNotificationUNCenter *UNCenter; // ivar: _UNCenter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_bestDateForDeliveringNotification;
+(id)_bestDateForDeliveringNotificationFromCoreDuetWithError:(*id)arg0 ;
+(id)_notificationDeliveryDate;
+(id)filteredAlbumListForContentMode:(int)arg0 library:(id)arg1 ;
+(id)sharedManager;
-(BOOL)_alertFiltrationEnabled;
-(BOOL)_isMyEmailAddress:(id)arg0 ;
-(BOOL)_notificationType:(NSInteger)arg0 matchesCommentsOrLikeNotifications:(BOOL)arg1 andPhotosAddedToAlbumNotifications:(BOOL)arg2 ;
-(BOOL)_shouldAllowAlertsFromContactWithEmail:(id)arg0 ;
-(BOOL)enableTemporaryDebugMode;
-(NSUInteger)_appBadgeCount;
-(NSUInteger)currentAppBadgeCountForNotificationUNCenter:(id)arg0 ;
-(id)_addWaitingNotification:(id)arg0 forPhotosBatchID:(id)arg1 ;
-(id)_generateMemoryNotificationRepresentationWithMemoryUUID:(id)arg0 keyAssetUUID:(id)arg1 notificationTitle:(id)arg2 notificationSubtitle:(id)arg3 notificationDeliveryDate:(id)arg4 pathManager:(id)arg5 ;
-(id)_initSharedInstance;
-(id)_memoryNotificationFromDictionaryRepresentation:(id)arg0 ;
-(id)_waitingNotificationForPhotosBatchID:(id)arg0 ;
-(id)contactStore;
-(id)init;
-(void)_deleteNotificationsForAlbumWithUUID:(id)arg0 notificationTypes:(id)arg1 ;
-(void)_deleteNotificationsForAssetWithUUID:(id)arg0 shouldDeleteCommentsOrLikeNotifications:(BOOL)arg1 shouldDeletePhotosAddedToAlbumNotifications:(BOOL)arg2 ;
-(void)_deleteNotificationsForMemoriesWithUUID:(id)arg0 notificationTypes:(id)arg1 ;
-(void)_deleteNotificationsForObjectWithUUID:(id)arg0 notificationDictionaryKey:(id)arg1 notificationTypes:(id)arg2 ;
-(void)_removeWaitingNotificationForPhotosBatchID:(id)arg0 ;
-(void)_resetAlertFiltration;
-(void)_updateImageDataForNotification:(id)arg0 ;
-(void)calculateCurrentBadgeCountWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)discardAllNotifications;
-(void)getThumbnailImageDataAssetUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)noteDidChangePlaceholderKindForAsset:(id)arg0 fromOldKind:(short)arg1 forSharedAlbum:(id)arg2 mstreamdInfo:(id)arg3 ;
-(void)noteDidDeleteSharedAlbum:(id)arg0 ;
-(void)noteDidDeleteSharedAssetsWithUUIDs:(id)arg0 ;
-(void)noteDidReceiveAssets:(id)arg0 forSharedAlbum:(id)arg1 mstreamdInfo:(id)arg2 ;
-(void)noteDidReceiveCMMInvitationWithMomentShare:(id)arg0 ;
-(void)noteDidReceiveComment:(id)arg0 mstreamdInfo:(id)arg1 ;
-(void)noteDidReceiveExpiringCMMInvitationsWithMomentShares:(id)arg0 ;
-(void)noteDidReceiveInvitationForSharedAlbum:(id)arg0 ;
-(void)noteDidReceiveLike:(id)arg0 mstreamdInfo:(id)arg1 ;
-(void)noteInvitationRecordStatusChanged:(id)arg0 fromOldState:(NSInteger)arg1 mstreamdInfo:(id)arg2 ;
-(void)noteMultipleContributorStatusChangedForAlbum:(id)arg0 mstreamdInfo:(id)arg1 ;
-(void)noteSharedAlbumUnseenStatusDidChange:(id)arg0 ;
-(void)noteSharedAssetCommentsUnreadStatusDidChange:(id)arg0 ;
-(void)noteUserAssetsAreReadyForMomentShare:(id)arg0 ;
-(void)noteUserDidChangeStatusForMomentShare:(id)arg0 photoLibrary:(id)arg1 ;
-(void)noteUserDidChangeStatusForSuggestedCMMWithUUID:(id)arg0 ;
-(void)noteUserDidDeleteSharedAlbumWithUUID:(id)arg0 ;
-(void)noteUserDidDeleteSharedAssetsWithUUIDs:(id)arg0 ;
-(void)noteUserDidLeavePhotosApplication;
-(void)noteUserDidNavigateAwayFromSharedAlbum:(id)arg0 photoLibrary:(id)arg1 ;
-(void)noteUserDidNavigateIntoSharedAlbum:(id)arg0 photoLibrary:(id)arg1 ;
-(void)noteUserDidReadCommentOnSharedAsset:(id)arg0 photoLibrary:(id)arg1 ;
-(void)noteUserDidViewCloudFeedContent:(NSInteger)arg0 photoLibrary:(id)arg1 ;
-(void)postNotificationForExpiringCMMsWithUUIDs:(id)arg0 thumbnailImageData:(id)arg1 notificationTitle:(id)arg2 notificationSubtitle:(id)arg3 ;
-(void)postNotificationForInterestInUnrenderedCinematicVideoItems;
-(void)postNotificationForInterestingMemoryWithMemoryUUID:(id)arg0 library:(id)arg1 notificationDeliveryDate:(id)arg2 ;
-(void)postNotificationForSuggestedCMMWithUUID:(id)arg0 library:(id)arg1 notificationDeliveryDate:(id)arg2 ;
-(void)removeNotificationForInterestInUnrenderedCinematicVideoItems;
-(void)removeNotificationForInterestingMemoryWithUUID:(id)arg0 ;
-(void)removeNotificationForSuggestedCMMWithUUID:(id)arg0 ;
-(void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg0 ;
-(void)sendResponse:(BOOL)arg0 toPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1 ;
-(void)setEnableTemporaryDebugMode:(BOOL)arg0 ;
-(void)triggerNotificationThumbnailUpdateForAsset:(id)arg0 ;
-(void)userViewedNotificationWithAlbumCloudGUID:(id)arg0 ;


@end


#endif