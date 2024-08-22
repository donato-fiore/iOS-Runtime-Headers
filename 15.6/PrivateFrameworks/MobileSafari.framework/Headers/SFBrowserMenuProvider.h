// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFBROWSERMENUPROVIDER_H
#define SFBROWSERMENUPROVIDER_H


#import <Foundation/Foundation.h>


@interface SFBrowserMenuProvider : NSObject {
    NSDictionary" _personaToMenusMap;
    NSSet" _personaToCommandSetMap;
    NSInteger _persona;
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
-(void)_setMenusForPersona:(NSInteger)arg0 withBuilder:(id)arg1 ;
-(void)_setMenusIfNecessaryForPersona:(NSInteger)arg0 ;
-(void)rebuildMenuIfNeededForPersona:(NSInteger)arg0 ;
-(void)setMenusForSafariWithBuilder:(id)arg0 ;
-(void)setMenusIfNecessaryForSafariViewServiceWithBuilder:(id)arg0 ;


@end


#endif