// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAPPLEBALANCECREDENTIAL_H
#define PKAPPLEBALANCECREDENTIAL_H



#import "PKPaymentCredential.h"
#import "PKPaymentSetupProduct.h"

@interface PKAppleBalanceCredential : PKPaymentCredential

@property (readonly, nonatomic) NSInteger eligibilitySource; // ivar: _eligibilitySource
@property (readonly, nonatomic) PKPaymentSetupProduct *product; // ivar: _product


-(id)initWithProduct:(id)arg0 eligibilitySource:(NSInteger)arg1 ;


@end


#endif