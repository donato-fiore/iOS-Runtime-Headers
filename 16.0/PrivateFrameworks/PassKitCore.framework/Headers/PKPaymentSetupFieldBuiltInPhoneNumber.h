// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPFIELDBUILTINPHONENUMBER_H
#define PKPAYMENTSETUPFIELDBUILTINPHONENUMBER_H



#import "PKPaymentSetupFieldText.h"

@interface PKPaymentSetupFieldBuiltInPhoneNumber : PKPaymentSetupFieldText



-(BOOL)hasDisplayFormat;
-(BOOL)isBuiltIn;
-(id)_submissionStringForValue:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 ;


@end


#endif