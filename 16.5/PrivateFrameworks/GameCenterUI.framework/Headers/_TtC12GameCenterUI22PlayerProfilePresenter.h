// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI22PLAYERPROFILEPRESENTER_H
#define _TTC12GAMECENTERUI22PLAYERPROFILEPRESENTER_H

@class TtC12GameCenterUI18BaseSplitPresenter, NSArray, NSString;


#import "_TtC12GameCenterUI17NicknamePresenter.h"

@interface _TtC12GameCenterUI22PlayerProfilePresenter : TtC12GameCenterUI18BaseSplitPresenter {
    ? profileType;
    ? pageContext;
    ? pageMericsPresenter;
    ? requiredDataPresenter;
    ? nicknameUpdatedSubscription;
    ? primarySections;
    ? secondarySections;
    ? sections;
    ? requiredData;
    ? onNicknameChanged;
    ? onShowAvatarEditor;
}


@property (nonatomic) BOOL displayInSplitView;
@property (nonatomic, readonly) BOOL isSignedIn;
@property (nonatomic, retain) _TtC12GameCenterUI17NicknamePresenter *nicknamePresenter; // ivar: nicknamePresenter
@property (nonatomic, readonly) NSArray *rightBarButtonItems;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) BOOL wantsHiddenNavigationBar;
@property (nonatomic, readonly) BOOL wantsHiddenTitle;


+(BOOL)isSettings;
-(id)contextMenuAction;
-(id)initWithPlayerId:(id)arg0 ;
-(void)didSignOut;
-(void)loadMoreActivityFeedWithContinuationToken:(id)arg0 ;
-(void)profileSettings;
-(void)removeFriend;
-(void)reportPlayer;
-(void)setAllowsNearByMultiplayerInvites:(BOOL)arg0 ;
-(void)showAvatarEditor;
-(void)showRecentlyPlayedWithFriends;
-(void)signIntoGameCenter;
-(void)updateSnapshot;
-(void)viewFriendRequests;


@end


#endif