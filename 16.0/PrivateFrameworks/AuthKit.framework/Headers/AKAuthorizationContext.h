// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAUTHORIZATIONCONTEXT_H
#define AKAUTHORIZATIONCONTEXT_H

@class NSString, NSDictionary;
@protocol AKAuthenticationContext, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AKDevice.h"
#import "AKAuthorizationRequest.h"
#import "AKAuthorizationScopesUserSelection.h"

@interface AKAuthorizationContext : NSObject <AKAuthenticationContext, NSSecureCoding>



@property (nonatomic) BOOL _clientAuthenticatedExternallyWithPassword; // ivar: _clientAuthenticatedExternallyWithPassword
@property (copy, nonatomic) NSString *_externalAuthToken; // ivar: _externalAuthToken
@property (readonly, nonatomic) BOOL _hasApplicationMetaData;
@property (copy, nonatomic, setter=_setProxiedAppName:) NSString *_proxiedAppName; // ivar: _proxiedAppName
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSString *appProvidedContext; // ivar: _appProvidedContext
@property (copy, nonatomic) NSDictionary *appProvidedData; // ivar: _appProvidedData
@property (nonatomic) NSUInteger authenticationMode; // ivar: _authenticationMode
@property (nonatomic) NSUInteger authenticationType; // ivar: _authenticationType
@property (nonatomic) BOOL cliMode; // ivar: _cliMode
@property (copy, nonatomic) NSString *clientID; // ivar: _clientID
@property (copy, nonatomic) AKDevice *companionDevice; // ivar: _companionDevice
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) AKDevice *proxiedDevice; // ivar: _proxiedDevice
@property (copy, nonatomic) NSString *realUserVerificationData; // ivar: _realUserVerificationData
@property (readonly, copy, nonatomic) AKAuthorizationRequest *request; // ivar: _request
@property (nonatomic) NSInteger serviceType; // ivar: _serviceType
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *teamID; // ivar: _teamID
@property (retain, nonatomic) AKAuthorizationScopesUserSelection *userSelection; // ivar: _userSelection


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif