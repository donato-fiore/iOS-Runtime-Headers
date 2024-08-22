// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPPRODUCT_H
#define PKPAYMENTSETUPPRODUCT_H

@class NSArray, NSURL, NSString, NSDictionary, NSExtension, NSSet, NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PKPaymentSetupProduct.h"
#import "PKPaymentSetupProductConfiguration.h"
#import "PKPaymentSetupProductImageAssetURLs.h"
#import "PKPaymentSetupProductImageAssets.h"

@interface PKPaymentSetupProduct : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *accounts; // ivar: _accounts
@property (copy, nonatomic) NSURL *appLaunchURL; // ivar: _appLaunchURL
@property (copy, nonatomic) NSArray *associatedStoreIdentifiers; // ivar: _associatedStoreIdentifiers
@property (readonly, copy, nonatomic) PKPaymentSetupProduct *augmentedProduct; // ivar: _augmentedProduct
@property (copy, nonatomic) NSString *badge; // ivar: _badge
@property (copy, nonatomic) NSDictionary *clientInfo; // ivar: _clientInfo
@property (copy, nonatomic) PKPaymentSetupProductConfiguration *configuration; // ivar: _configuration
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *displayStatus; // ivar: _displayStatus
@property (retain, nonatomic) NSArray *featureApplications; // ivar: _featureApplications
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (nonatomic) NSInteger hsa2Requirement; // ivar: _hsa2Requirement
@property (readonly, nonatomic) PKPaymentSetupProductImageAssetURLs *imageAssetURLs; // ivar: _imageAssetURLs
@property (retain, nonatomic) PKPaymentSetupProductImageAssets *imageAssets; // ivar: _imageAssets
@property (nonatomic) BOOL isServerDriven; // ivar: _isServerDriven
@property (copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (readonly, copy, nonatomic) NSString *longLocalizedDescription;
@property (nonatomic) NSInteger maximumSupportedAge; // ivar: _maximumSupportedAge
@property (nonatomic) BOOL meetsAgeRequirements; // ivar: _meetsAgeRequirements
@property (retain, nonatomic) NSDictionary *minimumOSVersion; // ivar: _minimumOSVersion
@property (nonatomic) NSInteger minimumSupportedAge; // ivar: _minimumSupportedAge
@property (nonatomic) NSInteger minimumTargetUserSupportedAge; // ivar: _minimumTargetUserSupportedAge
@property (retain, nonatomic) NSArray *onboardingItems; // ivar: _onboardingItems
@property (readonly, copy, nonatomic) NSString *partnerName;
@property (readonly, copy, nonatomic) NSArray *paymentOptions; // ivar: _paymentOptions
@property (nonatomic) BOOL preventsFeatureApplication; // ivar: _preventsFeatureApplication
@property (readonly, nonatomic) NSString *primaryRegion; // ivar: _primaryRegion
@property (readonly, nonatomic) NSExtension *provisioningExtension; // ivar: _provisioningExtension
@property (readonly, nonatomic) BOOL provisioningExtensionRequiresAuthorization; // ivar: _provisioningExtensionRequiresAuthorization
@property (nonatomic) NSUInteger provisioningStatus; // ivar: _provisioningStatus
@property (copy, nonatomic) NSDictionary *rawDictionary; // ivar: _rawDictionary
@property (readonly, copy, nonatomic) NSDictionary *readerModeMetadata; // ivar: _readerModeMetadata
@property (readonly, copy, nonatomic) NSString *regionIdentifier; // ivar: _regionIdentifier
@property (copy, nonatomic) NSSet *regions; // ivar: _regions
@property (retain, nonatomic) NSMutableDictionary *requestedProvisioningMethods; // ivar: _requestedProvisioningMethods
@property (copy, nonatomic) NSArray *requiredFields; // ivar: _requiredFields
@property (copy, nonatomic) NSArray *searchTerms; // ivar: _searchTerms
@property (readonly, copy, nonatomic) NSArray *supportedCameraCaptureTypes; // ivar: _supportedCameraCaptureTypes
@property (readonly, copy, nonatomic) NSArray *supportedInAppTypes; // ivar: _supportedInAppTypes
@property (copy, nonatomic) NSArray *supportedProtocols; // ivar: _supportedProtocols
@property (nonatomic) NSInteger supportedProvisioningMethods; // ivar: _supportedProvisioningMethods
@property (readonly, copy, nonatomic) NSArray *supportedTransitNetworkIdentifiers; // ivar: _supportedTransitNetworkIdentifiers
@property (readonly, nonatomic) BOOL suppressPendingPurchases; // ivar: _suppressPendingPurchases
@property (copy, nonatomic) NSURL *termsURL; // ivar: _termsURL


+(id)_displayNameForCardType:(id)arg0 ;
+(id)_inAppProvisioningURLWthScheme:(id)arg0 path:(id)arg1 ;
+(id)productForIssuerProvisioningExtension:(id)arg0 withStatus:(id)arg1 ;
+(id)productsFromBrowseableBankApps:(id)arg0 ;
-(BOOL)supportsDevice:(id)arg0 ;
-(BOOL)supportsOSVersion:(id)arg0 deviceClass:(id)arg1 ;
-(NSInteger)allSupportedProtocols;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFeatureIdentifier:(NSUInteger)arg0 ;
-(id)partnerIdentifier;
-(id)productIdentifier;
-(id)provisioningMethodMetadataForType:(id)arg0 ;
-(id)provisioningMethodTypes;
-(void)_updateDebugConfigurationForState:(NSUInteger)arg0 ;
-(void)augmentWithProduct:(id)arg0 ;
-(void)didAuthorizeProvisioningExtension;
-(void)setProvisioningMethodMetadata:(id)arg0 forType:(id)arg1 ;
-(void)updateWithProductDictionary:(id)arg0 ;


@end


#endif