// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTACTIONDROPDOWNMENUCELL_H
#define CNCONTACTACTIONDROPDOWNMENUCELL_H

@class UIButton, UIContextMenuInteraction;


#import "CNContactActionCell.h"

@interface CNContactActionDropdownMenuCell : CNContactActionCell

@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (copy, nonatomic) id *menuProvider; // ivar: _menuProvider


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif