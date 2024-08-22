// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTWEBSERVICECONFIGURATION_H
#define PKPAYMENTWEBSERVICECONFIGURATION_H

@class NSDictionary, NSURL, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentWebServiceConfiguration : NSObject <NSSecureCoding>

 {
    os_unfair_lock_s _lock;
}


@property (copy) NSDictionary *configuration; // ivar: _configuration
@property (copy) NSURL *configurationURL; // ivar: _configurationURL
@property (readonly, weak) NSNumber *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)AMPNonDefaultBehaviourDisabledForRegion:(id)arg0 ;
-(BOOL)_lock_supportedForOSVersion:(id)arg0 inRegion:(id)arg1 deviceClass:(id)arg2 platform:(id)arg3 suportedRegions:(BOOL)arg4 ;
-(BOOL)accountServiceEnabledForRegion:(id)arg0 ;
-(BOOL)applyServiceEnabledForRegion:(id)arg0 ;
-(BOOL)browseProvisioningBankAppsEnabledForRegion:(id)arg0 ;
-(BOOL)buddyManualProvisioningEnabledForRegion:(id)arg0 ;
-(BOOL)buddyProvisioningEnabledForRegion:(id)arg0 ;
-(BOOL)cameraFirstProvisioningEnabledForRegion:(id)arg0 ;
-(BOOL)deviceCheckInDisabledForRegion:(id)arg0 ;
-(BOOL)hasFeatureRequiringRegistrationInRegion:(id)arg0 osVersion:(id)arg1 deviceClass:(id)arg2 ;
-(BOOL)hasFeaturesSupportedForRegion:(id)arg0 osVersion:(id)arg1 deviceClass:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)manualProvisioningEnabledForRegion:(id)arg0 ;
-(BOOL)paymentTransactionIconsEnabledForRegion:(id)arg0 ;
-(BOOL)peerPaymentEnabledForRegion:(id)arg0 ;
-(BOOL)quickAccessForMoreRemovePassEnabled;
-(BOOL)regionHasProvisioningEnablementPercentage:(id)arg0 ;
-(BOOL)remotePaymentsRequiredForVoiceover;
-(BOOL)shouldEnableTransitServiceCheckInForRegion:(id)arg0 ;
-(BOOL)shouldPaymentSetupFeaturesUseStrictProductsCheckForRegion:(id)arg0 ;
-(BOOL)suppressCardholderNameFieldForRegion:(id)arg0 ;
-(BOOL)userCanResetCloudStoreApplePayViewForRegion:(id)arg0 ;
-(CGFloat)deviceCheckInIntervalForRegion:(id)arg0 ;
-(CGFloat)deviceUpgradeTaskEnablementPercentageForRegion:(id)arg0 ;
-(CGFloat)dynamicAssetPrefetchTimeIntervalForRegion:(id)arg0 ;
-(CGFloat)paymentSetupFeaturesCacheUpdateIntervalForRegion:(id)arg0 ;
-(CGFloat)provisioningEnablementPercentageForRegion:(id)arg0 ;
-(NSUInteger)notificationAuthorizationPromptPresentationCount;
-(id)_featuresFromDictionary:(id)arg0 withRegion:(id)arg1 osVersion:(id)arg2 deviceClass:(id)arg3 ;
-(id)_lock_featuresForRegion:(id)arg0 ;
-(id)_lock_featuresForRegion:(id)arg0 osVersion:(id)arg1 deviceClass:(id)arg2 ;
-(id)_lock_globalFeaturesForOSVersion:(id)arg0 deviceClass:(id)arg1 ;
-(id)_lock_region:(id)arg0 ;
-(id)_lock_regions;
-(id)_lock_unsupported_region:(id)arg0 ;
-(id)_lock_unsupported_regions;
-(id)_regionsForOSVersion:(id)arg0 deviceClass:(id)arg1 platform:(id)arg2 supportedRegions:(BOOL)arg3 ;
-(id)allowedRelayServerHostsForRegion:(id)arg0 ;
-(id)applyServiceFeaturesForRegion:(id)arg0 ;
-(id)betaPaymentNetworkVersionsForRegion:(id)arg0 ;
-(id)betaPaymentNetworksForRegion:(id)arg0 ;
-(id)brokerURLForRegion:(id)arg0 ;
-(id)contactFormatConfiguration;
-(id)credentialTypesRequiringDPANNotifications;
-(id)credentialTypesRequiringMetadata;
-(id)defaultServerURL;
-(id)discoveryManifestURLForRegion:(id)arg0 ;
-(id)featureWithType:(NSInteger)arg0 inRegion:(id)arg1 ;
-(id)featuresForRegion:(id)arg0 ;
-(id)heroImageManifestURLForRegion:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 url:(id)arg1 ;
-(id)marketGeoRegionNotificationNetworkThresholdsForRegion:(id)arg0 ;
-(id)marketGeoRegionNotificationTimeRangeForRegion:(id)arg0 ;
-(id)marketsURL;
-(id)maxRefreshIntervalForRegion:(id)arg0 ;
-(id)maxRefreshIntervalForUnsupportedRegion;
-(id)numberOfDaysBetweenMapsReprocessingForRegion:(id)arg0 ;
-(id)paymentServicesMerchantURLForRegion:(id)arg0 ;
-(id)paymentServicesURLForRegion:(id)arg0 ;
-(id)paymentSetupBrowsableProductTypesForRegion:(id)arg0 ;
-(id)paymentSetupFeaturedNetworksForRegion:(id)arg0 ;
-(id)primaryFeaturedNetworkForRegion:(id)arg0 ;
-(id)relayServerHostForRegion:(id)arg0 ;
-(id)relayServerHostsToHandleUniversalLinksForRegion:(id)arg0 ;
-(id)supportedRegionsForOSVersion:(id)arg0 deviceClass:(id)arg1 ;
-(id)supportedRegionsForOSVersion:(id)arg0 deviceClass:(id)arg1 platform:(id)arg2 ;
-(id)unsupportedRegionsForOSVersion:(id)arg0 deviceClass:(id)arg1 ;
-(id)unsupportedRegionsForOSVersion:(id)arg0 deviceClass:(id)arg1 platform:(id)arg2 ;
-(id)unsupportedWebPaymentConfigurations;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif