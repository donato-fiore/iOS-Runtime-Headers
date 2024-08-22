// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFSETTINGSAUTHENTICATION_H
#define _SFSETTINGSAUTHENTICATION_H


#import <Foundation/Foundation.h>


@interface _SFSettingsAuthentication : NSObject



+(BOOL)authenticationRequiresPasscode;
+(id)_localAuthenticationOptionsWithAuthenticationContext:(id)arg0 ;
+(void)authenticateForSettings:(id)arg0 allowAuthenticationReuse:(BOOL)arg1 completionHandler:(id)arg2 ;
+(void)pushSettingsAfterAuthentication:(id)arg0 onBehalfOfViewController:(id)arg1 resourceDictionary:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif