// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMMUSICMENULABELCELL_H
#define PMMUSICMENULABELCELL_H

@class UITableViewCell, UILabel, NSLayoutConstraint;



@interface PMMusicMenuLabelCell : UITableViewCell

@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) NSLayoutConstraint *labelLeadingConstraint; // ivar: _labelLeadingConstraint


-(void)awakeFromNib;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif