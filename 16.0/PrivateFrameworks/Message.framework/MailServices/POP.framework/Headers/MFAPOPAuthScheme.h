// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFAPOPAUTHSCHEME_H
#define MFAPOPAUTHSCHEME_H

@class ECAuthenticationScheme;



@interface MFAPOPAuthScheme : ECAuthenticationScheme



+(void)initialize;
-(BOOL)canAuthenticateAccountClass:(Class)arg0 connection:(id)arg1 ;
-(BOOL)hasEncryption;
-(BOOL)requiresPassword;
-(BOOL)supportsAccountType:(id)arg0 ;
-(Class)authenticatorClass;
-(Class)connectionClassForAccountClass:(Class)arg0 ;
-(id)humanReadableName;
-(id)name;


@end


#endif