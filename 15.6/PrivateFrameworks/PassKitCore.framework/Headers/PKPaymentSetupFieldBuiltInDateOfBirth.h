// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPFIELDBUILTINDATEOFBIRTH_H
#define PKPAYMENTSETUPFIELDBUILTINDATEOFBIRTH_H



#import "PKPaymentSetupFieldDate.h"

@interface PKPaymentSetupFieldBuiltInDateOfBirth : PKPaymentSetupFieldDate

@property (readonly, nonatomic) NSInteger minimumAge; // ivar: _minimumAge


-(BOOL)isBuiltIn;
-(BOOL)submissionStringMeetsAllRequirements;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
-(void)updateWithConfiguration:(id)arg0 ;


@end


#endif