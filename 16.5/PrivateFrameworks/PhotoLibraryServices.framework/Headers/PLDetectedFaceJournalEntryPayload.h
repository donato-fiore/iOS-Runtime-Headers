// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDETECTEDFACEJOURNALENTRYPAYLOAD_H
#define PLDETECTEDFACEJOURNALENTRYPAYLOAD_H

@class NSString;
@protocol PLFaceRebuildDescription, PLCloudAssetPayloadRestorePayload;


#import "PLManagedObjectJournalEntryPayload.h"

@interface PLDetectedFaceJournalEntryPayload : PLManagedObjectJournalEntryPayload <PLFaceRebuildDescription, PLCloudAssetPayloadRestorePayload>



@property (retain, nonatomic) NSString *assetIdentifier;
@property (readonly, nonatomic) NSInteger assetIdentifierType;
@property (readonly, nonatomic) CGFloat centerX;
@property (readonly, nonatomic) CGFloat centerY;
@property (readonly, nonatomic) int cloudNameSource;
@property (readonly, nonatomic, getter=isClusterRejected) BOOL clusterRejected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic, getter=isManual) BOOL manual;
@property (readonly, nonatomic) int nameSource;
@property (readonly, nonatomic, getter=isRepresentative) BOOL representative;
@property (readonly, nonatomic) CGFloat size;
@property (readonly) Class superclass;


+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg0 additionalEntityName:(id)arg1 ;
+(id)modelProperties;
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)payloadClassID;
+(id)persistedPropertyNamesForEntityNames;
+(unsigned int)minimumSnapshotPayloadVersion;
+(unsigned int)payloadVersion;
-(BOOL)comparePayloadValue:(id)arg0 toObjectDictionaryValue:(id)arg1 forPayloadProperty:(id)arg2 ;
-(BOOL)insertFaceFromDataInManagedObjectContext:(id)arg0 allowDeferred:(*BOOL)arg1 ;
-(BOOL)insertWithAsset:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(BOOL)isKeyFace;
-(BOOL)updatePayloadAttributes:(id)arg0 andNilAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(CGFloat)bodyCenterX;
-(CGFloat)bodyCenterY;
-(CGFloat)bodyHeight;
-(CGFloat)bodyWidth;
-(id)_insertDeferredRebuildFaceForPersonUUID:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(id)_insertDeferredRebuildFacesFromDataInManagedObjectContext:(id)arg0 ;
-(id)additionalDescription;
-(id)clusterRejectedPersonsUUIDs;
-(id)detectionTraits;
-(id)detectionType;
-(id)initWithDetectionTrait:(id)arg0 changedKeys:(id)arg1 ;
-(id)insertDetectedFaceWithAsset:(id)arg0 inManagedObjectContext:(id)arg1 checkExisting:(BOOL)arg2 ;
-(id)payloadValueFromAttributes:(id)arg0 forPayloadProperty:(id)arg1 ;
-(id)personUUID;
-(id)rejectedPersonsUUIDs;
-(void)appendAttributeKey:(id)arg0 value:(id)arg1 toDescriptionBuilder:(id)arg2 ;


@end


#endif