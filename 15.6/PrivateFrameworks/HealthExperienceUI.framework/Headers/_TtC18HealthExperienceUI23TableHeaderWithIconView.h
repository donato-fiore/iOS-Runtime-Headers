// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHEXPERIENCEUI23TABLEHEADERWITHICONVIEW_H
#define _TTC18HEALTHEXPERIENCEUI23TABLEHEADERWITHICONVIEW_H

@class UITableViewHeaderFooterView, UIImageView, NSLayoutConstraint, UILabel;


#import "_TtC18HealthExperienceUI21ScaledLabelConstraint.h"

@interface _TtC18HealthExperienceUI23TableHeaderWithIconView : UITableViewHeaderFooterView {
    ? item;
}


@property (nonatomic, weak) UIImageView *iconImageView; // ivar: iconImageView
@property (nonatomic, weak) NSLayoutConstraint *iconImageViewBaselineConstraint; // ivar: iconImageViewBaselineConstraint
@property (nonatomic, weak) NSLayoutConstraint *iconImageViewCenterYConstraint; // ivar: iconImageViewCenterYConstraint
@property (nonatomic, weak) _TtC18HealthExperienceUI21ScaledLabelConstraint *iconImageViewHeightConstraint; // ivar: iconImageViewHeightConstraint
@property (nonatomic, weak) _TtC18HealthExperienceUI21ScaledLabelConstraint *iconImageViewWidthConstraint; // ivar: iconImageViewWidthConstraint
@property (nonatomic, weak) UILabel *title; // ivar: title


-(id)initWithCoder:(id)arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)awakeFromNib;


@end


#endif