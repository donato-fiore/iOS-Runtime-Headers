// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFDIGESTMD5AUTHSCHEME_H
#define MFDIGESTMD5AUTHSCHEME_H

@class ECAuthenticationScheme;



@interface MFDigestMD5AuthScheme : ECAuthenticationScheme



-(BOOL)canAuthenticateAccountClass:(Class)arg0 connection:(id)arg1 ;
-(BOOL)hasEncryption;
-(Class)authenticatorClass;
-(id)humanReadableName;
-(id)name;


@end


#endif