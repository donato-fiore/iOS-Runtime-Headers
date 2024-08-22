// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTTRANSACTIONPRESENTATION_H
#define PKPAYMENTTRANSACTIONPRESENTATION_H


#import <Foundation/Foundation.h>


@interface PKPaymentTransactionPresentation : NSObject



+(NSUInteger)iconTypeForTransaction:(id)arg0 ignoreLogoURL:(BOOL)arg1 ;
+(id)_billPaymentFundingSourceForTransaction:(id)arg0 ;
+(id)_relativeDateForTransaction:(id)arg0 ;
+(id)_statusAnnotationForTransaction:(id)arg0 ;
+(id)presentationInformationForTransaction:(id)arg0 transactionSource:(id)arg1 secondaryTransactionSource:(id)arg2 familyMember:(id)arg3 account:(id)arg4 deviceName:(id)arg5 context:(NSUInteger)arg6 ;
+(id)secondaryFundingSourceDescriptionForTransaction:(id)arg0 secondarySource:(id)arg1 includeBankAccountSuffix:(BOOL)arg2 useGenericNameIfNoDescriptionAvailable:(BOOL)arg3 ;
+(id)staticPDFNameForTransaction:(id)arg0 ;


@end


#endif