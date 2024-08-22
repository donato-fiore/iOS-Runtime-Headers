// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKHEARTSETTINGSUTILITIES_H
#define _HKHEARTSETTINGSUTILITIES_H


#import <Foundation/Foundation.h>


@interface _HKHeartSettingsUtilities : NSObject



+(BOOL)isBackgroundHeartRateEnabled;
+(BOOL)isBradycardiaDetectionEnabled;
+(BOOL)isBradycardiaDetectionSupportedOnActiveWatch;
+(BOOL)isBradycardiaDetectionSupportedOnAllWatches;
+(BOOL)isHeartRateEnabled;
+(BOOL)isTachycardiaDetectionEnabled;
+(BOOL)isWristDetectionEnabled;
+(BOOL)shouldFooterTextDisplayOffConfiguration:(BOOL)arg0 ;
+(NSInteger)bradycardiaThresholdHeartRate;
+(NSInteger)bradycardiaWarningThreshold;
+(NSInteger)tachycardiaThresholdHeartRate;
+(id)_calculateHeartRateOptionsWithMin:(NSInteger)arg0 increment:(NSInteger)arg1 max:(NSInteger)arg2 ;
+(id)aFibBurdenAppleSupportURL;
+(id)aFibBurdenArticleLinkURL;
+(id)aFibBurdenDefaultLinkURL;
+(id)aFibBurdenDeviceNotSupportedFooterDescription;
+(id)aFibBurdenFooterDescription;
+(id)aFibBurdenFooterDescriptionWithLink;
+(id)aFibBurdenFooterLinkTitle;
+(id)aFibBurdenHeartRateFooterDescriptionWithLink;
+(id)aFibBurdenHeartRateFooterLinkTitle;
+(id)aFibBurdenHeartRateFooterLinkURL;
+(id)aFibBurdenIRNEnabledFooterDescription;
+(id)aFibBurdenIRNEnabledFooterDescriptionWatch;
+(id)aFibBurdenIRNEnabledFooterDescriptionWithLink;
+(id)aFibBurdenRegionNotSupportedFooterDescription;
+(id)aFibBurdenRegionNotSupportedFooterDescriptionWithLink;
+(id)aFibBurdenRemoteDisabledFooterDescription;
+(id)aFibBurdenRemoteDisabledFooterDescriptionWatch;
+(id)aFibBurdenRemoteDisabledFooterDescriptionWithLink;
+(id)aFibBurdenSectionTitle;
+(id)aFibBurdenSeedExpiryFooterDescription;
+(id)aFibBurdenSeedExpiryFooterDescriptionWatch;
+(id)aFibBurdenSeedExpiryFooterDescriptionWithLink;
+(id)aFibBurdenSetupTitleDescription;
+(id)aFibBurdenTitleDescription;
+(id)aFibBurdenUnavailableDetailText;
+(id)aFibBurdenWristDetectFooterDescriptionWithLink;
+(id)aFibBurdenWristDetectFooterLinkTitle;
+(id)aFibBurdenWristDetectFooterLinkURL;
+(id)bradycardiaHeartRateOptions;
+(id)bradycardiaHeartThresholdFooterDescriptionWithThresholdValue:(id)arg0 ;
+(id)bradycardiaLearnMoreLink;
+(id)cardioFitnessAgeDeletedFooterDescription;
+(id)cardioFitnessAgeDeletedFooterDescriptionWithLink;
+(id)cardioFitnessAgeDeletedFooterLinkTitle;
+(id)cardioFitnessAgeDeletedFooterLinkURL;
+(id)cardioFitnessAgeRestrictedFooterDescription;
+(id)cardioFitnessFooterDescription;
+(id)cardioFitnessFooterDescriptionWithLink;
+(id)cardioFitnessFooterLinkTitle;
+(id)cardioFitnessFooterLinkURL;
+(id)cardioFitnessPairedDeviceRegionGatedFooterDescription;
+(id)cardioFitnessSectionTitle;
+(id)cardioFitnessSetupTitleDescription;
+(id)cardioFitnessTitleDescription;
+(id)cardioFitnessUnavailableDetailText;
+(id)cardioFitnessWristDetectFooterDescription;
+(id)cardioFitnessWristDetectFooterDescriptionWithLink;
+(id)cardioFitnessWristDetectFooterLinkTitle;
+(id)cardioFitnessWristDetectFooterLinkURL;
+(id)detailStatusOffText;
+(id)detailStatusOnText;
+(id)electrocardiogramLearnMoreURL;
+(id)heartRateSectionDescription;
+(id)heartRateSettingsURL;
+(id)heartRateThresholdOffDescription;
+(id)irregularHeartRhythmFooterDescription;
+(id)irregularHeartRhythmFooterLinkTitle;
+(id)irregularHeartRhythmFooterLinkURL;
+(id)irregularHeartRhythmSetupTitleDescription;
+(id)irregularHeartRhythmTitleDescription;
+(id)remoteDisabledLinkTitle;
+(id)remoteDisabledLinkURL;
+(id)seedExpiredLinkTitle;
+(id)seedExpiredLinkURL;
+(id)tachycardiaHeartRateOptions;
+(id)tachycardiaHeartThresholdFooterDescriptionWithThresholdValue:(id)arg0 ;
+(id)tachycardiaLearnMoreLink;
+(void)_setThresholdHeartRate:(id)arg0 detectedEnabledDefaultsKey:(id)arg1 thresholdHeartRateDefaultKey:(id)arg2 ;
+(void)setBradycardiaThresholdHeartRate:(id)arg0 ;
+(void)setTachycardiaThresholdHeartRate:(id)arg0 ;


@end


#endif