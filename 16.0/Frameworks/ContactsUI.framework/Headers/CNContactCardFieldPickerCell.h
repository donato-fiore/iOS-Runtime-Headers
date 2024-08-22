// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTCARDFIELDPICKERCELL_H
#define CNCONTACTCARDFIELDPICKERCELL_H

@class UITableViewCell;


#import "CNContactCardFieldItem.h"

@interface CNContactCardFieldPickerCell : UITableViewCell

@property (nonatomic) BOOL displaysValue; // ivar: _displaysValue
@property (retain, nonatomic) CNContactCardFieldItem *item; // ivar: _item


-(id)attributedDisplayValueForItem:(id)arg0 ;
-(id)init;
-(void)setConfiguration;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif