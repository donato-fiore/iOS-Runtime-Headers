// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCELLULARPLANITEMCELL_H
#define TSCELLULARPLANITEMCELL_H

@class UITableViewCell, UILabel;



@interface TSCellularPlanItemCell : UITableViewCell

@property (retain) UILabel *planInfo; // ivar: _planInfo
@property (retain) UILabel *title; // ivar: _title


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setDisable;
-(void)setIcon:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif