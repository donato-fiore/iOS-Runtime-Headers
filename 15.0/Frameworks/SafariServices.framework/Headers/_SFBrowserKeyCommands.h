// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFBROWSERKEYCOMMANDS_H
#define _SFBROWSERKEYCOMMANDS_H


#import <Foundation/Foundation.h>


@interface _SFBrowserKeyCommands : NSObject



+(BOOL)_boolForSelectorString:(id)arg0 modifierString:(id)arg1 bundle:(id)arg2 table:(id)arg3 ;
+(NSInteger)_modifierFlagsForSelectorString:(id)arg0 bundle:(id)arg1 table:(id)arg2 ;
+(id)_keyForSelectorString:(id)arg0 bundle:(id)arg1 table:(id)arg2 ;
+(id)_localizedKeyCommandWithSelector:(SEL)arg0 discoverabilityTitle:(id)arg1 webInterceptable:(BOOL)arg2 ;
+(id)_placeholderKeyCommandForCommand:(id)arg0 ;
+(id)browserKeyCommandsForPersona:(NSUInteger)arg0 shouldAddEditingCommands:(BOOL)arg1 ;
+(id)localizedKeyCommandWithSelector:(SEL)arg0 discoverabilityTitle:(id)arg1 bundle:(id)arg2 table:(id)arg3 webInterceptable:(BOOL)arg4 ;
+(id)unlocalizedKeyCommandWithSelector:(SEL)arg0 input:(id)arg1 modifierFlags:(NSInteger)arg2 discoverabilityTitle:(id)arg3 webInterceptable:(BOOL)arg4 ;
+(id)unlocalizedKeyCommandWithSelector:(SEL)arg0 input:(id)arg1 modifierFlags:(NSInteger)arg2 webInterceptable:(BOOL)arg3 ;
+(void)_setUpKeyCommandsIfNecessaryForPersona:(NSUInteger)arg0 ;


@end


#endif