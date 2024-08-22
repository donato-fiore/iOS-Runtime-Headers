// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSETUPPRODUCTMODEL_H
#define PKPAYMENTSETUPPRODUCTMODEL_H

@class NSMutableDictionary, NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface PKPaymentSetupProductModel : NSObject {
    NSMutableDictionary *_paymentSetupProducts;
    NSMutableArray *_allSections;
}


@property (readonly, nonatomic) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (readonly, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle


-(id)_paymentSetupProductsWithPartners:(id)arg0 products:(id)arg1 existingPaymentSetupProducts:(id)arg2 ;
-(id)allSections;
-(id)allSetupProducts;
-(id)description;
-(id)init;
-(id)productForProductIdentifier:(id)arg0 ;
-(id)productsForFeatureIdentifier:(NSUInteger)arg0 ;
-(id)productsForProductIdentifiers:(id)arg0 ;
-(id)setupProductsOfType:(NSUInteger)arg0 ;
-(void)_updatePaymentSetupProduct:(id)arg0 displayName:(id)arg1 localizedDescription:(id)arg2 partnerDictionary:(id)arg3 productIdentifier:(id)arg4 paymentOptions:(id)arg5 termsURL:(id)arg6 provisioningMethods:(id)arg7 readerModeMetadata:(id)arg8 requiredFields:(id)arg9 imageAssets:(id)arg10 minimumOSVersion:(id)arg11 region:(id)arg12 hsa2Requirement:(id)arg13 suppressPendingPurchases:(id)arg14 supportedTransitNetworkIdentifiers:(id)arg15 onboardingItems:(id)arg16 actionBaseURL:(id)arg17 productState:(id)arg18 minimumProductAge:(id)arg19 maximumProductAge:(id)arg20 minimumTargetUserSupportedAge:(id)arg21 associatedStoreIdentifiers:(id)arg22 appLaunchURL:(id)arg23 regionIdentifier:(id)arg24 type:(id)arg25 localizedNotificationTitle:(id)arg26 localizedNotificationMessage:(id)arg27 clientInfo:(id)arg28 searchTerms:(id)arg29 ;
-(void)removePaymentSetupProducts:(id)arg0 ;
-(void)setAllSections:(id)arg0 ;
-(void)setPaymentSetupProducts:(id)arg0 ;
-(void)updatePaymentSetupProducts:(id)arg0 ;
// -(void)updateWithPaymentSetupProductsResponse:(id)arg0 productsFilter:(id)arg1 sectionsFilter:(unk)arg2  ;


@end


#endif