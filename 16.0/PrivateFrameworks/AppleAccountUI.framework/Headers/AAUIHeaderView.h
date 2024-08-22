// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIHEADERVIEW_H
#define AAUIHEADERVIEW_H

@class UIStackView, UIImageView, UILabel;


#import "AAUIBuddyView.h"

@interface AAUIHeaderView : AAUIBuddyView {
    UIStackView *_stackView;
}


@property (readonly, nonatomic) UIImageView *headerImageView; // ivar: _headerImageView
@property (readonly, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)_updateLabelFonts;
-(void)_updateStackViewSpacing;
-(void)setHeaderImage:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif