// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCPROFILETITLEPAGEWARNINGCELL_H
#define MCPROFILETITLEPAGEWARNINGCELL_H

@class UITableViewCell, UILabel, UIView;



@interface MCProfileTitlePageWarningCell : UITableViewCell

@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) UIView *separatorLine; // ivar: _separatorLine


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateConstraintsWithLabel:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif