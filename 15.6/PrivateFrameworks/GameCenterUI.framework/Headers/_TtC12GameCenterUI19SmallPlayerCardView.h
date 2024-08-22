// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI19SMALLPLAYERCARDVIEW_H
#define _TTC12GAMECENTERUI19SMALLPLAYERCARDVIEW_H

@class UIView, UIButton;


#import "_TtC12GameCenterUI16DynamicTypeLabel.h"

@interface _TtC12GameCenterUI19SmallPlayerCardView : UIView {
    ? contentView;
    ? contentViewBackground;
    ? closeButton;
    ? avatarView;
    ? titleLabel;
    ? subtitleLabel;
    ? button;
    ? closeButtonActionBlock;
    ? buttonActionBlock;
    ? shouldAnimateOnCloseButtonPress;
    ? disabled;
    ? currentImageFetch;
    ? image;
}


@property (nonatomic, readonly) UIButton *accessibilityCloseButton;
@property (nonatomic, readonly) UIButton *accessibilityInviteButton;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)didTapButton;
-(void)didTapCloseButton;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif