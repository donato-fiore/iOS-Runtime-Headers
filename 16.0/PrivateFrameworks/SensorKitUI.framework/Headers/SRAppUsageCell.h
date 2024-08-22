// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRAPPUSAGECELL_H
#define SRAPPUSAGECELL_H

@class UITableViewCell, UIButton, UILabel;



@interface SRAppUsageCell : UITableViewCell

@property (readonly, nonatomic) UIButton *button; // ivar: _button
@property (readonly, nonatomic) UILabel *label; // ivar: _label


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)dealloc;


@end


#endif