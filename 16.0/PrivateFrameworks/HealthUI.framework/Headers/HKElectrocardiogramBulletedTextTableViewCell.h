// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKELECTROCARDIOGRAMBULLETEDTEXTTABLEVIEWCELL_H
#define HKELECTROCARDIOGRAMBULLETEDTEXTTABLEVIEWCELL_H

@class UITableViewCell, NSMutableArray, UILabel, NSLayoutConstraint, NSString;



@interface HKElectrocardiogramBulletedTextTableViewCell : UITableViewCell

@property (retain, nonatomic) NSMutableArray *bodyFirstBaselineConstraints; // ivar: _bodyFirstBaselineConstraints
@property (retain, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (retain, nonatomic) NSLayoutConstraint *detailLabelLastBaselineConstraint; // ivar: _detailLabelLastBaselineConstraint
@property (readonly, nonatomic) NSString *detailText;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSString *titleText;


+(id)defaultReuseIdentifier;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_setUpUI;
-(void)_setupConstraints;
-(void)_updateLeadingDetailAttributedTextSize;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif