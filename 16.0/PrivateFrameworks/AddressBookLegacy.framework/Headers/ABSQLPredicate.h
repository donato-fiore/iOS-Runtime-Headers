// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABSQLPREDICATE_H
#define ABSQLPREDICATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ABSQLPredicate : NSObject

@property (copy, nonatomic) id *bindBlock; // ivar: _bindBlock
@property (nonatomic) BOOL isNullPredicate; // ivar: _isNullPredicate
@property (copy, nonatomic) id *matchInfoProvider; // ivar: _matchInfoProvider
@property (retain, nonatomic) NSString *query; // ivar: _query
@property (retain, nonatomic) id *storage; // ivar: _storage


+(id)_sqlListOfLength:(NSUInteger)arg0 ;
+(id)_sqlValuesTableOfLength:(NSUInteger)arg0 columnCount:(NSUInteger)arg1 ;
+(id)bindPlaceholderStringOfCount:(NSUInteger)arg0 ;
+(id)predicateForAllContacts;
+(id)predicateForContactsInContainerWithIdentifier:(id)arg0 ;
+(id)predicateForContactsInGroupWithIdentifier:(id)arg0 ;
+(id)predicateForContactsInRange:(struct _NSRange )arg0 allowedStoreIdentifiers:(id)arg1 sortOrder:(int)arg2 ;
+(id)predicateForContactsInRange:(struct _NSRange )arg0 sortOrder:(int)arg1 ;
+(id)predicateForContactsMatchingMultivalueProperty:(int)arg0 value:(id)arg1 ;
+(id)predicateForContactsMatchingMultivalueProperty:(int)arg0 values:(id)arg1 groupIdentifiers:(id)arg2 containerIdentifiers:(id)arg3 limitToOneResult:(BOOL)arg4 map:(id)arg5 ;
+(id)predicateForContactsMatchingName:(id)arg0 addressBook:(*void)arg1 ;
+(id)predicateForContactsMatchingOrganizationName:(id)arg0 ;
+(id)predicateForContactsMatchingPhoneNumber:(id)arg0 country:(id)arg1 homeCountryCode:(id)arg2 prefixHint:(id)arg3 groupIdentifiers:(id)arg4 limitToOneResult:(BOOL)arg5 ;
+(id)predicateForContactsMatchingPhoneNumbers:(id)arg0 containerIdentifiers:(id)arg1 map:(id)arg2 ;
+(id)predicateForContactsMatchingPhoneNumbers:(id)arg0 emailAddresses:(id)arg1 containerIdentifiers:(id)arg2 map:(id)arg3 ;
+(id)predicateForContactsMatchingPreferredChannel:(id)arg0 limitOne:(BOOL)arg1 ;
+(id)predicateForContactsMatchingText:(id)arg0 tokenizer:(struct __CFStringTokenizer *)arg1 collator:(struct UCollator *)arg2 matchNameFieldsOnly:(BOOL)arg3 ;
+(id)predicateForContactsWithExternalUUIDs:(id)arg0 ;
+(id)predicateForContactsWithLegacyIdentifier:(int)arg0 ;
+(id)predicateForContactsWithUUIDs:(id)arg0 ignoreUnifiedIdentifiers:(BOOL)arg1 ;
+(id)predicateForMeContact;
+(id)predicateForNoContacts;
+(id)predicateForSingleContactMatchingMultivalueProperty:(int)arg0 value:(id)arg1 ;
+(id)predicateUnioningPredicate:(id)arg0 withPredicate:(id)arg1 ;
-(void)dealloc;


@end


#endif