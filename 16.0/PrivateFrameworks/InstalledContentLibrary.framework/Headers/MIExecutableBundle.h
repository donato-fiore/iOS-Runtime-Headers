// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIEXECUTABLEBUNDLE_H
#define MIEXECUTABLEBUNDLE_H

@class NSError, NSString, NSArray, NSURL;


#import "MIBundle.h"
#import "MIBundleContainer.h"
#import "MICodeSigningInfo.h"
#import "MIInstallationIdentity.h"
#import "MIPluginKitBundle.h"
#import "MIEmbeddedWatchBundle.h"

@interface MIExecutableBundle : MIBundle

@property (weak, nonatomic) MIBundleContainer *bundleContainer; // ivar: _bundleContainer
@property (readonly, nonatomic) *__CFBundle cfBundle; // ivar: _cfBundle
@property (readonly, nonatomic) NSUInteger codeSignatureVerificationState; // ivar: _codeSignatureVerificationState
@property (retain, nonatomic) MICodeSigningInfo *codeSigningInfo; // ivar: _codeSigningInfo
@property (retain, nonatomic) NSError *codeSigningInfoError; // ivar: _codeSigningInfoError
@property (readonly, copy, nonatomic) NSString *companionAppIdentifier;
@property (readonly, nonatomic) NSUInteger compatibilityState;
@property (readonly, copy, nonatomic) NSArray *counterpartIdentifiers;
@property (readonly, nonatomic) Class dataContainerClass;
@property (readonly, nonatomic) NSUInteger dataContainerContentClass;
@property (readonly, nonatomic) NSUInteger estimatedMemoryUsageToValidate;
@property (readonly, copy, nonatomic) NSString *executableName;
@property (readonly, nonatomic) NSURL *executableURL;
@property (readonly, nonatomic) BOOL hasSinf;
@property (readonly, nonatomic) BOOL hasWatchCustomNotification;
@property (readonly, nonatomic) BOOL hasWatchGlance;
@property (retain, nonatomic) MIInstallationIdentity *installationIdentity; // ivar: _installationIdentity
@property (readonly, nonatomic) BOOL isExtensionBasedWatchKitApp;
@property (readonly, nonatomic) BOOL isExtensionlessWatchKitApp;
@property (readonly, nonatomic) BOOL isWatchOnlyApp;
@property (nonatomic) NSUInteger lsInstallType; // ivar: _lsInstallType
@property (readonly, nonatomic) unsigned int maxLinkedSDKVersion;
@property (readonly, nonatomic) BOOL minimumWatchOSVersionIsPreV6;
@property (readonly, nonatomic) BOOL needsSinf;
@property (readonly, nonatomic) NSURL *rootSinfURL;
@property (readonly, nonatomic) NSURL *rootSupfURL;
@property (readonly, nonatomic) NSURL *rootSuppURL;
@property (retain, nonatomic) NSString *watchKitAppExecutableHash; // ivar: _watchKitAppExecutableHash
@property (readonly, nonatomic) BOOL watchKitAppRunsIndependentlyOfCompanion;
@property (retain, nonatomic) MIPluginKitBundle *watchKitPlugin; // ivar: _watchKitPlugin
@property (retain, nonatomic) MIEmbeddedWatchBundle *wk2AppBundle; // ivar: _wk2AppBundle
@property (retain, nonatomic) NSError *wk2AppBundleError; // ivar: _wk2AppBundleError


+(BOOL)isGrandfatheredNonContainerizedForSigningInfo:(id)arg0 ;
// +(id)bundlesInParentBundle:(id)arg0 subDirectory:(id)arg1 matchingPredicate:(id)arg2 error:(unk)arg3  ;
-(BOOL)_hasNoConflictWithSystemAppsForSigningInfo:(id)arg0 error:(*id)arg1 ;
-(BOOL)_hasNonContainerizingEntitlement:(id)arg0 checkSeatbeltProfiles:(BOOL)arg1 ;
-(BOOL)_hasResource:(id)arg0 withExtension:(id)arg1 ;
-(BOOL)_validateWithError:(*id)arg0 ;
-(BOOL)allowsAppExtensionsNotInExtensionCache;
-(BOOL)hasNoConflictsWithOtherInstalledEntitiesForSigningInfo:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasOnlyAllowedWatchKitAppInfoPlistKeysForWatchKitVersion:(unsigned char)arg0 error:(*id)arg1 ;
-(BOOL)makeAndSetNewInstallationIdentityWithError:(*id)arg0 ;
-(BOOL)makeExecutableWithError:(*id)arg0 ;
-(BOOL)needsDataContainer;
-(BOOL)replicateRootSinfWithError:(*id)arg0 ;
-(BOOL)transferInstallationIdentityFromBundle:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateMCMWithCodeSigningInfoAsAdvanceCopy:(BOOL)arg0 withError:(*id)arg1 ;
-(BOOL)updateSinfWithData:(id)arg0 error:(*id)arg1 ;
-(BOOL)validatePluginKitMetadataWithError:(*id)arg0 ;
-(BOOL)validateSinfWithError:(*id)arg0 ;
-(id)_dataContainerCreatingIfNeeded:(BOOL)arg0 makeLive:(BOOL)arg1 checkIfNeeded:(BOOL)arg2 created:(*BOOL)arg3 error:(*id)arg4 ;
-(id)_discoverWatchAppBundleAsPlaceholder:(BOOL)arg0 error:(*id)arg1 ;
-(id)bundleSignatureVersionWithError:(*id)arg0 ;
-(id)codeSigningInfoByValidatingResources:(BOOL)arg0 performingOnlineAuthorization:(BOOL)arg1 ignoringCachedSigningInfo:(BOOL)arg2 checkingTrustCacheIfApplicable:(BOOL)arg3 skippingProfileIDValidation:(BOOL)arg4 error:(*id)arg5 ;
-(id)dataContainerCreatingIfNeeded:(BOOL)arg0 makeLive:(BOOL)arg1 created:(*BOOL)arg2 error:(*id)arg3 ;
-(id)dataContainerWithError:(*id)arg0 ;
-(id)fairPlaySinfInfoWithError:(*id)arg0 ;
-(id)initForTesting;
-(id)initWithBundleInContainer:(id)arg0 withExtension:(id)arg1 error:(*id)arg2 ;
-(id)installationIdentitySettingIfNotSet:(BOOL)arg0 withError:(*id)arg1 ;
-(id)lsInstallTypeWithError:(*id)arg0 ;
-(id)updateAndValidateSinf:(id)arg0 error:(*id)arg1 ;
-(id)updateAndValidateSinf:(id)arg0 withRollback:(BOOL)arg1 error:(*id)arg2 ;
-(id)watchKitAppBundleForWKVersionOrEarlier:(unsigned char)arg0 error:(*id)arg1 ;
-(id)watchKitAppExecutableHashWithError:(*id)arg0 ;
-(id)watchKitPluginWithError:(*id)arg0 ;
-(id)watchKitV2AppBundleWithError:(*id)arg0 ;
-(int)_installEmbeddedProvisioningProfileAtURL:(id)arg0 withProgress:(id)arg1 ;
-(int)installEmbeddedProvisioningProfileWithProgress:(id)arg0 ;
-(int)installMacStyleEmbeddedProvisioningProfileWithProgress:(id)arg0 ;
-(unsigned char)watchKitVersionWithError:(*id)arg0 ;
-(void)bestEffortRollbackSinfData:(id)arg0 ;
-(void)dealloc;
-(void)removeSinf;
-(void)setBundleParentDirectoryURL:(id)arg0 ;


@end


#endif