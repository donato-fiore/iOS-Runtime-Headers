// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTCARDFIELDPICKERCELL_H
#define CNCONTACTCARDFIELDPICKERCELL_H

@class UITableViewCell;


#import "CNContactCardFieldItem.h"

@interface CNContactCardFieldPickerCell : UITableViewCell

@property (nonatomic) BOOL displaysValue; // ivar: _displaysValue
@property (retain, nonatomic) CNContactCardFieldItem *item; // ivar: _item


+(CGFloat)estimatedHeightDisplayingValue:(BOOL)arg0 ;
-(id)attributedDisplayText;
-(id)init;
-(void)setConfiguration;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif