// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSSYSTEMPOLICYFORAPP_H
#define PSSYSTEMPOLICYFORAPP_H

@class NEConfiguration, BBObserver, NSUserDefaults, NSString;
@protocol BBObserverDelegate, PSSystemPolicyForAppDelegate;

#import <Foundation/Foundation.h>

#import "PSPhotosPolicyController.h"
#import "PSContactsPolicyController.h"
#import "PSAccountEnumerator.h"
#import "PSSpecifier.h"

@interface PSSystemPolicyForApp : NSObject <BBObserverDelegate>

 {
    NSUInteger _policyOptions;
    BOOL _forcePolicyOptions;
    PSPhotosPolicyController *_photosPrivacyController;
    PSContactsPolicyController *_contactsPrivacyController;
    PSAccountEnumerator *_accountEnumerator;
    NEConfiguration *_pathControllerConfiguration;
}


@property (retain, nonatomic) BBObserver *_bbObserver; // ivar: __bbObserver
@property (retain, nonatomic) NSUserDefaults *appUserDefaults; // ivar: _appUserDefaults
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) PSSpecifier *cinematicFramingSpecifier; // ivar: _cinematicFramingSpecifier
@property (retain, nonatomic) NSString *containerPathForCurrentApp; // ivar: _containerPathForCurrentApp
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PSSystemPolicyForAppDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enServiceMatched; // ivar: _enServiceMatched
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *matchingBundleIdentifier; // ivar: _matchingBundleIdentifier
@property (readonly) Class superclass;


+(BOOL)isServiceRestricted:(id)arg0 ;
-(BOOL)_accountModificationDisabledByRestrictions;
-(BOOL)_isAppClip;
-(BOOL)_isBackgroundAppRefreshAllowed;
-(BOOL)_isLocationServicesRestricted;
-(BOOL)_isWirelessDataRestricted;
-(BOOL)_supportsBackgroundAppRefresh;
-(BOOL)_supportsLiveActivities;
-(BOOL)getMulticastAllowed:(*BOOL)arg0 ;
-(BOOL)isCellularBundleID:(id)arg0 ;
-(NSInteger)_getAuthorizationRecordsStatus;
-(id)accountsSpecifier;
-(id)assistantAndSearchSpecifiers;
-(id)authLevelStringForStatus:(NSUInteger)arg0 ;
-(id)backgroundAppRefreshSpecifier;
-(id)contactsServicesSpecifier;
-(id)dataUsageWorkspaceInfo;
// -(id)defaultAppSpecifierWithAppRecordsMatchingBlock:(id)arg0 getter:(unk)arg1 setter:(SEL)arg2 title:(SEL)arg3  ;
-(id)defaultBrowser:(id)arg0 ;
-(id)defaultBrowserSpecifier;
-(id)defaultMailApp:(id)arg0 ;
-(id)defaultMailAppSpecifier;
-(id)documentSource:(id)arg0 ;
-(id)documentsSpecifier;
-(id)exposureSpecifiersWithTCCServiceLookup:(id)arg0 ;
-(id)familyControlsSpecifier;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)isBackgroundRefreshEnabled:(id)arg0 ;
-(id)isFamilyControlsEnabled:(id)arg0 ;
-(id)isLiveActivitiesEnabled:(id)arg0 ;
-(id)isLocalNetworkEnabled:(id)arg0 ;
-(id)isTapToPayEnabled:(id)arg0 ;
-(id)liveActivitiesSpecifier;
-(id)locationServicesSpecifier;
-(id)locationStatus:(id)arg0 ;
-(id)networkServicesSpecifier;
-(id)notificationSpecifier;
-(id)pathRuleForBundleID:(id)arg0 create:(BOOL)arg1 ;
-(id)photosServicesSpecifier;
-(id)preferredLanguage:(id)arg0 ;
-(id)preferredLanguageSpecifier;
-(id)privacyAccessForSpecifier:(id)arg0 ;
-(id)privacySpecifierForService:(struct __CFString *)arg0 tccServiceLookup:(id)arg1 tccServiceOverrides:(id)arg2 ;
-(id)privacySpecifiersWithTCCServiceLookup:(id)arg0 tccServiceOverrides:(id)arg1 ;
-(id)specifiers;
-(id)specifiersForPolicyOptions:(NSUInteger)arg0 force:(BOOL)arg1 ;
-(id)tapToPayScreenLockSpecifiers;
-(id)trackingSpecifiersWithTCCServiceLookup:(id)arg0 tccServiceOverrides:(id)arg1 ;
-(id)wirelessDataSpecifierWithAppName:(id)arg0 ;
-(void)_handleAddAccountButtonAction:(id)arg0 ;
-(void)headerLinkWasTapped;
-(void)loadNetworkConfigurationsForceRefresh:(BOOL)arg0 ;
-(void)observer:(id)arg0 updateSectionInfo:(id)arg1 ;
-(void)saveNetworkConfiguration;
-(void)setBackgroundRefreshEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setDefaultBrowser:(id)arg0 specifier:(id)arg1 ;
-(void)setDefaultMailApp:(id)arg0 specifier:(id)arg1 ;
-(void)setFamilyControlsEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setLiveActivitiesEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setLocalNetworkEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setPrivacyAccess:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setTapToPayEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setupNetworkConfiguration;


@end


#endif