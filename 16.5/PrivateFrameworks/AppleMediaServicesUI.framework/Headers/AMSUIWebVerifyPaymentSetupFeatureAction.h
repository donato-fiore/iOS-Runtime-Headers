// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBVERIFYPAYMENTSETUPFEATUREACTION_H
#define AMSUIWEBVERIFYPAYMENTSETUPFEATUREACTION_H

@class NSString;


#import "AMSUIWebAction.h"

@interface AMSUIWebVerifyPaymentSetupFeatureAction : AMSUIWebAction

@property (retain, nonatomic) NSString *referrerIdentifier; // ivar: _referrerIdentifier


-(id)_checkCombinedAccount;
-(id)_checkUpsellCardEnrollment;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif