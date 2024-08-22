// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKOSLOGTABLEVIEWCELL_H
#define FBKOSLOGTABLEVIEWCELL_H

@class UITableViewCell, UILabel;



@interface FBKOSLogTableViewCell : UITableViewCell

@property (weak, nonatomic) UILabel *logLabel; // ivar: _logLabel


-(void)awakeFromNib;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif