// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ECOAUTH2AUTHSCHEME_H
#define ECOAUTH2AUTHSCHEME_H



#import "ECAuthScheme.h"

@interface ECOAuth2AuthScheme : ECAuthScheme



+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)oauth2AuthScheme;
-(BOOL)requiresPassword;
-(BOOL)requiresUsername;
-(id)humanReadableName;
-(id)name;
-(id)supportedSASLMechanisms;
-(unsigned int)applescriptScheme;
-(void)dealloc;


@end


#endif