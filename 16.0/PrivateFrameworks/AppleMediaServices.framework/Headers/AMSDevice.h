// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSDEVICE_H
#define AMSDEVICE_H

@class NSString;
@protocol AMSBagConsumer;

#import <Foundation/Foundation.h>


@interface AMSDevice : NSObject <AMSBagConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_setRawDeviceOffers:(id)arg0 offersStore:(id)arg1 ;
+(BOOL)_shouldPostOffersUpdatedNotification:(id)arg0 oldOffers:(id)arg1 ;
+(BOOL)deviceIsAppleTV;
+(BOOL)deviceIsAppleTVSimulator;
+(BOOL)deviceIsAppleWatch;
+(BOOL)deviceIsAppleWatchSimulator;
+(BOOL)deviceIsAudioAccessory;
+(BOOL)deviceIsBundle;
+(BOOL)deviceIsInternalBuild;
+(BOOL)deviceIsMac;
+(BOOL)deviceIsSeedBuild;
+(BOOL)deviceIsiPad;
+(BOOL)deviceIsiPadSimulator;
+(BOOL)deviceIsiPhone;
+(BOOL)deviceIsiPhoneSimulator;
+(BOOL)deviceIsiPod;
+(BOOL)deviceIsiPodSimulator;
+(BOOL)deviceOffersContainType:(NSUInteger)arg0 ;
+(BOOL)expressedIntent;
+(BOOL)isEligibleForOffers;
+(BOOL)isGift;
+(BOOL)isRunningInStoreDemoMode;
+(BOOL)isSecureElementAvailable;
+(BOOL)postAllDeviceOfferFollowUpsForAccount:(id)arg0 priority:(NSInteger)arg1 bag:(id)arg2 logKey:(id)arg3 ;
+(BOOL)postAllDeviceOfferFollowUpsForAccount:(id)arg0 priority:(NSInteger)arg1 bagContract:(id)arg2 logKey:(id)arg3 ;
+(BOOL)postDeviceOfferFollowUpWithIdentifier:(id)arg0 account:(id)arg1 priority:(NSInteger)arg2 bag:(id)arg3 logKey:(id)arg4 ;
+(BOOL)postDeviceOfferFollowUpWithIdentifier:(id)arg0 account:(id)arg1 priority:(NSInteger)arg2 bagContract:(id)arg3 logKey:(id)arg4 ;
+(BOOL)saveDeviceOffersForAccount:(id)arg0 response:(id)arg1 logKey:(id)arg2 ;
+(BOOL)shouldPresentSetupOffersForAccount:(id)arg0 ;
+(BOOL)shouldPresentSetupOffersForAccount:(id)arg0 issues:(*NSInteger)arg1 ;
+(BOOL)tearDownAllDeviceOfferFollowUpsForAccount:(id)arg0 logKey:(id)arg1 ;
+(BOOL)tearDownDeviceOfferFollowUpWithIdentifier:(id)arg0 account:(id)arg1 logKey:(id)arg2 ;
+(NSInteger)biometricState;
+(id)MLBSerialNumber;
+(id)ROMAddress;
+(id)_dataForNVRAMKey:(id)arg0 ;
+(id)_followUpItemWithIdentifier:(id)arg0 account:(id)arg1 priority:(NSInteger)arg2 bag:(id)arg3 ;
+(id)_notificationIdFromFollowUpId:(id)arg0 account:(id)arg1 ;
+(id)_systemVersionDictionary;
+(id)_voicePreferredPhoneNumberContext;
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)buildVersion;
+(id)cachedRegistrationGroups;
+(id)carrierNames;
+(id)carrierNamesPromise;
+(id)compatibleProductType;
+(id)createBagForSubProfile;
+(id)deviceGUID;
+(id)deviceName;
+(id)deviceOffers;
+(id)deviceOffersForType:(NSUInteger)arg0 ;
+(id)hardwarePlatform;
+(id)language;
+(id)localIPAddress;
+(id)macAddress;
+(id)macAddressData;
+(id)name;
+(id)operatingSystem;
+(id)phoneNumber;
+(id)productType;
+(id)productVersion;
+(id)registrationBlacklist;
+(id)screenHeight;
+(id)screenScale;
+(id)screenWidth;
+(id)serialNumber;
+(id)thinnedAppVariantId;
+(id)uniqueDeviceId;
+(id)voicePreferredPACToken;
+(id)voicePreferredPhoneNumberContextInfo;
+(void)_performAuth;
+(void)_removeDeviceOfferRegistrationItem:(id)arg0 fromDeviceOfferStore:(id)arg1 ;
+(void)_setDeviceEligibilityKeepingExistingDeviceOffers:(id)arg0 offersStore:(id)arg1 ;
+(void)clearRegistrationBlacklist;
+(void)registerCompanionWithSerialNumber:(id)arg0 ;
+(void)registerCompanionWithSerialNumber:(id)arg0 bag:(id)arg1 ;
+(void)removeDeviceOfferRegistrationItem:(id)arg0 ;
+(void)removeDeviceOfferWithIdentifier:(id)arg0 account:(id)arg1 bag:(id)arg2 logKey:(id)arg3 ;
+(void)removeDeviceOfferWithIdentifier:(id)arg0 account:(id)arg1 bagContract:(id)arg2 logKey:(id)arg3 ;
+(void)saveDeviceOfferEligibility:(id)arg0 ;
+(void)saveDeviceOffers:(id)arg0 ;
+(void)setBiometricState:(NSInteger)arg0 ;
+(void)setDeviceOffersCheckEncodingForRequestParameters:(id)arg0 ;
+(void)startListeningForDeviceLanguageChangeWithBagContract:(id)arg0 ;
+(void)stopListeningForDeviceLanguageChange;


@end


#endif