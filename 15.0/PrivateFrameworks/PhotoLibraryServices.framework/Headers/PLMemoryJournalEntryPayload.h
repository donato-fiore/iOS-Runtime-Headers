// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLMEMORYJOURNALENTRYPAYLOAD_H
#define PLMEMORYJOURNALENTRYPAYLOAD_H

@class NSSet, NSString;


#import "PLJournalEntryPayload.h"

@interface PLMemoryJournalEntryPayload : PLJournalEntryPayload

@property (readonly, nonatomic) NSSet *curatedAssetUUIDs;
@property (readonly, nonatomic) NSSet *extendedCuratedAssetUUIDs;
@property (readonly, nonatomic) NSString *keyAssetUUID;
@property (readonly, nonatomic) NSSet *movieCuratedAssetUUIDs;
@property (readonly, nonatomic) NSSet *representativeAssetUUIDs;
@property (readonly, nonatomic) NSSet *userCuratedAssetUUIDs;


+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg0 additionalEntityName:(id)arg1 ;
+(id)modelProperties;
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)payloadClassID;
+(id)persistedPropertyNamesForEntityNames;
+(unsigned int)minimumSnapshotPayloadVersion;
+(unsigned int)payloadVersion;
-(BOOL)comparePayloadValue:(id)arg0 toObjectDictionaryValue:(id)arg1 forPayloadProperty:(id)arg2 ;
-(BOOL)hasAllAssetsAvailableInManagedObjectContext:(id)arg0 includePendingAssetChanges:(BOOL)arg1 ;
-(BOOL)updateAssetsInMemory:(id)arg0 includePendingAssetChanges:(BOOL)arg1 ;
-(BOOL)updatePayloadAttributes:(id)arg0 andNilAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(id)initWithUserFeedback:(id)arg0 changedKeys:(id)arg1 ;
-(id)insertMemoryFromDataInManagedObjectContext:(id)arg0 ;
-(void)appendAttributeKey:(id)arg0 value:(id)arg1 toDescriptionBuilder:(id)arg2 ;
-(void)applyPayloadProperty:(id)arg0 toManagedObject:(id)arg1 key:(id)arg2 payloadAttributesToUpdate:(id)arg3 ;


@end


#endif