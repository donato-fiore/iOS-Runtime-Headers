// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCSERVICEDISCOVERYHELPER_H
#define DMCSERVICEDISCOVERYHELPER_H


#import <Foundation/Foundation.h>


@interface DMCServiceDiscoveryHelper : NSObject



-(id)_findServerForBYOD:(id)arg0 ;
-(id)_serverURLForAppleMAID;
-(void)_checkForESSOWithMethod:(NSUInteger)arg0 authParams:(id)arg1 httpResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)_discoverServiceURLForDomain:(id)arg0 port:(id)arg1 userIdentifier:(id)arg2 anchorCertificateRefs:(id)arg3 completionHandler:(id)arg4 ;
-(void)_fetchESSODictionaryFromURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_serviceURLFromWellKnownURL:(id)arg0 anchorCertificateRefs:(id)arg1 completionHandler:(id)arg2 ;
-(void)determineEnrollmentMethodWithServiceURL:(id)arg0 enrollmentType:(NSUInteger)arg1 machineInfo:(id)arg2 anchorCertificateRefs:(id)arg3 completionHandler:(id)arg4 ;
-(void)discoverEnrollmentMethodWithServiceURL:(id)arg0 enrollmentType:(NSUInteger)arg1 machineInfo:(id)arg2 anchorCertificateRefs:(id)arg3 completionHandler:(id)arg4 ;
-(void)discoverServiceURLForUserIdentifier:(id)arg0 anchorCertificateRefs:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchEnrollmentProfileWithServiceURL:(id)arg0 authToken:(id)arg1 machineInfo:(id)arg2 anchorCertificateRefs:(id)arg3 completionHandler:(id)arg4 ;
-(void)fetchEnrollmentProfileWithServiceURL:(id)arg0 authTokens:(id)arg1 enrollmentMethod:(NSUInteger)arg2 machineInfo:(id)arg3 anchorCertificateRefs:(id)arg4 completionHandler:(id)arg5 ;


@end


#endif