// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLFILESYSTEMVOLUMEJOURNALENTRYPAYLOAD_H
#define PLFILESYSTEMVOLUMEJOURNALENTRYPAYLOAD_H



#import "PLManagedObjectJournalEntryPayload.h"

@interface PLFileSystemVolumeJournalEntryPayload : PLManagedObjectJournalEntryPayload



+(id)modelProperties;
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)payloadClassID;
+(id)persistedPropertyNamesForEntityNames;
+(unsigned int)minimumSnapshotPayloadVersion;
+(unsigned int)payloadVersion;
-(id)insertFileSystemVolumeFromDataInManagedObjectContext:(id)arg0 ;


@end


#endif