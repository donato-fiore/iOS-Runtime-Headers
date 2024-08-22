// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDETAILSAVATARPANCAKEVIEW_H
#define CKDETAILSAVATARPANCAKEVIEW_H

@class UIView;


#import "CKAvatarView.h"

@interface CKDetailsAvatarPancakeView : UIView

@property (retain, nonatomic) CKAvatarView *bottomAvatar; // ivar: _bottomAvatar
@property (retain, nonatomic) UIView *bottomAvatarCutOutView; // ivar: _bottomAvatarCutOutView
@property (retain, nonatomic) CKAvatarView *middleAvatar; // ivar: _middleAvatar
@property (retain, nonatomic) CKAvatarView *topAvatar; // ivar: _topAvatar
@property (retain, nonatomic) UIView *topAvatarCutOutView; // ivar: _topAvatarCutOutView


-(id)createAvatarCutOutView;
-(id)initWithSize:(struct CGSize )arg0 avatarViews:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)addConstraints;


@end


#endif