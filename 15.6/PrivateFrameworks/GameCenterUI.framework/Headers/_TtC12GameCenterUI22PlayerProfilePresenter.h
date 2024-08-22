// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI22PLAYERPROFILEPRESENTER_H
#define _TTC12GAMECENTERUI22PLAYERPROFILEPRESENTER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_TtC12GameCenterUI34LocalPlayerAuthenticationPresenter.h"
#import "_TtC12GameCenterUI17NicknamePresenter.h"

@interface _TtC12GameCenterUI22PlayerProfilePresenter : NSObject {
    ? playerId;
    ? profileType;
    ? objectGraph;
    ? requiredDataPresenter;
    ? nicknameUpdatedSubscription;
    ? sections;
    ? requiredData;
    ? snapshot;
    ? onApplySnapshot;
    ? onUpdatePhaseChange;
    ? onShowAvatarEditor;
    ? onNicknameChanged;
}


@property (nonatomic, readonly) _TtC12GameCenterUI34LocalPlayerAuthenticationPresenter *authenticationPresenter; // ivar: authenticationPresenter
@property (nonatomic, readonly) BOOL isSignedIn;
@property (nonatomic) BOOL isUpdating; // ivar: isUpdating
@property (nonatomic, retain) _TtC12GameCenterUI17NicknamePresenter *nicknamePresenter; // ivar: nicknamePresenter
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) BOOL wantsHiddenNavigationBar;
@property (nonatomic, readonly) BOOL wantsHiddenTitle;


-(id)init;
-(void)didSignOut;
-(void)onForeGroundUpdate;
-(void)setAllowsNearByMultiplayerInvites:(BOOL)arg0 ;
-(void)showAvatarEditor;
-(void)signIntoGameCenter;
-(void)updateSnapshot;


@end


#endif