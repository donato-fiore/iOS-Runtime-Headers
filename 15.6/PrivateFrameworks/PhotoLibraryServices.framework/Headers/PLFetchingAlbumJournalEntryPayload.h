// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLFETCHINGALBUMJOURNALENTRYPAYLOAD_H
#define PLFETCHINGALBUMJOURNALENTRYPAYLOAD_H



#import "PLGenericAlbumJournalEntryPayload.h"

@interface PLFetchingAlbumJournalEntryPayload : PLGenericAlbumJournalEntryPayload



+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg0 additionalEntityName:(id)arg1 ;
+(id)modelProperties;
+(id)nonPersistedModelPropertiesDescription;
+(id)payloadClassID;
+(id)persistedPropertyNamesForEntityNames;
+(unsigned int)minimumSnapshotPayloadVersion;
+(unsigned int)payloadVersion;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg0 ;
-(void)_fixHasLocationSmartAlbum;
-(void)migrateMergedPayloadWithUpdatePayloads:(id)arg0 ;


@end


#endif