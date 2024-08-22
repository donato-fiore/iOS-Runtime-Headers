// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYSHORTCUTHUDMENU_H
#define _UIKEYSHORTCUTHUDMENU_H

@class UIKeyShortcutHUDMenuElement, NSArray;
@protocol NSSecureCoding;


#import "UIMenu.h"

@interface _UIKeyShortcutHUDMenu : UIKeyShortcutHUDMenuElement <NSSecureCoding>



@property (readonly, nonatomic) NSArray *children; // ivar: _children
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) UIMenu *uiMenu;


+(BOOL)supportsSecureCoding;
+(id)menuWithUIMenu:(id)arg0 children:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)menuByReplacingChildren:(id)arg0 ;
// -(void)_acceptMenuVisit:(id)arg0 shortcutVisit:(unk)arg1  ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif