// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CASAPPSIGNINREQUEST_H
#define CASAPPSIGNINREQUEST_H

@class AKAuthorizationRequest, NSArray, NSString, AKPasswordRequest;
@protocol NSSecureCoding;


#import "CASAuthenticationRequest.h"

@interface CASAppSignInRequest : CASAuthenticationRequest <NSSecureCoding>



@property (readonly, nonatomic) AKAuthorizationRequest *appleIDRequest; // ivar: _appleIDRequest
@property (copy, nonatomic) NSArray *customAuthenticationMethods; // ivar: _customAuthenticationMethods
@property (readonly, nonatomic) BOOL isAppleIDOnlyRequest;
@property (readonly, nonatomic) BOOL isEmpty;
@property (copy, nonatomic) NSString *overrideBundleIdentifier; // ivar: _overrideBundleIdentifier
@property (readonly, nonatomic) AKPasswordRequest *passwordRequest; // ivar: _passwordRequest


+(BOOL)supportsSecureCoding;
-(NSInteger)authType;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequests:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif