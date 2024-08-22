// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXDEFAULTS_H
#define _EXDEFAULTS_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface _EXDefaults : NSObject

@property (readonly) BOOL allowPrototypeAPI;
@property (readonly) BOOL allowPrototypeSPI;
@property (readonly) BOOL allowSimulatedJetsam;
@property (readonly) NSSet *allowedUnsandboxedExtensionPoints;
@property (readonly) BOOL allowsAppleInternalComponents;
@property (readonly) NSSet *alwaysEnabledExtensionBundleIdentifiers;
@property (readonly) BOOL appleInternal;
@property (readonly) BOOL assertOnDisallowedPrototypeAPIUse;
@property (readonly) BOOL assertOnDisallowedPrototypeSPIUse;
@property (readonly) NSString *defaultSandboxProfileName;
@property (readonly) BOOL enforceLegacyExtensionPointAllowList;
@property (readonly) BOOL enforceXPCCacheCodeSigning;
@property (readonly) NSSet *errorTypes;
@property (readonly) BOOL forceSandbox;
@property (readonly) BOOL hostRequiresEntitlements;
@property (readonly) BOOL implementsNSExtension;
@property (readonly) NSSet *plistAndValueTypes;
@property (readonly) NSSet *plistTypes;
@property (readonly) BOOL preferInProcessDiscovery;
@property (readonly) BOOL queryPredicatesEvaluatedOutOfProcess;
@property (readonly) BOOL rejectExtensionRequestsWithInsecureInputItems;
@property (readonly) BOOL requiresLoadOperatorSecureDecoding;
@property (readonly) BOOL startUIHostingSessionImmediately;
@property (readonly) BOOL supportExtensionKitConfigPath;
@property (readonly) BOOL useLSDExtensionKitServiceForDiscovery;
@property (readonly) BOOL useLSDExtensionKitServiceForLaunch;


+(id)sharedInstance;
-(id)_init;


@end


#endif