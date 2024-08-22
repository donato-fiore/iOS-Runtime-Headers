// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSPAYMENTAUTHORIZATIONDIALOGTASK_H
#define AMSPAYMENTAUTHORIZATIONDIALOGTASK_H

@class NSDictionary, NSString;
@protocol AMSBagProtocol;


#import "AMSTask.h"
#import "AMSPurchaseInfo.h"
#import "AMSPaymentAuthorizationDialogRequest.h"

@interface AMSPaymentAuthorizationDialogTask : AMSTask

@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) NSDictionary *idmsToken; // ivar: _idmsToken
@property (retain, nonatomic) NSString *passwordEquivalentToken; // ivar: _passwordEquivalentToken
@property (retain, nonatomic) AMSPurchaseInfo *purchaseInfo; // ivar: _purchaseInfo
@property (retain, nonatomic) AMSPaymentAuthorizationDialogRequest *request; // ivar: _request


-(id)initWithRequest:(id)arg0 bag:(id)arg1 ;
-(id)perform;


@end


#endif