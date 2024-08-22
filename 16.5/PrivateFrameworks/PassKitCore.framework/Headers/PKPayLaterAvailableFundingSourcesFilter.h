// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERAVAILABLEFUNDINGSOURCESFILTER_H
#define PKPAYLATERAVAILABLEFUNDINGSOURCESFILTER_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "PKPassLibrary.h"
#import "PKPeerPaymentAccount.h"

@interface PKPayLaterAvailableFundingSourcesFilter : NSObject {
    NSMutableDictionary *_availableFundingSources;
    NSString *_defaultPassUniqueIdentifier;
    PKPassLibrary *_passLibrary;
}


@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // ivar: _peerPaymentAccount


-(id)_availableFundingSourcesForSupportedRepaymentTypes:(NSUInteger)arg0 supportedRepaymentCountries:(id)arg1 supportedRepaymentNetworks:(id)arg2 eligibleBankSources:(id)arg3 lastUsedFundingSources:(id)arg4 installmentAmount:(id)arg5 ;
-(id)_filterLastUsedFundingSources:(id)arg0 paymentSources:(id)arg1 ;
-(id)_payLaterPassPaymentSourcesForPasses:(id)arg0 ;
-(id)_sortPaymentSources:(id)arg0 ;
-(id)availableFundingSourcesForFinancingOption:(id)arg0 eligibleBankSources:(id)arg1 lastUsedFundingSources:(id)arg2 ;
-(id)availableFundingSourcesForPaymentIntentDetails:(id)arg0 currencyAmount:(id)arg1 planIdentifier:(id)arg2 primaryPaymentSource:(id)arg3 ;
-(id)initWithPassLibrary:(id)arg0 peerPaymentAccount:(id)arg1 defaultPassUniqueIdentifier:(id)arg2 ;
-(void)_addAccountPaymentSourcesToPaymentSourcesIfNecessary:(id)arg0 supportedRepaymentTypes:(NSUInteger)arg1 eligibleBankSources:(id)arg2 ;
-(void)_assignPrioritiesToPaymentSources:(id)arg0 lastUsedFundingSources:(id)arg1 ;
-(void)_filterCashPassIfNecessaryFromPasses:(id)arg0 supportedRepaymentTypes:(NSUInteger)arg1 installmentAmount:(id)arg2 ;
-(void)_prioritizePaymentSource:(id)arg0 inPaymentSources:(id)arg1 ;
-(void)clearCache;


@end


#endif