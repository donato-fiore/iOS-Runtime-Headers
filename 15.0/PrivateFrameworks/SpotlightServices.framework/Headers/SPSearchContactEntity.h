// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPSEARCHCONTACTENTITY_H
#define SPSEARCHCONTACTENTITY_H

@class NSString, NSMutableArray, NSDictionary, NSArray, NSDateComponents;


#import "SPSearchEntity.h"

@interface SPSearchContactEntity : SPSearchEntity {
    NSString *_tokenText;
    NSString *_queryString;
    NSMutableArray *_allNames;
    NSMutableArray *_allPhoneNumbers;
    NSMutableArray *_allEmailAddresses;
    NSDictionary *_rankTerms;
}


@property (readonly, nonatomic) NSArray *addresses; // ivar: _addresses
@property (readonly, nonatomic) NSDateComponents *birthdayComponents; // ivar: _birthdayComponents
@property (readonly, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *personIdentifier; // ivar: _personIdentifier
@property (readonly, nonatomic) NSString *personQueryIdentifier; // ivar: _personQueryIdentifier
@property (readonly, nonatomic) NSArray *phoneNumbers; // ivar: _phoneNumbers
@property (readonly, nonatomic) NSArray *rawPhoneNumbers; // ivar: _rawPhoneNumbers


+(BOOL)supportsSecureCoding;
+(id)updatePersonQueryIdentifier:(id)arg0 withContactIdentifier:(id)arg1 ;
+(id)updatePersonQueryIdentifier:(id)arg0 withPersonIdentifier:(id)arg1 ;
-(BOOL)isContactEntitySearch;
-(BOOL)isScopedSearch;
-(id)contact;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContactIdentifier:(id)arg0 fromSuggestion:(BOOL)arg1 ;
-(id)initWithPersonQueryIdentifier:(id)arg0 personName:(id)arg1 fromSuggestion:(BOOL)arg2 ;
-(id)queryString;
-(id)spotlightFilterQueries;
-(id)spotlightQueryString;
-(id)spotlightRankTerms;
-(id)symbolName;
-(id)tokenText;
-(void)commonInit;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateSearchString:(id)arg0 ;


@end


#endif