// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOAUTHORIZATIONREQUEST_H
#define SOAUTHORIZATIONREQUEST_H

@class NSData, NSDictionary, NSString, NSError, NSArray, NSURL;

#import <Foundation/Foundation.h>

#import "SOAuthorizationRequestParameters.h"
#import "SORemoteExtensionContext.h"
#import "SOAuthorizationCredential.h"

@interface SOAuthorizationRequest : NSObject {
    SOAuthorizationRequestParameters *_requestParameters;
    SORemoteExtensionContext *_remoteExtensionContext;
}


@property (retain, nonatomic) NSData *auditTokenData;
@property (nonatomic, getter=isAuthorizationCanceled) BOOL authorizationCanceled; // ivar: _authorizationCanceled
@property (retain, nonatomic) NSDictionary *authorizationOptions;
@property (retain, nonatomic) NSString *callerBundleIdentifier;
@property (nonatomic, getter=isCallerManaged) BOOL callerManaged;
@property (retain, nonatomic) NSString *callerTeamIdentifier;
@property (retain, nonatomic) SOAuthorizationCredential *canceledAuthorizationCredential; // ivar: _canceledAuthorizationCredential
@property (retain, nonatomic) NSError *canceledAuthorizationError; // ivar: _canceledAuthorizationError
@property (nonatomic, getter=isCFNetworkInterception, setter=setCFNetworkInterception:) BOOL cfNetworkInterception;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL enableUserInteraction;
@property (retain, nonatomic) NSDictionary *extensionData;
@property (retain, nonatomic) NSData *httpBody;
@property (retain, nonatomic) NSDictionary *httpHeaders;
@property (copy, nonatomic) NSString *impersonationBundleIdentifier;
@property (retain, nonatomic) NSString *localizedCallerDisplayName;
@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSString *requestedOperation;
@property (retain, nonatomic) NSArray *secKeyProxies; // ivar: _secKeyProxies
@property (nonatomic) int secKeyProxiesConnectedClients; // ivar: _secKeyProxiesConnectedClients
@property (retain, nonatomic) NSURL *url;


-(BOOL)_isUserInterfaceAllowed;
-(id)_createSecKeyProxiesForSecKeys:(id)arg0 error:(*id)arg1 ;
-(id)_hostExtensionContext;
-(id)initWithRequestParameters:(id)arg0 remoteExtensionContext:(id)arg1 ;
-(void)_completeFinishAuthorizationWithError:(id)arg0 ;
-(void)cancel;
-(void)complete;
-(void)completeWithAuthorizationResult:(id)arg0 ;
-(void)completeWithError:(id)arg0 ;
-(void)completeWithHTTPAuthorizationHeaders:(id)arg0 ;
-(void)completeWithHTTPResponse:(id)arg0 httpBody:(id)arg1 ;
-(void)doNotHandle;
-(void)presentAuthorizationViewControllerWithCompletion:(id)arg0 ;


@end


#endif