// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCTSMSUTILITIES_H
#define IMCTSMSUTILITIES_H


#import <Foundation/Foundation.h>


@interface IMCTSMSUtilities : NSObject



+(BOOL)IMIsEagerUploadEnabledForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(BOOL)IMMMSEagerUploadDisabledInCarrierBundleForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(BOOL)IMMMSEnabledForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(BOOL)IMMMSGroupTextOnlyMessagesSendAsMMSForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(BOOL)IMMMSRestrictedModeEnabledForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(BOOL)IMMMSSupportedAndConfiguredForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(BOOL)IMMMSSupportsH264VideoForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(BOOL)IMMessagesFilteringSettingForPreferedSubscription;
+(BOOL)IMReadDisablePreviewTranscodingQualityOnWiFiCarrierValueForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(BOOL)IMReadEnablePreviewTranscodingQualityCarrierValueForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(BOOL)IMReadMMSUserOverrideForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(BOOL)IMShouldShowMMSEmailAddress:(id)arg0 simID:(id)arg1 ;
+(BOOL)MMSRestrictedModeEnabledForPhoneNumber:(id)arg0 simID:(id)arg1 reset:(BOOL)arg2 ;
+(CGFloat)IMMMSMaximumAudioDurationForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(CGFloat)IMMMSMaximumDurationWithPreset:(id)arg0 phoneNumber:(id)arg1 simID:(id)arg2 ;
+(CGFloat)IMMMSMaximumVideoDurationForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(NSUInteger)IMReadAttachmentPreviewTranscodingQualitySizeCarrierValueForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(NSUInteger)IMiMessageMaxTransferAudioFileSizeForWifiForPhoneNumber:(*NSUInteger)arg0 cellSize:(*NSUInteger)arg1 serverConfigurationBag:(id)arg2 phoneNumber:(id)arg3 simID:(id)arg4 ;
+(NSUInteger)IMiMessageMaxTransferVideoFileSizeForWifiForPhoneNumber:(*NSUInteger)arg0 cellSize:(*NSUInteger)arg1 serverConfigurationBag:(id)arg2 phoneNumber:(id)arg3 simID:(id)arg4 ;
+(id)IMMMSEmailAddressToMatchForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(id)IMPhoneNumbersEnabledForMultipleSubscriptionDevice;
+(id)IMUniqueIdentifierForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(id)carrierBundleValueForKeyHierarchy:(id)arg0 phoneNumber:(id)arg1 simID:(id)arg2 ;
+(id)carrierNameForPhoneNumber:(id)arg0 ;
+(int)IMMMSMaxImageDimensionForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(int)IMMMSMaxRecipientsForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(int)IMMMSMaximumMessageByteCountForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(int)IMMMSMaximumSlideCountForPhoneNumber:(id)arg0 simID:(id)arg1 ;
+(void)IMSynchronizeMMSCapabilityToWatch:(BOOL)arg0 ;
+(void)IMSynchronizePreferredSubscriptionMMSCapabilityToWatch;
+(void)IMiMessageMaxTransferFileSizeForWifiForPhoneNumber:(*NSUInteger)arg0 cellSize:(*NSUInteger)arg1 serverConfigurationBag:(id)arg2 phoneNumber:(id)arg3 simID:(id)arg4 ;


@end


#endif