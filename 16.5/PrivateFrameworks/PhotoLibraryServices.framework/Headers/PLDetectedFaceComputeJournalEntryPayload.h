// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDETECTEDFACECOMPUTEJOURNALENTRYPAYLOAD_H
#define PLDETECTEDFACECOMPUTEJOURNALENTRYPAYLOAD_H



#import "PLDetectedFaceJournalEntryPayload.h"

@interface PLDetectedFaceComputeJournalEntryPayload : PLDetectedFaceJournalEntryPayload



+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg0 additionalEntityName:(id)arg1 ;
+(id)entityName;
+(id)modelProperties;
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)payloadAdapterForManagedObject:(id)arg0 ;
+(id)payloadClassID;
+(id)persistedPropertyNamesForEntityNames;
+(unsigned int)minimumSnapshotPayloadVersion;
+(unsigned int)payloadVersion;
-(BOOL)comparePayloadValue:(id)arg0 toObjectDictionaryValue:(id)arg1 forPayloadProperty:(id)arg2 ;
-(BOOL)insertWithAsset:(id)arg0 inManagedObjectContext:(id)arg1 ;
-(id)detectionTraits;


@end


#endif