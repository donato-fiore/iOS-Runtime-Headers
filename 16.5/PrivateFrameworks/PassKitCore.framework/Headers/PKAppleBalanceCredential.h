// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLEBALANCECREDENTIAL_H
#define PKAPPLEBALANCECREDENTIAL_H



#import "PKPaymentCredential.h"
#import "PKPaymentSetupProduct.h"

@interface PKAppleBalanceCredential : PKPaymentCredential

@property (readonly, nonatomic) NSInteger eligibilitySource; // ivar: _eligibilitySource
@property (readonly, nonatomic) PKPaymentSetupProduct *product; // ivar: _product


-(id)initWithProduct:(id)arg0 eligibilitySource:(NSInteger)arg1 ;
-(id)setupProductIdentifier;


@end


#endif