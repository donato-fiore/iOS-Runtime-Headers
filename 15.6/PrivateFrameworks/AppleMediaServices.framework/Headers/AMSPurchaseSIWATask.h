// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSPURCHASESIWATASK_H
#define AMSPURCHASESIWATASK_H

@class AKAuthorization, NSUUID, AKCredentialRequestContext, NSError;


#import "AMSPurchaseTask.h"
#import "AMSPurchaseSIWA.h"

@interface AMSPurchaseSIWATask : AMSPurchaseTask

@property (retain, nonatomic) AKAuthorization *authorization; // ivar: _authorization
@property (copy, nonatomic) NSUUID *continuationRequestIdentifier; // ivar: _continuationRequestIdentifier
@property (nonatomic) BOOL purchaseRequiresAuthorization; // ivar: _purchaseRequiresAuthorization
@property (retain, nonatomic) AMSPurchaseSIWA *purchaseSIWA; // ivar: _purchaseSIWA
@property (retain, nonatomic) AKCredentialRequestContext *requestContext; // ivar: _requestContext
@property (copy, nonatomic) NSError *siwaError; // ivar: _siwaError


-(BOOL)_beginAuthorizationWasPerformed;
-(BOOL)_siwaDidCommence;
-(BOOL)_willRequireAskToBuyForTaskInfo:(id)arg0 ;
-(id)_beginAuthorization;
-(id)_cancelAuthorization;
-(id)_continueAuthorization;
-(id)initWithPurchaseSIWA:(id)arg0 bag:(id)arg1 ;
-(id)newAuthorizationController;
-(id)performPreauthenticate;
-(id)performPurchaseSIWA;
-(id)preauthenticateOptions;
-(void)_updateRequestContextWithPurchaseInfo:(id)arg0 ;
-(void)performPreActionRequestForTaskInfo:(id)arg0 requiresAuthorization:(BOOL)arg1 error:(*id)arg2 ;


@end


#endif