// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUTITLEDESCRIPTIONCELL_H
#define HUTITLEDESCRIPTIONCELL_H

@class UIFont, UIImage, UIImageView, UILabel, NSString, NSLayoutConstraint, NSArray;


#import "HUIconCell.h"

@interface HUTitleDescriptionCell : HUIconCell

@property (nonatomic) BOOL adjustsTextColorWhenDisabled; // ivar: _adjustsTextColorWhenDisabled
@property (retain, nonatomic) UIFont *descriptionFont; // ivar: _descriptionFont
@property (retain, nonatomic) UIImage *descriptionIcon; // ivar: _descriptionIcon
@property (readonly, nonatomic) UIImageView *descriptionIconView; // ivar: _descriptionIconView
@property (readonly, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (readonly, nonatomic) NSLayoutConstraint *descriptionTrailingConstraint; // ivar: _descriptionTrailingConstraint
@property (nonatomic) BOOL hideDescription; // ivar: _hideDescription
@property (nonatomic) BOOL hideDescriptionIcon; // ivar: _hideDescriptionIcon
@property (nonatomic) BOOL hideTitle; // ivar: _hideTitle
@property (retain, nonatomic) NSArray *horizontalLabelConstraints; // ivar: _horizontalLabelConstraints
@property (nonatomic) NSUInteger maxNumberOfDescriptionLines; // ivar: _maxNumberOfDescriptionLines
@property (nonatomic) NSUInteger maxNumberOfTitleLines; // ivar: _maxNumberOfTitleLines
@property (nonatomic) CGFloat textAlpha; // ivar: _textAlpha
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSString *titleText; // ivar: _titleText
@property (readonly, nonatomic) NSLayoutConstraint *titleTrailingConstraint; // ivar: _titleTrailingConstraint
@property (retain, nonatomic) NSArray *verticalLabelConstraints; // ivar: _verticalLabelConstraints


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_addDescriptionIconView;
-(void)_addDescriptionLabel;
-(void)_addTitleLabel;
-(void)prepareForReuse;
-(void)setDisabled:(BOOL)arg0 ;
-(void)updateConstraints;
-(void)updateHorizontalLabelConstraints;
-(void)updateTitle;
-(void)updateUIWithAnimation:(BOOL)arg0 ;
-(void)updateVerticalLabelConstraints;


@end


#endif