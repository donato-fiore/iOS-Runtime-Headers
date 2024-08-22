// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCONTAINER_H
#define BRCONTAINER_H

@class NSURL, NSSet, NSDictionary, NSString, NSNumber, NSDate, NSData, NSPurgeableData;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BRMangledID.h"

@interface BRContainer : NSObject <NSSecureCoding>

 {
    BRMangledID *_mangledID;
    NSURL *_url;
    NSSet *_bundleIDs;
    NSDictionary *_bundleIDVersions;
    NSString *_localizedName;
    NSSet *_documentsTypes;
    NSSet *_exportedTypes;
    NSSet *_importedTypes;
    NSDictionary *_iconMetadata;
    NSDictionary *_iconURLs;
    NSNumber *_iconGeneratorVersion;
    BOOL _isObservingOverQuota;
    BOOL _isOverQuota;
    NSNumber *_isDocumentScopePublicAsNumber;
    BOOL _isObservingLastServerUpdate;
    NSDate *_lastServerUpdate;
    BOOL _isObservingCurrentStatus;
    unsigned int _currentStatus;
    NSData *_imageSandboxExtension;
    BOOL _shouldUsePurgeableData;
    NSData *_dataRepresentation;
    NSPurgeableData *_purgeableDataRepresentation;
    NSObject<OS_dispatch_queue> *_observationSetupQueueForDefaultConnection;
    NSObject<OS_dispatch_queue> *_observationSetupQueueForSecondaryConnection;
    NSString *_personaID;
}


@property (readonly, copy, nonatomic) NSSet *bundleIdentifiers;
@property (readonly) unsigned int currentStatus;
@property unsigned int currentStatus;
@property (readonly, nonatomic) NSSet *documentsTypes;
@property (readonly, nonatomic) NSURL *documentsURL;
@property (readonly, nonatomic) NSSet *exportedTypes;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSSet *importedTypes;
@property (nonatomic) BOOL isCloudSyncTCCDisabled; // ivar: _isCloudSyncTCCDisabled
@property (readonly, nonatomic) BOOL isDocumentScopePublic;
@property (nonatomic) BOOL isInCloudDocsZone; // ivar: _isInCloudDocsZone
@property (nonatomic) BOOL isInInitialState; // ivar: _isInInitialState
@property (readonly) NSDate *lastServerUpdate;
@property (retain) NSDate *lastServerUpdate;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, getter=isOverQuota) BOOL overQuota;
@property (getter=isOverQuota) BOOL overQuota;
@property (readonly, nonatomic) NSString *supportedFolderLevels;
@property (readonly, nonatomic) NSURL *trashURL;
@property (readonly, nonatomic) NSURL *url;


