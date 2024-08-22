// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKURLBAG_H
#define AKURLBAG_H

@class NSString, NSURL, NSSet, NSDictionary, NSArray;
@protocol AKURLBagDictionaryProvider;

#import <Foundation/Foundation.h>


@interface AKURLBag : NSObject

@property (readonly, nonatomic) NSString *APSEnvironment;
@property (readonly, nonatomic) NSUInteger IDMSEnvironment;
@property (readonly, nonatomic) NSURL *absintheCertURL;
@property (readonly, nonatomic) NSURL *absintheSessionURL;
@property (readonly, nonatomic) NSURL *acsURL;
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, nonatomic) NSSet *appleIDAuthorizationURLs;
@property (readonly, nonatomic) NSURL *appleIDAuthorizeHTMLResponseURL;
@property (readonly, nonatomic) NSSet *appleOwnedDomains;
@property (retain, nonatomic) NSObject<AKURLBagDictionaryProvider> *bagProvider; // ivar: _bagProvider
@property (readonly, nonatomic) NSURL *basicAuthURL;
@property (readonly, nonatomic) NSURL *changePasswordURL;
@property (readonly, nonatomic) NSURL *checkInURL;
@property (readonly, nonatomic) NSURL *circleURL;
@property (readonly, nonatomic) NSURL *configurationInfoURL;
@property (readonly, nonatomic) NSString *continuationHeaderPrefix;
@property (readonly, nonatomic) NSURL *createAppleIDURL;
@property (readonly, nonatomic) NSURL *createChildAccountURL;
@property (readonly, nonatomic) NSDictionary *custodianCodeConfiguration;
@property (readonly, nonatomic) NSURL *deleteAuthorizedAppURL;
@property (readonly, nonatomic) NSURL *deviceListURL;
@property (readonly, nonatomic) NSURL *endProvisioningURL;
@property (readonly, nonatomic) NSURL *escapeHatchURL;
@property (readonly, nonatomic) NSURL *fetchAppInfoURL;
@property (readonly, nonatomic) NSURL *fetchAuthenticationModeURL;
@property (readonly, nonatomic) NSURL *fetchConfigDataURL;
@property (readonly, nonatomic) NSURL *fetchFollowUps;
@property (readonly, nonatomic) NSURL *fetchPrimaryBundleIDURL;
@property (readonly, nonatomic) NSURL *fetchUserInfoURL;
@property (readonly, nonatomic) NSURL *iForgotContinuationURL;
@property (readonly, nonatomic) NSURL *iForgotURL;
@property (readonly, nonatomic, getter=IsInlineFlowSupportedConfig) BOOL inlineFlowSupportedConfig;
@property (readonly, nonatomic) NSUInteger lastKnownIDMSEnvironment;
@property (readonly, nonatomic) NSURL *notificationAckURL;
@property (readonly, nonatomic, getter=isPhoneNumberSupportedConfig) BOOL phoneNumberSupportedConfig;
@property (readonly, nonatomic) NSURL *privateEmailManageURL;
@property (readonly, nonatomic) NSURL *renewRecoveryTokenURL;
@property (readonly, nonatomic) NSURL *repairURL;
@property (readonly, nonatomic) NSArray *securityUpgradeServiceNames;
@property (readonly, nonatomic) NSURL *startProvisioningURL;
@property (readonly, nonatomic) NSURL *storeModernRecoveryURL;
@property (readonly, nonatomic) NSURL *syncAnisetteURL;
@property (readonly, nonatomic) NSURL *tokenUpgradeURL;
@property (readonly, nonatomic) NSURL *trustedDevicesSummaryURL;
@property (readonly, nonatomic) NSURL *trustedDevicesURL;
@property (readonly, nonatomic) NSURL *upgradeEligibilityCheckURL;
@property (readonly, nonatomic) NSURL *upgradeUIURL;
@property (readonly, nonatomic) NSURL *userVerificationURL;
@property (readonly, nonatomic) NSURL *validateCodeURL;
@property (readonly, nonatomic) NSURL *validateVettingTokenURL;


+(BOOL)looksLikeiForgotURLKey:(id)arg0 ;
+(NSUInteger)IDMSEnvironmentFromBag:(id)arg0 ;
+(NSUInteger)_IDMSEnvironmentFromString:(id)arg0 ;
+(id)_currentBags;
+(id)_requestEnvironmentsWithBag:(id)arg0 ;
+(id)bagForAltDSID:(id)arg0 ;
+(id)keyForEscapeHatchURL;
+(id)sharedBag;
-(BOOL)requestNewURLBagIfNecessaryWithError:(*id)arg0 ;
-(id)_configurationsFromCache:(BOOL)arg0 withError:(*id)arg1 ;
-(id)_requestEnvironmentsWithError:(*id)arg0 ;
-(id)_requestNewURLBagIfNecessaryWithError:(*id)arg0 ;
-(id)_urlAtKey:(id)arg0 ;
-(id)_urlBagFromCache:(BOOL)arg0 withError:(*id)arg1 ;
-(id)configurationAtKey:(id)arg0 ;
-(id)configurationAtKey:(id)arg0 fromCache:(BOOL)arg1 ;
-(id)initWithAltDSID:(id)arg0 ;
-(id)urlAtKey:(id)arg0 ;
-(void)_fetchURLBagWithCompletion:(id)arg0 ;
-(void)forceUpdateBagWithUrlSwitchData:(id)arg0 completion:(id)arg1 ;
-(void)requestNewURLBagIfNecessaryWithCompletion:(id)arg0 ;


@end


#endif