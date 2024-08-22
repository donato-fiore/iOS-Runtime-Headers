// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECSASLAUTHENTICATOR_H
#define ECSASLAUTHENTICATOR_H

@class NSString;
@protocol ECAuthenticatableConnection, ECAuthenticatableAccount, ECSASLSecurityLayer;

#import <Foundation/Foundation.h>

#import "ECAuthenticationScheme.h"

@interface ECSASLAuthenticator : NSObject {
    id<ECAuthenticatableConnection> *_connection;
    id<ECAuthenticatableAccount> *_account;
    NSInteger _authenticationState;
}


@property (readonly, nonatomic) NSObject<ECAuthenticatableAccount> *account;
@property (readonly, nonatomic) ECAuthenticationScheme *authenticationScheme; // ivar: _authenticationScheme
@property (nonatomic) NSInteger authenticationState;
@property (readonly, nonatomic) BOOL couldRetry;
@property (readonly, nonatomic) BOOL justSentPlainTextPassword;
@property (readonly, nonatomic) NSString *saslName;
@property (readonly, nonatomic) NSObject<ECSASLSecurityLayer> *securityLayer;
@property (readonly, nonatomic) BOOL supportsInitialClientResponse;
@property (readonly, nonatomic) BOOL usesBase64EncodeResponseData;
@property (readonly, nonatomic, getter=isUsingSSL) BOOL usingSSL;


-(id)authScheme;
-(id)initWithAuthenticationScheme:(id)arg0 account:(id)arg1 connection:(id)arg2 ;
-(id)responseForServerData:(id)arg0 ;
-(void)setMissingPasswordError;


@end


#endif