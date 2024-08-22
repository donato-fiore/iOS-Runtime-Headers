// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLKEYWORDJOURNALENTRYPAYLOAD_H
#define PLKEYWORDJOURNALENTRYPAYLOAD_H

@class NSString;


#import "PLJournalEntryPayload.h"

@interface PLKeywordJournalEntryPayload : PLJournalEntryPayload

@property (readonly, nonatomic) NSString *title;


+(id)modelProperties;
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)payloadClassID;
+(id)persistedPropertyNamesForEntityNames;
+(unsigned int)minimumSnapshotPayloadVersion;
+(unsigned int)payloadVersion;
-(id)insertKeywordFromDataInManagedObjectContext:(id)arg0 ;


@end


#endif