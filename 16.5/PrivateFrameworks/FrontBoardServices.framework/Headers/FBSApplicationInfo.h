// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSAPPLICATIONINFO_H
#define FBSAPPLICATIONINFO_H

@class NSDictionary, NSSet, NSArray, NSString, NSURL, LSApplicationIdentity, NSNumber, RBSProcessIdentity;
@protocol BSDescriptionProviding;


#import "FBSBundleInfo.h"
#import "_FBSCDHashCacheInfo.h"

@interface FBSApplicationInfo : FBSBundleInfo <BSDescriptionProviding>

 {
    NSDictionary *_lazy_entitlements;
    BOOL _isManaged;
    unsigned int _signatureVersion;
    NSSet *_backgroundModes;
    NSArray *_lazy_folderNames;
    NSString *_lazy_fallbackFolderName;
    os_unfair_lock_s _lock;
    BOOL _initialized;
}


@property (readonly, nonatomic, getter=isUPPProvisioningProfileValidated) BOOL UPPProvisioningProfileValidated; // ivar: _uppProvisioningProfileValidated
@property (readonly, copy, nonatomic) NSURL *advertisingAttributionReportEndpoint; // ivar: _advertisingAttributionReportEndpoint
@property (readonly, copy, nonatomic, getter=_appIDEntitlement) NSString *appIDEntitlement; // ivar: _appIDEntitlement
@property (readonly, copy, nonatomic) LSApplicationIdentity *applicationIdentity; // ivar: _applicationIdentity
@property (readonly, nonatomic, getter=isBeta) BOOL beta; // ivar: _beta
@property (readonly, nonatomic, getter=isBlocked) BOOL blocked; // ivar: _blocked
@property (readonly, nonatomic, getter=isBlockedForScreenTimeExpiration) BOOL blockedForScreenTimeExpiration;
@property (readonly, nonatomic, getter=wasBuiltWithTSAN) BOOL builtWithTSAN; // ivar: _builtWithTSAN
@property (readonly, nonatomic) NSURL *bundleContainerURL; // ivar: _bundleContainerURL
@property (retain) _FBSCDHashCacheInfo *cachedCDHashInfo;
@property (readonly, nonatomic) NSArray *customMachServices; // ivar: _customMachServices
@property (readonly, nonatomic) NSURL *dataContainerURL; // ivar: _dataContainerURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *deviceFamilies; // ivar: _deviceFamilies
@property (readonly, nonatomic) NSNumber *downloaderDSID; // ivar: _downloaderDSID
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSDictionary *environmentVariables; // ivar: _environmentVariables
@property (readonly, nonatomic) NSURL *executableURL; // ivar: _executableURL
@property (readonly, nonatomic, getter=isExitsOnSuspend) BOOL exitsOnSuspend;
@property (readonly, nonatomic) NSArray *externalAccessoryProtocols; // ivar: _externalAccessoryProtocols
@property (readonly, nonatomic) NSString *fallbackFolderName; // ivar: _fallbackFolderName
@property (readonly, nonatomic) NSArray *folderNames; // ivar: _folderNames
@property (readonly, nonatomic, getter=isFreeDeveloperProvisioningProfileValidated) BOOL freeDeveloperProvisioningProfileValidated; // ivar: _freeDeveloperProvisioningProfileValidated
@property (readonly, nonatomic) BOOL hasViewServicesEntitlement; // ivar: _hasViewServicesEntitlement
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_isInstalling, setter=_setInstalling:) BOOL installing; // ivar: _installing
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (readonly, nonatomic) BOOL isSignatureVersionSupportEndingSoon;
@property (readonly, nonatomic) BOOL isSignatureVersionSupported;
@property (readonly, nonatomic) NSNumber *itemID; // ivar: _itemID
@property (readonly, nonatomic) CGFloat lastModifiedDate; // ivar: _lastModifiedDate
@property (readonly, nonatomic) float minimumBrightnessLevel; // ivar: _minimumBrightnessLevel
@property (nonatomic, getter=_isPendingUninstall, setter=_setPendingUninstall:) BOOL pendingUninstall; // ivar: _pendingUninstall
@property (readonly, copy, nonatomic) NSString *preferenceDomain; // ivar: _preferenceDomain
@property (readonly, copy, nonatomic) RBSProcessIdentity *processIdentity; // ivar: _processIdentity
@property (readonly, nonatomic, getter=isProvisioningProfileValidated) BOOL provisioningProfileValidated; // ivar: _provisioningProfileValidated
@property (readonly, nonatomic) NSNumber *purchaserDSID; // ivar: _purchaserDSID
@property (readonly, nonatomic) NSInteger ratingRank; // ivar: _ratingRank
@property (readonly, nonatomic) NSArray *requiredCapabilities; // ivar: _requiredCapabilities
@property (readonly, nonatomic) BOOL requiresPersistentWiFi; // ivar: _requiresPersistentWiFi
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted; // ivar: _restricted
@property (readonly, nonatomic) NSURL *sandboxURL; // ivar: _sandboxURL
@property (readonly, nonatomic) NSInteger screenTimePolicy; // ivar: _screenTimePolicy
@property (readonly, copy, nonatomic) NSString *sdkVersion; // ivar: _sdkVersion
@property (readonly, copy, nonatomic) NSString *shortVersionString; // ivar: _shortVersionString
@property (readonly, nonatomic) unsigned int signatureVersion;
@property (readonly, copy, nonatomic) NSString *signerIdentity; // ivar: _signerIdentity
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger supportedInterfaceOrientations; // ivar: _supportedInterfaceOrientations
@property (readonly, nonatomic) BOOL supportsMultiwindow; // ivar: _supportsMultiwindow
@property (readonly, nonatomic) NSArray *tags; // ivar: _tags
@property (readonly, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier
@property (nonatomic, getter=_isTentativeUninstall, setter=_setTentativeUninstall:) BOOL tentativeUninstall; // ivar: _tentativeUninstall
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic, getter=_isUninstalling, setter=_setUninstalling:) BOOL uninstalling; // ivar: _uninstalling


+(NSUInteger)_applicationTypeForProxy:(id)arg0 ;
+(id)_configureEnvironment:(id)arg0 withInfo:(id)arg1 isPreApex:(BOOL)arg2 ;
-(BOOL)builtOnOrAfterSDKVersion:(id)arg0 ;
-(BOOL)supportsAllInterfaceOrientations;
-(BOOL)supportsBackgroundMode:(id)arg0 ;
-(BOOL)supportsDeviceFamily:(NSUInteger)arg0 ;
-(BOOL)supportsInterfaceOrientation:(NSInteger)arg0 ;
-(NSUInteger)unauthoritativeTrustState;
-(id)_initWithApplicationProxy:(id)arg0 record:(id)arg1 appIdentity:(id)arg2 processIdentity:(id)arg3 overrideURL:(id)arg4 ;
-(id)_initWithBundleIdentifier:(id)arg0 url:(id)arg1 ;
-(id)_initWithBundleProxy:(id)arg0 overrideURL:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithApplicationProxy:(id)arg0 ;
-(id)succinctDescriptionBuilder;
-(void)_loadFromProxy:(id)arg0 ;
-(void)_overrideTags:(id)arg0 ;
-(void)_synchronize:(id)arg0 ;


@end


#endif