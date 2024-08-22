// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAAUTHENTICATEREQUEST_H
#define AAAUTHENTICATEREQUEST_H

@class ACAccount, NSString;


#import "AARequest.h"

@interface AAAuthenticateRequest : AARequest

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (copy, nonatomic) NSString *authToken; // ivar: _authToken
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (copy, nonatomic) NSString *username; // ivar: _username


+(Class)responseClass;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithURLString:(id)arg0 username:(id)arg1 password:(id)arg2 ;
-(id)initWithUsername:(id)arg0 password:(id)arg1 ;
-(id)urlCredential;
-(id)urlRequest;
-(id)urlString;


@end


#endif