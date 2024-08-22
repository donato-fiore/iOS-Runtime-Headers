// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI25BASESMALLFRIENDLOCKUPVIEW_H
#define _TTC12GAMECENTERUI25BASESMALLFRIENDLOCKUPVIEW_H

@class UIView;


#import "_TtC12GameCenterUI16DynamicTypeLabel.h"

@interface _TtC12GameCenterUI25BaseSmallFriendLockupView : UIView {
    ? avatarView;
    ? titleLabel;
    ? subtitleLabel;
    ? chevronView;
    ? hasChevron;
    ? avatarLoadingQueue;
    ? userAvatarLoadingDelayInSec;
}


@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif