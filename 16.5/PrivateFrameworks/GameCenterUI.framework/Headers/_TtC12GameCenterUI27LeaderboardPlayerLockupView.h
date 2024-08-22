// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI27LEADERBOARDPLAYERLOCKUPVIEW_H
#define _TTC12GAMECENTERUI27LEADERBOARDPLAYERLOCKUPVIEW_H

@class UIView;



@interface _TtC12GameCenterUI27LeaderboardPlayerLockupView : UIView {
    ? movement;
    ? movementArrowView;
    ? ordinalLabel;
    ? avatarView;
    ? playerHandleLabel;
    ? detailLabel;
    ? avatarSize;
    ? hasSeparator;
    ? separatorView;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif