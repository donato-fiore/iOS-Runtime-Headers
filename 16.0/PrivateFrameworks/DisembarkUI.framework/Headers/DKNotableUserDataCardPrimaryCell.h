// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DKNOTABLEUSERDATACARDPRIMARYCELL_H
#define DKNOTABLEUSERDATACARDPRIMARYCELL_H

@class UIView, UIImageView, UIStackView, UILabel;



@interface DKNotableUserDataCardPrimaryCell : UIView

@property (retain, nonatomic) UIImageView *chevronImageView; // ivar: _chevronImageView
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (nonatomic) BOOL hideChevron; // ivar: _hideChevron
@property (retain, nonatomic) UIView *iconView; // ivar: _iconView
@property (retain, nonatomic) UIStackView *labelContainer; // ivar: _labelContainer
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)_chevronImage;
-(id)_subtitleFont;
-(id)_titleFont;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 icon:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif