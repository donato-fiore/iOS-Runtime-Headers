// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFDIGESTMD5AUTHENTICATOR_H
#define _MFDIGESTMD5AUTHENTICATOR_H

@class NSData;


#import "MFSASLAuthenticator.h"

@interface _MFDigestMD5Authenticator : MFSASLAuthenticator {
    BOOL _maxbuf;
    BOOL _securityLevel;
    NSData *_expectedResponse;
    *void _cryptInfo;
}




-(id)responseForServerData:(id)arg0 ;
-(int)securityLevel;
-(void)dealloc;
-(void)setAuthenticationState:(int)arg0 ;
-(void)setCryptInfo:(*void)arg0 ;
-(void)setExpectedResponse:(id)arg0 ;
-(void)setMaxBuffer:(unsigned int)arg0 ;
-(void)setSecurityLevel:(int)arg0 ;


@end


#endif