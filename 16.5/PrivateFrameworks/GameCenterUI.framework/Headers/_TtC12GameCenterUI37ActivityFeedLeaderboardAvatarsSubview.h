// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI37ACTIVITYFEEDLEADERBOARDAVATARSSUBVIEW_H
#define _TTC12GAMECENTERUI37ACTIVITYFEEDLEADERBOARDAVATARSSUBVIEW_H

@class UIView;



@interface _TtC12GameCenterUI37ActivityFeedLeaderboardAvatarsSubview : UIView {
    ? avatarBackgroundImage;
    ? messageLabel;
    ? scoreLabel;
    ? emojiLabel;
    ? tapGestureRecognizer;
    ? tapHandler;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)didTap;
-(void)layoutSubviews;


@end


#endif