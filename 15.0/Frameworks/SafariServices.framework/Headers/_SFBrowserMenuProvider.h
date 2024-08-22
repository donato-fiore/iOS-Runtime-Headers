// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFBROWSERMENUPROVIDER_H
#define _SFBROWSERMENUPROVIDER_H


#import <Foundation/Foundation.h>


@interface _SFBrowserMenuProvider : NSObject {
    NSDictionary" _personaToMenusMap;
    NSSet" _personaToCommandSetMap;
    NSUInteger _persona;
}




+(id)sharedProvider;
-(BOOL)commandConflictsWithTextEditing:(id)arg0 ;
-(id)_commandWithAction:(SEL)arg0 input:(id)arg1 modifierFlags:(NSInteger)arg2 discoverabilityTitle:(id)arg3 webInterceptable:(BOOL)arg4 ;
-(id)_commandWithAction:(SEL)arg0 input:(id)arg1 modifierFlags:(NSInteger)arg2 discoverabilityTitle:(id)arg3 webInterceptable:(BOOL)arg4 alternates:(id)arg5 ;
-(id)_commandWithAction:(SEL)arg0 input:(id)arg1 modifierFlags:(NSInteger)arg2 discoverabilityTitle:(id)arg3 webInterceptable:(BOOL)arg4 property:(NSUInteger)arg5 alternates:(id)arg6 ;
-(id)_commandWithAction:(SEL)arg0 input:(id)arg1 modifierFlags:(NSInteger)arg2 webInterceptable:(BOOL)arg3 property:(NSUInteger)arg4 ;
-(id)_commandWithPriorityOverTextEditingForCommand:(id)arg0 ;
-(id)_extensionsMenu;
-(id)_placeholderCommandWithAction:(SEL)arg0 input:(id)arg1 modifierFlags:(NSInteger)arg2 discoverabilityTitle:(id)arg3 ;
-(id)_switchToTabCommands;
-(id)init;
-(void)_enabledExtensionsDidChange;
-(void)_setMenusForPersona:(NSUInteger)arg0 withBuilder:(id)arg1 ;
-(void)_setMenusIfNecessaryForPersona:(NSUInteger)arg0 ;
-(void)rebuildMenuIfNeededForPersona:(NSUInteger)arg0 ;
-(void)setMenusForSafariWithBuilder:(id)arg0 ;
-(void)setMenusIfNecessaryForSafariViewServiceWithBuilder:(id)arg0 ;


@end


#endif