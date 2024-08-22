// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNMUTABLECONTACT_H
#define CNMUTABLECONTACT_H

@class NSDictionary, NSDateComponents, NSArray, NSString, NSDate, NSData;


#import "CNContact.h"
#import "CNContactKeyVector.h"
#import "CNActivityAlert.h"

@interface CNMutableContact : CNContact

@property (copy, nonatomic) NSDictionary *activityAlerts;
@property (copy, nonatomic) CNContactKeyVector *availableKeyDescriptor;
@property (copy, nonatomic) NSDateComponents *birthday;
@property (copy, nonatomic) NSArray *calendarURIs;
@property (copy, nonatomic) CNActivityAlert *callAlert;
@property (copy, nonatomic) NSString *cardDAVUID;
@property (copy) NSString *companyName;
@property (copy, nonatomic) NSArray *contactRelations;
@property (nonatomic) NSInteger contactType;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic) CGRect cropRect;
@property (copy, nonatomic) NSData *cropRectHash; // ivar: _cropRectHash
@property (copy, nonatomic) NSString *cropRectID; // ivar: _cropRectID
@property (copy, nonatomic) NSArray *dates;
@property (copy, nonatomic) NSString *departmentName;
@property (copy, nonatomic) NSString *downtimeWhitelist;
@property (copy, nonatomic) NSArray *emailAddresses;
@property (copy, nonatomic) NSString *explicitDisplayName;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalImageURI;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSData *externalRepresentation;
@property (copy, nonatomic) NSString *externalURI;
@property (copy, nonatomic) NSString *externalUUID;
@property (copy, nonatomic) NSString *familyName;
@property (copy) NSString *firstName;
@property (copy, nonatomic) NSData *fullscreenImageData;
@property (copy, nonatomic) NSString *givenName;
@property (readonly, nonatomic) BOOL hasChanges; // ivar: _hasChanges
@property (nonatomic) int iOSLegacyIdentifier;
@property (copy, nonatomic) NSData *imageData;
@property (nonatomic) BOOL imageDataAvailable;
@property (copy, nonatomic) NSData *imageHash;
@property (copy, nonatomic) NSString *imageType;
@property (copy, nonatomic) NSArray *instantMessageAddresses;
@property (copy, nonatomic) NSString *jobTitle;
@property (copy) NSString *lastName;
@property (copy, nonatomic) NSString *linkIdentifier;
@property (copy, nonatomic) NSArray *linkedContacts;
@property (copy) NSString *maidenName;
@property (copy, nonatomic) NSString *mapsData;
@property (copy, nonatomic) NSData *memojiMetadata;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSString *namePrefix;
@property (copy, nonatomic) NSString *nameSuffix;
@property (copy) NSString *nameTitle;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSDateComponents *nonGregorianBirthday;
@property (copy, nonatomic) NSString *note;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSArray *phoneNumbers;
@property (copy, nonatomic) NSString *phonemeData;
@property (copy, nonatomic) NSString *phoneticCompanyName;
@property (copy, nonatomic) NSString *phoneticFamilyName;
@property (copy) NSString *phoneticFirstName;
@property (copy, nonatomic) NSString *phoneticGivenName;
@property (copy) NSString *phoneticLastName;
@property (copy, nonatomic) NSString *phoneticMiddleName;
@property (copy, nonatomic) NSString *phoneticOrganizationName;
@property (copy, nonatomic) NSArray *postalAddresses;
@property (copy, nonatomic) NSString *preferredApplePersonaIdentifier;
@property (copy, nonatomic) NSString *preferredChannel;
@property (nonatomic, getter=isPreferredForImage) BOOL preferredForImage;
@property (nonatomic, getter=isPreferredForName) BOOL preferredForName;
@property (copy, nonatomic) NSString *preferredLikenessSource;
@property (copy, nonatomic) NSString *previousFamilyName;
@property (copy, nonatomic) NSString *pronunciationFamilyName;
@property (copy, nonatomic) NSString *pronunciationGivenName;
@property (copy) NSArray *relatedNames;
@property (copy, nonatomic) NSString *searchIndex;
@property (copy, nonatomic) NSString *sectionForSortingByFamilyName;
@property (copy, nonatomic) NSString *sectionForSortingByGivenName;
@property (copy, nonatomic) CNContact *snapshot;
@property (copy, nonatomic) NSArray *socialProfiles;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSDictionary *storeInfo;
@property (copy, nonatomic) NSData *syncImageData;
@property (copy, nonatomic) CNActivityAlert *textAlert;
@property (copy, nonatomic) NSData *thumbnailImageData;
@property (copy, nonatomic) NSArray *urlAddresses;


+(id)unifyContacts:(id)arg0 ;
+(void)freezeIfInstancetypeIsImmutable:(id)arg0 ;
-(BOOL)preferredForImage;
-(BOOL)preferredForName;
-(id)copyWithSelfAsSnapshot;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)freeze;
-(id)freezeWithSelfAsSnapshot;
-(id)initWithContact:(id)arg0 ;
-(id)selfOrMutableCopy;
-(void)overwriteStateFromContact:(id)arg0 ;
-(void)removeKeys:(id)arg0 ;
-(void)resetToNewContact;
-(void)setFrozenSelfAsSnapshot;
-(void)setNilValueForKey:(id)arg0 ;
-(void)updateImageDataAvailableFromCurrentState;
-(void)updateStateFromContact:(id)arg0 ;


@end


#endif