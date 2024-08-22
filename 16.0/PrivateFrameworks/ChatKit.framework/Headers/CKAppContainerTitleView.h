// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKAPPCONTAINERTITLEVIEW_H
#define CKAPPCONTAINERTITLEVIEW_H

@class UINavigationBarTitleView, UIButton, NSLayoutConstraint, UIImageView, UILabel;



@interface CKAppContainerTitleView : UINavigationBarTitleView

@property (retain, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (retain, nonatomic) NSLayoutConstraint *iconHeightConstraint; // ivar: _iconHeightConstraint
@property (retain, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (retain, nonatomic) NSLayoutConstraint *iconWidthConstraint; // ivar: _iconWidthConstraint
@property (retain, nonatomic) UILabel *label; // ivar: _label


-(id)init;
-(void)setIconImage:(id)arg0 ;
-(void)setup;


@end


#endif