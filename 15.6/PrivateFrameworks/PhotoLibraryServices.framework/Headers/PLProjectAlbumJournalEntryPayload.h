// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPROJECTALBUMJOURNALENTRYPAYLOAD_H
#define PLPROJECTALBUMJOURNALENTRYPAYLOAD_H



#import "PLAlbumJournalEntryPayload.h"

@interface PLProjectAlbumJournalEntryPayload : PLAlbumJournalEntryPayload



+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg0 additionalEntityName:(id)arg1 ;
+(id)modelProperties;
+(id)modelPropertiesDescription;
+(id)payloadClassID;
+(id)persistedPropertyNamesForEntityNames;
+(unsigned int)minimumSnapshotPayloadVersion;
+(unsigned int)payloadVersion;
-(void)updateAlbum:(id)arg0 includePendingChanges:(BOOL)arg1 ;


@end


#endif