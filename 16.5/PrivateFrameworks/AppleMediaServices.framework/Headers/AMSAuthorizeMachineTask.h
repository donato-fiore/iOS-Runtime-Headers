// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSAUTHORIZEMACHINETASK_H
#define AMSAUTHORIZEMACHINETASK_H

@class NSString, NSNumber, ACAccount;
@protocol NSURLSessionDelegate, AMSURLProtocolDelegate, AMSBagConsumer, AMSBagProtocol, AMSRequestPresentationDelegate;


#import "AMSTask.h"
#import "AMSAuthenticateRequest.h"
#import "AMSProcessInfo.h"
#import "AMSURLSession.h"

@interface AMSAuthorizeMachineTask : AMSTask <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSBagConsumer>



@property (retain, nonatomic) AMSAuthenticateRequest *authenticateRequest; // ivar: _authenticateRequest
@property NSUInteger authorizeReason; // ivar: _authorizeReason
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (nonatomic, getter=isDeauthorize) BOOL deauthorize; // ivar: _deauthorize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSNumber *familyMemberAccountDSID; // ivar: _familyMemberAccountDSID
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (weak, nonatomic) NSObject<AMSRequestPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (retain, nonatomic) AMSURLSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (retain, nonatomic) ACAccount *validAccount; // ivar: _validAccount


+(id)createBagForSubProfile;
-(id)_authenticate;
-(id)_buildRequest;
-(id)_buildRequestParametersWithError:(*id)arg0 ;
-(id)_buildRequestTask;
-(id)_checkRequestThrottle;
-(id)_keybagSyncStringForAccount:(id)arg0 withTransactionType:(unsigned int)arg1 error:(*id)arg2 ;
-(id)_performAuthorization;
-(id)account;
-(id)initWithAccount:(id)arg0 authorizeReason:(NSUInteger)arg1 bag:(id)arg2 ;
-(id)initWithUsername:(id)arg0 authorizeReason:(NSUInteger)arg1 bag:(id)arg2 presentationDelegate:(id)arg3 ;
-(id)performAuthorization;
-(id)performDeauthorization;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id)arg3 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleDialogRequest:(id)arg2 completion:(id)arg3 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleEngagementRequest:(id)arg2 completion:(id)arg3 ;


@end


#endif