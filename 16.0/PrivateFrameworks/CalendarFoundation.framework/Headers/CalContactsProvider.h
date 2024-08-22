// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALCONTACTSPROVIDER_H
#define CALCONTACTSPROVIDER_H

@class CNContact, NSMutableSet, NSArray, CNReputationStore, CNContactStore, NSString;
@protocol CalContactsProviderProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CalContactsProvider : NSObject <CalContactsProviderProtocol>

 {
    CNContact *_meContact;
}


@property (retain) NSObject<OS_dispatch_queue> *contactStoreWorkQueue; // ivar: _contactStoreWorkQueue
@property (retain) NSMutableSet *delegates; // ivar: _delegates
@property (retain) NSArray *loadedMyEmailAddresses; // ivar: _loadedMyEmailAddresses
@property (retain) CNContact *meContact;
@property (retain) CNReputationStore *reputationStore; // ivar: _reputationStore
@property (retain) CNContactStore *store; // ivar: _store
@property (retain) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (retain) NSString *testMeContactIdentifer; // ivar: _testMeContactIdentifer
@property (retain) NSArray *unitTestEmails; // ivar: _unitTestEmails


+(BOOL)birthdayIsYearless:(id)arg0 ;
+(BOOL)isCalendarIslamic:(id)arg0 ;
+(BOOL)shouldPermitOrganizerEmailFromJunkChecks:(id)arg0 inReputationStore:(id)arg1 ;
+(BOOL)shouldPermitOrganizerPhoneNumberFromJunkChecks:(id)arg0 inReputationStore:(id)arg1 ;
+(id)birthdayStringForContactName:(id)arg0 eventDate:(id)arg1 birthDate:(id)arg2 lunarCalendar:(id)arg3 ;
+(id)defaultProvider;
+(id)reputationForHandle:(id)arg0 inStore:(id)arg1 ;
-(BOOL)contactAccessResolved;
-(BOOL)contactIdentifierIsMe:(id)arg0 ;
-(BOOL)matchesOneOfMyEmails:(id)arg0 ;
-(BOOL)matchesOneOfMyPhoneNumbers:(id)arg0 ;
-(BOOL)shouldPermitOrganizerEmailFromJunkChecks:(id)arg0 ;
-(BOOL)shouldPermitOrganizerPhoneNumberFromJunkChecks:(id)arg0 ;
-(BOOL)urlMatchesOneOfMyEmails:(id)arg0 ;
-(id)_fetchedUnifiedMeContact;
-(id)_fullNameForFirstContactMatchingPredicate:(id)arg0 ;
-(id)_lastHistoryToken;
-(id)_meWithKeys:(id)arg0 ;
-(id)cachedEmailAddress;
-(id)cachedEmailAddressArray;
-(id)cachedEmailAddresses;
-(id)contactStore;
-(id)contactsFromContactIdentifiers:(id)arg0 withKeys:(id)arg1 ;
-(id)fullNameForFirstContactMatchingEmailAddress:(id)arg0 ;
-(id)fullNameForFirstContactMatchingPhoneNumber:(id)arg0 ;
-(id)init;
-(id)initWithStore:(id)arg0 ;
-(id)myAddressForLabel:(id)arg0 ;
-(id)myAvatarEncodedString;
-(id)myEmailAddress;
-(id)myEmailAddresses;
-(id)myFullName;
-(id)myHomeAddress;
-(id)myNameWithStyle:(NSInteger)arg0 ;
-(id)myPhoneNumbers;
-(id)myShortDisplayName;
-(id)myWorkAddress;
-(id)nullableContactStore;
-(id)unifiedContactMatchingName:(id)arg0 email:(id)arg1 url:(id)arg2 keysToFetch:(id)arg3 ;
-(id)unifiedContactMatchingString:(id)arg0 keysToFetch:(id)arg1 matchType:(*NSInteger)arg2 ;
-(id)unifiedContactWithEmailAddress:(id)arg0 ;
-(id)unifiedContactWithIdentifier:(id)arg0 ;
-(id)unifiedContactWithIdentifier:(id)arg0 keysToFetch:(id)arg1 ;
-(id)unifiedContactWithName:(id)arg0 ;
-(id)unifiedContactWithPhoneNumber:(id)arg0 ;
-(id)unifiedContactsForHandleStrings:(id)arg0 keysToFetch:(id)arg1 ;
-(id)unifiedContactsMatchingPredicate:(id)arg0 keysToFetch:(id)arg1 ;
-(id)unifiedMeContact;
-(void)_setLastHistoryToken:(id)arg0 ;
-(void)_syncContacts;
-(void)contactsChanged:(id)arg0 ;
-(void)deregisterForContactChangeNotifications:(id)arg0 ;
-(void)donateEncodedLikenessString:(id)arg0 forEmailAddress:(id)arg1 ;
-(void)meCardChanged:(id)arg0 ;
-(void)registerForContactChangeNotifications:(id)arg0 ;
-(void)setMeCardEmailsForUnitTesting:(id)arg0 ;
-(void)setTestMeContactIdentifier:(id)arg0 ;


@end


#endif