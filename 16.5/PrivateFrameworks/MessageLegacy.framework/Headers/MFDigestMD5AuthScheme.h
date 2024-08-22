// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFDIGESTMD5AUTHSCHEME_H
#define MFDIGESTMD5AUTHSCHEME_H



#import "MFAuthScheme.h"

@interface MFDigestMD5AuthScheme : MFAuthScheme



-(BOOL)canAuthenticateAccountClass:(Class)arg0 connection:(id)arg1 ;
-(BOOL)hasEncryption;
-(Class)authenticatorClass;
-(id)humanReadableName;
-(id)name;


@end


#endif