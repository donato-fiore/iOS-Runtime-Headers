// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CORETHEMEDOCUMENT_H
#define CORETHEMEDOCUMENT_H

@class NSMutableDictionary, NSManagedObjectModel, NSString, NSMutableArray, NSMutableSet, NSURL, NSUUID;
@protocol TDAssetManagementDelegate, TDCustomAssetProvider;


#import "TDPersistentDocument.h"
#import "TDHistorian.h"
#import "TDThreadMOCOrganizer.h"
#import "TDCatalogGlobals.h"
#import "TDDeviceTraits.h"

@interface CoreThemeDocument : TDPersistentDocument {
    NSMutableDictionary *constantArrayControllers;
    NSMutableDictionary *cachedConstantArrays;
    NSInteger cachedMaxIdentifierInUse;
    TDHistorian *m_historian;
    TDThreadMOCOrganizer *m_mocOrganizer;
    NSManagedObjectModel *m_managedObjectModel;
    NSString *_relativePathToProductionData;
    NSString *_targetPlatform;
    NSMutableDictionary *_packableRenditions;
    NSMutableDictionary *_explicitlyPackedIdentifiers;
    NSMutableDictionary *_explicitlyPackedPackings;
    NSMutableDictionary *_explicitlyPackedContents;
    BOOL m_didMigrate;
    int _updateVersionMetadataState;
    int _majorVersion;
    int _minorVersion;
    int _patchVersion;
    NSMutableArray *_deviceTraits;
    *_renditionkeyfmt _keyFormat;
    TDCatalogGlobals *_catalogGlobals;
    NSMutableArray *_cachedAppearances;
    NSMutableSet *_cachedUnknownAppearanceIds;
    NSMutableArray *_cachedLocalizations;
    NSMutableSet *_cachedUnknownLocalizationIds;
    NSMutableArray *_cachedModelAssets;
    BOOL _donotstoreDocumentChecksum;
}


@property (nonatomic) NSObject<TDAssetManagementDelegate> *assetManagementDelegate; // ivar: _assetManagementDelegate
@property (readonly) TDCatalogGlobals *catalogGlobals;
@property (nonatomic) NSObject<TDCustomAssetProvider> *customAssetProvider; // ivar: _customAssetProvider
@property (readonly, nonatomic) int majorVersion;
@property (copy, nonatomic) NSString *minimumDeploymentVersion; // ivar: _minimumDeploymentVersion
@property (readonly, nonatomic) int minorVersion;
@property (retain, nonatomic) TDDeviceTraits *optimizeForDeviceTraits;
@property (readonly, nonatomic) int patchVersion;
@property (copy) NSString *pathToRepresentedDocument; // ivar: pathToRepresentedDocument
@property NSInteger targetPlatform;
@property (readonly, nonatomic) NSURL *themeBitSourceURL;
@property (copy, nonatomic) NSUUID *uuid;