+(BOOL)canMoveFilesWithoutDownloadingFromContainer:(id)arg0 toContainer:(id)arg1 ;
+(BOOL)isDocumentScopePublicWithProperties:(id)arg0 mangledID:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(BOOL)versionOfBundle:(id)arg0 changedFromVersion:(id)arg1 ;
+(id)_URLForPlistOfMangledID:(id)arg0 ;
+(id)_bundleIDVersionsWithProperties:(id)arg0 mangledID:(id)arg1 ;
+(id)_bundleIDsWithProperties:(id)arg0 ;
+(id)_containerRepositoryURLForMangledID:(id)arg0 ;
+(id)_documentsTypesWithProperties:(id)arg0 ;
+(id)_exportedTypesWithProperties:(id)arg0 ;
+(id)_iconGeneratorVersionWithProperties:(id)arg0 ;
+(id)_iconMetadataWithProperties:(id)arg0 ;
+(id)_iconURLsWithProperties:(id)arg0 mangledID:(id)arg1 ;
+(id)_importedTypesWithProperties:(id)arg0 ;
+(id)_isDocumentScopePublicAsNumberWithProperties:(id)arg0 mangledID:(id)arg1 ;
+(id)_localizedNameWithProperties:(id)arg0 mangledID:(id)arg1 ;
+(id)_localizedNameWithProperties:(id)arg0 mangledID:(id)arg1 preferredLanguages:(id)arg2 ;
+(id)_pathForIconName:(id)arg0 mangledID:(id)arg1 ;
+(id)_sanitizedContainerFallbackNameForMangledID:(id)arg0 ;
+(id)allContainers;
+(id)allContainersBlockIfNeeded:(BOOL)arg0 ;
+(id)allContainersByContainerID;
+(id)bundleIdentifiersEnumeratorForProperties:(id)arg0 ;
+(id)bundlePropertyEnumerator:(id)arg0 valuesOfClass:(Class)arg1 forProperties:(id)arg2 ;
+(id)classesForDecoding;
+(id)containerForItemAtURL:(id)arg0 error:(*id)arg1 ;
+(id)containerForMangledID:(id)arg0 ;
+(id)containerInRepositoryURL:(id)arg0 createIfMissing:(BOOL)arg1 error:(*id)arg2 ;
+(id)containerInRepositoryURL:(id)arg0 error:(*id)arg1 ;
+(id)containersRepositoryURL;
+(id)documentContainers;
+(id)documentsContainersInBackupHomeAtURL:(id)arg0 error:(*id)arg1 ;
+(id)propertiesForMangledID:(id)arg0 usingBundle:(struct __CFBundle *)arg1 minimumBundleVersion:(id)arg2 bundleIcons:(*id)arg3 ;
+(void)_generateiOSIconsForMangledID:(id)arg0 usingBundle:(struct __CFBundle *)arg1 generatedIcons:(id)arg2 ;
+(void)forceRefreshAllContainersWithCompletion:(id)arg0 ;
+(void)forceRefreshContainers:(id)arg0 completion:(id)arg1 ;
+(void)initialize;
+(void)postContainerListUpdateNotification;
+(void)postContainerStatusChangeNotificationWithID:(id)arg0 key:(id)arg1 value:(id)arg2 ;
+(void)unregisterCurrentProcessAsPriorityHint;
-(BOOL)_updateMetadataOnDiskWithProperties:(id)arg0 ;
-(BOOL)containsExcludedDocumentsOnTheFSWithExcludedButPreservedFilename:(id)arg0 excludedButPreservedExtensions:(id)arg1 andStampUploadedAppWithXattr:(BOOL)arg2 ;
-(BOOL)deleteAllContentsOnClientAndServer:(*id)arg0 ;
-(BOOL)deleteAllContentsOnClientAndServer:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)hasIconWithName:(id)arg0 ;
-(BOOL)registerCurrentProcessAsPriorityHintWithError:(*id)arg0 ;
-(BOOL)updateMetadataWithExtractorProperties:(id)arg0 iconPaths:(id)arg1 bundleID:(id)arg2 ;
-(BOOL)updateMetadataWithRecordData:(id)arg0 iconPaths:(id)arg1 ;
-(id)_containerRepositoryURL;
-(id)_imageDataForSize:(struct CGSize )arg0 scale:(NSInteger)arg1 isiOSIcon:(*BOOL)arg2 shouldTransformToAppIcon:(*BOOL)arg3 ;
-(id)_pathForIconName:(id)arg0 ;
-(id)_pathForPlist;
-(id)bestFittingImageDataForSize:(struct CGSize )arg0 shouldTransformToAppIcon:(*BOOL)arg1 ;
-(id)bundleIDVersions;
-(id)computedProperties;
-(id)copyDataRepresentation;
-(id)description;
-(id)iconGeneratorVersion;
-(id)iconMetadata;
-(id)iconURLs;
-(id)imageDataForSize:(struct CGSize )arg0 scale:(NSInteger)arg1 ;
-(id)imageDataForSize:(struct CGSize )arg0 scale:(NSInteger)arg1 isiOSIcon:(*BOOL)arg2 ;
-(id)imageDataForSize:(struct CGSize )arg0 scale:(NSInteger)arg1 shouldTransformToAppIcon:(*BOOL)arg2 ;
-(id)imageRepresentationsAvailable;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDocsOrDesktopContainerID:(id)arg0 ;
-(id)initWithMangledID:(id)arg0 ;
-(id)initWithMangledID:(id)arg0 dataRepresentation:(id)arg1 ;
-(id)localizedNameWithPreferredLanguages:(id)arg0 ;
-(id)shortDescription;
-(id)trashRestoreStringForURL:(id)arg0 ;
-(id)versionNumberForBundleIdentifier:(id)arg0 ;
-(void)_performWhileAccessingSecurityScopedContainer:(id)arg0 ;
-(void)_replaceDataRepresentationWithData:(id)arg0 ;
-(void)accessDataRepresentationInBlock:(id)arg0 ;
-(void)accessPropertiesInBlock:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forceRefreshWithCompletion:(id)arg0 ;


@end


#endif