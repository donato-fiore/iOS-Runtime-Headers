// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI19PERSONALIZATIONVIEW_H
#define _TTC12GAMECENTERUI19PERSONALIZATIONVIEW_H

@class TtC12GameCenterUI22OnboardingTemplateView;



@interface _TtC12GameCenterUI19PersonalizationView : TtC12GameCenterUI22OnboardingTemplateView {
    ? delegate;
    ? editAvatarView;
    ? reachability;
    ? nicknameContainer;
    ? nicknameTextField;
    ? nicknameMessageLabel;
    ? activityIndicator;
    ? primaryTrayButton;
    ? gameCenterIcon;
    ? avatarContainer;
}




-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)nicknameCancelAction;
-(void)primaryAction;


@end


#endif