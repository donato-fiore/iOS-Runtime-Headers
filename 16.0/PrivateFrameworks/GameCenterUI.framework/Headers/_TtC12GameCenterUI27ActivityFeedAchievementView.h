// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI27ACTIVITYFEEDACHIEVEMENTVIEW_H
#define _TTC12GAMECENTERUI27ACTIVITYFEEDACHIEVEMENTVIEW_H

@class UIView, NSString;



@interface _TtC12GameCenterUI27ActivityFeedAchievementView : UIView {
    ? contentBackgroundView;
    ? sharedView;
    ? achievementCardContainer;
    ? achievementConfettiView;
    ? stackAchievementCards;
    ? stackedCardMaskOffsetsX;
    ? didHideOutOfBoundsCard;
    ? gameControllerSelectButtonDestination;
}


@property (nonatomic, copy) NSString *accessibilityLabel;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif