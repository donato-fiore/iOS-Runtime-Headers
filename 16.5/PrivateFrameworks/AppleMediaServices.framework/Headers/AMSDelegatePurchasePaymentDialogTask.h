// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSDELEGATEPURCHASEPAYMENTDIALOGTASK_H
#define AMSDELEGATEPURCHASEPAYMENTDIALOGTASK_H

@class ACAccount, NSNumber;
@protocol AMSBagProtocol;


#import "AMSTask.h"
#import "AMSDelegatePurchaseRequest.h"

@interface AMSDelegatePurchasePaymentDialogTask : AMSTask

@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) AMSDelegatePurchaseRequest *currentRequest; // ivar: _currentRequest
@property (readonly, nonatomic) NSNumber *designVersion; // ivar: _designVersion


-(id)_encodedURLRequest;
-(id)_legacyUserAgentString;
-(id)_purchaseResultFromPurchaseResult:(id)arg0 andPaymentSheetInfo:(id)arg1 ;
-(id)initWithDelegatePurchaseRequest:(id)arg0 bag:(id)arg1 andDesignVersion:(id)arg2 ;
-(id)performTask;


@end


#endif