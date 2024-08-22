// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFOAUTH2TOKENAUTHENTICATOR_H
#define _MFOAUTH2TOKENAUTHENTICATOR_H

@class MFSASLAuthenticator;



@interface _MFOAuth2TokenAuthenticator : MFSASLAuthenticator {
    BOOL _sentResponse;
}




-(BOOL)justSentPlainTextPassword;
-(BOOL)supportsInitialClientResponse;
-(id)responseForServerData:(id)arg0 ;
-(id)saslName;


@end


#endif