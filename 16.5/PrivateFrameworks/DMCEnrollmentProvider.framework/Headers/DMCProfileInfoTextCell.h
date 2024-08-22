// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCPROFILEINFOTEXTCELL_H
#define DMCPROFILEINFOTEXTCELL_H

@class UITableViewCell, NSAttributedString, UILabel, NSString;



@interface DMCProfileInfoTextCell : UITableViewCell

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (copy, nonatomic) NSString *text;


+(id)cellIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif