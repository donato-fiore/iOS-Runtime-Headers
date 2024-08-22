// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTSTORE_H
#define CNCONTACTSTORE_H

@class CNResult, NSData;

#import <Foundation/Foundation.h>

#import "CNContainerCache.h"
#import "CNiOSAddressBook.h"
#import "CNiOSAddressBookDataMapper.h"

@interface CNContactStore : NSObject {
    CNContainerCache *_containerCache;
}


@property (readonly, nonatomic) CNiOSAddressBook *addressBook;
@property (readonly, copy, nonatomic) CNResult *currentHistoryAnchor;
@property (readonly, copy, nonatomic) NSData *currentHistoryToken;
@property (readonly, nonatomic) CNiOSAddressBookDataMapper *iOSMapper;


+(BOOL)eraseAllDataAtLocationWithName:(id)arg0 error:(*id)arg1 ;
+(BOOL)eraseAllDataAtURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)isAccessRestrictedForEntityType:(NSInteger)arg0 ;
+(BOOL)isXPCDataMapperStore:(id)arg0 ;
+(Class)storeClassWithIdentifier:(id)arg0 ;
+(NSInteger)authorizationStatusForEntityType:(NSInteger)arg0 ;
+(NSInteger)authorizationStatusForEntityType:(NSInteger)arg0 assumedIdentity:(id)arg1 ;
+(id)_contactStoreForPublicAddressBook:(*void)arg0 ;
+(id)contactIdentifierFromInternalIdentifier:(id)arg0 ;
+(id)contactStoreForPublicAddressBook:(*void)arg0 ;
+(id)internalIdentifierFromContactIdentifier:(id)arg0 ;
+(id)standardLabelsForPropertyWithKey:(id)arg0 ;
+(id)standardLabelsForPropertyWithKey:(id)arg0 options:(NSUInteger)arg1 ;
+(id)storeForFamilyMember:(id)arg0 ;
+(id)storeIdentifier;
+(id)storeIdentifierFromContactIdentifier:(id)arg0 ;
+(id)storeInfoClasses;
+(id)storeWithDelegateInfo:(id)arg0 ;
+(id)storeWithEnvironment:(id)arg0 options:(NSUInteger)arg1 ;
+(id)storeWithOptions:(NSUInteger)arg0 ;
+(void)initialize;
-(*void)_publicABPersonFromContact:(id)arg0 publicAddressBook:(**void)arg1 ;
-(*void)personFromContact:(id)arg0 ;
-(*void)publicABPersonFromContact:(id)arg0 publicAddressBook:(**void)arg1 ;
-(BOOL)clearChangeHistoryForClientIdentifier:(id)arg0 toChangeAnchor:(id)arg1 error:(*id)arg2 ;
-(BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(BOOL)enumerateContactsWithFetchRequest:(id)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(BOOL)enumerateNonUnifiedContactsWithFetchRequest:(id)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(BOOL)executeChangeHistoryClearRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeSaveRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeSaveRequest:(id)arg0 response:(*id)arg1 authorizationContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)hasAccountFirstSyncCompleted;
-(BOOL)hasMultipleGroupsOrAccounts;
-(BOOL)moveContacts:(id)arg0 fromContainer:(id)arg1 toContainer:(id)arg2 error:(*id)arg3 ;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg0 forContainerIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)resetSortDataIfNeededWithError:(*id)arg0 ;
-(BOOL)setBestMeIfNeededForGivenName:(id)arg0 familyName:(id)arg1 email:(id)arg2 error:(*id)arg3 ;
-(BOOL)setDefaultAccountIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)setDefaultContainer:(id)arg0 forAccount:(id)arg1 error:(*id)arg2 ;
-(BOOL)setMeContact:(id)arg0 error:(*id)arg1 ;
-(BOOL)setMeContact:(id)arg0 forContainer:(id)arg1 error:(*id)arg2 ;
-(BOOL)supportsSaveRequest:(id)arg0 ;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg0 forContainerIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)verifyChangeHistoryForClientIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)_contactFromPersonID:(int)arg0 keysToFetch:(id)arg1 ;
-(id)_contactFromPublicABPerson:(*void)arg0 keysToFetch:(id)arg1 ;
-(id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg0 error:(*id)arg1 ;
-(id)_executeFetchRequestsWithInfos:(id)arg0 unifyResults:(BOOL)arg1 keysToFetch:(id)arg2 error:(*id)arg3 ;
-(id)_fetchRequestInfosForEmailOrPhoneForContact:(id)arg0 ;
-(id)_ios_meContactIdentifierWithError:(*id)arg0 ;
-(id)_ios_meContactWithKeysToFetch:(id)arg0 error:(*id)arg1 ;
-(id)_labeledValueFromPublicMultiValueIdentifier:(int)arg0 contact:(id)arg1 key:(id)arg2 ;
-(id)accountsMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)authorizedKeysForContactKeys:(id)arg0 ;
-(id)changeHistoryWithFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)contactCountForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)contactFromPerson:(*void)arg0 ;
-(id)contactFromPerson:(*void)arg0 keysToFetch:(id)arg1 ;
-(id)contactFromPerson:(*void)arg0 keysToFetch:(id)arg1 mutable:(BOOL)arg2 ;
-(id)contactFromPerson:(*void)arg0 mutable:(BOOL)arg1 ;
-(id)contactFromPersonID:(int)arg0 ;
-(id)contactFromPersonID:(int)arg0 keysToFetch:(id)arg1 ;
-(id)contactFromPublicABPerson:(*void)arg0 keysToFetch:(id)arg1 ;
-(id)contactFromPublicPersonID:(int)arg0 keysToFetch:(id)arg1 ;
-(id)contactIdentifierFromPersonID:(int)arg0 ;
-(id)contactIdentifierFromPublicPersonID:(int)arg0 ;
-(id)contactIdentifierWithMatchingDictionary:(id)arg0 ;
-(id)contactWithMatchingDictionary:(id)arg0 keysToFetch:(id)arg1 ;
-(id)contactWithUserActivityUserInfo:(id)arg0 keysToFetch:(id)arg1 ;
-(id)contactsMatchingPropertiesOfContact:(id)arg0 unifyResults:(BOOL)arg1 keysToFetch:(id)arg2 error:(*id)arg3 ;
-(id)containersMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)countForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)defaultContainerIdentifier;
-(id)descriptorForRequiredKeysForMatchingDictionary;
-(id)descriptorForRequiredKeysForUserActivityUserInfo;
-(id)enumeratorForChangeHistoryFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)enumeratorForContactFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)executeFetchRequest:(id)arg0 completion:(id)arg1 ;
-(id)executeFetchRequest:(id)arg0 error:(*id)arg1 ;
// -(id)executeFetchRequest:(id)arg0 progressiveResults:(id)arg1 completion:(unk)arg2  ;
-(id)groupWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)groupsMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)identifierWithError:(*id)arg0 ;
-(id)individualContactCountWithError:(*id)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithEnvironment:(id)arg0 options:(NSUInteger)arg1 managedConfiguration:(id)arg2 ;
-(id)labeledValueFromMultiValueIdentifier:(int)arg0 contact:(id)arg1 key:(id)arg2 ;
-(id)labeledValueFromPublicMultiValueIdentifier:(int)arg0 contact:(id)arg1 key:(id)arg2 ;
-(id)latestConsumedChangeHistoryAnchorForClientIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)mainContactStore;
-(id)matchingDictionaryForContact:(id)arg0 ;
-(id)meContactIdentifiers:(*id)arg0 ;
-(id)membersOfGroupWithIdentifier:(id)arg0 keysToFetch:(id)arg1 error:(*id)arg2 ;
-(id)originForSuggestion:(id)arg0 error:(*id)arg1 ;
-(id)policyForContainerWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)requestAccessForEntityType:(NSInteger)arg0 ;
-(id)sectionListOffsetsForSortOrder:(NSInteger)arg0 error:(*id)arg1 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)synchronousRemoteObjectProxyForContactsXPCService;
-(id)unifiedContactCountWithError:(*id)arg0 ;
-(id)unifiedContactWithIdentifier:(id)arg0 keysToFetch:(id)arg1 error:(*id)arg2 ;
-(id)unifiedContactsMatchingPredicate:(id)arg0 keysToFetch:(id)arg1 error:(*id)arg2 ;
-(id)unifiedMeContactMatchingEmailAddress:(id)arg0 keysToFetch:(id)arg1 error:(*id)arg2 ;
-(id)unifiedMeContactMatchingEmailAddresses:(id)arg0 keysToFetch:(id)arg1 error:(*id)arg2 ;
-(id)unifiedMeContactWithKeysToFetch:(id)arg0 error:(*id)arg1 ;
-(id)usedLabelsForPropertyWithKey:(id)arg0 error:(*id)arg1 ;
-(id)userActivityUserInfoForContact:(id)arg0 ;
-(id)verifyIndexWithError:(*id)arg0 ;
-(int)_publicMultiValueIdentifierFromLabeledValue:(id)arg0 ;
-(int)multiValueIdentifierFromLabeledValue:(id)arg0 ;
-(int)publicMultiValueIdentifierFromLabeledValue:(id)arg0 ;
-(int)saveSequenceCount;
-(void)reindexSearchableItemsWithIdentifiers:(id)arg0 ;
-(void)requestAccessForEntityType:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)requestAuthorization:(NSInteger)arg0 entityType:(NSInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif