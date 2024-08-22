// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRXFEATURETABLEVIEWCELL_H
#define PRXFEATURETABLEVIEWCELL_H

@class UITableViewCell, UIView, NSLayoutConstraint, NSString, UILabel, UISwitch;



@interface PRXFeatureTableViewCell : UITableViewCell

@property (nonatomic) CGFloat featureImageSize; // ivar: _featureImageSize
@property (retain, nonatomic) UIView *featureImageView; // ivar: _featureImageView
@property (nonatomic, getter=isHidingSeparator) BOOL hidingSeparator; // ivar: _hidingSeparator
@property (retain, nonatomic) NSLayoutConstraint *imageViewLeadingAnchor; // ivar: _imageViewLeadingAnchor
@property (retain, nonatomic) NSLayoutConstraint *imageViewVerticalAnchor; // ivar: _imageViewVerticalAnchor
@property (readonly, nonatomic) NSLayoutConstraint *layoutGuideHeightConstraint; // ivar: _layoutGuideHeightConstraint
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UISwitch *switchControl; // ivar: _switchControl
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSLayoutConstraint *titleLabelLeadingAnchor; // ivar: _titleLabelLeadingAnchor
@property (retain, nonatomic) NSLayoutConstraint *titleLabelTrailingAnchor; // ivar: _titleLabelTrailingAnchor


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateImageViewAnchors;
-(void)_updateLabelHyphenationFactor;
-(void)_updateTitleIndent;
-(void)_updateTitleLeadingAnchor;
-(void)layoutMarginsDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif