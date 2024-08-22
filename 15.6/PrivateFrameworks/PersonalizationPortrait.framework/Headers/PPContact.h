// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPCONTACT_H
#define PPCONTACT_H

@class NSDateComponents, NSArray, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PPContact : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDateComponents *birthday; // ivar: _birthday
@property (readonly, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (readonly, nonatomic) NSString *familyName; // ivar: _familyName
@property (readonly, nonatomic) NSString *givenName; // ivar: _givenName
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *jobTitle; // ivar: _jobTitle
@property (readonly, nonatomic) NSString *localizedFullName; // ivar: _localizedFullName
@property (readonly, nonatomic) NSString *middleName; // ivar: _middleName
@property (readonly, nonatomic) NSString *namePrefix; // ivar: _namePrefix
@property (readonly, nonatomic) NSString *nameSuffix; // ivar: _nameSuffix
@property (readonly, nonatomic) NSString *nickname; // ivar: _nickname
@property (readonly, nonatomic) NSDateComponents *nonGregorianBirthday; // ivar: _nonGregorianBirthday
@property (readonly, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (readonly, nonatomic) NSArray *phoneNumbers; // ivar: _phoneNumbers
@property (readonly, nonatomic) NSArray *postalAddresses; // ivar: _postalAddresses
@property (readonly, nonatomic) NSArray *socialProfiles; // ivar: _socialProfiles
@property (readonly, nonatomic) unsigned char source; // ivar: _source


+(BOOL)identifier:(id)arg0 startsWithPrefix:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(NSInteger)foundInAppsRecordIdentifierNumberWithIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)contactWithIdentifier:(id)arg0 source:(unsigned char)arg1 namePrefix:(id)arg2 givenName:(id)arg3 middleName:(id)arg4 familyName:(id)arg5 nameSuffix:(id)arg6 nickname:(id)arg7 localizedFullName:(id)arg8 organizationName:(id)arg9 jobTitle:(id)arg10 birthday:(id)arg11 nonGregorianBirthday:(id)arg12 phoneNumbers:(id)arg13 emailAddresses:(id)arg14 socialProfiles:(id)arg15 postalAddresses:(id)arg16 ;
+(id)contactsContactIdentifierWithIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)sourceIdentifierWithSource:(unsigned char)arg0 identifier:(id)arg1 ;
+(unsigned char)sourceFromSourceIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContact:(id)arg0 ;
-(NSInteger)foundInAppsRecordIdentifierNumberWithError:(*id)arg0 ;
-(NSUInteger)hash;
-(id)contactsContactIdentifierWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContactsContact:(id)arg0 ;
-(id)initWithFoundInAppsContact:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 source:(unsigned char)arg1 namePrefix:(id)arg2 givenName:(id)arg3 middleName:(id)arg4 familyName:(id)arg5 nameSuffix:(id)arg6 nickname:(id)arg7 localizedFullName:(id)arg8 organizationName:(id)arg9 jobTitle:(id)arg10 birthday:(id)arg11 nonGregorianBirthday:(id)arg12 phoneNumbers:(id)arg13 emailAddresses:(id)arg14 socialProfiles:(id)arg15 postalAddresses:(id)arg16 ;
-(void)_generateLocalizedFullName;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setEmailAddressForTesting:(id)arg0 ;


@end


#endif