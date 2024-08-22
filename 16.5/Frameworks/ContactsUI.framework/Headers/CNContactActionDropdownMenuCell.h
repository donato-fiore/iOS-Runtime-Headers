// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTACTIONDROPDOWNMENUCELL_H
#define CNCONTACTACTIONDROPDOWNMENUCELL_H

@class UIContextMenuInteraction;


#import "CNContactActionCell.h"
#import "CNContactActionDropdownMenuButton.h"

@interface CNContactActionDropdownMenuCell : CNContactActionCell

@property (retain, nonatomic) CNContactActionDropdownMenuButton *button; // ivar: _button
@property (readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (copy, nonatomic) id *menuProvider; // ivar: _menuProvider


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif