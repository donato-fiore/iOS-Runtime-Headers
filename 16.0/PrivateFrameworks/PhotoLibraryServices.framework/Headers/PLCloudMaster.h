// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCLOUDMASTER_H
#define PLCLOUDMASTER_H

@class NSSet, NSString, NSDate, CPLScopedIdentifier;
@protocol PLSyncableMaster;


#import "PLManagedObject.h"
#import "PLCloudMasterMediaMetadata.h"
#import "PLMomentShare.h"

@interface PLCloudMaster : PLManagedObject <PLSyncableMaster>



@property (retain, nonatomic) NSSet *assets;
@property (nonatomic) short cloudLocalState;
@property (retain, nonatomic) NSString *cloudMasterGUID;
@property (nonatomic) NSString *codecName;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) short fullSizeJPEGSource;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *importDate;
@property (retain, nonatomic) NSString *importSessionID;
@property (nonatomic) short importedBy;
@property (retain, nonatomic) NSString *importedByBundleIdentifier;
@property (retain, nonatomic) NSString *importedByDisplayName;
@property (readonly, retain, nonatomic) id *localID;
@property (retain, nonatomic) PLCloudMasterMediaMetadata *mediaMetadata;
@property (retain, nonatomic) NSString *mediaMetadataType;
@property (retain, nonatomic) PLMomentShare *momentShare;
@property (retain, nonatomic) NSString *originalFilename;
@property (nonatomic) short originalOrientation;
@property (copy, nonatomic) NSString *originatingAssetIdentifier;
@property (nonatomic) short placeholderState;
@property (retain, nonatomic) NSSet *resources;
@property (retain, nonatomic) CPLScopedIdentifier *sourceMasterForDuplicationCPLScopedIdentifier;
@property (retain, nonatomic) NSString *sourceMasterForDuplicationIdentifier;
@property (retain, nonatomic) NSString *sourceMasterForDuplicationScopeIdentifier;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSSet *transientModernResources;
@property (retain, nonatomic) NSString *uniformTypeIdentifier;
@property (nonatomic) short videoFrameRate;


+(NSUInteger)fullSizeJPEGSourceForUTI:(id)arg0 andImageDimensions:(struct CGSize )arg1 ;
+(id)_originalTypes;
+(id)cloudMasterWithGUID:(id)arg0 inMomentShare:(id)arg1 prefetchResources:(BOOL)arg2 inManagedObjectContext:(id)arg3 ;
+(id)cloudMasterWithScopedIdentifier:(id)arg0 prefetchResources:(BOOL)arg1 inManagedObjectContext:(id)arg2 ;
+(id)cloudMastersByScopedIdentifiers:(id)arg0 relationshipKeyPathsForPrefetching:(id)arg1 inLibrary:(id)arg2 ;
+(id)cloudMastersWithScopedIdentifiers:(id)arg0 relationshipKeyPathsForPrefetching:(id)arg1 inLibrary:(id)arg2 ;
+(id)entityName;
+(id)insertIntoPhotoLibrary:(id)arg0 withCloudMasterGUID:(id)arg1 inMomentShare:(id)arg2 ;
+(id)listOfSyncedProperties;
+(void)deleteAllCloudMastersInManagedObjectContext:(id)arg0 ;
+(void)deleteMasterIfNecessary:(id)arg0 inLibrary:(id)arg1 ;
+(void)deleteOrphanedMastersWithManagedObjectContext:(id)arg0 ;
+(void)resetCloudMastersStateInManagedObjectContext:(id)arg0 ;
-(BOOL)allOriginalsAreLocallyAvailableForAssetUuid:(id)arg0 useOriginalAltInsteadOfOriginal:(BOOL)arg1 ;
-(BOOL)allOriginalsAreUploaded;
-(BOOL)hasResourcesOtherThanForAssetUuid:(id)arg0 ;
-(BOOL)isSyncableChange;
-(BOOL)supportsCloudUpload;
-(NSUInteger)sizeOfOriginal;
-(id)allMasterResources;
-(id)cplFullRecord;
-(id)cplMasterPropertyChangeForAsset:(id)arg0 ;
-(id)cplPropertyRecord;
-(id)originalFilenameForResourceType:(NSUInteger)arg0 filePath:(id)arg1 ;
-(id)payloadID;
-(id)payloadsForChangedKeys:(id)arg0 ;
-(id)rm_applyResourcesFromCPLMasterChange:(id)arg0 inPhotoLibrary:(id)arg1 ;
-(id)rm_assetUUIDToCloudResources;
-(id)rm_cloudResourceForResourceType:(NSUInteger)arg0 forAssetUuid:(id)arg1 ;
-(id)rm_cloudResourcesForResourceType:(NSUInteger)arg0 ;
-(id)scopedIdentifier;
-(void)_promptForNilScopeIdentifierRadar;
-(void)applyPropertiesFromCPLMasterChange:(id)arg0 ;
-(void)awakeFromInsert;
-(void)rm_applyExpungeableResourceStatesFromCPLMasterChange:(id)arg0 inPhotoLibrary:(id)arg1 ;
-(void)updateImportedByBundleIdentifier:(id)arg0 ;
-(void)updateImportedByDisplayName:(id)arg0 ;


@end


#endif