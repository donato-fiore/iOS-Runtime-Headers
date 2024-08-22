// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNDATAMAPPERCONTACTSTORE_H
#define CNDATAMAPPERCONTACTSTORE_H

@protocol CNContactsLogger, CNDataMapper, CNRegulatoryLogger;


#import "CNContactStore.h"

@interface CNDataMapperContactStore : CNContactStore

@property (readonly, nonatomic) NSObject<CNContactsLogger> *logger; // ivar: _logger
@property (readonly, retain, nonatomic) NSObject<CNDataMapper> *mapper; // ivar: _mapper
@property (readonly, nonatomic) NSObject<CNRegulatoryLogger> *regulatoryLogger; // ivar: _regulatoryLogger
@property (readonly, nonatomic) BOOL shouldLogPrivacyAccountingAccessEvents; // ivar: _shouldLogPrivacyAccountingAccessEvents


+(BOOL)enableContactsOutOfProcess;
+(Class)dataMapperClassForConfiguration:(id)arg0 ;
-(BOOL)_requestDataMapperAccessType:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(BOOL)executeChangeHistoryClearRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeSaveRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeSaveRequest:(id)arg0 response:(*id)arg1 authorizationContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)hasGroups;
-(BOOL)hasMultipleGroupsOrAccounts;
-(BOOL)isValidSaveRequest:(id)arg0 authorizationContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)moveContacts:(id)arg0 fromContainer:(id)arg1 toContainer:(id)arg2 error:(*id)arg3 ;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg0 forContainerIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)requestContactsReadAccessWithError:(*id)arg0 ;
-(BOOL)requestContactsWriteAccessWithError:(*id)arg0 ;
-(BOOL)requestMetadataAccessWithError:(*id)arg0 ;
-(BOOL)resetSortDataIfNeededWithError:(*id)arg0 ;
-(BOOL)setBestMeIfNeededForGivenName:(id)arg0 familyName:(id)arg1 email:(id)arg2 error:(*id)arg3 ;
-(BOOL)setDefaultAccountIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)setMeContact:(id)arg0 error:(*id)arg1 ;
-(BOOL)setMeContact:(id)arg0 forContainer:(id)arg1 error:(*id)arg2 ;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg0 forContainerIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)accountsMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)changeHistoryWithFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)contactCountForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)contactIdentifierWithMatchingDictionary:(id)arg0 ;
-(id)contactWithUserActivityUserInfo:(id)arg0 keysToFetch:(id)arg1 ;
-(id)contactsForFetchRequest:(id)arg0 matchInfos:(*id)arg1 error:(*id)arg2 ;
-(id)contactsInContainerWithIdentifier:(id)arg0 keysToFetch:(id)arg1 error:(*id)arg2 ;
-(id)containersMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)currentHistoryAnchor;
-(id)currentHistoryToken;
-(id)defaultContainerIdentifier;
-(id)description;
-(id)descriptorForRequiredKeysForMatchingDictionary;
// -(id)executeFetchRequest:(id)arg0 progressiveResults:(id)arg1 completion:(unk)arg2  ;
-(id)groupWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)groupsMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)iOSMapper;
-(id)identifierWithError:(*id)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithDataMapper:(id)arg0 dataMapperConfiguration:(id)arg1 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 managedConfiguration:(id)arg1 ;
-(id)legacyTetheredSyncComputerAnchor;
-(id)legacyTetheredSyncDeviceAnchor;
-(id)matchingDictionaryForContact:(id)arg0 ;
-(id)meContactIdentifiers:(*id)arg0 ;
-(id)membersOfGroupWithIdentifier:(id)arg0 keysToFetch:(id)arg1 error:(*id)arg2 ;
-(id)policyWithDescription:(id)arg0 error:(*id)arg1 ;
-(id)requestAccessForEntityType:(NSInteger)arg0 ;
-(id)sectionListOffsetsForSortOrder:(NSInteger)arg0 error:(*id)arg1 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)unifiedContactCountWithError:(*id)arg0 ;
-(id)unifiedContactsMatchingPredicate:(id)arg0 keysToFetch:(id)arg1 error:(*id)arg2 ;
-(id)usedLabelsForPropertyWithKey:(id)arg0 error:(*id)arg1 ;
-(id)userActivityUserInfoForContact:(id)arg0 ;
-(int)saveSequenceCount;
-(void)_logContactsAccessWasDeniedForAccessType:(NSUInteger)arg0 error:(id)arg1 ;
-(void)_logContactsAccessWasGrantedForAccessType:(NSUInteger)arg0 ;
-(void)_logGreenTeaForAccessType:(NSUInteger)arg0 ;
-(void)_logPrivacyAccountingForAccessType:(NSUInteger)arg0 ;
-(void)requestReadAccessForEntityType:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)setLegacyTetheredSyncComputerAnchor:(id)arg0 ;
-(void)setLegacyTetheredSyncDeviceAnchor:(id)arg0 ;


@end


#endif