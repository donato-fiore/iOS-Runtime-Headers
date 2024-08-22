// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKEYSHORTCUTHUDSHORTCUT_H
#define _UIKEYSHORTCUTHUDSHORTCUT_H

@class UIKeyShortcutHUDMenuElement, NSMutableDictionary, NSString, NSArray;


#import "UICommandAlternate.h"
#import "_UIKeyShortcutHUDShortcut.h"
#import "UIKeyCommand.h"

@interface _UIKeyShortcutHUDShortcut : UIKeyShortcutHUDMenuElement

@property (weak, nonatomic) UICommandAlternate *alternateForBaseShortcut; // ivar: _alternateForBaseShortcut
@property (readonly, nonatomic) NSMutableDictionary *alternatesMap; // ivar: _alternatesMap
@property (readonly, nonatomic) NSUInteger attributes;
@property (weak, nonatomic) _UIKeyShortcutHUDShortcut *baseShortcutForAlternate; // ivar: _baseShortcutForAlternate
@property (readonly, nonatomic) NSString *discoverabilityTitle;
@property (retain, nonatomic) UIKeyCommand *discoverabilityUIKeyCommand; // ivar: _discoverabilityUIKeyCommand
@property (readonly, nonatomic) NSString *hudTitle;
@property (readonly, nonatomic) NSString *input;
@property (readonly, nonatomic) NSInteger modifierFlags;
@property (weak, nonatomic) id *originalTarget; // ivar: _originalTarget
@property (readonly, nonatomic) NSArray *shortcutAlternates;
@property (readonly, nonatomic) UIKeyCommand *uiKeyCommand;


+(id)shortcutWithUIKeyCommand:(id)arg0 ;
-(id)shortcutToDisplayForModifierFlags:(NSInteger)arg0 ;
// -(void)_acceptMenuVisit:(id)arg0 shortcutVisit:(unk)arg1  ;


@end


#endif