// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI25BASESMALLFRIENDLOCKUPVIEW_H
#define _TTC12GAMECENTERUI25BASESMALLFRIENDLOCKUPVIEW_H

@class UIView;


#import "_TtC12GameCenterUI16DynamicTypeLabel.h"

@interface _TtC12GameCenterUI25BaseSmallFriendLockupView : UIView {
    ? avatarView;
    ? titleLabel;
    ? subtitleLabel;
    ? style;
    ? chevronView;
    ? hasChevron;
    ? trailingViewConfiguration;
    ? accessoryButton;
    ? avatarLoadingTask;
}


@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(BOOL)accessibilityActivate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)didTapAccessoryButton;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif