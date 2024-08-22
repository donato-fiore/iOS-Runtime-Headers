// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLINTERNALRESOURCE_H
#define PLINTERNALRESOURCE_H

@class NSString, NSDate, NSData, NSNumber;
@protocol PLResource, PLValidatesResourceModel, PLResourceAvailabilityMarking, PLCloudDeletable, PLAssetID, PLResourceDataStore, PLResourceDataStoreKey;


#import "PLManagedObject.h"
#import "PLManagedAsset.h"
#import "PLFileSystemBookmark.h"
#import "PLFileSystemVolume.h"
#import "PLInternalResourceSidecarRepresentation.h"
#import "PLCloudMaster.h"
#import "PLUniformTypeIdentifier.h"

@interface PLInternalResource : PLManagedObject <PLResource, PLValidatesResourceModel, PLResourceAvailabilityMarking, PLCloudDeletable>



@property (retain, nonatomic) PLManagedAsset *asset;
@property (readonly, copy, nonatomic) NSObject<PLAssetID> *assetID;
@property (retain, nonatomic) NSString *cloudDeleteAssetUUIDWithResourceType;
@property (nonatomic) short cloudDeleteState;
@property (readonly) NSInteger cloudDeletionType;
@property (retain, nonatomic) NSDate *cloudLastOnDemandDownloadDate;
@property (retain, nonatomic) NSDate *cloudLastPrefetchDate;
@property (nonatomic) short cloudLocalState;
@property (retain, nonatomic) NSDate *cloudMasterDateCreated;
@property (nonatomic) short cloudPrefetchCount;
@property (retain, nonatomic) NSDate *cloudPrunedAt;
@property (nonatomic) int cloudSourceType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (retain, nonatomic) NSString *codecFourCharCodeName;
@property (retain, nonatomic) NSString *compactUTI;
@property (readonly, nonatomic) NSUInteger cplType;
@property (nonatomic) NSInteger dataLength;
@property (readonly, nonatomic) NSObject<PLResourceDataStore> *dataStore;
@property (nonatomic) short dataStoreClassID;
@property (readonly, nonatomic) NSObject<PLResourceDataStoreKey> *dataStoreKey;
@property (copy, nonatomic) NSData *dataStoreKeyData;
@property (nonatomic) NSInteger dataStoreSubtype;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger estimatedDataLength;
@property (nonatomic) NSInteger fileID;
@property (retain, nonatomic) PLFileSystemBookmark *fileSystemBookmark;
@property (retain, nonatomic) PLFileSystemVolume *fileSystemVolume;
@property (retain, nonatomic) NSString *fingerprint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDerivative;
@property (nonatomic) short localAvailability;
@property (nonatomic) short localAvailabilityTarget;
@property (nonatomic) unsigned int orientation;
@property (readonly, nonatomic) NSInteger orientedHeight;
@property (readonly, nonatomic) NSInteger orientedWidth;
@property (nonatomic) NSInteger ptpTrashedState;
@property (nonatomic) int qualitySortValue;
@property (nonatomic) unsigned int recipeID;
@property (nonatomic) short remoteAvailability;
@property (nonatomic) short remoteAvailabilityTarget;
@property (nonatomic) unsigned int resourceType;
@property (readonly, nonatomic) float scale;
@property (retain, nonatomic) NSNumber *sidecarIndex;
@property (readonly, nonatomic) PLInternalResourceSidecarRepresentation *sidecarRepresentation; // ivar: _sidecarRepresentation
@property (readonly) Class superclass;
@property (retain, nonatomic) PLCloudMaster *transientCloudMaster;
@property (retain, nonatomic) NSDate *trashedDate;
@property (nonatomic) short trashedState;
@property (retain, nonatomic) PLUniformTypeIdentifier *uniformTypeIdentifier;
@property (nonatomic) NSInteger unorientedHeight;
@property (nonatomic) NSInteger unorientedWidth;
@property (nonatomic) short utiConformanceHint;
@property (nonatomic) unsigned int version;


