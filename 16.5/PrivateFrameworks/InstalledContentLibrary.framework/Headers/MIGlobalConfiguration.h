// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIGLOBALCONFIGURATION_H
#define MIGLOBALCONFIGURATION_H

@class NSSet, NSString, NSURL, NSDictionary;

#import <Foundation/Foundation.h>


@interface MIGlobalConfiguration : NSObject

@property (readonly, copy, nonatomic) NSSet *allFrameworksDirectories; // ivar: _allFrameworksDirectories
@property (readonly, nonatomic) BOOL allowDeletableSystemApps; // ivar: _allowDeletableSystemApps
@property (readonly, nonatomic) BOOL allowsInternalSecurityPolicy;
@property (readonly, copy, nonatomic) NSString *alternateThinningModelIdentifier;
@property (readonly, copy, nonatomic) NSSet *appBundleMetadataItemNames;
@property (readonly, nonatomic) NSURL *backedUpStateDirectory;
@property (readonly, nonatomic) NSURL *backupSystemAppInstallStateFilePath;
@property (readonly, copy, nonatomic) NSSet *builtInApplicationBundleIDs;
@property (readonly, copy, nonatomic) NSSet *builtInFrameworkBundleIDs; // ivar: _builtInFrameworkBundleIDs
@property (readonly, nonatomic) NSURL *cachesDirectory;
@property (readonly, copy, nonatomic) NSDictionary *coreServicesAppBundleIDToInfoMap; // ivar: _coreServicesAppBundleIDToInfoMap
@property (readonly, nonatomic) NSURL *coreServicesDirectory;
@property (readonly, nonatomic) NSURL *cryptexAppsDirectory;
@property (readonly, copy, nonatomic) NSSet *cryptexFrameworksDirectories; // ivar: _cryptexFrameworksDirectories
@property (readonly, nonatomic) NSURL *cryptexOSDirectory;
@property (readonly, copy, nonatomic) NSSet *dataContainerRootItemNames;
@property (readonly, nonatomic) NSURL *dataDirectory;
@property (readonly, nonatomic) NSSet *developerDirectories;
@property (readonly, nonatomic) NSURL *developerRootDirectory;
@property (readonly, nonatomic) unsigned int gid; // ivar: _gid
@property (readonly, nonatomic) BOOL hasInternalContent;
@property (readonly, nonatomic) NSURL *helperLogDirectory; // ivar: _helperLogDirectory
@property (readonly, nonatomic) NSUInteger helperServiceJetsamLimit;
@property (readonly, copy, nonatomic) NSSet *installationBlacklist;
@property (readonly, nonatomic) NSUInteger installdJetsamLimit;
@property (readonly, nonatomic) NSURL *installdLibraryPath;
@property (readonly, nonatomic) NSURL *installdPath; // ivar: _installdPath
@property (readonly, copy, nonatomic) NSDictionary *internalAppBundleIDToInfoMap; // ivar: _internalAppBundleIDToInfoMap
@property (readonly, nonatomic) NSURL *internalAppsDirectory;
@property (readonly, nonatomic) NSURL *internalFrameworksRootDirectory;
@property (readonly, nonatomic) NSURL *internalRootDirectory;
@property (readonly, nonatomic) NSURL *lastBuildInfoFileURL;
@property (readonly, nonatomic) NSURL *logDirectory;
@property (readonly, nonatomic) NSURL *migrationPlistURL;
@property (readonly, nonatomic) NSURL *mobilePath; // ivar: _mobilePath
@property (readonly, nonatomic) NSURL *oldArchiveDirectory;
@property (readonly, nonatomic) NSURL *oldDataDirectoryPath;
@property (readonly, nonatomic) NSURL *oldLoggingPath;
@property (readonly, nonatomic) NSURL *roleUserMigrationMarkerFilePath;
@property (readonly, nonatomic) NSURL *rootPath; // ivar: _rootPath
@property (readonly, copy, nonatomic) NSDictionary *stagedSystemAppBundleIDToInfoMap; // ivar: _stagedSystemAppBundleIDToInfoMap
@property (readonly, nonatomic) NSURL *stagedSystemAppsDirectory;
@property (readonly, nonatomic) NSURL *stagingRoot;
@property (readonly, copy, nonatomic) NSSet *standardInfoMapInfoPlistKeys;
@property (readonly, copy, nonatomic) NSDictionary *systemAppBundleIDToInfoMap; // ivar: _systemAppBundleIDToInfoMap
@property (readonly, nonatomic) NSURL *systemAppDetachedSignaturesDirectory;
@property (readonly, nonatomic) NSURL *systemAppInstallStateFilePath;
@property (readonly, copy, nonatomic) NSSet *systemAppPlaceholderAppExtensionBundleIDs; // ivar: _systemAppPlaceholderAppExtensionBundleIDs
@property (readonly, copy, nonatomic) NSDictionary *systemAppPlaceholderBundleIDToInfoMap; // ivar: _systemAppPlaceholderBundleIDToInfoMap
@property (readonly, copy, nonatomic) NSSet *systemAppPlaceholderBundleIDs; // ivar: _systemAppPlaceholderBundleIDs
@property (readonly, copy, nonatomic) NSSet *systemAppPlaceholderXPCServiceBundleIDs; // ivar: _systemAppPlaceholderXPCServiceBundleIDs
@property (readonly, nonatomic) NSURL *systemAppPlaceholdersDirectory;
@property (readonly, nonatomic) NSURL *systemAppsDirectory;
@property (readonly, nonatomic) NSURL *systemDeveloperRootDirectory;
@property (readonly, nonatomic) NSURL *systemFrameworksRootDirectory;
@property (readonly, nonatomic) unsigned int uid; // ivar: _uid


+(id)sharedInstance;
-(id)_bundleIDMapForAppsInDirectory:(id)arg0 ;
-(id)_bundleIDMapForAppsInDirectory:(id)arg0 loadingAdditionalKeys:(id)arg1 ;
-(id)_bundleIDMapForBundlesInDirectory:(id)arg0 withExtension:(id)arg1 ;
-(id)_bundleIDMapForBundlesInDirectory:(id)arg0 withExtension:(id)arg1 loadingAdditionalKeys:(id)arg2 ;
-(id)disableSystemAppDeletionCanaryFile;
-(id)init;
-(void)reScanCoreServicesApps;
-(void)reScanInternalApps;
-(void)reScanSystemApps;


@end


#endif