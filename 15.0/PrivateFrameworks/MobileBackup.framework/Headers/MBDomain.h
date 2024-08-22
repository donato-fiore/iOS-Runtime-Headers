// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MBDOMAIN_H
#define MBDOMAIN_H

@class NSFileHandle, NSString, NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface MBDomain : NSObject {
    NSFileHandle *_fileHandle;
    NSString *_fileHandlePath;
    NSFileHandle *_fileHandleForSnapshot;
    NSString *_fileHandlePathForSnapshot;
}


@property (readonly, nonatomic, getter=isAppDomain) BOOL appDomain;
@property (readonly, nonatomic, getter=isCameraRollDomain) BOOL cameraRollDomain;
@property (readonly, nonatomic) NSString *containerID;
@property (readonly, nonatomic) int containerType;
@property (readonly, nonatomic, getter=isGroupAppDomain) BOOL groupAppDomain;
@property (nonatomic) BOOL hasExternalConfig; // ivar: _hasExternalConfig
@property (readonly, nonatomic) BOOL hasRootPath;
@property (readonly, nonatomic, getter=isUninstalledAppDomain) BOOL installedAppDomain;
@property (nonatomic) BOOL isExternalConfig; // ivar: _isExternalConfig
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isPlaceholderAppDomain) BOOL placeholderAppDomain;
@property (readonly, nonatomic, getter=isPluginAppDomain) BOOL pluginAppDomain;
@property (retain, nonatomic) NSDictionary *relativePathAggregateDictionaryGroups; // ivar: _relativePathAggregateDictionaryGroups
@property (retain, nonatomic) NSDictionary *relativePathDomainRedirects; // ivar: _relativePathDomainRedirects
@property (retain, nonatomic) NSSet *relativePathsNotToBackup; // ivar: _relativePathsNotToBackup
@property (retain, nonatomic) NSSet *relativePathsNotToBackupAndRestoreToAppleTVs; // ivar: _relativePathsNotToBackupAndRestoreToAppleTVs
@property (retain, nonatomic) NSSet *relativePathsNotToBackupInMegaBackup; // ivar: _relativePathsNotToBackupInMegaBackup
@property (retain, nonatomic) NSSet *relativePathsNotToBackupToDrive; // ivar: _relativePathsNotToBackupToDrive
@property (retain, nonatomic) NSSet *relativePathsNotToBackupToService; // ivar: _relativePathsNotToBackupToService
@property (retain, nonatomic) NSSet *relativePathsNotToCheckIfModifiedDuringBackup; // ivar: _relativePathsNotToCheckIfModifiedDuringBackup
@property (retain, nonatomic) NSSet *relativePathsNotToMigrate; // ivar: _relativePathsNotToMigrate
@property (retain, nonatomic) NSSet *relativePathsNotToRemoveIfNotRestored; // ivar: _relativePathsNotToRemoveIfNotRestored
@property (retain, nonatomic) NSSet *relativePathsNotToRestore; // ivar: _relativePathsNotToRestore
@property (retain, nonatomic) NSSet *relativePathsNotToRestoreToIPods; // ivar: _relativePathsNotToRestoreToIPods
@property (retain, nonatomic) NSSet *relativePathsOfSystemFilesToAlwaysRemoveOnRestore; // ivar: _relativePathsOfSystemFilesToAlwaysRemoveOnRestore
@property (retain, nonatomic) NSSet *relativePathsOfSystemFilesToAlwaysRestore; // ivar: _relativePathsOfSystemFilesToAlwaysRestore
@property (retain, nonatomic) NSSet *relativePathsToBackgroundRestore; // ivar: _relativePathsToBackgroundRestore
@property (readonly, nonatomic) NSSet *relativePathsToBackup;
@property (retain, nonatomic) NSSet *relativePathsToBackupAndRestore; // ivar: _relativePathsToBackupAndRestore
@property (retain, nonatomic) NSSet *relativePathsToBackupIgnoringProtectionClass; // ivar: _relativePathsToBackupIgnoringProtectionClass
@property (retain, nonatomic) NSSet *relativePathsToBackupToDriveAndStandardAccount; // ivar: _relativePathsToBackupToDriveAndStandardAccount
@property (retain, nonatomic) NSSet *relativePathsToIgnoreExclusionsForDrive; // ivar: _relativePathsToIgnoreExclusionsForDrive
@property (retain, nonatomic) NSSet *relativePathsToOnlyBackupEncrypted; // ivar: _relativePathsToOnlyBackupEncrypted
@property (retain, nonatomic) NSSet *relativePathsToRemoveOnRestore; // ivar: _relativePathsToRemoveOnRestore
@property (readonly, nonatomic) NSSet *relativePathsToRestore;
@property (retain, nonatomic) NSSet *relativePathsToRestoreOnly; // ivar: _relativePathsToRestoreOnly
@property (retain, nonatomic) NSSet *relativePathsToRestoreOnlyFromService; // ivar: _relativePathsToRestoreOnlyFromService
@property (readonly, nonatomic) NSString *rootPath; // ivar: _rootPath
@property (nonatomic) BOOL shouldDigest; // ivar: _shouldDigest
@property (nonatomic) BOOL shouldRestoreRelativeSymlinks; // ivar: _shouldRestoreRelativeSymlinks
@property (readonly, nonatomic, getter=isSystemContainerDomain) BOOL systemContainerDomain;
@property (readonly, nonatomic, getter=isSystemSharedContainerDomain) BOOL systemSharedContainerDomain;