+(BOOL)deleteObsoleteResourcesInManagedObjectContext:(id)arg0 error:(*id)arg1 ;
+(BOOL)isCPLJPEGThumbnailResource:(id)arg0 ;
+(BOOL)supportsTrashedStateForResourceIdentity:(id)arg0 ;
+(NSInteger)cloudDeletionTypeForTombstone:(id)arg0 ;
+(NSUInteger)bytesForAllResourcesInLibrary:(id)arg0 ;
+(NSUInteger)bytesNeededToDownloadOriginalResourcesInLibrary:(id)arg0 ;
+(NSUInteger)cplExpungedStateForTrashedState:(short)arg0 ;
+(id)_obsoleteResourceRecipesWithCPLOff;
+(id)cloudUUIDKeyForDeletion;
+(id)entityName;
+(id)insertResourceForAssetObjectID:(id)arg0 resourceIdentity:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)insertResourceForMasterObjectID:(id)arg0 withExternalCPLResource:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)listOfSyncedProperties;
+(id)nonOriginalCPLResourceTypes;
+(id)originalCPLResourceTypes;
+(id)originalCPLResourceTypesForAsset;
+(id)originalCPLResourceTypesForMaster;
+(id)predicateForAllFullSizeResourcesLocallyAvailable;
+(id)predicateForAllOriginalResourcesLocallyAvailable;
+(id)predicateForAvailableResources;
+(id)predicateForImageResourcePixelsLessOrEqual:(NSInteger)arg0 ;
+(id)predicateForMaxFilesize:(NSUInteger)arg0 ;
+(id)predicateForOriginalsToDownload;
+(id)predicateForPurgeableOriginalResources;
+(id)predicateForResourceCreatedAfterDate:(id)arg0 ;
+(id)predicateForResourceIsNotLocallyAvailableWithCPLResourceType:(NSUInteger)arg0 version:(unsigned int)arg1 ;
+(id)predicateForSyndicationResourcesRequiringBackgroundDownload;
+(id)predicateForSyndicationResourcesRequiringSanitization;
+(id)prefetchResourcePredicateForCPLResourceType:(NSUInteger)arg0 isAssetResource:(BOOL)arg1 maxRetry:(NSUInteger)arg2 excludeDynamicResources:(BOOL)arg3 additionalResourcePredicates:(id)arg4 ;
+(id)prunePredicateForCPLResourceTypes:(id)arg0 ;
+(id)purgeablePushedPredicateForCPLResourceTypes:(id)arg0 urgency:(NSInteger)arg1 ;
+(id)resourceForManagedAsset:(id)arg0 sharedStreamsType:(unsigned int)arg1 managedObjectContext:(id)arg2 error:(*id)arg3 ;
+(short)plTrashedStateForCPLExpungedState:(NSUInteger)arg0 ;
+(void)resetCloudResourcesStateForCloudInManagedObjectContext:(id)arg0 hardReset:(BOOL)arg1 ;
+(void)resetPrefetchStateForResourcesWithVersion:(unsigned int)arg0 cplType:(NSUInteger)arg1 assetUuids:(id)arg2 inLibrary:(id)arg3 ;
+(void)triggerBackgroundDownloadFailureForResources:(id)arg0 cloudPhotoLibraryManager:(id)arg1 ;
-(BOOL)_colorSpaceIsNativeForDisplay;
-(BOOL)canRepresentAsSidecar;
-(BOOL)copyPurgeabilityFromFileURL:(id)arg0 ;
-(BOOL)hasInvalidFileID;
-(BOOL)isAdjustedFullSizeRenderResource;
-(BOOL)isAdjustedResource;
-(BOOL)isCPLAssetResource;
-(BOOL)isCPLJPEGThumbnail;
-(BOOL)isCPLMasterResource;
-(BOOL)isCPLOriginalResource;
-(BOOL)isCPLOriginalResourceAssetHasAdjustments:(BOOL)arg0 ;
-(BOOL)isCPLResource;
-(BOOL)isDefaultOrientation;
-(BOOL)isInCloud;
-(BOOL)isLocallyAvailable;
-(BOOL)isPlayableVideo;
-(BOOL)isRemotelyAvailable;
-(BOOL)isSyncableChange;
-(BOOL)isTrashedOrExpunged;
-(BOOL)isValidForJournalPersistence;
-(BOOL)repairResourceValidationErrors:(id)arg0 managedObjectContext:(id)arg1 ;
-(BOOL)shouldPersistTrashedState;
-(BOOL)supportsCloudUpload;
-(BOOL)supportsTrashedState;
-(float)scaleGivenAssetHasAdjustments:(BOOL)arg0 currentWidth:(NSInteger)arg1 currentHeight:(NSInteger)arg2 ;
-(id)_avAssetProxyIfTypeIsFullSizeOrOriginal;
-(id)_libraryID;
-(id)cplFileURL;
-(id)cplResourceForFileURL:(id)arg0 createDirectoryIfNeeded:(BOOL)arg1 ;
-(id)cplResourceForTimeRange:(struct ? )arg0 ;
-(id)cplResourceIncludeFile:(BOOL)arg0 ;
-(id)cplResourceIncludeFile:(BOOL)arg0 createDirectoryIfNeeded:(BOOL)arg1 ;
-(id)expungeableResourceStateRepresentation;
-(id)fileURL;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(id)photosCTLDescription;
-(id)photosCTLJSONDict;
-(id)purgeIfPossibleReturningError:(*id)arg0 ;
-(id)redactedDescription;
-(id)referenceMediaFileURL;
-(id)scopedIdentifier;
-(id)singleLineDescription;
-(id)validateForAssetID:(id)arg0 resourceIdentity:(id)arg1 ;
-(id)validatedExternalResourceRepresentationUsingFileURL:(id)arg0 ;
-(void)applyTrashedState:(short)arg0 ;
-(void)applyTrashedState:(short)arg0 trashedDate:(id)arg1 ;
-(void)clearRequiresSanitizationFlag;
-(void)deleteResource;
-(void)ensureInitialValuesForSyndication;
-(void)makeResourceLocallyAvailableWithCompletion:(id)arg0 ;
-(void)markAsLocallyAvailableWithFilePath:(id)arg0 ;
-(void)markAsNotLocallyAvailable;
-(void)markAsNotLocallyAvailableAfterPurge;
-(void)persistTrashedStateToFilesystem;
-(void)prepareForDeletion;
-(void)resetPrefetchState;
-(void)setCloudAttributesWithExternalResource:(id)arg0 ;
-(void)setResourceIdentity:(id)arg0 managedObjectContext:(id)arg1 ;
-(void)setSyndicationLocalAvailabilityWithAvailable:(BOOL)arg0 ;
-(void)setSyndicationLocalAvailabilityWithAvailable:(BOOL)arg0 additionalFlags:(unsigned short)arg1 ;
-(void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResourceAtFilePath:(id)arg0 ;
-(void)updateResourceForMasterExternalCPLResource:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(void)willSave;


@end


#endif