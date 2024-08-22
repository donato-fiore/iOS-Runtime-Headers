// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDPROFILEHEADERVIEW_H
#define WDPROFILEHEADERVIEW_H

@class UIView, NSPersonNameComponentsFormatter, UILabel;



@interface WDProfileHeaderView : UIView

@property (retain, nonatomic) UIView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) NSPersonNameComponentsFormatter *nameFormatter; // ivar: _nameFormatter
@property (nonatomic, getter=isNameHidden) BOOL nameHidden;
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateFont;
-(void)layoutSubviews;
-(void)setFirstName:(id)arg0 lastName:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif