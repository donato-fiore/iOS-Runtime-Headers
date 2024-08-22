// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI15ACHIEVEMENTCARD_H
#define _TTC12GAMECENTERUI15ACHIEVEMENTCARD_H

@class UIView, NSDate;


#import "_TtC12GameCenterUI16AchievementBadge.h"
#import "_TtC12GameCenterUI16DynamicTypeLabel.h"

@interface _TtC12GameCenterUI15AchievementCard : UIView {
    ? theme;
    ? style;
    ? metrics;
    ? $__lazy_storage_$_highlightView;
    ? isHighlighted;
    ? allowsFocusing;
    ? backgroundView;
    ? gradient;
    ? border;
    ? badge;
    ? titleLabel;
    ? subtitleLabel;
    ? model;
    ? alwaysShowShadow;
    ? backgroundEffectsGroup;
    ? wantsFixedContentSizeCategory;
    ? tapGestureRecognizer;
    ? tapHandler;
}


@property (nonatomic, readonly) NSDate *accessibilityAchievementCompletedDate;
@property (nonatomic, readonly) _TtC12GameCenterUI16AchievementBadge *accessibilityBadge;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
@property (nonatomic, readonly) BOOL canBecomeFocused;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didTap;
-(void)layoutSubviews;


@end


#endif