// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POLOGINCONFIGURATION_H
#define POLOGINCONFIGURATION_H

@class NSString, NSDictionary, NSArray, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface POLoginConfiguration : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *accountDisplayName; // ivar: _accountDisplayName
@property (copy, nonatomic) NSString *additionalScopes; // ivar: _additionalScopes
@property (copy, nonatomic) NSString *audience; // ivar: _audience
@property (readonly, nonatomic) NSString *clientID; // ivar: _clientID
@property (retain) NSDictionary *customAssertionRequestBodyClaims; // ivar: _customAssertionRequestBodyClaims
@property (retain) NSDictionary *customAssertionRequestHeaderClaims; // ivar: _customAssertionRequestHeaderClaims
@property (copy, nonatomic) NSArray *customFederationUserPreauthenticationRequestValues; // ivar: _customFederationUserPreauthenticationRequestValues
@property (retain) NSDictionary *customLoginRequestBodyClaims; // ivar: _customLoginRequestBodyClaims
@property (retain) NSDictionary *customLoginRequestHeaderClaims; // ivar: _customLoginRequestHeaderClaims
@property (copy, nonatomic) NSArray *customLoginRequestValues; // ivar: _customLoginRequestValues
@property (copy, nonatomic) NSArray *customNonceRequestValues; // ivar: _customNonceRequestValues
@property (retain) NSDictionary *customRefreshRequestBodyClaims; // ivar: _customRefreshRequestBodyClaims
@property (retain) NSDictionary *customRefreshRequestHeaderClaims; // ivar: _customRefreshRequestHeaderClaims
@property (copy, nonatomic) NSArray *customRefreshRequestValues; // ivar: _customRefreshRequestValues
@property (copy, nonatomic) NSURL *federationMexURL; // ivar: _federationMexURL
@property (copy, nonatomic) NSString *federationMexURLKeypath; // ivar: _federationMexURLKeypath
@property (copy, nonatomic) NSString *federationPredicate; // ivar: _federationPredicate
@property (copy, nonatomic) NSString *federationRequestURN; // ivar: _federationRequestURN
@property (nonatomic) NSUInteger federationType; // ivar: _federationType
@property (copy, nonatomic) NSURL *federationUserPreauthenticationURL; // ivar: _federationUserPreauthenticationURL
@property (nonatomic) BOOL includePreviousRefreshTokenInLoginRequest; // ivar: _includePreviousRefreshTokenInLoginRequest
@property (copy, nonatomic) NSString *invalidCredentialPredicate; // ivar: _invalidCredentialPredicate
@property (readonly, nonatomic) NSString *issuer; // ivar: _issuer
@property (copy, nonatomic) NSURL *jwksEndpointURL; // ivar: _jwksEndpointURL
@property (copy, nonatomic) NSArray *kerberosTicketMappings; // ivar: _kerberosTicketMappings
@property (copy, nonatomic) NSURL *nonceEndpointURL; // ivar: _nonceEndpointURL
@property (copy, nonatomic) NSString *nonceResponseKeypath; // ivar: _nonceResponseKeypath
@property (copy, nonatomic) NSString *previousRefreshTokenClaimName; // ivar: _previousRefreshTokenClaimName
@property (copy, nonatomic) NSURL *refreshEndpointURL; // ivar: _refreshEndpointURL
@property (copy, nonatomic) NSString *serverNonceClaimName; // ivar: _serverNonceClaimName
@property (copy, nonatomic) NSURL *tokenEndpointURL; // ivar: _tokenEndpointURL


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