// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POAUTHENTICATIONPROCESS_H
#define POAUTHENTICATIONPROCESS_H

@class NSString;
@protocol NSURLSessionDelegate, NSURLSessionTaskDelegate;

#import <Foundation/Foundation.h>


@interface POAuthenticationProcess : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL waitForConnectivity; // ivar: _waitForConnectivity


-(BOOL)validateIdToken:(id)arg0 context:(id)arg1 loginConfiguration:(id)arg2 key:(struct __SecKey *)arg3 ;
-(BOOL)validatePartyUInfo:(id)arg0 context:(id)arg1 ;
-(BOOL)validatePartyVInfo:(id)arg0 context:(id)arg1 publicKey:(struct __SecKey *)arg2 ;
-(id)createAuthenticationContextUsingLoginConfiguration:(id)arg0 deviceConfiguration:(id)arg1 ;
-(id)createEmbeddedAssertionWithContext:(id)arg0 loginConfiguration:(id)arg1 userName:(id)arg2 signingKey:(struct __SecKey *)arg3 ;
-(id)createLoginJWTWithContext:(id)arg0 loginConfiguration:(id)arg1 userConfiguration:(id)arg2 userName:(id)arg3 password:(id)arg4 embeddedAssertion:(id)arg5 ;
-(id)createLoginRequestWithContext:(id)arg0 loginConfiguration:(id)arg1 jwt:(id)arg2 ;
-(id)createNonceRequestWithContext:(id)arg0 loginConfiguration:(id)arg1 ;
-(id)createPartyVInfoWithContext:(id)arg0 apvKey:(struct __SecKey *)arg1 ;
-(id)createTestMessagesForLoginConfiguration:(id)arg0 certificate:(struct __SecCertificate *)arg1 ;
-(id)init;
-(struct __SecKey *)findKey:(id)arg0 inJWKSData:(id)arg1 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)URLSession:(id)arg0 taskIsWaitingForConnectivity:(id)arg1 ;
-(void)performLoginRequestWithContext:(id)arg0 loginConfiguration:(id)arg1 request:(id)arg2 completion:(id)arg3 ;
-(void)performLoginWithContext:(id)arg0 loginConfiguration:(id)arg1 deviceConfiguration:(id)arg2 jwksStorageProvider:(id)arg3 loginJWT:(id)arg4 completion:(id)arg5 ;
-(void)performNonceRequestWithContext:(id)arg0 loginConfiguration:(id)arg1 request:(id)arg2 completion:(id)arg3 ;
-(void)performPasswordLoginUsingLoginConfiguration:(id)arg0 deviceConfiguration:(id)arg1 userConfiguration:(id)arg2 jwksStorageProvider:(id)arg3 userName:(id)arg4 password:(id)arg5 completion:(id)arg6 ;
-(void)performSEPKeyLoginUsingLoginConfiguration:(id)arg0 deviceConfiguration:(id)arg1 userConfiguration:(id)arg2 jwksStorageProvider:(id)arg3 userName:(id)arg4 signingKey:(struct __SecKey *)arg5 certificate:(struct __SecCertificate *)arg6 completion:(id)arg7 ;
-(void)performTokenRefreshUsingLoginConfiguration:(id)arg0 deviceConfiguration:(id)arg1 userConfiguration:(id)arg2 refreshToken:(id)arg3 signingKey:(struct __SecKey *)arg4 completion:(id)arg5 ;
-(void)retrieveSigningKeyWithContext:(id)arg0 loginConfiguration:(id)arg1 jwksStorageProvider:(id)arg2 keyId:(id)arg3 completion:(id)arg4 ;


@end


#endif