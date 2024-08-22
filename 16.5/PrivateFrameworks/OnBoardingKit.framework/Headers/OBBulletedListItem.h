// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBBULLETEDLISTITEM_H
#define OBBULLETEDLISTITEM_H

@class UIView, UIButton, NSLayoutConstraint, UILabel, NSArray, UIImageView, UIStackView;



@interface OBBulletedListItem : UIView

@property (retain, nonatomic) UIButton *accessoryButton; // ivar: _accessoryButton
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraintToImageContainer; // ivar: _bottomConstraintToImageContainer
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraintToStackView; // ivar: _bottomConstraintToStackView
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) UIView *imageContainer; // ivar: _imageContainer
@property (retain, nonatomic) NSArray *imageContainerSizeConstraints; // ivar: _imageContainerSizeConstraints
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraintHorizontal; // ivar: _stackViewLeadingConstraintHorizontal
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraintVertical; // ivar: _stackViewLeadingConstraintVertical
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutConstraint *topConstraintToImageContainer; // ivar: _topConstraintToImageContainer
@property (retain, nonatomic) NSLayoutConstraint *topConstraintToStackView; // ivar: _topConstraintToStackView


-(BOOL)shouldLayoutVertically;
-(CGFloat)_combinedLabelHeight;
-(CGFloat)_horizontalMargins;
-(CGFloat)imageSizeForImage:(id)arg0 ;
-(CGFloat)leadingMargins;
-(CGFloat)trailingMargins;
-(id)_descriptionFont;
-(id)_textStyle;
-(id)_titleFont;
-(id)initWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 tintColor:(id)arg3 ;
-(id)initWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 tintColor:(id)arg3 linkButton:(id)arg4 ;
-(void)_updateImageViewLayout;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif