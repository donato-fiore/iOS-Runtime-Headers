// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCNCONTACT_H
#define WFCNCONTACT_H

@class NSString, CNContact;


#import "WFContact.h"

@interface WFCNContact : WFContact {
    int _propertyID;
    NSInteger _multivalueIndex;
}


@property (readonly, copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, nonatomic) BOOL fromVCard; // ivar: _fromVCard


+(BOOL)supportsSecureCoding;
+(id)addContactsChangeObserver:(id)arg0 ;
+(id)allContactsWithSortOrder:(NSInteger)arg0 ;
+(id)allContactsWithSortOrder:(NSInteger)arg0 passingTest:(id)arg1 ;
+(id)changeObservers;
+(id)contactWithCNContact:(id)arg0 ;
+(id)contactWithCNContact:(id)arg0 propertyID:(int)arg1 multivalueIndex:(NSInteger)arg2 ;
+(id)contactWithIdentifier:(id)arg0 ;
+(id)contactWithVCardData:(id)arg0 propertyID:(int)arg1 multivalueIndex:(NSInteger)arg2 ;
+(id)contactsWithName:(id)arg0 ;
+(id)contactsWithName:(id)arg0 keysToFetch:(id)arg1 ;
+(id)contactsWithVCardData:(id)arg0 ;
+(id)firstContactWithEmailAddress:(id)arg0 ;
+(id)firstContactWithPhoneNumber:(id)arg0 ;
+(id)firstContactWithPredicate:(id)arg0 propertyID:(int)arg1 valueEqualityBlock:(id)arg2 ;
+(id)requiredKeysToFetch;
+(void)contactStoreDidChange:(id)arg0 ;
+(void)removeContactsChangeObserver:(id)arg0 ;
+(void)updateContactStoreObservation;
-(BOOL)hasImageData;
-(BOOL)hasValueForPropertyID:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPropertyIDRepresented:(int)arg0 ;
-(NSInteger)multivalueIndex;
-(NSUInteger)hash;
-(id)URLs;
-(id)birthday;
-(id)contactWithPropertyID:(int)arg0 multivalueIndex:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dates;
-(id)emailAddresses;
-(id)firstName;
-(id)formattedName;
-(id)imageData;
-(id)initWithCNContact:(id)arg0 propertyID:(int)arg1 multivalueIndex:(NSInteger)arg2 fromVCard:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)instantMessageAddresses;
-(id)lastName;
-(id)middleName;
-(id)namePrefix;
-(id)nameSuffix;
-(id)nickname;
-(id)organization;
-(id)phoneNumbers;
-(id)socialProfiles;
-(id)streetAddresses;
-(id)thumbnailImageData;
-(id)vCardRepresentationWithFullData:(BOOL)arg0 ;
-(id)valueForPropertyID:(int)arg0 ;
-(int)propertyID;
-(void)encodeWithCoder:(id)arg0 ;
-(void)refetchContact;


@end


#endif