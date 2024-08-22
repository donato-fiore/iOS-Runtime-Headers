// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOAUTHORIZATIONREQUESTPARAMETERS_H
#define SOAUTHORIZATIONREQUESTPARAMETERS_H

@class NSData, NSDictionary, NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SOAuthorizationRequestParameters : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *auditTokenData; // ivar: _auditTokenData
@property (retain, nonatomic) NSDictionary *authorizationOptions; // ivar: _authorizationOptions
@property (copy, nonatomic) NSString *callerBundleIdentifier; // ivar: _callerBundleIdentifier
@property (nonatomic, getter=isCallerManaged) BOOL callerManaged; // ivar: _callerManaged
@property (copy, nonatomic) NSString *callerTeamIdentifier; // ivar: _callerTeamIdentifier
@property (nonatomic, getter=isCFNetworkInterception) BOOL cfNetworkInterception; // ivar: _cfNetworkInterception
@property (nonatomic, getter=isUserInteractionEnabled) BOOL enableUserInteraction; // ivar: _enableUserInteraction
@property (copy, nonatomic) NSDictionary *extensionData; // ivar: _extensionData
@property (copy, nonatomic) NSData *httpBody; // ivar: _httpBody
@property (copy, nonatomic) NSDictionary *httpHeaders; // ivar: _httpHeaders
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *impersonationBundleIdentifier; // ivar: _impersonationBundleIdentifier
@property (copy, nonatomic) NSString *localizedCallerDisplayName; // ivar: _localizedCallerDisplayName
@property (nonatomic) NSInteger pssoAuthenticationMethod; // ivar: _pssoAuthenticationMethod
@property (copy, nonatomic) NSString *realm; // ivar: _realm
@property (copy, nonatomic) NSString *requestedOperation; // ivar: _requestedOperation
@property (nonatomic) NSInteger responseCode; // ivar: _responseCode
@property (copy, nonatomic) NSURL *url; // ivar: _url
@property (nonatomic) BOOL useInternalExtensions; // ivar: _useInternalExtensions


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAuthorizationRequestParametersCore:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif