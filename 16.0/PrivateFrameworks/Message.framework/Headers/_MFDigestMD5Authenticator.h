// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFDIGESTMD5AUTHENTICATOR_H
#define _MFDIGESTMD5AUTHENTICATOR_H

@class ECSASLAuthenticator, NSData;



@interface _MFDigestMD5Authenticator : ECSASLAuthenticator {
    BOOL _maxbuf;
    BOOL _securityLevel;
    NSData *_expectedResponse;
    *void _cryptInfo;
}




-(NSInteger)securityLevel;
-(id)responseForServerData:(id)arg0 ;
-(void)dealloc;
-(void)setAuthenticationState:(NSInteger)arg0 ;
-(void)setCryptInfo:(*void)arg0 ;
-(void)setExpectedResponse:(id)arg0 ;
-(void)setMaxBuffer:(unsigned int)arg0 ;
-(void)setSecurityLevel:(NSInteger)arg0 ;


@end


#endif