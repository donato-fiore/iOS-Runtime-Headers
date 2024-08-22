// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNMECARDSHARINGSETTINGSNAMECELL_H
#define CNMECARDSHARINGSETTINGSNAMECELL_H

@class UITableViewCell, UITextField;



@interface CNMeCardSharingSettingsNameCell : UITableViewCell

@property (retain, nonatomic) UITextField *textField; // ivar: _textField


+(id)cellIdentifier;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif