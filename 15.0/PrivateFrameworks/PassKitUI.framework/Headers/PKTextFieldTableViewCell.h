// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTEXTFIELDTABLEVIEWCELL_H
#define PKTEXTFIELDTABLEVIEWCELL_H

@class UITableViewCell, UITextField;



@interface PKTextFieldTableViewCell : UITableViewCell

@property (readonly, nonatomic) UITextField *textField; // ivar: _textField


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif