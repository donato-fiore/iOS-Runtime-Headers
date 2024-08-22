// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
@property (retain, nonatomic) Class paymentSheetTaskClass; // ivar: _paymentSheetTaskClass
@property (retain, nonatomic) AMSPurchaseInfo *purchaseInfo; // ivar: _purchaseInfo
@property (readonly, nonatomic) AMSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


+(BOOL)shouldPreauthenticatePurchaseWithInfo:(id)arg0 ;
+(id)createBagForSubProfile;
-(BOOL)_shouldAttemptCardEnrollment;
-(id)_performPurchaseWithError:(*id)arg0 ;
-(id)_promptForAccount;
-(id)_recordEngagementEventWithInfo:(id)arg0 result:(id)arg1 error:(id)arg2 ;
-(id)_runAuthenticateRequest:(id)arg0 ;
-(id)_runDialogRequest:(id)arg0 ;
-(id)initWithPurchase:(id)arg0 bag:(id)arg1 ;
-(id)performPreauthenticate;
-(id)performPurchase;
-(id)preauthenticateOptions;
-(void)_regenerateFDSWithInfo:(id)arg0 bag:(id)arg1 action:(NSUInteger)arg2 ;
-(void)authenticateTask:(id)arg0 handleDialogRequest:(id)arg1 completion:(id)arg2 ;
-(void)generateFDSWithInfo:(id)arg0 bag:(id)arg1 ;
-(void)performPreActionRequestForTaskInfo:(id)arg0 requiresAuthorization:(BOOL)arg1 error:(*id)arg2 ;


@end


#endif