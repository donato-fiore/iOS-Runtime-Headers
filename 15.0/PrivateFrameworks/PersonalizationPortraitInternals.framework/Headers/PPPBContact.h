// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPPBCONTACT_H
#define PPPBCONTACT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "PPPBDateComponents.h"

@interface PPPBContact : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) PPPBDateComponents *birthday; // ivar: _birthday
@property (nonatomic) NSInteger createdAt; // ivar: _createdAt
@property (nonatomic) int displayNameOrder; // ivar: _displayNameOrder
@property (retain, nonatomic) NSMutableArray *emailAddresses; // ivar: _emailAddresses
@property (retain, nonatomic) NSString *familyName; // ivar: _familyName
@property (retain, nonatomic) NSString *givenName; // ivar: _givenName
@property (readonly, nonatomic) BOOL hasBirthday;
@property (nonatomic) BOOL hasCreatedAt;
@property (nonatomic) BOOL hasDisplayNameOrder;
@property (readonly, nonatomic) BOOL hasFamilyName;
@property (readonly, nonatomic) BOOL hasGivenName;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasMiddleName;
@property (readonly, nonatomic) BOOL hasNamePrefix;
@property (readonly, nonatomic) BOOL hasNameSuffix;
@property (readonly, nonatomic) BOOL hasNickname;
@property (readonly, nonatomic) BOOL hasNonGregorianBirthday;
@property (readonly, nonatomic) BOOL hasOrganizationName;
@property (readonly, nonatomic) BOOL hasSortingFamilyName;
@property (readonly, nonatomic) BOOL hasSortingGivenName;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *middleName; // ivar: _middleName
@property (retain, nonatomic) NSString *namePrefix; // ivar: _namePrefix
@property (retain, nonatomic) NSString *nameSuffix; // ivar: _nameSuffix
@property (retain, nonatomic) NSString *nickname; // ivar: _nickname
@property (retain, nonatomic) PPPBDateComponents *nonGregorianBirthday; // ivar: _nonGregorianBirthday
@property (retain, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (retain, nonatomic) NSMutableArray *phoneNumbers; // ivar: _phoneNumbers
@property (retain, nonatomic) NSMutableArray *postalAddresses; // ivar: _postalAddresses
@property (retain, nonatomic) NSMutableArray *socialProfiles; // ivar: _socialProfiles
@property (retain, nonatomic) NSString *sortingFamilyName; // ivar: _sortingFamilyName
@property (retain, nonatomic) NSString *sortingGivenName; // ivar: _sortingGivenName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)emailAddressesAtIndex:(NSUInteger)arg0 ;
-(id)phoneNumbersAtIndex:(NSUInteger)arg0 ;
-(id)postalAddressesAtIndex:(NSUInteger)arg0 ;
-(id)socialProfilesAtIndex:(NSUInteger)arg0 ;
-(void)addEmailAddresses:(id)arg0 ;
-(void)addPhoneNumbers:(id)arg0 ;
-(void)addPostalAddresses:(id)arg0 ;
-(void)addSocialProfiles:(id)arg0 ;
-(void)clearEmailAddresses;
-(void)clearPhoneNumbers;
-(void)clearPostalAddresses;
-(void)clearSocialProfiles;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif