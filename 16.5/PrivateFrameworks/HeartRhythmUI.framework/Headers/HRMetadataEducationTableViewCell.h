// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRMETADATAEDUCATIONTABLEVIEWCELL_H
#define HRMETADATAEDUCATIONTABLEVIEWCELL_H

@class UITableViewCell, NSLayoutConstraint, UILabel, NSString;



@interface HRMetadataEducationTableViewCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *bodyBottomAnchorToBottomConstraint; // ivar: _bodyBottomAnchorToBottomConstraint
@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (copy, nonatomic) NSString *bodyText; // ivar: _bodyText
@property (retain, nonatomic) NSLayoutConstraint *titleBaselineToBodyBaselineConstraint; // ivar: _titleBaselineToBodyBaselineConstraint
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (retain, nonatomic) NSLayoutConstraint *topToTitleBaselineConstraint; // ivar: _topToTitleBaselineConstraint


+(id)defaultReuseIdentifier;
-(CGFloat)_bodyBottomAnchorToBottom;
-(CGFloat)_titleBaselineToBodyBaseline;
-(CGFloat)_topToTitleBaseline;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setUpConstraints;
-(void)_setUpUI;
-(void)_updateForCurrentSizeCategory;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif