// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI16ACHIEVEMENTBADGE_H
#define _TTC12GAMECENTERUI16ACHIEVEMENTBADGE_H

@class UIView;



@interface _TtC12GameCenterUI16AchievementBadge : UIView {
    ? theme;
    ? metrics;
    ? style;
    ? $__lazy_storage_$_progressNumberFont;
    ? $__lazy_storage_$_progressPercentageFont;
    ? $__lazy_storage_$_numberFormatter;
    ? status;
    ? image;
    ? innerShadow;
    ? outerFoilLabel;
    ? outerFoilRing;
    ? innerFoil;
    ? progressBarLayer;
    ? iconImageView;
    ? progressLabel;
}


@property (nonatomic, readonly) BOOL accessibilityIsAchievementCompleted;
@property (nonatomic, readonly) BOOL accessibilityIsAchievementInProgress;
@property (nonatomic, readonly) BOOL accessibilityIsAchievementLocked;
@property (nonatomic, readonly) CGFloat accessibilityProgress;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)layoutSubviews;


@end


#endif