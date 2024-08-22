// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI17PROFILEAVATARVIEW_H
#define _TTC12GAMECENTERUI17PROFILEAVATARVIEW_H

@class TtC12GameCenterUI10AvatarView, UIVisualEffectView, UIView;


#import "_TtC12GameCenterUI16DynamicTypeLabel.h"

@interface _TtC12GameCenterUI17ProfileAvatarView : TtC12GameCenterUI10AvatarView {
    ? profileEditButtonBackground;
    ? profileEditLabel;
    ? roundedEditButton;
    ? isEditable;
    ? tapGestureRecognizer;
    ? tapHandler;
}


@property (nonatomic, readonly) BOOL accessibilityIsEditable;
@property (nonatomic, readonly) UIVisualEffectView *accessibilityProfileEditButtonBackground;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityProfileEditLabel;
@property (nonatomic, readonly) UIView *accessibilityRoundedEditButton;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTap;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif