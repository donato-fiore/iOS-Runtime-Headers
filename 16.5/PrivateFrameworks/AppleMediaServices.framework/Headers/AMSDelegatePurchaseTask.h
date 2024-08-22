// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSDELEGATEPURCHASETASK_H
#define AMSDELEGATEPURCHASETASK_H



#import "AMSDelegateAuthenticateTask.h"
#import "AMSBiometricsSignatureRequest.h"
#import "AMSURLResult.h"
#import "AMSURLTaskInfo.h"
#import "AMSPaymentSheetResult.h"
#import "AMSDelegatePaymentSheetTask.h"
#import "AMSDelegatePurchaseRequest.h"

@interface AMSDelegatePurchaseTask : AMSDelegateAuthenticateTask

@property (retain, nonatomic) AMSBiometricsSignatureRequest *biometricsRequest; // ivar: _biometricsRequest
@property (retain, nonatomic) AMSURLResult *delegateAuthResult; // ivar: _delegateAuthResult
@property (retain, nonatomic) AMSURLTaskInfo *delegateAuthTaskInfo; // ivar: _delegateAuthTaskInfo
@property (retain, nonatomic) AMSPaymentSheetResult *paymentSheetResult; // ivar: _paymentSheetResult
@property (retain, nonatomic) AMSDelegatePaymentSheetTask *paymentSheetTask; // ivar: _paymentSheetTask
@property (readonly, nonatomic) AMSDelegatePurchaseRequest *request; // ivar: _request


-(BOOL)cancel;
-(id)_parseFormDataFromResult:(id)arg0 ;
-(id)_performAuthenticateTaskWithPaymentSheet;
-(id)_performAuthenticateTaskWithPaymentSheetResult:(id)arg0 ;
-(id)_performPaymentSheetTask;
-(id)initWithDelegatePurchaseRequest:(id)arg0 bag:(id)arg1 account:(id)arg2 ;
-(id)performDelegatePurchase;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id)arg3 ;
-(void)_parseBiometricsSignatureRequestFromTask:(id)arg0 ;


@end


#endif