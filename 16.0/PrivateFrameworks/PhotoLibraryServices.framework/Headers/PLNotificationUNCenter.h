// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLNOTIFICATIONUNCENTER_H
#define PLNOTIFICATIONUNCENTER_H

@class UNUserNotificationCenter, NSString;
@protocol UNUserNotificationCenterDelegate, PLNotificationUNCenterDelegate;

#import <Foundation/Foundation.h>


@interface PLNotificationUNCenter : NSObject <UNUserNotificationCenterDelegate>

 {
    UNUserNotificationCenter *_unc;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PLNotificationUNCenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)_interruptionLevelForNotification:(id)arg0 ;
+(id)_UNNotificationInitialize;
+(id)_categoryIdentifierForNotification:(id)arg0 ;
+(id)_contentUserInfoForNotification:(id)arg0 ;
+(id)_expiringCMMCategory;
+(id)_invitationAcceptedCategory;
+(id)_invitationsCategoryWithJunkAction:(BOOL)arg0 ;
+(id)_notificationEnablementKeyForNotificationType:(NSInteger)arg0 ;
+(id)_readyToViewInvitationCMMCategory;
+(id)_sharedLibraryParticipantAssetTrashNotificationCategory;
+(id)_sharedLibrarySuggestionsCategory;
+(id)_soundForNotification:(id)arg0 ;
+(id)_suggestedCMMCategory;
+(id)_threadIdentifierForNotification:(id)arg0 ;
+(id)_updatesCategory;
+(id)_updatesCommentedCategory;
+(id)_updatesLikedCategory;
-(id)_copiedContentFromContent:(id)arg0 WithImageData:(id)arg1 identifier:(id)arg2 ;
-(id)_makeTempThumbnailFileForImageData:(id)arg0 identifier:(id)arg1 ;
-(id)_makeTempThumbnailFileForNotification:(id)arg0 ;
-(id)_notificationContentWithNotification:(id)arg0 withImageURL:(id)arg1 sound:(BOOL)arg2 ;
-(id)init;
// -(void)_findNotificationForRequestIdentifier:(id)arg0 withPendingHandler:(id)arg1 deliveredHandler:(unk)arg2 completionHandler:(id)arg3  ;
-(void)_updateAppBadge;
-(void)enumerateExistingNotificationsUsingBlock:(id)arg0 ;
-(void)findExistingNotificationByIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)mergeExistingAndSendNotificationForNotification:(id)arg0 requestIdentifier:(id)arg1 thumbnailHandler:(id)arg2 ;
-(void)mergeExistingAndSendNotificationForNotification:(id)arg0 thumbnailHandler:(id)arg1 ;
-(void)removeAllNotifications;
-(void)removeNotificationWithRequestIdentifiers:(id)arg0 ;
-(void)removeNotificationsForNotifications:(id)arg0 ;
-(void)sendNotificationForNotification:(id)arg0 ;
-(void)sendNotificationForNotification:(id)arg0 withAttachmentURL:(id)arg1 forceToSound:(BOOL)arg2 ;
-(void)updateBadgeCountWithDelay:(NSUInteger)arg0 ;
-(void)updateImageData:(id)arg0 forNotificationWithIdentifier:(id)arg1 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif