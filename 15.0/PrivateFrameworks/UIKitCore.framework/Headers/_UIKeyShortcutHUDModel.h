// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIKEYSHORTCUTHUDMODEL_H
#define _UIKEYSHORTCUTHUDMODEL_H

@class NSMutableArray, NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "_UIKeyShortcutHUDMenu.h"

@interface _UIKeyShortcutHUDModel : NSObject {
    NSMutableArray *_eligibleActiveShortcutAlternates;
    NSMutableSet *_lowPriorityResponderShortcuts;
    *__GSKeyboard _gsKeyboard;
}


@property (retain, nonatomic) NSMutableArray *activeKeyCommands; // ivar: _activeKeyCommands
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (retain, nonatomic) NSMutableDictionary *keyCommandModelMap; // ivar: _keyCommandModelMap
@property (readonly, nonatomic) _UIKeyShortcutHUDMenu *menu; // ivar: _menu


+(id)modelWithConfiguration:(id)arg0 ;
-(BOOL)_validateShortcut:(id)arg0 validation:(id)arg1 configuration:(id)arg2 ;
-(id)_addShortcutIfOriginalForKeyCommand:(id)arg0 ;
-(id)_addShortcutsIfOriginalForKeyCommandAndAlternates:(id)arg0 ;
-(id)_fullMenu;
-(id)_hudMenuFromFullMenu:(id)arg0 withConfiguration:(id)arg1 ;
-(id)_menuByOmittingElementsInMenu:(id)arg0 ;
-(id)_responderBasedShortcutsStartingAtResponder:(id)arg0 ;
-(id)activeKeyCommandsExcludingHUDCommands:(id)arg0 ;
-(id)menuWithAlternatesForModifierFlags:(NSInteger)arg0 ;
-(id)modelShortcutForKeyCommand:(id)arg0 ;
-(id)searchMenuWithSearchText:(id)arg0 maxSearchResultEntries:(NSUInteger)arg1 ;
-(void)_addKeyCommandsForHUDFromMenu:(id)arg0 validation:(id)arg1 configuration:(id)arg2 currentShortcuts:(id)arg3 ;
-(void)_addShortcutIfOriginalForBaseKeyCommand:(id)arg0 usingAlternate:(id)arg1 withBaseShortcut:(id)arg2 ;
-(void)_buildMenuWithConfiguration:(id)arg0 ;


@end


#endif