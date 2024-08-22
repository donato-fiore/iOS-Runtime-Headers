// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLASSETJOURNALENTRYPAYLOAD_H
#define PLASSETJOURNALENTRYPAYLOAD_H

@class NSDictionary, NSString, NSArray;


#import "PLManagedObjectJournalEntryPayload.h"

@interface PLAssetJournalEntryPayload : PLManagedObjectJournalEntryPayload {
    NSDictionary *_keywordUUIDRemapping;
}


@property (readonly, nonatomic) NSString *mediaGroupUUID;
@property (readonly, nonatomic) NSArray *resources;
@property (readonly, nonatomic) short savedAssetType;


+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg0 additionalEntityName:(id)arg1 ;
+(id)modelProperties;
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)payloadClassID;
+(id)persistedPropertyNamesForEntityNames;
+(id)snapshotSortDescriptors;
+(unsigned int)minimumSnapshotPayloadVersion;
+(unsigned int)payloadVersion;
-(BOOL)comparePayloadValue:(id)arg0 toObjectDictionaryValue:(id)arg1 forPayloadProperty:(id)arg2 ;
-(BOOL)hasAdjustments;
-(BOOL)isDefaultAdjustedSlomo;
-(BOOL)isImage;
-(BOOL)isVideo;
-(BOOL)updatePayloadAttributes:(id)arg0 andNilAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(NSInteger)dateCreatedSource;
-(NSUInteger)bestCPLResourceTypeForAdjustedFingerPrint;
-(id)_loadOriginalImageMetadataWithPathManager:(id)arg0 timezoneLookup:(id)arg1 ;
-(id)_loadOriginalVideoMetadataWithPathManager:(id)arg0 timezoneLookup:(id)arg1 ;
-(id)adjustmentFormatIdentifier;
-(id)adjustmentFormatVersion;
-(id)cloudMasterGUID;
-(id)dateCreated;
-(id)directory;
-(id)extendedAttributesLatitude;
-(id)extendedAttributesLongitude;
-(id)filename;
-(id)hdrGain;
-(id)highFrameRateState;
-(id)initWithAdditionalAssetAttributes:(id)arg0 changedKeys:(id)arg1 ;
-(id)initWithAssetDescription:(id)arg0 changedKeys:(id)arg1 ;
-(id)initWithCloudMaster:(id)arg0 payloadID:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithCloudMasterMediaMetadata:(id)arg0 payloadID:(id)arg1 changedKeys:(id)arg2 modelProperties:(id)arg3 ;
-(id)initWithEditedIPTCAttributes:(id)arg0 changedKeys:(id)arg1 ;
-(id)initWithExtendedAttributes:(id)arg0 changedKeys:(id)arg1 ;
-(id)initWithInternalResource:(id)arg0 filesystemBookmark:(id)arg1 changedKeys:(id)arg2 ;
-(id)initWithUnmanagedAdjustment:(id)arg0 changedKeys:(id)arg1 ;
-(id)insertAssetFromDataInManagedObjectContext:(id)arg0 keywordUUIDRemapping:(id)arg1 rawPayloadAttributesToUpdate:(id)arg2 ;
-(id)latitude;
-(id)locationData;
-(id)longitude;
-(id)originalOrientation;
-(id)originalResourceRelativePathsWithPathManager:(id)arg0 ;
-(id)originalUniformTypeIdentifier;
-(id)payloadValueFromAttributes:(id)arg0 forPayloadProperty:(id)arg1 ;
-(id)uniformTypeIdentifier;
-(short)kind;
-(short)kindSubtype;
-(unsigned short)bundleScope;
-(unsigned short)playbackStyle;
-(unsigned short)playbackVariation;
-(void)_convertCustomRenderedValueToHDRType;
-(void)_convertDepthStatesToDepthType;
-(void)_filterNonPersistedResources;
-(void)_fixAdjustedAssetUTI;
-(void)_fixDateCreatedSourceWithAdditionalAssetAttributes:(id)arg0 ;
-(void)_fixHDRGainZeroValueToNULL;
-(void)_fixLocationData;
-(void)_fixOriginalAlternateImageOrientation;
-(void)_fixResourceTypeUnknownValues;
-(void)_fixXMPSidecarUTI;
-(void)appendAttributeKey:(id)arg0 value:(id)arg1 toDescriptionBuilder:(id)arg2 ;
-(void)applyPayloadProperty:(id)arg0 toManagedObject:(id)arg1 key:(id)arg2 payloadAttributesToUpdate:(id)arg3 ;
-(void)mergePayload:(id)arg0 ;
-(void)migrateMergedPayloadWithUpdatePayloads:(id)arg0 ;
-(void)setDateCreatedSource:(NSInteger)arg0 ;
-(void)setKind:(short)arg0 ;
-(void)setLocation:(id)arg0 ;
-(void)setPlaybackStyle:(unsigned short)arg0 ;


@end


#endif