// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCSERVICEDISCOVERYHELPER_H
#define DMCSERVICEDISCOVERYHELPER_H


#import <Foundation/Foundation.h>


@interface DMCServiceDiscoveryHelper : NSObject



-(id)_serverURLForAppleMAID;
-(id)abstractWebAuthCredentialTokenFromCallBackURL:(id)arg0 ;
-(id)webAuthenticationURLForUserAuthURL:(id)arg0 withUserIdentifierQuery:(id)arg1 ;
-(void)_discoverServiceURLForDomain:(id)arg0 port:(id)arg1 userIdentifier:(id)arg2 anchorCertificateRefs:(id)arg3 completionHandler:(id)arg4 ;
-(void)_serviceURLFromWellKnownURL:(id)arg0 anchorCertificateRefs:(id)arg1 completionHandler:(id)arg2 ;
-(void)discoverEnrollmentMethodWithServiceURL:(id)arg0 enrollmentType:(NSUInteger)arg1 machineInfo:(id)arg2 anchorCertificateRefs:(id)arg3 completionHandler:(id)arg4 ;
-(void)discoverServiceURLForUserIdentifier:(id)arg0 anchorCertificateRefs:(id)arg1 completionHandler:(id)arg2 ;
-(void)exchangeMAIDForBearerTokenWithRMAccountIdentifier:(id)arg0 userAuthURL:(id)arg1 machineInfo:(id)arg2 anchorCertificateRefs:(id)arg3 completionHandler:(id)arg4 ;
-(void)fetchEnrollmentProfileWithServiceURL:(id)arg0 authToken:(id)arg1 machineInfo:(id)arg2 anchorCertificateRefs:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif