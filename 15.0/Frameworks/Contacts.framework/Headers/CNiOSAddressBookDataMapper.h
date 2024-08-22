// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNIOSADDRESSBOOKDATAMAPPER_H
#define CNIOSADDRESSBOOKDATAMAPPER_H

@class CNManagedConfiguration, CNManagedAccountsCache, NSString;
@protocol CNDataMapper, CNContactsLogger;

#import <Foundation/Foundation.h>

#import "CNiOSAddressBook.h"
#import "CNContactsEnvironment.h"

@interface CNiOSAddressBookDataMapper : NSObject <CNDataMapper>

 {
    CNiOSAddressBook *_addressBook;
    CNContactsEnvironment *_environment;
    id<CNContactsLogger> *_logger;
    CNManagedConfiguration *_managedConfiguration;
    CNManagedAccountsCache *_managedAccountsCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;
@property (retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property (readonly) Class superclass;


+(id)contactBuffersDecoderForFetchRequest:(id)arg0 ;
// +(id)encodedPeopleFetcherForForFetchRequest:(id)arg0 addressBook:(*void)arg1 managedConfiguration:(id)arg2 addressBookCompletionHandler:(id)arg3 cursorCompletionHandler:(unk)arg4 environment:(id)arg5  ;
+(void)initialize;
-(BOOL)executeChangeHistoryClearRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeSaveRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeSaveRequest:(id)arg0 response:(*id)arg1 authorizationContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)fetchContactsForFetchRequest:(id)arg0 error:(*id)arg1 batchHandler:(id)arg2 ;
-(BOOL)hasMultipleGroupsOrAccounts;
-(BOOL)moveContacts:(id)arg0 fromContainer:(id)arg1 toContainer:(id)arg2 error:(*id)arg3 ;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg0 forContainerIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)requestAccessForEntityType:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)resetSortDataIfNeededWithError:(*id)arg0 ;
-(BOOL)setBestMeIfNeededForGivenName:(id)arg0 familyName:(id)arg1 email:(id)arg2 error:(*id)arg3 ;
-(BOOL)setDefaultAccountIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)setMeContact:(id)arg0 error:(*id)arg1 ;
-(BOOL)setMeContact:(id)arg0 forContainer:(id)arg1 error:(*id)arg2 ;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg0 forContainerIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)accountsMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)authorizedKeysForContactKeys:(id)arg0 error:(*id)arg1 ;
-(id)changeHistoryWithFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)contactCountForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)contactIdentifierWithMatchingDictionary:(id)arg0 ;
-(id)contactObservableForFetchRequest:(id)arg0 ;
-(id)contactWithUserActivityUserInfo:(id)arg0 keysToFetch:(id)arg1 ;
-(id)containersMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)currentHistoryAnchor;
-(id)currentHistoryToken;
-(id)defaultContainerIdentifier;
-(id)descriptorForRequiredKeysForMatchingDictionary;
// -(id)encodedContactsCursorForFetchRequest:(id)arg0 cursorCleanupBlock:(id)arg1 error:(unk)arg2  ;
// -(id)executeFetchRequest:(id)arg0 progressiveResults:(id)arg1 completion:(unk)arg2  ;
-(id)groupsMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)groupsWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)identifierWithError:(*id)arg0 ;
-(id)init;
-(id)initWithContactsEnvironment:(id)arg0 managedConfiguration:(id)arg1 ;
-(id)matchingDictionaryForContact:(id)arg0 ;
-(id)meContactIdentifiers:(*id)arg0 ;
-(id)policyForContainerWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)sectionListOffsetsForSortOrder:(NSInteger)arg0 error:(*id)arg1 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)unifiedContactCountWithError:(*id)arg0 ;
-(id)usedLabelsForPropertyWithKey:(id)arg0 error:(*id)arg1 ;
-(id)userActivityUserInfoForContact:(id)arg0 ;
-(int)saveSequenceCount;
-(void)requestAccessForEntityType:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif