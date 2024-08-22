// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CARDDAVVCARDITEMCNIMPLEMENTATION_H
#define CARDDAVVCARDITEMCNIMPLEMENTATION_H

@class NSData, NSString, NSMutableDictionary, NSURL, NSNumber, CNContactStore;
@protocol DACardDAVRecord;


#import "CardDAVVCardItem.h"

@interface CardDAVVCardItemCNImplementation : CardDAVVCardItem {
    NSData *_dataPayload;
    id<DACardDAVRecord> *_cardDAVRecordItem;
    NSString *_syncKey;
    NSMutableDictionary *_UUIDToPersonCache;
    NSURL *_serverID;
    NSNumber *_clientID;
}


@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore


+(id)keysToFetch;
-(BOOL)_commitChangesToContact:(id)arg0 databaseHelper:(id)arg1 ;
-(BOOL)_createContact:(id)arg0 inContainer:(id)arg1 databaseHelper:(id)arg2 ;
-(BOOL)deleteFromContainer:(*void)arg0 ;
-(BOOL)deleteFromContainer:(*void)arg0 account:(id)arg1 ;
-(BOOL)loadLocalItemWithAccount:(id)arg0 ;
-(BOOL)saveIfGroupWithLocalObject:(id)arg0 toContainer:(id)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 account:(id)arg4 ;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)saveWithLocalObject:(*void)arg0 toContainer:(*void)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 account:(id)arg4 ;
-(NSUInteger)saveWithLocalObject:(id)arg0 toContainer:(id)arg1 containerURL:(id)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(*BOOL)arg4 account:(id)arg5 shouldSaveGroups:(BOOL)arg6 ;
-(id)UUIDToPersonCache;
-(id)_contactFromDataPayload;
-(id)_containerForAccount:(id)arg0 ;
-(id)_localItemAsContact;
-(id)_localItemAsGroup;
-(id)cardDAVRecordItem;
-(id)clientID;
-(id)convertToDAContactSearchResultElement;
-(id)createOrphanedABRecordFromParsedVCardOutRecordType:(*unsigned int)arg0 ;
-(id)dataPayload;
-(id)initWithDACardDAVRecord:(id)arg0 contactStore:(id)arg1 outNeedsDBSave:(*BOOL)arg2 maxImageSize:(NSInteger)arg3 maxResourceSize:(NSInteger)arg4 inContainerWithURL:(id)arg5 ;
-(id)initWithURL:(id)arg0 eTag:(id)arg1 dataPayload:(id)arg2 inContainerWithURL:(id)arg3 withAccountInfoProvider:(id)arg4 ;
-(id)serverID;
-(id)syncKey;
-(void)_setEmailAddress:(id)arg0 contact:(id)arg1 ;
-(void)_setInstantMessage:(id)arg0 contact:(id)arg1 ;
-(void)_setPhoneNumbers:(id)arg0 contact:(id)arg1 ;
-(void)_setStreetAddress:(id)arg0 contact:(id)arg1 ;
-(void)loadClientIDs;
-(void)setCardDAVRecordItem:(id)arg0 ;
-(void)setClientID:(id)arg0 ;
-(void)setDataPayload:(id)arg0 ;
-(void)setLocalItem:(*void)arg0 ;
-(void)setServerID:(id)arg0 ;
-(void)setSyncKey:(id)arg0 ;
-(void)setUUIDToPersonCache:(id)arg0 ;


@end


#endif