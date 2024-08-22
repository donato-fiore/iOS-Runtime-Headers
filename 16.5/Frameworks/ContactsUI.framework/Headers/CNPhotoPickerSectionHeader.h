// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPHOTOPICKERSECTIONHEADER_H
#define CNPHOTOPICKERSECTIONHEADER_H

@class UICollectionReusableView, UIButton, UIStackView, UILabel;



@interface CNPhotoPickerSectionHeader : UICollectionReusableView

@property (copy, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (readonly, nonatomic) UIButton *actionButton; // ivar: _actionButton
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(CGFloat)heightNeededForAccessibilityLayoutIncludingActionButton:(BOOL)arg0 ;
+(id)reusableIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)actionButtonPressed:(id)arg0 ;
-(void)prepareForReuse;
-(void)setupConstraints;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateDynamicStackViewProperties;
-(void)updateStyle:(id)arg0 ;


@end


#endif