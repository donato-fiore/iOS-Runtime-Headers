// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDHEARTRHYTHMSECTIONHEADERVIEW_H
#define WDHEARTRHYTHMSECTIONHEADERVIEW_H

@class UITableViewHeaderFooterView, NSLayoutConstraint, UILabel, NSString;



@interface WDHeartRhythmSectionHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) NSLayoutConstraint *bottomToTitleLastBaselineConstraint; // ivar: _bottomToTitleLastBaselineConstraint
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (copy, nonatomic) NSString *titleText;


+(id)defaultReuseIdentifier;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)setUpUI;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraintConstants;


@end


#endif