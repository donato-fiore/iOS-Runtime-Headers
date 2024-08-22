// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKAUTHORIZATIONCREDENTIAL_H
#define AKAUTHORIZATIONCREDENTIAL_H

@class NSData, NSArray, NSString;
@protocol AKCredential;

#import <Foundation/Foundation.h>

#import "AKUserInformation.h"

@interface AKAuthorizationCredential : NSObject <AKCredential>



@property (readonly, copy, nonatomic) NSData *authorizationCode; // ivar: _authorizationCode
@property (readonly, copy, nonatomic) NSArray *authorizedScopes; // ivar: _authorizedScopes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSData *identityToken; // ivar: _identityToken
@property (nonatomic) BOOL isLikelyRealUser; // ivar: _isLikelyRealUser
@property (readonly, copy, nonatomic) NSString *state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *transactionID; // ivar: _transactionID
@property (readonly, copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier
@property (readonly, nonatomic) AKUserInformation *userInformation; // ivar: _userInformation


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServerResponse:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif