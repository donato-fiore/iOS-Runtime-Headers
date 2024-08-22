// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI10AVATARVIEW_H
#define _TTC12GAMECENTERUI10AVATARVIEW_H

@class UIView, UIColor;



@interface _TtC12GameCenterUI10AvatarView : UIView {
    ? artworkView;
    ? arcadeBadgeView;
    ? hasShadow;
    ? isArcadeSubscriber;
}


@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) CGRect jet_focusedFrame;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif