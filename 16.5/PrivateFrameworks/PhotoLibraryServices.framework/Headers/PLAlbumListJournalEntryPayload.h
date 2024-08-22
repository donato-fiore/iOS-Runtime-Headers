// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLALBUMLISTJOURNALENTRYPAYLOAD_H
#define PLALBUMLISTJOURNALENTRYPAYLOAD_H

@class NSOrderedSet;


#import "PLManagedObjectJournalEntryPayload.h"

@interface PLAlbumListJournalEntryPayload : PLManagedObjectJournalEntryPayload

@property (readonly, nonatomic) short albumListType;
@property (readonly, nonatomic) NSOrderedSet *albumUUIDs;


+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg0 additionalEntityName:(id)arg1 ;
+(id)modelProperties;
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)payloadClassID;
+(id)persistedPropertyNamesForEntityNames;
+(unsigned int)minimumSnapshotPayloadVersion;
+(unsigned int)payloadVersion;
-(BOOL)comparePayloadValue:(id)arg0 toObjectDictionaryValue:(id)arg1 forPayloadProperty:(id)arg2 ;
-(BOOL)updatePayloadAttributes:(id)arg0 andNilAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(id)insertAlbumListFromDataInManagedObjectContext:(id)arg0 ;
-(id)payloadValueFromAttributes:(id)arg0 forPayloadProperty:(id)arg1 ;
-(void)appendAttributeKey:(id)arg0 value:(id)arg1 toDescriptionBuilder:(id)arg2 ;
-(void)updateAlbumList:(id)arg0 ;


@end


#endif