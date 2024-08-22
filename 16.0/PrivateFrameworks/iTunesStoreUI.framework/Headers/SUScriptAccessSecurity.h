// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTACCESSSECURITY_H
#define SUSCRIPTACCESSSECURITY_H


#import <Foundation/Foundation.h>


@interface SUScriptAccessSecurity : NSObject



-(BOOL)_canAccessType:(id)arg0 inFrame:(id)arg1 error:(*id)arg2 ;
-(BOOL)_canAccessType:(id)arg0 withURL:(id)arg1 inFrame:(id)arg2 error:(*id)arg3 ;
-(BOOL)_url:(id)arg0 matchesExpressions:(id)arg1 ;
-(BOOL)_urls:(id)arg0 matchPatternStrings:(id)arg1 ;
-(BOOL)canAccessFacebookInFrame:(id)arg0 error:(*id)arg1 ;
-(BOOL)canAccessFacebookWithURL:(id)arg0 inFrame:(id)arg1 error:(*id)arg2 ;
-(BOOL)canAccessTelephonyInFrame:(id)arg0 error:(*id)arg1 ;
-(id)_accessDictionaryForType:(id)arg0 ;
-(id)_copyResourceURLsForWebFrame:(id)arg0 ;


@end


#endif