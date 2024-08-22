// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ABSADDRESSBOOK_H
#define ABSADDRESSBOOK_H

@class CNContactStore, CNFuture;

#import <Foundation/Foundation.h>

#import "ABSChangeCallbacks.h"
#import "ABSAddressBookContextStorage.h"
#import "ABSBulkFaultHandler.h"

@interface ABSAddressBook : NSObject

@property (readonly) ABSChangeCallbacks *changeCallbacks; // ivar: _changeCallbacks
@property (retain, nonatomic) ABSAddressBookContextStorage *contacts; // ivar: _contacts
@property (readonly, nonatomic) ABSBulkFaultHandler *faultHandler; // ivar: _faultHandler
@property (retain, nonatomic) ABSAddressBookContextStorage *groups; // ivar: _groups
@property (readonly) BOOL hasUnsavedChanges;
@property (retain, nonatomic) ABSAddressBookContextStorage *sources; // ivar: _sources
@property (readonly, nonatomic) CNContactStore *store;
@property (readonly, nonatomic) CNFuture *storeFuture; // ivar: _storeFuture


+(BOOL)eraseAllDataAtLocationName:(id)arg0 error:(*id)arg1 ;
+(NSInteger)authorizationStatus;
+(id)localizedLabelForLabel:(id)arg0 ;
+(void)ABInitialize;
+(void)callLocalChangeCallbacks:(BOOL)arg0 ;
+(void)initialize;
+(void)requestAccessWithCompletion:(id)arg0 ;
-(BOOL)addMember:(id)arg0 toGroup:(id)arg1 error:(*id)arg2 ;
-(BOOL)addRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)linkPerson:(id)arg0 toPerson:(id)arg1 ;
-(BOOL)recordUpdated:(id)arg0 ;
-(BOOL)removeMember:(id)arg0 fromGroup:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)save:(*id)arg0 ;
-(BOOL)unlinkPerson:(id)arg0 ;
-(NSInteger)groupCount;
-(NSInteger)personCount;
-(NSUInteger)_cfTypeID;
-(id)_peoplePreferringExistingRecordsForFetchRequest:(id)arg0 ;
-(id)_resultRecordsFromFetchedCNImpls:(id)arg0 mergedWithStorage:(id)arg1 creationBlock:(id)arg2 ;
-(id)_sourcesPreferringExistingRecordsFetchedWithPredicate:(id)arg0 ;
-(id)_storageForRecordClass:(Class)arg0 ;
-(id)allGroups;
-(id)allPeople;
-(id)allSources;
-(id)contactsWithIdentifiers:(id)arg0 keysToFetch:(id)arg1 ;
-(id)defaultSource;
-(id)findPersonMatchingEmailAddress:(id)arg0 ;
-(id)findPersonMatchingPhoneNumber:(id)arg0 country:(id)arg1 ;
-(id)findPersonMatchingURL:(id)arg0 ;
-(id)groupWithRecordID:(int)arg0 ;
-(id)groupsInSource:(id)arg0 ;
-(id)init;
-(id)initWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)initWithOptions:(id)arg0 policy:(int)arg1 error:(*id)arg2 ;
-(id)initWithSettings:(id)arg0 error:(*id)arg1 ;
-(id)localSource;
-(id)mePerson;
-(id)peopleInGroup:(id)arg0 sortOrder:(unsigned int)arg1 ;
-(id)peopleInSource:(id)arg0 sortOrder:(unsigned int)arg1 ;
-(id)peopleLinkedToPerson:(id)arg0 ;
-(id)peopleMatchingNameString:(id)arg0 ;
-(id)peopleWithCNIdentifiers:(id)arg0 ;
-(id)personWithRecordID:(int)arg0 ;
-(id)sourceForRecord:(id)arg0 ;
-(id)sourceWithRecordID:(int)arg0 ;
-(id)uniqueDatabaseVersionIdentifier;
-(int)saveSequenceCount;
-(void)completePerson:(id)arg0 withKeysToFetch:(id)arg1 ;
-(void)registerExternalChangeCallback:(*unk)arg0 context:(*void)arg1 ;
-(void)revert;
-(void)unregisterExternalChangeCallback:(*unk)arg0 context:(*void)arg1 ;
-(void)updateFetchingAllPropertiesForGroups:(id)arg0 ;
-(void)updateFetchingAllPropertiesForSources:(id)arg0 ;
-(void)updatePeople:(id)arg0 refetchingProperties:(id)arg1 ;


@end


#endif