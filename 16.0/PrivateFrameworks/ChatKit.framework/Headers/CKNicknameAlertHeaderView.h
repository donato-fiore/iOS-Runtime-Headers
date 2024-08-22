// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKNICKNAMEALERTHEADERVIEW_H
#define CKNICKNAMEALERTHEADERVIEW_H

@class UIView, UILabel, IMNickname;


#import "CKAvatarView.h"

@interface CKNicknameAlertHeaderView : UIView

@property (retain, nonatomic) CKAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) UILabel *handleLabel; // ivar: _handleLabel
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) IMNickname *nickname; // ivar: _nickname


-(id)handleText;
-(id)initWithFrame:(struct CGRect )arg0 nickname:(id)arg1 ;
-(id)nameText;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateAvatarView;
-(void)layoutSubviews;
-(void)setupViews;


@end


#endif