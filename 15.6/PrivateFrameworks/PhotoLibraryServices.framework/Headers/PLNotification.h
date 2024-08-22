// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLNOTIFICATION_H
#define PLNOTIFICATION_H

@class NSString, NSMutableSet, NSDate, NSArray, NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface PLNotification : NSObject {
    NSString *_senderName;
    NSString *_albumTitle;
    BOOL _mainAssetIsMine;
    BOOL _mainAssetIsVideo;
    BOOL _containsBatchFirstKnownAsset;
    NSMutableSet *_assetUUIDs;
    NSInteger _assetCount;
    NSMutableSet *_placeholderAssetUUIDs;
    NSMutableSet *_lowResThumbAssetUUIDs;
    int _invitationState;
    NSString *_firstCommentGUID;
    NSDate *_commentDate;
    NSInteger _commentCount;
    BOOL _commentIsCaption;
    NSMutableSet *_senderNames;
    BOOL _forMultipleAsset;
    BOOL _allMultipleAssetIsMine;
    BOOL _isMixedType;
    NSString *_notificationTitle;
    NSString *_notificationSubtitle;
    NSString *_suggestedCMMUUID;
    NSString *_keyMomentShareUUID;
    NSArray *_momentShareUUIDs;
    NSString *_momentShareOwnerLocalizedName;
}


@property (readonly, copy) NSString *albumCloudGUID; // ivar: _albumCloudGUID
@property (readonly, copy) NSString *albumUUID; // ivar: _albumUUID
@property (readonly) BOOL allAssetsAreFullResolution;
@property (readonly) BOOL canMergeWithPersistedNotifications;
@property (readonly) NSString *commentText; // ivar: _commentText
@property (readonly) CGFloat completionPercentage;
@property (readonly, copy) NSDate *date; // ivar: _date
@property (readonly) NSString *destinationURLString;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, copy) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly) BOOL hasThumbnail;
@property (readonly) NSString *interestingMemoryUUID; // ivar: _interestingMemoryUUID
@property (readonly) NSString *keyObjectUUID;
@property (readonly, copy) NSString *mainAssetUUID; // ivar: _mainAssetUUID
@property (readonly) NSString *message;
@property (copy) NSDate *notificationDeliveryDate; // ivar: _notificationDeliveryDate
@property (readonly) NSInteger notificationType; // ivar: _notificationType
@property (readonly) BOOL offerToReportAsJunk; // ivar: _offerToReportAsJunk
@property (copy) NSDate *originalDate; // ivar: _originalDate
@property (readonly) NSString *photoLibraryURLString; // ivar: _photoLibraryURLString
@property (readonly) NSString *photosBatchID; // ivar: _photosBatchID
@property (readonly) NSString *requestIdentifier;
@property (readonly, copy) NSString *senderEmailAddress; // ivar: _senderEmailAddress
@property BOOL suppressAlert; // ivar: _suppressAlert
@property (readonly) NSArray *suppressionContexts;
@property (readonly) BOOL thumbnailAssetIsPlaceholder;
@property (retain) NSData *thumbnailImageData; // ivar: _thumbnailImageData
@property (readonly) NSString *title;


+(id)_UNCategoryFromNotificationType:(NSInteger)arg0 ;
+(id)requestIdentifierByNotificationType:(NSInteger)arg0 keyObjectUUID:(id)arg1 photosBatchID:(id)arg2 ;
-(BOOL)assetWithUUID:(id)arg0 didChangePlaceholderKindTo:(short)arg1 fromOldKind:(short)arg2 ;
-(BOOL)isCommentPiggyBackedOnPhotosAddedNotification;
-(id)_initWithCommentsCount:(NSInteger)arg0 commentDate:(id)arg1 firstCommentGUID:(id)arg2 toAssetWithUUID:(id)arg3 photosBatchID:(id)arg4 mainAssetIsMine:(BOOL)arg5 mainAssetIsVideo:(BOOL)arg6 inAlbumWithTitle:(id)arg7 albumUUID:(id)arg8 albumCloudGUID:(id)arg9 assetUUIDs:(id)arg10 placeholderAssetUUIDs:(id)arg11 lowResThumbAssetUUIDs:(id)arg12 ;
-(id)_initWithLikesCount:(NSInteger)arg0 commentDate:(id)arg1 firstCommentGUID:(id)arg2 toAssetWithUUID:(id)arg3 photosBatchID:(id)arg4 mainAssetIsMine:(BOOL)arg5 mainAssetIsVideo:(BOOL)arg6 inAlbumWithTitle:(id)arg7 albumUUID:(id)arg8 albumCloudGUID:(id)arg9 assetUUIDs:(id)arg10 placeholderAssetUUIDs:(id)arg11 lowResThumbAssetUUIDs:(id)arg12 senderNames:(id)arg13 forMultipleAsset:(BOOL)arg14 allMultipleAssetIsMine:(BOOL)arg15 isMixedType:(BOOL)arg16 ;
-(id)_initWithPhotosAddedNotification:(id)arg0 mergedWithNotification:(id)arg1 ;
-(id)_initWithPhotosAddedNotification:(id)arg0 mergedWithNotificationDictionary:(id)arg1 ;
-(id)_initWithType:(NSInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initCMMInvitationReadyToViewWithMomentShare:(id)arg0 ;
-(id)initCMMInvitationWithMomentShare:(id)arg0 ;
-(id)initWithAssetAdded:(id)arg0 atIndex:(NSUInteger)arg1 toAlbum:(id)arg2 ;
-(id)initWithAssetsAdded:(id)arg0 toAlbum:(id)arg1 ;
-(id)initWithCommentAdded:(id)arg0 ;
-(id)initWithExpiringMomentShareUUIDs:(id)arg0 thumbnailImageData:(id)arg1 notificationTitle:(id)arg2 notificationSubtitle:(id)arg3 ;
-(id)initWithExpiringMomentShares:(id)arg0 ;
-(id)initWithInterestingMemoryNotificationWithMemoryUUID:(id)arg0 keyAssetUUID:(id)arg1 notificationTitle:(id)arg2 notificationSubtitle:(id)arg3 photoLibraryURLString:(id)arg4 ;
-(id)initWithInvitationAlbum:(id)arg0 ;
-(id)initWithInvitationRecordStatusChanged:(id)arg0 ;
-(id)initWithLikeAdded:(id)arg0 ;
-(id)initWithMultipleContributorEnabledForAlbum:(id)arg0 ;
-(id)initWithSuggestedCMMUUID:(id)arg0 keyAssetUUID:(id)arg1 notificationTitle:(id)arg2 notificationSubtitle:(id)arg3 ;
-(id)notificationByMergingWithNotification:(id)arg0 ;
-(id)notificationByMergingWithNotificationDictionary:(id)arg0 ;


@end


#endif