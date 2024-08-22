// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASAUTHORIZATIONPROVIDEREXTENSIONAUTHORIZATIONREQUEST_H
#define ASAUTHORIZATIONPROVIDEREXTENSIONAUTHORIZATIONREQUEST_H

@class NSDictionary, SOAuthorizationRequest, NSString, NSData, NSURL;

#import <Foundation/Foundation.h>


@interface ASAuthorizationProviderExtensionAuthorizationRequest : NSObject

@property (readonly, nonatomic) NSDictionary *authorizationOptions;
@property (readonly, nonatomic) SOAuthorizationRequest *authorizationRequest; // ivar: _authorizationRequest
@property (readonly, copy, nonatomic) NSString *callerBundleIdentifier;
@property (readonly, nonatomic, getter=isCallerManaged) BOOL callerManaged;
@property (readonly, nonatomic) NSString *callerTeamIdentifier;
@property (readonly, nonatomic) NSDictionary *extensionData;
@property (readonly, nonatomic) NSData *httpBody;
@property (readonly, nonatomic) NSDictionary *httpHeaders;
@property (readonly, nonatomic) NSString *localizedCallerDisplayName;
@property (readonly, copy, nonatomic) NSString *realm;
@property (readonly, nonatomic) NSString *requestedOperation;
@property (readonly, nonatomic) NSURL *url;


-(id)initWithAuthorizationRequest:(id)arg0 ;
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