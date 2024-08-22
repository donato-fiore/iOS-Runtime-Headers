// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPERSONJOURNALENTRYPAYLOAD_H
#define PLPERSONJOURNALENTRYPAYLOAD_H

@class NSDictionary, NSNumber, NSString;


#import "PLJournalEntryPayload.h"

@interface PLPersonJournalEntryPayload : PLJournalEntryPayload

@property (readonly, nonatomic) int cloudVerifiedType;
@property (readonly, nonatomic) NSDictionary *contactMatchingDictionary;
@property (readonly, nonatomic) NSNumber *detectionType;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) short keyFacePickSource;
@property (readonly, nonatomic) unsigned int manualOrder;
@property (readonly, nonatomic) NSString *mergeTargetPersonUUID;
@property (readonly, nonatomic) NSString *personUri;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int verifiedType;


+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg0 additionalEntityName:(id)arg1 ;
+(id)modelProperties;
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)payloadClassID;
+(id)persistedPropertyNamesForEntityNames;
+(unsigned int)minimumSnapshotPayloadVersion;
+(unsigned int)payloadVersion;
+(void)updateMergeTargetPersonWithPersonUUIDMapping:(id)arg0 fromDataInManagedObjectContext:(id)arg1 ;
-(BOOL)comparePayloadValue:(id)arg0 toObjectDictionaryValue:(id)arg1 forPayloadProperty:(id)arg2 ;
-(BOOL)updatePayloadAttributes:(id)arg0 andNilAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(id)initWithUserFeedback:(id)arg0 changedKeys:(id)arg1 ;
-(id)insertPersonFromDataInManagedObjectContext:(id)arg0 ;
-(void)appendAttributeKey:(id)arg0 value:(id)arg1 toDescriptionBuilder:(id)arg2 ;
-(void)applyPayloadProperty:(id)arg0 toManagedObject:(id)arg1 key:(id)arg2 payloadAttributesToUpdate:(id)arg3 ;


@end


#endif