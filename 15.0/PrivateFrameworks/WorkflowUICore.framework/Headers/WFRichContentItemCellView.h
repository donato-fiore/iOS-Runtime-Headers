// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFRICHCONTENTITEMCELLVIEW_H
#define WFRICHCONTENTITEMCELLVIEW_H

@class UIView, NSString, UILabel, NSArray, UIImage, NSLayoutConstraint, UIImageView, WFContentItem;



@interface WFRichContentItemCellView : UIView

@property (readonly, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (weak, nonatomic) UILabel *altLabel; // ivar: _altLabel
@property (nonatomic) BOOL alwaysLeftAlign; // ivar: _alwaysLeftAlign
@property (copy, nonatomic) NSArray *firstRowConstraintsWithAltText; // ivar: _firstRowConstraintsWithAltText
@property (copy, nonatomic) NSArray *firstRowConstraintsWithoutAltText; // ivar: _firstRowConstraintsWithoutAltText
@property (nonatomic) BOOL hasImage; // ivar: _hasImage
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSLayoutConstraint *imageHeightConstraint; // ivar: _imageHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *imageLeadingConstraint; // ivar: _imageLeadingConstraint
@property (nonatomic) NSUInteger imageRoundingStyle; // ivar: _imageRoundingStyle
@property (weak, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) NSLayoutConstraint *imageWidthConstraint; // ivar: _imageWidthConstraint
@property (retain, nonatomic) WFContentItem *item; // ivar: _item
@property (weak, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (copy, nonatomic) NSArray *verticalConstraintsWithSubtitle; // ivar: _verticalConstraintsWithSubtitle
@property (copy, nonatomic) NSArray *verticalConstraintsWithoutSubtitle; // ivar: _verticalConstraintsWithoutSubtitle


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setAttributedAlertButton:(id)arg0 ;
-(void)setContentAlertButton:(id)arg0 ;
-(void)setSelectableAlertButton:(id)arg0 ;
-(void)setSubtitle:(id)arg0 ;
-(void)tintColorDidChange;
-(void)updateConstraints;
-(void)updateImageCornerRadius;


@end


#endif