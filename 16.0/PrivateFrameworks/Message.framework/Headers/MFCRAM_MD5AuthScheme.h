// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFCRAM_MD5AUTHSCHEME_H
#define MFCRAM_MD5AUTHSCHEME_H

@class ECAuthenticationScheme;



@interface MFCRAM_MD5AuthScheme : ECAuthenticationScheme



-(BOOL)canAuthenticateAccountClass:(Class)arg0 connection:(id)arg1 ;
-(BOOL)hasEncryption;
-(BOOL)sendsPlainTextPasswords;
-(Class)authenticatorClass;
-(id)humanReadableName;
-(id)name;


@end


#endif