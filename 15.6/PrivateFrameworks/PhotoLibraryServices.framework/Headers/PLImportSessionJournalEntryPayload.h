// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLIMPORTSESSIONJOURNALENTRYPAYLOAD_H
#define PLIMPORTSESSIONJOURNALENTRYPAYLOAD_H

@class NSSet;


#import "PLGenericAlbumJournalEntryPayload.h"

@interface PLImportSessionJournalEntryPayload : PLGenericAlbumJournalEntryPayload

@property (readonly, nonatomic) NSSet *assetUUIDs;


+(id)modelProperties;
+(id)modelPropertiesDescription;
+(id)payloadClassID;
+(id)persistedPropertyNamesForEntityNames;
+(unsigned int)minimumSnapshotPayloadVersion;
+(unsigned int)payloadVersion;
-(BOOL)comparePayloadValue:(id)arg0 toObjectDictionaryValue:(id)arg1 forPayloadProperty:(id)arg2 ;
-(BOOL)updatePayloadAttributes:(id)arg0 andNilAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg0 ;
-(void)appendAttributeKey:(id)arg0 value:(id)arg1 toDescriptionBuilder:(id)arg2 ;
-(void)updateAlbum:(id)arg0 includePendingChanges:(BOOL)arg1 ;


@end


#endif