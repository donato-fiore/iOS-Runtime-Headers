// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKEYSHORTCUTHUDMODEL_H
#define _UIKEYSHORTCUTHUDMODEL_H

@class NSMapTable, NSMutableSet;

#import <Foundation/Foundation.h>

#import "_UIMenuLeafValidation.h"
#import "_UIKeyShortcutHUDMenu.h"

@interface _UIKeyShortcutHUDModel : NSObject {
    NSMapTable *_displayableKeyCommandModelMap;
    NSMutableSet *_equivalentKeyCommandsInPriorityAlreadyEnumerated;
    *__GSKeyboard _gsKeyboard;
    _UIMenuLeafValidation *_validation;
}


@property (retain, nonatomic) NSMutableSet *activeKeyCommands; // ivar: _activeKeyCommands
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (retain, nonatomic) NSMapTable *keyCommandModelMap; // ivar: _keyCommandModelMap
@property (readonly, nonatomic) _UIKeyShortcutHUDMenu *menu; // ivar: _menu


+(id)modelForCurrentMenu;
-(BOOL)_isKeyCommandPerformable:(id)arg0 outTarget:(*id)arg1 ;
-(id)_finalizedHUDMenuFromValidatedHUDMenu:(id)arg0 ;
-(id)_menuByOmittingNonKeyCommandsInMenu:(id)arg0 ;
-(id)_responderBasedKeyCommandsStartingAtResponder:(id)arg0 ;
-(id)_sanitizedMainMenu;
-(id)_validatedHUDMenuFromUIMenu:(id)arg0 ;
-(id)activeKeyCommandsExcludingHUDCommands:(id)arg0 ;
-(id)menuWithAlternatesForModifierFlags:(NSInteger)arg0 ;
-(id)modelShortcutForKeyCommand:(id)arg0 ;
-(id)searchMenuWithSearchText:(id)arg0 maxSearchResultEntries:(NSUInteger)arg1 ;
-(void)_addShortcutsFromHUDMenu:(id)arg0 toShortcutsArray:(id)arg1 ;
-(void)_buildMenu;
-(void)_enumerateKeyCommandsInMenu:(id)arg0 block:(id)arg1 ;
-(void)_validateBaseKeyCommand:(id)arg0 usingAlternate:(id)arg1 ;
-(void)_validateKeyCommandAndAlternates:(id)arg0 ;


@end


#endif