// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POLOGINCONFIGURATION_H
#define POLOGINCONFIGURATION_H

@class NSString, NSDictionary, NSArray, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface POLoginConfiguration : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *accountDisplayName; // ivar: _accountDisplayName
@property (retain, nonatomic) NSString *additionalScopes; // ivar: _additionalScopes
@property (retain, nonatomic) NSString *audience; // ivar: _audience
@property (readonly, nonatomic) NSString *clientID; // ivar: _clientID
@property (retain) NSDictionary *customAssertionRequestBodyClaims; // ivar: _customAssertionRequestBodyClaims
@property (retain) NSDictionary *customAssertionRequestHeaderClaims; // ivar: _customAssertionRequestHeaderClaims
@property (retain) NSDictionary *customLoginRequestBodyClaims; // ivar: _customLoginRequestBodyClaims
@property (retain) NSDictionary *customLoginRequestHeaderClaims; // ivar: _customLoginRequestHeaderClaims
@property (retain, nonatomic) NSArray *customLoginRequestValues; // ivar: _customLoginRequestValues
@property (retain, nonatomic) NSArray *customNonceRequestValues; // ivar: _customNonceRequestValues
@property (retain) NSDictionary *customRefreshRequestBodyClaims; // ivar: _customRefreshRequestBodyClaims
@property (retain) NSDictionary *customRefreshRequestHeaderClaims; // ivar: _customRefreshRequestHeaderClaims
@property (retain, nonatomic) NSArray *customRefreshRequestValues; // ivar: _customRefreshRequestValues
@property (nonatomic) BOOL includePreviousRefreshTokenInLoginRequest; // ivar: _includePreviousRefreshTokenInLoginRequest
@property (retain, nonatomic) NSString *invalidCredentialPredicate; // ivar: _invalidCredentialPredicate
@property (readonly, nonatomic) NSString *issuer; // ivar: _issuer
@property (retain, nonatomic) NSURL *jwksEndpointURL; // ivar: _jwksEndpointURL
@property (retain, nonatomic) NSArray *kerberosTicketMappings; // ivar: _kerberosTicketMappings
@property (retain, nonatomic) NSURL *nonceEndpointURL; // ivar: _nonceEndpointURL
@property (retain, nonatomic) NSString *nonceResponseKeypath; // ivar: _nonceResponseKeypath
@property (retain, nonatomic) NSString *previousRefreshTokenClaimName; // ivar: _previousRefreshTokenClaimName
@property (retain, nonatomic) NSURL *refreshEndpointURL; // ivar: _refreshEndpointURL
@property (retain, nonatomic) NSString *serverNonceClaimName; // ivar: _serverNonceClaimName
@property (retain, nonatomic) NSURL *tokenEndpointURL; // ivar: _tokenEndpointURL


+(BOOL)supportsSecureCoding;
+(void)configurationWithOpenIdConfigurationURL:(id)arg0 clientID:(id)arg1 issuer:(id)arg2 completion:(id)arg3 ;
+(void)configurationWithOpenIdConfigurationURL:(id)arg0 identityProviderURL:(id)arg1 clientId:(id)arg2 issuer:(id)arg3 completion:(id)arg4 ;
-(id)_initWithClientId:(id)arg0 issuer:(id)arg1 tokenEndpointURL:(id)arg2 jwksEndpointURL:(id)arg3 audience:(id)arg4 ;
-(id)dataRepresentation;
-(id)description;
-(id)initWithClientID:(id)arg0 issuer:(id)arg1 tokenEndpointURL:(id)arg2 jwksEndpointURL:(id)arg3 audience:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif