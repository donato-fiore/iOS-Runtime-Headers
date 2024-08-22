// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLJOURNALENTRYPAYLOAD_H
#define PLJOURNALENTRYPAYLOAD_H

@class NSMutableDictionary, NSMutableSet, NSString, NSSet;
@protocol PLJournalEntryPayload, PLJournalEntryPayloadValidation, PLJournalEntryPayloadID;

#import <Foundation/Foundation.h>


@interface PLJournalEntryPayload : NSObject <PLJournalEntryPayload, PLJournalEntryPayloadValidation>

 {
    NSMutableDictionary *_payloadAttributes;
    NSMutableSet *_nilAttributes;
    id<PLJournalEntryPayloadID> *_payloadID;
    unsigned int _payloadVersion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *nilProperties;
@property (readonly, nonatomic) NSObject<PLJournalEntryPayloadID> *payloadID;
@property (readonly, nonatomic) unsigned int payloadVersion;
@property (readonly) Class superclass;


+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg0 additionalEntityName:(id)arg1 ;
+(BOOL)shouldPersistForChangedKeys:(id)arg0 entityName:(id)arg1 ;
+(id)_populateRelationshipKeyPathsForPrefetching:(id)arg0 currentKeyPath:(id)arg1 usingModelProperties:(id)arg2 ;
+(id)additionalEntityNames;
+(id)fetchRelationshipPropertyValuesForRelationshipName:(id)arg0 fromManagedObject:(id)arg1 usingPayloadProperty:(id)arg2 ;
+(id)modelProperties;
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)payloadClassID;
+(id)payloadWithData:(id)arg0 forPayloadID:(id)arg1 version:(unsigned int)arg2 andNilProperties:(id)arg3 error:(*id)arg4 ;
+(id)persistedPropertyNamesForEntityNames;
+(id)persistedPropertyNamesForEntityNamesFromModelProperties;
+(id)relationshipKeyPathsForPrefetching;
+(id)relationshipKeyPathsForPrefetchingWithModelProperties:(id)arg0 outUUIDPropertyName:(*id)arg1 ;
+(id)snapshotSortDescriptors;
+(id)sortedObjectsToAddWithUUIDs:(id)arg0 uuidKey:(id)arg1 andExistingObjects:(id)arg2 fetchBlock:(id)arg3 ;
+(unsigned int)minimumSnapshotPayloadVersion;
+(void)_populateAddtionalEntityNames:(id)arg0 fromModelProperties:(id)arg1 ;
+(void)_populatePersistedPropertyNamesForAdditionalEntityNames:(id)arg0 fromModelProperties:(id)arg1 ;
+(void)_populateValidationProperties:(id)arg0 fromEntityDescription:(id)arg1 ;
+(void)_validateModelProperties:(id)arg0 nonPersistedModelProperties:(id)arg1 forEntityDescription:(id)arg2 ;
+(void)applyPayloadProperty:(id)arg0 toManagedObject:(id)arg1 key:(id)arg2 payloadAttributesToUpdate:(id)arg3 payloadDictionary:(id)arg4 ;
+(void)loadModelPropertiesDescription:(id)arg0 parentPayloadProperty:(id)arg1 ;
+(void)populateValidationPropertiesFromManagedObjectModel:(id)arg0 ;
+(void)validatePayloadPropertiesForManagedObjectModel:(id)arg0 ;
-(BOOL)_comparePayloadAttributes:(id)arg0 toObjectDictionary:(id)arg1 currentKeyPath:(id)arg2 usingModelProperties:(id)arg3 errorDescriptions:(id)arg4 ;
-(BOOL)_decodePayloadAttributesFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)comparePayloadToObjectDictionary:(id)arg0 usingModelProperties:(id)arg1 errorDescriptions:(id)arg2 ;
-(BOOL)comparePayloadValue:(id)arg0 toObjectDictionaryValue:(id)arg1 forPayloadProperty:(id)arg2 ;
-(BOOL)containsAttributeForKey:(id)arg0 ;
-(BOOL)payloadVersionIsLessThanVersion:(unsigned int)arg0 forKey:(id)arg1 inUpdatePayloads:(id)arg2 ;
-(BOOL)updatePayloadAttributes:(id)arg0 andNilAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(id)UUIDDataForString:(id)arg0 ;
-(id)UUIDStringForData:(id)arg0 ;
-(id)_attributesForPayloadAttributes:(id)arg0 usingModelProperties:(id)arg1 ;
-(id)_payloadAttributesListForSubRelationshipProperty:(id)arg0 withManagedObjects:(id)arg1 ;
-(id)descriptionForEntry:(id)arg0 ;
-(id)descriptionForEntry:(id)arg0 withBuilder:(id)arg1 ;
-(id)descriptionWithBuilder:(id)arg0 ;
-(id)encodedDataForUUIDStrings:(id)arg0 count:(NSUInteger)arg1 ;
-(id)initWithManagedObject:(id)arg0 changedKeys:(id)arg1 ;
-(id)initWithPayloadID:(id)arg0 payloadVersion:(unsigned int)arg1 managedObject:(id)arg2 changedKeys:(id)arg3 modelProperties:(id)arg4 ;
-(id)initWithPayloadID:(id)arg0 payloadVersion:(unsigned int)arg1 nilAttributes:(id)arg2 ;
-(id)initWithPayloadID:(id)arg0 payloadVersion:(unsigned int)arg1 nilAttributes:(id)arg2 managedObject:(id)arg3 changedKeys:(id)arg4 modelProperties:(id)arg5 ;
-(id)orderedSetForUUIDEncodedData:(id)arg0 ;
-(id)payloadAttributeForKey:(id)arg0 ;
-(id)payloadAttributes;
-(id)payloadDataWithError:(*id)arg0 ;
-(id)payloadValueFromAttributes:(id)arg0 forPayloadProperty:(id)arg1 ;
-(id)prettyDescriptionForEntry:(id)arg0 indent:(NSInteger)arg1 ;
-(id)setForUUIDEncodedData:(id)arg0 ;
-(void)_applyModelProperties:(id)arg0 toPayloadAttributes:(id)arg1 andNilAttributes:(id)arg2 forManagedObject:(id)arg3 changedKeys:(id)arg4 ;
-(void)_applyPayloadToManagedObject:(id)arg0 forModelProperties:(id)arg1 payloadAttributesToUpdate:(id)arg2 ;
-(void)_resolveRelationshipsInObjectDictionary:(id)arg0 atKeyPath:(id)arg1 forPayloadProperty:(id)arg2 ;
-(void)_updateNilAttributes:(id)arg0 withModelProperties:(id)arg1 ;
-(void)addAttributesDescriptionToBuilder:(id)arg0 ;
-(void)addNilAttributesToBuilder:(id)arg0 ;
-(void)appendAttributeKey:(id)arg0 value:(id)arg1 toDescriptionBuilder:(id)arg2 ;
-(void)applyPayloadProperty:(id)arg0 toManagedObject:(id)arg1 key:(id)arg2 payloadAttributesToUpdate:(id)arg3 ;
-(void)applyPayloadToManagedObject:(id)arg0 payloadAttributesToUpdate:(id)arg1 ;
-(void)mergePayload:(id)arg0 ;
-(void)migrateMergedPayloadWithUpdatePayloads:(id)arg0 ;
-(void)migratePayloadAttributes:(id)arg0 andNilAttributes:(id)arg1 ;
-(void)setPayloadAttribute:(id)arg0 forKey:(id)arg1 ;
-(void)updatePayloadAttributes:(id)arg0 andNilAttributes:(id)arg1 forPayloadProperty:(id)arg2 withUUIDStrings:(id)arg3 count:(NSUInteger)arg4 ;


@end


#endif