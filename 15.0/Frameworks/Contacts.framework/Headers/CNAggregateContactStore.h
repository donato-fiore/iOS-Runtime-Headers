// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAGGREGATECONTACTSTORE_H
#define CNAGGREGATECONTACTSTORE_H

@class NSArray;


#import "CNContactStore.h"

@interface CNAggregateContactStore : CNContactStore {
    CNContactStore *_mainStore;
}


@property (copy, nonatomic) NSArray *contactStores; // ivar: _contactStores
@property (readonly, weak, nonatomic) CNContactStore *mainStore;


-(BOOL)clearChangeHistoryForClientIdentifier:(id)arg0 toChangeAnchor:(id)arg1 error:(*id)arg2 ;
-(BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(BOOL)enumerateNonUnifiedContactsWithFetchRequest:(id)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(BOOL)executeChangeHistoryClearRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeSaveRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasMultipleGroupsOrAccounts;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetSortDataIfNeededWithError:(*id)arg0 ;
-(BOOL)setMeContact:(id)arg0 error:(*id)arg1 ;
-(BOOL)setMeContact:(id)arg0 forContainer:(id)arg1 error:(*id)arg2 ;
-(BOOL)store:(id)arg0 supportsSelector:(SEL)arg1 ;
-(BOOL)supportsSaveRequest:(id)arg0 ;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)_allStoreResultsWithError:(*id)arg0 withBlock:(id)arg1 ;
-(id)_unifiedContactsFromContacts:(id)arg0 unifyContactsFromMainStore:(BOOL)arg1 keysToFetch:(id)arg2 error:(*id)arg3 ;
-(id)_unifiedMeContactWithKeysToFetch:(id)arg0 error:(*id)arg1 ;
-(id)accountsMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)changeHistoryWithFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)contactCountForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)contactWithUserActivityUserInfo:(id)arg0 keysToFetch:(id)arg1 ;
-(id)containersMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)currentHistoryAnchor;
-(id)currentHistoryToken;
-(id)defaultContainerIdentifier;
-(id)enumeratorForChangeHistoryFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)enumeratorForContactFetchRequest:(id)arg0 error:(*id)arg1 ;
// -(id)executeFetchRequest:(id)arg0 progressiveResults:(id)arg1 completion:(unk)arg2  ;
-(id)groupWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)groupsMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)iOSMapper;
-(id)initWithContactStores:(id)arg0 ;
-(id)mainContactStore;
-(id)meContactIdentifiers:(*id)arg0 ;
-(id)membersOfGroupWithIdentifier:(id)arg0 keysToFetch:(id)arg1 error:(*id)arg2 ;
-(id)originForSuggestion:(id)arg0 error:(*id)arg1 ;
-(id)policyForContainerWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)requestAccessForEntityType:(NSInteger)arg0 ;
-(id)sectionListOffsetsForSortOrder:(NSInteger)arg0 error:(*id)arg1 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)unifiedContactCountWithError:(*id)arg0 ;
-(id)unifiedContactsMatchingPredicate:(id)arg0 keysToFetch:(id)arg1 error:(*id)arg2 ;
-(id)usedLabelsForPropertyWithKey:(id)arg0 error:(*id)arg1 ;
-(id)userActivityUserInfoForContact:(id)arg0 ;
-(void)_enumerateStoresUsingBlock:(id)arg0 ;
-(void)didFetchContacts:(id)arg0 forPredicate:(id)arg1 fromStore:(id)arg2 unifiedFetch:(BOOL)arg3 ;


@end


#endif