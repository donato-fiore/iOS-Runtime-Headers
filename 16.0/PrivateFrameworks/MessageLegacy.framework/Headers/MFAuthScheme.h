// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFAUTHSCHEME_H
#define MFAUTHSCHEME_H


#import <Foundation/Foundation.h>


@interface MFAuthScheme : NSObject



+(id)authSchemesForAccount:(id)arg0 connection:(id)arg1 ;
+(id)knownSchemes;
+(id)schemeWithName:(id)arg0 ;
+(void)initialize;
+(void)registerSchemeClass:(Class)arg0 ;
-(BOOL)canAuthenticateAccountClass:(Class)arg0 connection:(id)arg1 ;
-(BOOL)hasEncryption;
-(BOOL)requiresPassword;
-(Class)authenticatorClass;
-(Class)connectionClassForAccountClass:(Class)arg0 ;
-(id)authenticatorForAccount:(id)arg0 connection:(id)arg1 ;
-(id)humanReadableName;
-(id)name;
-(unsigned int)defaultPortForAccount:(id)arg0 ;


@end


#endif