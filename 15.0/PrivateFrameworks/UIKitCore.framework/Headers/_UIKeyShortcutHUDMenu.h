// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIKEYSHORTCUTHUDMENU_H
#define _UIKEYSHORTCUTHUDMENU_H

@class UIKeyShortcutHUDMenuElement, NSArray;


#import "UIMenu.h"

@interface _UIKeyShortcutHUDMenu : UIKeyShortcutHUDMenuElement

@property (readonly, nonatomic) NSArray *children; // ivar: _children
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) UIMenu *uiMenu;


+(id)menuWithUIMenu:(id)arg0 children:(id)arg1 ;
-(id)menuByReplacingChildren:(id)arg0 ;
// -(void)_acceptMenuVisit:(id)arg0 shortcutVisit:(unk)arg1  ;


@end


#endif