+(BOOL)_boolFromValue:(id)arg0 forKey:(id)arg1 ;
+(BOOL)isAppGroupName:(id)arg0 ;
+(BOOL)isAppPlaceholderName:(id)arg0 ;
+(BOOL)isAppPluginName:(id)arg0 ;
+(BOOL)isContainerName:(id)arg0 ;
+(BOOL)isSystemContainerName:(id)arg0 ;
+(BOOL)isSystemName:(id)arg0 ;
+(BOOL)isSystemSharedContainerName:(id)arg0 ;
+(BOOL)shouldRestoreRelativeSymlinksForDomainName:(id)arg0 ;
+(CGFloat)_doubleFromStringValueForKey:(id)arg0 plist:(id)arg1 ;
+(CGFloat)systemDomainsMaxSupportedVersion;
+(CGFloat)systemDomainsMinSupportedVersion;
+(CGFloat)systemDomainsVersion;
+(id)_dictionaryOfStringsToStringFromValue:(id)arg0 forKey:(id)arg1 ;
+(id)_relativePathsByAddingSQLiteJournals:(id)arg0 ;
+(id)_setOfStringsFromValue:(id)arg0 forKey:(id)arg1 ;
+(id)_stringByRemovingCommentsFromValue:(id)arg0 forKey:(id)arg1 ;
+(id)appDomainWithIdentifier:(id)arg0 rootPath:(id)arg1 ;
+(id)appGroupDomainWithIdentifier:(id)arg0 rootPath:(id)arg1 ;
+(id)appPlaceholderDomainWithIdentifier:(id)arg0 rootPath:(id)arg1 ;
+(id)appPluginDomainWithIdentifier:(id)arg0 rootPath:(id)arg1 ;
+(id)containerIDWithName:(id)arg0 ;
+(id)domainWithName:(id)arg0 rootPath:(id)arg1 ;
+(id)nameWithAppID:(id)arg0 ;
+(id)placeholderNameWithAppID:(id)arg0 ;
+(id)reloadSystemDomainsWithAccount:(id)arg0 ;
+(id)systemContainerDomainWithIdentifier:(id)arg0 rootPath:(id)arg1 ;
+(id)systemDomains;
+(id)systemDomainsByName;
+(id)systemDomainsWithAccount:(id)arg0 ;
+(id)systemSharedContainerDomainWithIdentifier:(id)arg0 rootPath:(id)arg1 ;
+(int)containerTypeWithName:(id)arg0 ;
+(void)_loadSystemDomains;
+(void)_loadSystemDomainsWithAccount:(id)arg0 ;
+(void)_resetSystemDomains;
-(BOOL)_loadDomainFromExternalPlist:(id)arg0 ;
-(BOOL)_loadSystemDomain:(id)arg0 plist:(id)arg1 account:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDomain:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithName:(id)arg0 plist:(id)arg1 ;
-(id)initWithName:(id)arg0 plist:(id)arg1 account:(id)arg2 ;
-(id)initWithName:(id)arg0 rootPath:(id)arg1 ;
-(int)_cachedFileDescriptorWithError:(*id)arg0 ;
-(int)_cachedFileDescriptorWithSnapshotPath:(id)arg0 volumeMountPoint:(id)arg1 error:(*id)arg2 ;
-(int)cachedFileDescriptorWithSnapshotPath:(id)arg0 volumeMountPoint:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;
-(void)releaseCachedFileDescriptors;


@end


#endif