// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSDELEGATEAUTHENTICATETASK_H
#define AMSDELEGATEAUTHENTICATETASK_H

@class ACAccount, NSString, NSDictionary;
@protocol AMSURLProtocolDelegate, NSURLSessionDelegate, AMSBagConsumer, AMSBagProtocol;


#import "AMSTask.h"
#import "AMSDelegateAuthenticateRequest.h"
#import "AMSURLSession.h"
#import "AMSBiometricsSignatureResult.h"

@interface AMSDelegateAuthenticateTask : AMSTask <AMSURLProtocolDelegate, NSURLSessionDelegate, AMSBagConsumer>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *formData; // ivar: _formData
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AMSDelegateAuthenticateRequest *request; // ivar: _request
@property (readonly, nonatomic) AMSURLSession *session; // ivar: _session
@property (retain, nonatomic) AMSBiometricsSignatureResult *signatureResult; // ivar: _signatureResult
@property (readonly) Class superclass;


+(id)createBagForSubProfile;
-(id)_encodedURLRequestWithError:(*id)arg0 ;
-(id)_performDelegateAuthenticationWithError:(*id)arg0 ;
-(id)initWithBag:(id)arg0 account:(id)arg1 ;
-(id)initWithDelegateAuthenticateRequest:(id)arg0 bag:(id)arg1 account:(id)arg2 ;
-(id)performDelegateAuthentication;
-(void)_init;


@end


#endif