+(BOOL)deepmap2CompressionEnabled;
+(BOOL)defaultAllowsExtendedRangePixelFormats;
+(NSInteger)dataModelVersion;
+(NSInteger)dataModelVersionFromMetadata:(id)arg0 ;
+(NSInteger)defaultTargetPlatform;
+(NSInteger)platformForPersistentString:(id)arg0 ;
+(NSInteger)targetPlatformForMOC:(id)arg0 ;
+(NSUInteger)standardColorSpaceID;
+(id)_imageAssetURLsByCopyingFileURLs:(id)arg0 toManagedLocationAtURL:(id)arg1 error:(*id)arg2 ;
+(id)_sharedDocumentList;
+(id)createConfiguredDocumentAtURL:(id)arg0 error:(*id)arg1 ;
+(id)createConfiguredDocumentAtURL:(id)arg0 targetPlatform:(NSInteger)arg1 error:(*id)arg2 ;
+(id)dataModelNameForVersion:(NSInteger)arg0 ;
+(id)defaultThemeBitSourceURLForDocumentURL:(id)arg0 ;
+(id)migrateDocumentAtURL:(id)arg0 ofType:(id)arg1 error:(*id)arg2 ;
+(id)persistentStringForPlatform:(NSInteger)arg0 ;
+(int)maximumAreaOfPackableImageForScale:(NSUInteger)arg0 ;
+(int)shouldConvertColorsFromColorSpaceWithIdentifier:(NSUInteger)arg0 toIdentifier:(NSUInteger)arg1 error:(*id)arg2 ;
+(void)_addThemeDocument:(id)arg0 ;
+(void)closeMigrationProgress;
+(void)doneWithColorConversion;
+(void)initialize;
+(void)presentMigrationProgress;
-(BOOL)_canremoveKeyAttribte:(unsigned short)arg0 ;
-(BOOL)_clampMetrics;
-(BOOL)_matchesAllExceptGamut:(id)arg0 andKeySpec:(id)arg1 ;
-(BOOL)_production:(id)arg0 containsScale:(unsigned int)arg1 andIdiom:(unsigned int)arg2 andSubtype:(unsigned int)arg3 ;
-(BOOL)_updateRenditionPackings:(id)arg0 error:(*id)arg1 ;
-(BOOL)allowMultipleInstancesOfElementID:(NSInteger)arg0 ;
-(BOOL)allowsExtendedRangePixelFormats;
-(BOOL)canImportNamedAssetImportInfo:(id)arg0 ;
-(BOOL)checkCompatibilityOfDocumentAtURL:(id)arg0 ofType:(id)arg1 error:(*id)arg2 ;
-(BOOL)configurePersistentStoreCoordinatorForURL:(id)arg0 ofType:(id)arg1 modelConfiguration:(id)arg2 storeOptions:(id)arg3 error:(*id)arg4 ;
-(BOOL)createCustomArtworkProductionsForCustomAssets:(id)arg0 withImportInfos:(id)arg1 error:(*id)arg2 ;
-(BOOL)createPSDReferenceArtworkForRenditionGroup:(id)arg0 atDestination:(id)arg1 error:(*id)arg2 ;
-(BOOL)customizationExistsForSchemaDefinition:(id)arg0 ;
-(BOOL)customizeSchemaEffectDefinition:(id)arg0 shouldReplaceExisting:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)customizeSchemaElementDefinition:(id)arg0 usingArtworkFormat:(id)arg1 shouldReplaceExisting:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)customizeSchemaMaterialDefinition:(id)arg0 shouldReplaceExisting:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)customizeSchemaPartDefinition:(id)arg0 usingArtworkFormat:(id)arg1 nameElement:(id)arg2 shouldReplaceExisting:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)didMigrate;
-(BOOL)featureEnabled:(int)arg0 ;
-(BOOL)isArtworkRenditionEligibleForForwardstop:(id)arg0 ;
-(BOOL)isCustomLook;
-(BOOL)needToCreateForwardstopFor2018DeploymentVariant:(id)arg0 withCompressionTypes:(id)arg1 ;
-(BOOL)needToCreateForwardstopFor2019DeploymentVariant:(id)arg0 withCompressionTypes:(id)arg1 ;
-(BOOL)needToCreateForwardstopForPlatform;
-(BOOL)readFromURL:(id)arg0 ofType:(id)arg1 error:(*id)arg2 ;
-(BOOL)renameThemeBitSourceFolderTo:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldAllowDeepmap2Compression;
-(BOOL)shouldAllowDeepmap2CompressionForDeploymentTarget:(unsigned int)arg0 ;
-(BOOL)shouldAllowDeepmapCompression;
-(BOOL)shouldAllowDeepmapCompressionForDeploymentTarget:(unsigned int)arg0 ;
-(BOOL)shouldAllowHevcCompression;
-(BOOL)shouldAllowHevcCompressionForDeploymentTarget:(unsigned int)arg0 ;
-(BOOL)shouldAllowPaletteImageCompression;
-(BOOL)shouldAllowPaletteImageCompressionForDeploymentTarget:(unsigned int)arg0 ;
-(BOOL)shouldCreate2018ForwardstopForLossless;
-(BOOL)shouldCreate2019ForwardstopForLossless;
-(BOOL)shouldCreateForwardstopForLossy;
-(BOOL)shouldGenerateScale:(unsigned int)arg0 ;
-(BOOL)shouldPerformHistogramBasedPacking;
-(BOOL)shouldSupportCompactCompression;
-(BOOL)usesCUISystemThemeRenditionKey;
-(NSInteger)_compareFlattenedKeySpec1:(id)arg0 toKeySpec2:(id)arg1 ;
-(NSInteger)renditionKeySpecAttributeCount;
-(NSUInteger)colorSpaceID;
-(NSUInteger)countForEntity:(id)arg0 withPredicate:(id)arg1 ;
-(NSUInteger)countOfRenditionsMatchingRenditionKeySpec:(id)arg0 ;
-(NSUInteger)countOfRenditionsMatchingRenditionKeySpecs:(id)arg0 ;
-(id)_addAssetsAtFileURLs:(id)arg0 createProductions:(BOOL)arg1 referenceFiles:(BOOL)arg2 bitSource:(id)arg3 customInfos:(id)arg4 sortedCustomInfos:(*id)arg5 ;
-(id)_addAssetsFromCustomAssetInfos:(id)arg0 bitSource:(id)arg1 error:(*id)arg2 ;
-(id)_cachedConstantsForEntity:(id)arg0 ;
-(id)_cachedModelAssets;
-(id)_createNamedElementWithIdentifier:(NSInteger)arg0 ;
-(id)_createNamedElementWithNextAvailableIdentifier;
-(id)_createPhotoshopElementProductionWithAsset:(id)arg0 ;
-(id)_customizedSchemaDefinitionsForEntity:(id)arg0 ;
-(id)_genericPartDefinition;
-(id)_namedImageEffectPartDefinition;
-(id)_namedImagePartDefinition;
-(id)_namedTextEffectPartDefinition;
-(id)_predicateForRenditionKeySpec:(id)arg0 ;
-(id)_sizeIndexesByNameFromNamedAssetImportInfos:(id)arg0 ;
-(id)_themeBitSource:(*id)arg0 ;
-(id)_themeBitSourceForReferencedFilesAtURLs:(id)arg0 createIfNecessary:(BOOL)arg1 ;
-(id)addAssetsAtFileURLs:(id)arg0 ;
-(id)addAssetsAtFileURLs:(id)arg0 createProductions:(BOOL)arg1 ;
-(id)addAssetsAtFileURLs:(id)arg0 createProductions:(BOOL)arg1 referenceFiles:(BOOL)arg2 bitSource:(id)arg3 customInfos:(id)arg4 ;
-(id)allObjectsForEntity:(id)arg0 withSortDescriptors:(id)arg1 ;
-(id)allObjectsForEntity:(id)arg0 withSortDescriptors:(id)arg1 error:(*id)arg2 ;
-(id)appearanceWithIdentifier:(NSInteger)arg0 ;
-(id)appearanceWithIdentifier:(NSInteger)arg0 name:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)artworkFormat;
-(id)assetAtFileURL:(id)arg0 ;
-(id)assetAtPath:(id)arg0 ;
-(id)compressionTypeWithIdentifier:(NSInteger)arg0 ;
-(id)compressionTypes;
-(id)constantWithName:(id)arg0 forIdentifier:(NSInteger)arg1 ;
-(id)createAssetWithName:(id)arg0 fileType:(id)arg1 scaleFactor:(unsigned int)arg2 inCategory:(id)arg3 forThemeBitSource:(id)arg4 ;
-(id)createAssetWithName:(id)arg0 inCategory:(id)arg1 forThemeBitSource:(id)arg2 ;
-(id)createAssetWithName:(id)arg0 scaleFactor:(unsigned int)arg1 inCategory:(id)arg2 forThemeBitSource:(id)arg3 ;
-(id)createEffectStyleProductionForPartDefinition:(id)arg0 ;
-(id)createEffectStyleProductionForPartDefinition:(id)arg0 withNameIdentifier:(id)arg1 ;
-(id)createElementProductionWithAsset:(id)arg0 ;
-(id)createNamedArtworkProductionsForAssets:(id)arg0 customInfos:(id)arg1 error:(*id)arg2 ;
-(id)createNamedColorProductionsForImportInfos:(id)arg0 error:(*id)arg1 ;
-(id)createNamedEffectProductionWithName:(id)arg0 isText:(BOOL)arg1 ;
-(id)createProductionWithRenditionGroup:(id)arg0 forPartDefinition:(id)arg1 artworkFormat:(id)arg2 nameElement:(id)arg3 shouldReplaceExisting:(BOOL)arg4 error:(*id)arg5 ;
-(id)createProductionWithRenditionGroup:(id)arg0 forPartDefinition:(id)arg1 artworkFormat:(id)arg2 shouldReplaceExisting:(BOOL)arg3 error:(*id)arg4 ;
-(id)createReferencePNGForSchemaRendition:(id)arg0 withPartDefinition:(id)arg1 atLocation:(id)arg2 error:(*id)arg3 ;
-(id)createTextStyleProductionsForImportInfos:(id)arg0 error:(*id)arg1 ;
-(id)customizedSchemaEffectDefinitions;
-(id)customizedSchemaElementDefinitions;
-(id)customizedSchemaMaterialDefinitions;
-(id)defaultBaseFileNameForSchemaRendition:(id)arg0 withPartDefinition:(id)arg1 ;
-(id)defaultPNGFileNameForSchemaRendition:(id)arg0 withPartDefinition:(id)arg1 ;
-(id)defaultPathComponentsForPartDefinition:(id)arg0 ;
-(id)deploymentTargetWithIdentifier:(NSInteger)arg0 ;
-(id)deploymentTargets;
-(id)deviceTraitsUsedForOptimization;
-(id)directionWithIdentifier:(NSInteger)arg0 ;
-(id)directions;
-(id)displayGamutWithIdentifier:(NSInteger)arg0 ;
-(id)displayGamuts;
-(id)drawingLayerWithIdentifier:(NSInteger)arg0 ;
-(id)effectComponentWithType:(unsigned int)arg0 inRendition:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)effectParameterTypeWithIdentifier:(unsigned int)arg0 ;
-(id)effectParameterValueWithType:(unsigned int)arg0 inComponent:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)effectTypeWithIdentifier:(unsigned int)arg0 ;
-(id)elementProductionsWithName:(id)arg0 ;
-(id)elementWithIdentifier:(NSInteger)arg0 ;
-(id)featureSetClasses;
-(id)folderNameFromRenditionKey:(id)arg0 forPartDefinition:(id)arg1 ;
-(id)glyphRenderingModes;
-(id)glyphSizeWithIdentifier:(NSInteger)arg0 ;
-(id)glyphWeightWithIdentifier:(NSInteger)arg0 ;
-(id)glyphWeights;
-(id)glyphsSizes;
-(id)graphicsFeatureSetClassWithIdentifier:(NSInteger)arg0 ;
-(id)historian;
-(id)idiomWithIdentifier:(NSInteger)arg0 ;
-(id)idioms;
-(id)init;
-(id)initWithContentsOfURL:(id)arg0 ofType:(id)arg1 error:(*id)arg2 ;
-(id)initWithType:(id)arg0 error:(*id)arg1 ;
-(id)initWithType:(id)arg0 targetPlatform:(NSInteger)arg1 error:(*id)arg2 ;
-(id)iterationTypeWithIdentifier:(int)arg0 ;
-(id)localizationWithIdentifier:(NSInteger)arg0 ;
-(id)localizationWithIdentifier:(NSInteger)arg0 name:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)managedObjectModel;
-(id)mappingForPhotoshopLayerIndex:(NSInteger)arg0 themeDrawingLayerIdentifier:(NSInteger)arg1 ;
-(id)metadatumForKey:(id)arg0 ;
-(id)minimalDisplayNameForThemeConstant:(id)arg0 ;
-(id)mocOrganizer;
-(id)namedArtworkProductionWithName:(id)arg0 ;
-(id)namedArtworkProductions;
-(id)namedEffectProductionWithName:(id)arg0 ;
-(id)namedEffectProductions;
-(id)namedElementWithName:(id)arg0 ;
-(id)namedElementsForElementDefinition:(id)arg0 ;
-(id)newObjectForEntity:(id)arg0 ;
-(id)objectsForEntity:(id)arg0 withPredicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)objectsForEntity:(id)arg0 withPredicate:(id)arg1 sortDescriptors:(id)arg2 error:(*id)arg3 ;
-(id)objectsForEntity:(id)arg0 withPredicate:(id)arg1 sortDescriptors:(id)arg2 withContext:(id)arg3 error:(*id)arg4 ;
-(id)partWithIdentifier:(NSInteger)arg0 ;
-(id)pathToAsset:(id)arg0 ;
-(id)persistentStoreTypeForFileType:(id)arg0 ;
-(id)pixelFormatWithIdentifier:(NSInteger)arg0 ;
-(id)presentationStateWithIdentifier:(NSInteger)arg0 ;
-(id)previousStateWithIdentifier:(NSInteger)arg0 ;
-(id)previousValueWithIdentifier:(NSInteger)arg0 ;
-(id)psdImageRefForAsset:(id)arg0 ;
-(id)relativePathToProductionData;
-(id)renditionSubtypeWithIdentifier:(unsigned int)arg0 ;
-(id)renditionTypeWithIdentifier:(NSInteger)arg0 ;
-(id)renditionsMatchingRenditionKeySpec:(id)arg0 ;
-(id)rootPathForProductionData;
-(id)schemaCategoryWithIdentifier:(NSInteger)arg0 ;
-(id)schemaDefinitionWithElementID:(NSInteger)arg0 ;
-(id)schemaPartDefinitionWithElementID:(NSInteger)arg0 partID:(NSInteger)arg1 ;
-(id)sizeClassWithIdentifier:(NSInteger)arg0 ;
-(id)sizeClasses;
-(id)sizeWithIdentifier:(NSInteger)arg0 ;
-(id)slicesComputedForImageSize:(struct CGSize )arg0 usingSliceInsets:(struct ? )arg1 resizableSliceSize:(struct CGSize )arg2 withRenditionType:(NSInteger)arg3 ;
-(id)stateWithIdentifier:(NSInteger)arg0 ;
-(id)templateRenderingModeWithIdentifier:(NSInteger)arg0 ;
-(id)textureFaceWithIdentifier:(NSInteger)arg0 ;
-(id)textureFaces;
-(id)textureInterpretaitionWithIdentifier:(unsigned int)arg0 ;
-(id)themeBitSourceFolderName;
-(id)themeConstant:(id)arg0 withIdentifier:(NSInteger)arg1 ;
-(id)updateAutomaticTexturesForCustomInfos:(id)arg0 allTextureInfos:(id)arg1 ;
-(id)updateToEmbeddedSchemaVersion2AndReturnAlertString:(*id)arg0 ;
-(id)updatedVersionsMetadataFromMetadata:(id)arg0 ;
-(id)valueWithIdentifier:(NSInteger)arg0 ;
-(id)vectorGlyphRenderingModeWithIdentifier:(NSInteger)arg0 ;
-(int)renditionKeySemantics;
-(struct _renditionkeyfmt *)renditionKeyFormat;
-(struct _renditionkeyfmt *)untrimmedRenditionKeyFormat;
-(unsigned int)checksum;
-(void)_addResolvedLayerReferenceToFlattenedImageRendition:(id)arg0 usingArtworkRendition:(id)arg1 andLayerReference:(id)arg2 ;
-(void)_automaticP3GenerationFromSRGB;
-(void)_automaticSRGBGenerationFromP3;
-(void)_backwardsCompatibilityPatchForLayoutDirection;
-(void)_configureAfterFirstSave;
-(void)_createForwardstopRenditions;
-(void)_delete:(id)arg0 withRendition:(id)arg1 ;
-(void)_generateWatchImages;
-(void)_getFilename:(*id)arg0 scaleFactor:(*unsigned int)arg1 category:(*id)arg2 bitSource:(*id)arg3 forFileURL:(id)arg4 ;
-(void)_groupPackableRenditions;
-(void)_insertRendition:(id)arg0 forKey:(id)arg1 ;
-(void)_makeRadiosityImages;
-(void)_makeSolidLayerStackTextures;
-(void)_normalizeRenditionKeySpec:(id)arg0 forSchemaRendition:(id)arg1 ;
-(void)_processModelProductions;
-(void)_removeRedundantPDFBasedRenditions:(id)arg0 ;
-(void)_removeRedundantPDFBasedRenditionsForAssets:(id)arg0 ;
-(void)_synchronousSave;
-(void)_tidyUpLayerStacks;
-(void)_tidyUpRecognitionImages;
-(void)_updateDeviceTraits;
-(void)_updateKeyFormatWithContext:(id)arg0 ;
-(void)addDeviceTraitForOptimization:(id)arg0 ;
-(void)addThemeBitSourceAtPath:(id)arg0 ;
-(void)addThemeBitSourceAtPath:(id)arg0 createProductions:(BOOL)arg1 ;
-(void)buildModel;
-(void)changedObjectsNotification:(id)arg0 ;
-(void)checkVersionsAndUpdateIfNecessary;
-(void)convertColorsFromColorSpaceWithIdentifier:(NSUInteger)arg0 toIdentifier:(NSUInteger)arg1 ;
-(void)createForwardstops:(id)arg0 withCompressionTypes:(id)arg1 withDeploymentTargets:(id)arg2 ;
-(void)createNamedGlyphVectorForCustomInfos:(id)arg0 referenceFiles:(BOOL)arg1 bitSource:(id)arg2 error:(*id)arg3 ;
-(void)createNamedModelsForCustomInfos:(id)arg0 referenceFiles:(BOOL)arg1 bitSource:(id)arg2 error:(*id)arg3 ;
-(void)createNamedRecognitionObjectsForAssets:(id)arg0 customInfos:(id)arg1 error:(*id)arg2 ;
-(void)createNamedRenditionGroupProductionsForImportInfos:(id)arg0 error:(*id)arg1 ;
-(void)createNamedTexturesForCustomInfos:(id)arg0 referenceFiles:(BOOL)arg1 bitSource:(id)arg2 error:(*id)arg3 ;
-(void)dealloc;
-(void)deleteNamedAssets:(id)arg0 shouldDeleteAssetFiles:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)deleteObject:(id)arg0 ;
-(void)deleteObjects:(id)arg0 ;
-(void)deleteProduction:(id)arg0 shouldDeleteAssetFiles:(BOOL)arg1 ;
-(void)deleteProductions:(id)arg0 shouldDeleteAssetFiles:(BOOL)arg1 ;
-(void)exportCursorsToURL:(id)arg0 ;
-(void)importCursorsFromURL:(id)arg0 getUnusedImportedCursors:(*id)arg1 getUnupdatedCursors:(*id)arg2 ;
-(void)importCustomAssetsWithImportInfos:(id)arg0 completionHandler:(id)arg1 ;
-(void)importNamedAssetsFromFileURLs:(id)arg0 referenceFiles:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)importNamedAssetsWithImportInfos:(id)arg0 referenceFiles:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)incrementallyPackRenditionsSinceDate:(id)arg0 error:(*id)arg1 ;
-(void)packRenditionsError:(*id)arg0 ;
-(void)primeArrayControllers;
-(void)recacheThemeConstant:(id)arg0 ;
-(void)removeCustomizationForSchemaDefinition:(id)arg0 shouldDeleteAssetFiles:(BOOL)arg1 ;
-(void)removeDeviceTraitsForOptimization;
-(void)resetThemeConstants;
-(void)setAllowsExtendedRangePixelFormats:(BOOL)arg0 ;
-(void)setArtworkFormat:(id)arg0 ;
-(void)setMetadatum:(id)arg0 forKey:(id)arg1 ;
-(void)setRelativePathToProductionData:(id)arg0 ;
-(void)updateRenditionSpec:(id)arg0 ;


@end


#endif