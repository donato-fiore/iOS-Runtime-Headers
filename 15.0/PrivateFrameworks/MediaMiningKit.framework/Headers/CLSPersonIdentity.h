// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSPERSONIDENTITY_H
#define CLSPERSONIDENTITY_H

@class NSMutableArray, NSString, NSDate, NSSet, NSMutableDictionary, NSArray;


#import "CLSPrimitive.h"

@interface CLSPersonIdentity : CLSPrimitive {
    NSMutableArray *_homeAddresses;
    NSMutableArray *_workAddresses;
}


@property (retain, nonatomic) NSString *CNIdentifier; // ivar: _CNIdentifier
@property (nonatomic) NSUInteger ageCategory; // ivar: _ageCategory
@property (retain, nonatomic) NSDate *anniversaryDate; // ivar: _anniversaryDate
@property (retain, nonatomic) NSDate *birthdayDate; // ivar: _birthdayDate
@property (retain, nonatomic) NSString *companyName; // ivar: _companyName
@property (retain, nonatomic) NSSet *emailAddresses; // ivar: _emailAddresses
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (retain, nonatomic) NSString *fullName; // ivar: _fullName
@property (nonatomic) BOOL hasContactProfilePicture; // ivar: _hasContactProfilePicture
@property (nonatomic) BOOL hasPhoneNumber; // ivar: _hasPhoneNumber
@property (retain, nonatomic) NSString *inferredLastName; // ivar: _inferredLastName
@property (nonatomic) BOOL isFavorite; // ivar: _isFavorite
@property (readonly, nonatomic) BOOL isMe;
@property (nonatomic) BOOL isUserCreated; // ivar: _isUserCreated
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier
@property (retain, nonatomic) NSString *localizedShortName; // ivar: _localizedShortName
@property (retain, nonatomic) NSString *middleName; // ivar: _middleName
@property (retain, nonatomic) NSString *nickname; // ivar: _nickname
@property (retain, nonatomic) NSSet *phoneNumbers; // ivar: _phoneNumbers
@property (retain, nonatomic) NSDate *potentialBirthdayDate; // ivar: _potentialBirthdayDate
@property (nonatomic) NSUInteger relationship; // ivar: _relationship
@property (nonatomic) NSUInteger sex; // ivar: _sex
@property (retain, nonatomic) NSMutableDictionary *socialProfiles; // ivar: _socialProfiles
@property (readonly, nonatomic) NSArray *sourceURLs; // ivar: _sourceURLs


+(BOOL)isChildRelationship:(NSUInteger)arg0 ;
+(BOOL)isFamilyRelationship:(NSUInteger)arg0 ;
+(BOOL)isParentRelationship:(NSUInteger)arg0 ;
+(BOOL)isSiblingRelationship:(NSUInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_personRelationshipVocabularyByLocaleDictionary;
+(id)descriptionForPersonRelationship:(NSUInteger)arg0 ;
+(id)person;
+(id)personWithCNIdentifier:(id)arg0 ;
+(id)personWithLocalIdentifier:(id)arg0 ;
+(id)personWithPHPerson:(id)arg0 ;
+(id)presentationStringForPeople:(id)arg0 ;
+(id)presentationStringForPeople:(id)arg0 withScores:(id)arg1 ;
+(id)relationshipRegularExpressionForRelationship:(NSUInteger)arg0 locale:(id)arg1 ;
-(BOOL)hasSameFamilyNameAsPerson:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPerson:(id)arg0 ;
-(BOOL)isLocationCoordinate:(struct CLLocationCoordinate2D )arg0 closeToAddressesOfType:(NSUInteger)arg1 ;
-(BOOL)isLocationCoordinate:(struct CLLocationCoordinate2D )arg0 farAwayFromAddressesOfType:(NSUInteger)arg1 ;
-(BOOL)isOrganization;
-(BOOL)isSamePersonAs:(id)arg0 ;
-(NSUInteger)countOfAddressesOfType:(NSUInteger)arg0 ;
-(NSUInteger)relationshipHintFromNameUsingLocales:(id)arg0 ;
-(id)_addressArrayFromAddressType:(NSUInteger)arg0 ;
-(id)_motherAndFatherRelationships;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)pluralPresentationString;
-(id)presentationString;
-(void)_enumerateAddresses:(id)arg0 as:(id)arg1 withBlock:(id)arg2 ;
-(void)addAddresses:(id)arg0 ofType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateAddressesOfType:(NSUInteger)arg0 asCLLocationsWithBlock:(id)arg1 ;
-(void)enumerateAddressesOfType:(NSUInteger)arg0 asPlacemarkWithBlock:(id)arg1 ;
-(void)mergeWithPerson:(id)arg0 ;
-(void)prefetchPersonAddressesIfNeeded;
-(void)sanitize;
-(void)setSourceService:(id)arg0 andID:(id)arg1 ;


@end


#endif