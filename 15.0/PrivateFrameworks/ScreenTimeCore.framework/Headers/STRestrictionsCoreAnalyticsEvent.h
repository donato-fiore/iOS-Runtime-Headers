// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STRESTRICTIONSCOREANALYTICSEVENT_H
#define STRESTRICTIONSCOREANALYTICSEVENT_H

@class NSString, NSDictionary;
@protocol STCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface STRestrictionsCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>



@property (readonly) BOOL contentAndPrivacyRestrictionsEnabled; // ivar: _contentAndPrivacyRestrictionsEnabled
@property (readonly, copy) NSString *description;
@property (readonly) BOOL gameCenterAddingFriendsIsRestricted; // ivar: _gameCenterAddingFriendsIsRestricted
@property (readonly) BOOL gameCenterAvatarAndNicknameChangesIsRestricted; // ivar: _gameCenterAvatarAndNicknameChangesIsRestricted
@property (readonly) BOOL gameCenterConnectWithFriendsIsRestricted; // ivar: _gameCenterConnectWithFriendsIsRestricted
@property (readonly) BOOL gameCenterMultiplayerGamesIsRestricted; // ivar: _gameCenterMultiplayerGamesIsRestricted
@property (readonly) BOOL gameCenterNearbyMultiplayerIsRestricted; // ivar: _gameCenterNearbyMultiplayerIsRestricted
@property (readonly) BOOL gameCenterPrivateMessagingIsRestricted; // ivar: _gameCenterPrivateMessagingIsRestricted
@property (readonly) BOOL gameCenterProfilePrivacyChangesIsRestricted; // ivar: _gameCenterProfilePrivacyChangesIsRestricted
@property (readonly) BOOL gameCenterScreenRecordingIsRestricted; // ivar: _gameCenterScreenRecordingIsRestricted
@property (readonly) BOOL mediaAndAppleMusicIsRestricted; // ivar: _mediaAndAppleMusicIsRestricted
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) NSInteger userAgeGroup; // ivar: _userAgeGroup
@property (readonly) BOOL userIsManaged; // ivar: _userIsManaged


-(id)initWithContentAndPrivacyRestrictionsEnabled:(BOOL)arg0 mediaAndAppleMusicIsRestricted:(BOOL)arg1 gameCenterMultiplayerGamesIsRestricted:(BOOL)arg2 gameCenterAddingFriendsIsRestricted:(BOOL)arg3 gameCenterConnectWithFriendsIsRestricted:(BOOL)arg4 gameCenterScreenRecordingIsRestricted:(BOOL)arg5 gameCenterNearbyMultiplayerIsRestricted:(BOOL)arg6 gameCenterPrivateMessagingIsRestricted:(BOOL)arg7 gameCenterProfilePrivacyChangesIsRestricted:(BOOL)arg8 gameCenterAvatarAndNicknameChangesIsRestricted:(BOOL)arg9 userAgeGroup:(NSInteger)arg10 userIsManaged:(BOOL)arg11 ;


@end


#endif