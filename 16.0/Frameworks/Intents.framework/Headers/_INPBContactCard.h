// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBCONTACTCARD_H
#define _INPBCONTACTCARD_H

@class PBCodable, NSString, NSArray;
@protocol _INPBContactCard, NSSecureCoding, NSCopying;


#import "_INPBDateTimeRangeValue.h"
#import "_INPBImageValue.h"

@interface _INPBContactCard : PBCodable <_INPBContactCard, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBDateTimeRangeValue *birthday; // ivar: _birthday
@property (copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (copy, nonatomic) NSArray *contactRelations; // ivar: _contactRelations
@property (readonly, nonatomic) NSUInteger contactRelationsCount;
@property (copy, nonatomic) NSArray *dates; // ivar: _dates
@property (readonly, nonatomic) NSUInteger datesCount;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *departmentName; // ivar: _departmentName
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (readonly, nonatomic) NSUInteger emailAddressesCount;
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (copy, nonatomic) NSString *fullName; // ivar: _fullName
@property (readonly, nonatomic) BOOL hasBirthday;
@property (readonly, nonatomic) BOOL hasContactIdentifier;
@property (readonly, nonatomic) BOOL hasDepartmentName;
@property (readonly, nonatomic) BOOL hasFirstName;
@property (readonly, nonatomic) BOOL hasFullName;
@property (readonly, nonatomic) BOOL hasImage;
@property (nonatomic) BOOL hasIsMe;
@property (readonly, nonatomic) BOOL hasJobTitle;
@property (readonly, nonatomic) BOOL hasLastName;
@property (readonly, nonatomic) BOOL hasMiddleName;
@property (readonly, nonatomic) BOOL hasNamePrefix;
@property (readonly, nonatomic) BOOL hasNameSuffix;
@property (readonly, nonatomic) BOOL hasNickName;
@property (readonly, nonatomic) BOOL hasNonGregorianBirthday;
@property (readonly, nonatomic) BOOL hasOrganizationName;
@property (readonly, nonatomic) BOOL hasPhoneticFirstName;
@property (readonly, nonatomic) BOOL hasPhoneticLastName;
@property (readonly, nonatomic) BOOL hasPhoneticMiddleName;
@property (readonly, nonatomic) BOOL hasPhoneticNamePrefix;
@property (readonly, nonatomic) BOOL hasPhoneticNameSuffix;
@property (readonly, nonatomic) BOOL hasPhoneticNickName;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBImageValue *image; // ivar: _image
@property (copy, nonatomic) NSArray *instantMessageAddresses; // ivar: _instantMessageAddresses
@property (readonly, nonatomic) NSUInteger instantMessageAddressesCount;
@property (nonatomic) BOOL isMe; // ivar: _isMe
@property (copy, nonatomic) NSString *jobTitle; // ivar: _jobTitle
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (copy, nonatomic) NSString *middleName; // ivar: _middleName
@property (copy, nonatomic) NSString *namePrefix; // ivar: _namePrefix
@property (copy, nonatomic) NSString *nameSuffix; // ivar: _nameSuffix
@property (copy, nonatomic) NSString *nickName; // ivar: _nickName
@property (retain, nonatomic) _INPBDateTimeRangeValue *nonGregorianBirthday; // ivar: _nonGregorianBirthday
@property (copy, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (copy, nonatomic) NSArray *phoneNumbers; // ivar: _phoneNumbers
@property (readonly, nonatomic) NSUInteger phoneNumbersCount;
@property (copy, nonatomic) NSString *phoneticFirstName; // ivar: _phoneticFirstName
@property (copy, nonatomic) NSString *phoneticLastName; // ivar: _phoneticLastName
@property (copy, nonatomic) NSString *phoneticMiddleName; // ivar: _phoneticMiddleName
@property (copy, nonatomic) NSString *phoneticNamePrefix; // ivar: _phoneticNamePrefix
@property (copy, nonatomic) NSString *phoneticNameSuffix; // ivar: _phoneticNameSuffix
@property (copy, nonatomic) NSString *phoneticNickName; // ivar: _phoneticNickName
@property (copy, nonatomic) NSArray *postalAddresses; // ivar: _postalAddresses
@property (readonly, nonatomic) NSUInteger postalAddressesCount;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *urlAddresses; // ivar: _urlAddresses
@property (readonly, nonatomic) NSUInteger urlAddressesCount;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)contactRelationsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)datesAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)emailAddressesAtIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)instantMessageAddressesAtIndex:(NSUInteger)arg0 ;
-(id)phoneNumbersAtIndex:(NSUInteger)arg0 ;
-(id)postalAddressesAtIndex:(NSUInteger)arg0 ;
-(id)urlAddressesAtIndex:(NSUInteger)arg0 ;
-(void)addContactRelations:(id)arg0 ;
-(void)addDates:(id)arg0 ;
-(void)addEmailAddresses:(id)arg0 ;
-(void)addInstantMessageAddresses:(id)arg0 ;
-(void)addPhoneNumbers:(id)arg0 ;
-(void)addPostalAddresses:(id)arg0 ;
-(void)addUrlAddresses:(id)arg0 ;
-(void)clearContactRelations;
-(void)clearDates;
-(void)clearEmailAddresses;
-(void)clearInstantMessageAddresses;
-(void)clearPhoneNumbers;
-(void)clearPostalAddresses;
-(void)clearUrlAddresses;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif