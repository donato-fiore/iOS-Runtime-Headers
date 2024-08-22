// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTTRANSACTIONPRESENTATION_H
#define PKPAYMENTTRANSACTIONPRESENTATION_H


#import <Foundation/Foundation.h>


@interface PKPaymentTransactionPresentation : NSObject



+(BOOL)transactionIsPaymentForPayLaterFinancingPlan:(id)arg0 ;
+(NSUInteger)iconTypeForTransaction:(id)arg0 ignoreLogoURL:(BOOL)arg1 ;
+(id)_billPaymentFundingSourceForTransaction:(id)arg0 ;
+(id)_relativeDateForTransaction:(id)arg0 ;
+(id)_statusAnnotationForTransaction:(id)arg0 overloadAnnotation:(*BOOL)arg1 ;
+(id)presentationInformationForTransaction:(id)arg0 transactionSource:(id)arg1 secondaryTransactionSource:(id)arg2 familyMember:(id)arg3 account:(id)arg4 deviceName:(id)arg5 context:(NSUInteger)arg6 ;
+(id)secondaryFundingSourceDescriptionForTransaction:(id)arg0 secondarySource:(id)arg1 includeBankAccountSuffix:(BOOL)arg2 useGenericNameIfNoDescriptionAvailable:(BOOL)arg3 ;
+(id)staticIconNameForTransaction:(id)arg0 ;
+(void)_transferFundingSourceInformationForTransaction:(id)arg0 primaryString:(*id)arg1 secondaryString:(*id)arg2 ;


@end


#endif