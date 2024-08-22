// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFOAUTH2TOKENAUTHSCHEME_H
#define MFOAUTH2TOKENAUTHSCHEME_H

@class MFAuthScheme;



@interface MFOAuth2TokenAuthScheme : MFAuthScheme



-(BOOL)canAuthenticateAccountClass:(Class)arg0 connection:(id)arg1 ;
-(Class)authenticatorClass;
-(id)authenticatorForAccount:(id)arg0 connection:(id)arg1 ;
-(id)humanReadableName;
-(id)name;


@end


#endif