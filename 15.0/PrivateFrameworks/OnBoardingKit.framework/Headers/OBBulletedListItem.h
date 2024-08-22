// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OBBULLETEDLISTITEM_H
#define OBBULLETEDLISTITEM_H

@class UIView, UILabel, UIImageView, UIStackView, NSLayoutConstraint;



@interface OBBulletedListItem : UIView

@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) UIView *imageContainer; // ivar: _imageContainer
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraintHorizontal; // ivar: _stackViewLeadingConstraintHorizontal
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraintVertical; // ivar: _stackViewLeadingConstraintVertical
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)shouldLayoutVertically;
-(CGFloat)_horizontalMargins;
-(CGFloat)imageSizeForImage:(id)arg0 ;
-(CGFloat)leadingMargins;
-(CGFloat)trailingMargins;
-(id)_descriptionFont;
-(id)_textStyle;
-(id)_titleFont;
-(id)initWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 tintColor:(id)arg3 ;
-(void)_updateImageViewLayout;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif