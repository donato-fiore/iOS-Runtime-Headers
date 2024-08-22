// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIBUNDLE_H
#define MIBUNDLE_H

@class NSString, NSURL, NSArray, NSDictionary, NSSet;

#import <Foundation/Foundation.h>

#import "MIBundle.h"

@interface MIBundle : NSObject

@property (readonly, nonatomic) BOOL allowsAppExtensionsNotInExtensionCache;
@property (readonly, copy, nonatomic) NSString *bundleName; // ivar: _bundleName
@property (copy, nonatomic) NSURL *bundleParentDirectoryURL; // ivar: _bundleParentDirectoryURL
@property (readonly, copy, nonatomic) NSString *bundleParentSubdirectory; // ivar: _bundleParentSubdirectory
@property (readonly, copy, nonatomic) NSString *bundleShortVersion;
@property (readonly, nonatomic) unsigned char bundleType; // ivar: _bundleType
@property (readonly, copy, nonatomic) NSString *bundleTypeDescription;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, copy, nonatomic) NSString *bundleVersion;
@property (readonly, copy, nonatomic) NSArray *deviceFamilies;
@property (retain, nonatomic) NSArray *driverKitExtensionBundles; // ivar: _driverKitExtensionBundles
@property (retain, nonatomic) NSArray *extensionKitBundles; // ivar: _extensionKitBundles
@property (retain, nonatomic) NSArray *frameworkBundles; // ivar: _frameworkBundles
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *infoPlistSubset; // ivar: _infoPlistSubset
@property (readonly, nonatomic) BOOL isLaunchProhibited;
@property (readonly, nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (nonatomic) BOOL isPlaceholderStatusValid; // ivar: _isPlaceholderStatusValid
@property (readonly, nonatomic) BOOL isRemovableSystemApp;
@property (readonly, nonatomic) BOOL isStaticContent;
@property (readonly, nonatomic) BOOL isWatchApp;
@property (readonly, copy, nonatomic) NSString *minimumOSVersion;
@property (readonly, nonatomic) BOOL needsDataContainer;
@property (readonly, weak, nonatomic) MIBundle *parentBundle; // ivar: _parentBundle
@property (readonly, copy, nonatomic) NSString *parentBundleID; // ivar: _parentBundleID
@property (retain, nonatomic) NSArray *pluginKitBundles; // ivar: _pluginKitBundles
@property (readonly, copy, nonatomic) NSString *sdkBuildVersion;
@property (readonly, nonatomic) NSSet *siriIntents;
@property (readonly, copy, nonatomic) NSArray *supportedDevices;
@property (retain, nonatomic) NSArray *xpcServiceBundles; // ivar: _xpcServiceBundles


+(BOOL)bundleIsBlacklisted:(id)arg0 ;
+(id)_URLOfFirstBundleInDirectory:(id)arg0 withExtension:(id)arg1 error:(*id)arg2 ;
+(id)bundleForURL:(id)arg0 error:(*id)arg1 ;
// +(id)bundlesInParentBundle:(id)arg0 subDirectory:(id)arg1 matchingPredicate:(id)arg2 error:(unk)arg3  ;
-(BOOL)_isMinimumOSVersion:(id)arg0 applicableToOSVersion:(id)arg1 requiredOS:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)_validateExtensions:(id)arg0 withType:(id)arg1 withError:(*id)arg2 ;
-(BOOL)_validateWithError:(*id)arg0 ;
-(BOOL)isApplicableToCurrentDeviceCapabilitiesWithError:(*id)arg0 ;
-(BOOL)isApplicableToCurrentDeviceFamilyWithError:(*id)arg0 ;
-(BOOL)isApplicableToCurrentOSVersionWithError:(*id)arg0 ;
-(BOOL)isApplicableToOSVersion:(id)arg0 error:(*id)arg1 ;
-(BOOL)isApplicableToOSVersionEarlierThan:(id)arg0 ;
-(BOOL)isCompatibleWithDeviceFamily:(int)arg0 ;
-(BOOL)isMinimumOSVersion:(id)arg0 applicableToOSVersion:(id)arg1 error:(*id)arg2 ;
-(BOOL)sdkBuildVersionIsAtLeast:(id)arg0 ;
-(BOOL)thinningMatchesCurrentDeviceWithError:(*id)arg0 ;
-(BOOL)validateAppMetadataWithError:(*id)arg0 ;
-(BOOL)validateBundleMetadataWithError:(*id)arg0 ;
-(BOOL)validateDriverKitExtensionMetadataWithError:(*id)arg0 ;
-(BOOL)validateExtensionKitMetadataWithError:(*id)arg0 ;
-(BOOL)validatePluginKitMetadataWithError:(*id)arg0 ;
-(id)_infoPlistKeysToLoad;
-(id)appExtensionBundlesPerformingPlatformValidation:(unsigned char)arg0 withError:(*id)arg1 ;
-(id)appExtensionBundlesWithError:(*id)arg0 ;
-(id)currentOSVersionForValidationWithError:(*id)arg0 ;
-(id)description;
-(id)driverKitExtensionBundlesWithError:(*id)arg0 ;
-(id)extensionKitBundlesPerformingPlatformValidation:(unsigned char)arg0 withError:(*id)arg1 ;
-(id)extensionKitBundlesWithError:(*id)arg0 ;
-(id)frameworkBundlesWithError:(*id)arg0 ;
-(id)initForTesting;
-(id)initWithBundleInDirectory:(id)arg0 withExtension:(id)arg1 error:(*id)arg2 ;
-(id)initWithBundleParentURL:(id)arg0 parentSubdirectory:(id)arg1 bundleName:(id)arg2 error:(*id)arg3 ;
-(id)initWithBundleURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithParentBundle:(id)arg0 parentSubdirectory:(id)arg1 bundleName:(id)arg2 error:(*id)arg3 ;
-(id)pluginKitBundlesPerformingPlatformValidation:(unsigned char)arg0 withError:(*id)arg1 ;
-(id)pluginKitBundlesWithError:(*id)arg0 ;
-(id)xpcServiceBundlesWithError:(*id)arg0 ;
-(void)infoPlistSubsetForTesting:(id)arg0 ;


@end


#endif