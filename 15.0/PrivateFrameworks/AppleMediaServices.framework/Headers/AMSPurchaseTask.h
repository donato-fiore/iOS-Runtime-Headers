// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSPURCHASETASK_H
#define AMSPURCHASETASK_H

@class NSString;
@protocol NSURLSessionDelegate, AMSURLProtocolDelegate, AMSAuthenticateTaskDelegate, AMSBagConsumer, AMSBagProtocol, AMSPurchaseDelegate;


#import "AMSTask.h"
#import "AMSPurchaseInfo.h"
#import "AMSURLSession.h"

@interface AMSPurchaseTask : AMSTask <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSAuthenticateTaskDelegate, AMSBagConsumer>



@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSPurchaseDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AMSPurchaseInfo *purchaseInfo; // ivar: _purchaseInfo
@property (readonly, nonatomic) AMSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


+(id)createBagForSubProfile;
-(BOOL)_shouldPreauthenticatePurchase:(id)arg0 ;
-(id)_performPreauthenticate;
-(id)_performPurchaseWithError:(*id)arg0 ;
-(id)_promptForAccount;
-(id)_recordEngagementEventWithInfo:(id)arg0 result:(id)arg1 error:(id)arg2 ;
-(id)_runAuthenticateRequest:(id)arg0 ;
-(id)_runDialogRequest:(id)arg0 ;
-(id)initWithPurchase:(id)arg0 bag:(id)arg1 ;
-(id)performPurchase;
-(void)_regenerateFraudScoreWithInfo:(id)arg0 bag:(id)arg1 action:(NSUInteger)arg2 ;
-(void)authenticateTask:(id)arg0 handleDialogRequest:(id)arg1 completion:(id)arg2 ;
-(void)generateFraudScoreWithInfo:(id)arg0 bag:(id)arg1 ;


@end


#endif