// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFSASLAUTHENTICATOR_H
#define MFSASLAUTHENTICATOR_H


#import <Foundation/Foundation.h>

#import "MFConnection.h"
#import "MFAuthScheme.h"
#import "MFAccount.h"

@interface MFSASLAuthenticator : NSObject {
    MFConnection *_connection;
    MFAuthScheme *_authScheme;
    MFAccount *_account;
    int _authenticationState;
}




-(BOOL)base64EncodeResponseData;
-(BOOL)couldRetry;
-(BOOL)isUsingSSL;
-(BOOL)justSentPlainTextPassword;
-(BOOL)supportsInitialClientResponse;
-(id)account;
-(id)authScheme;
-(id)initWithAuthScheme:(id)arg0 account:(id)arg1 connection:(id)arg2 ;
-(id)responseForServerData:(id)arg0 ;
-(id)saslName;
-(id)securityLayer;
-(int)authenticationState;
-(void)dealloc;
-(void)setAuthenticationState:(int)arg0 ;
-(void)setMissingPasswordError;


@end


#endif