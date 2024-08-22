// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI29LEADERBOARDMOVEMENTLOCKUPVIEW_H
#define _TTC12GAMECENTERUI29LEADERBOARDMOVEMENTLOCKUPVIEW_H

@class UIView;



@interface _TtC12GameCenterUI29LeaderboardMovementLockupView : UIView {
    ? gradientBackground;
    ? headingLabel;
    ? detailLabel;
    ? playerViews;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif