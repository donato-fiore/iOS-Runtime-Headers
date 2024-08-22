// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCELLULARPLANUSESTABLEVIEWCELL_H
#define TSCELLULARPLANUSESTABLEVIEWCELL_H

@class UITableViewCell, CNGeminiBadge, UILabel;



@interface TSCellularPlanUsesTableViewCell : UITableViewCell

@property (retain) CNGeminiBadge *badge; // ivar: _badge
@property (retain) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setLabel:(id)arg0 description:(id)arg1 badge:(id)arg2 ;


@end


#endif