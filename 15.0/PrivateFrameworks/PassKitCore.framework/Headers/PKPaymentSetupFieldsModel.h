// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSETUPFIELDSMODEL_H
#define PKPAYMENTSETUPFIELDSMODEL_H

@class NSMutableArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "PKPaymentSetupFieldFooter.h"

@interface PKPaymentSetupFieldsModel : NSObject {
    NSMutableArray *_paymentSetupFields;
    PKPaymentSetupFieldFooter *_footerField;
    NSDictionary *_footerFields;
}




+(id)defaultPaymentSetupProvisioningFields;
+(id)fakePaymentSetupProvisioningFields;
-(BOOL)hasFooterPaymentSetupField;
-(BOOL)hasIncompletePaymentSetupFields;
-(NSUInteger)numberOfPaymentSetupFields;
-(id)footerFieldForIdentifier:(id)arg0 ;
-(id)footerPaymentSetupField;
-(id)incompletePaymentSetupFields;
-(id)init;
-(id)initWithPaymentSetupFields:(id)arg0 ;
-(id)initWithPaymentSetupFields:(id)arg0 footerFields:(id)arg1 ;
-(id)paymentSetupFieldAtIndex:(NSUInteger)arg0 ;
-(id)paymentSetupFieldIdentifiers;
-(id)paymentSetupFieldWithIdentifier:(id)arg0 ;
-(id)paymentSetupFields;
-(id)secureSubmissionValuesForDestination:(id)arg0 ;
-(id)setupFieldAnalytics;
-(id)submissionValuesForDestination:(id)arg0 ;
-(void)prefillDefaultValues;
-(void)replaceAllPaymentSetupFields:(id)arg0 ;
-(void)replaceAllPaymentSetupFields:(id)arg0 footerFields:(id)arg1 ;
-(void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)arg0 ;
-(void)resetAllPaymentSetupFieldValues;
-(void)updateWithPaymentSetupFields:(id)arg0 ;
-(void)updateWithPaymentSetupFields:(id)arg0 footerFields:(id)arg1 ;


@end


#endif