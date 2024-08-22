// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLGENERICALBUMJOURNALENTRYPAYLOAD_H
#define PLGENERICALBUMJOURNALENTRYPAYLOAD_H

@class NSString, NSDate, NSNumber, NSData;


#import "PLJournalEntryPayload.h"

@interface PLGenericAlbumJournalEntryPayload : PLJournalEntryPayload

@property (readonly, nonatomic) NSString *cloudGUID;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSString *customKeyAssetUUID;
@property (readonly, nonatomic) BOOL customSortAscending;
@property (readonly, nonatomic) int customSortKey;
@property (readonly, nonatomic) NSString *importSessionID;
@property (readonly, nonatomic) NSString *importedByBundleIdentifier;
@property (readonly, nonatomic) BOOL isInTrash;
@property (readonly, nonatomic) BOOL isPinned;
@property (readonly, nonatomic) BOOL isPrototype;
@property (readonly, nonatomic) NSNumber *kind;
@property (readonly, nonatomic) NSString *title;
@property (retain, nonatomic) NSData *userQueryData;


+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
-(BOOL)comparePayloadValue:(id)arg0 toObjectDictionaryValue:(id)arg1 forPayloadProperty:(id)arg2 ;
-(BOOL)updatePayloadAttributes:(id)arg0 andNilAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg0 ;
-(void)appendAttributeKey:(id)arg0 value:(id)arg1 toDescriptionBuilder:(id)arg2 ;
-(void)updateAlbum:(id)arg0 includePendingChanges:(BOOL)arg1 ;


@end


#endif