// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCUITITLETEXTTABLEVIEWCELL_H
#define MCUITITLETEXTTABLEVIEWCELL_H

@class UITableViewCell, UILabel, NSString;



@interface MCUITitleTextTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (copy, nonatomic) NSString *text;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif