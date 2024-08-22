// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7MUSICUI28USERSOCIALPROFILECOORDINATOR_H
#define _TTC7MUSICUI28USERSOCIALPROFILECOORDINATOR_H


#import <Foundation/Foundation.h>


@interface _TtC7MusicUI28UserSocialProfileCoordinator : NSObject {
    ? socialOnboardingUserAttributes;
    ? pendingUserSelectedPhotoData;
    ? socialOnboardingFriendIDsToRequest;
    ? socialProfileSharedPlaylistIDsMap;
    ? userNotificationSettings;
    ? _userArtistFavoritesCache;
    ? isUserOnboarded;
    ? state;
    ? onUserProfileDidChange;
    ? onUserOnboardedStatusHasChanged;
    ? onPendingFollowRequestsDidChange;
    ? onFollowStateDidChange;
    ? onSocialOnboardingSharedPlaylistsHidden;
    ? _userSocialProfile;
    ? $__lazy_storage_$_socialServiceController;
    ? objectGraph;
    ? lock;
}




-(id)init;


@end


#endif