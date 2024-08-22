// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDEFERREDREBUILDFACEJOURNALENTRYPAYLOAD_H
#define PLDEFERREDREBUILDFACEJOURNALENTRYPAYLOAD_H



#import "PLManagedObjectJournalEntryPayload.h"

@interface PLDeferredRebuildFaceJournalEntryPayload : PLManagedObjectJournalEntryPayload



+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg0 additionalEntityName:(id)arg1 ;
+(id)modelProperties;
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)payloadClassID;
+(id)persistedPropertyNamesForEntityNames;
+(unsigned int)minimumSnapshotPayloadVersion;
+(unsigned int)payloadVersion;
-(id)insertDeferredRebuildFaceFromDataInManagedObjectContext:(id)arg0 ;


@end


#endif