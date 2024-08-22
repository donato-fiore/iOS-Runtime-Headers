// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFNEWCASTLEAUTHSCHEME_H
#define MFNEWCASTLEAUTHSCHEME_H

@class ECAuthenticationScheme;



@interface MFNewcastleAuthScheme : ECAuthenticationScheme



+(void)initialize;
-(BOOL)canAuthenticateAccountClass:(Class)arg0 connection:(id)arg1 ;
-(BOOL)requiresPassword;
-(Class)authenticatorClass;
-(id)humanReadableName;
-(id)name;


@end


#endif