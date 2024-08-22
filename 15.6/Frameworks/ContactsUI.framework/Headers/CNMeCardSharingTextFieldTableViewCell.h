// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMECARDSHARINGTEXTFIELDTABLEVIEWCELL_H
#define CNMECARDSHARINGTEXTFIELDTABLEVIEWCELL_H

@class UITableViewCell, UITextField;



@interface CNMeCardSharingTextFieldTableViewCell : UITableViewCell

@property (retain, nonatomic) UITextField *textField; // ivar: _textField


+(id)cellIdentifier;
-(void)layoutSubviews;


@end


#endif