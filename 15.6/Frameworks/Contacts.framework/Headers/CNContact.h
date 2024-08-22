// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACT_H
#define CNCONTACT_H

@class NSString, NSDateComponents, NSDate, NSData, NSArray, NSDictionary, NSSet, SGRecordId;
@protocol NSItemProviderReading, NSItemProviderWriting, CNSuggested, CNContactAugmentation, NSCopying, NSMutableCopying, NSSecureCoding, CNKeyDescriptor;

#import <Foundation/Foundation.h>

#import "CNActivityAlert.h"
#import "CNContact.h"
#import "CNContactKeyVector.h"

@interface CNContact : NSObject <NSItemProviderReading, NSItemProviderWriting, CNSuggested, CNContactAugmentation, NSCopying, NSMutableCopying, NSSecureCoding>

 {
    int _iOSLegacyIdentifier;
    NSString *_namePrefix;
    NSString *_givenName;
    NSString *_middleName;
    NSString *_familyName;
    NSString *_nameSuffix;
    NSString *_previousFamilyName;
    NSString *_nickname;
    NSString *_phoneticGivenName;
    NSString *_phoneticMiddleName;
    NSString *_phoneticFamilyName;
    NSString *_phoneticOrganizationName;
    NSString *_pronunciationGivenName;
    NSString *_pronunciationFamilyName;
    NSString *_explicitDisplayName;
    NSString *_sectionForSortingByGivenName;
    NSString *_sectionForSortingByFamilyName;
    NSString *_organizationName;
    NSString *_departmentName;
    NSString *_jobTitle;
    NSDateComponents *_birthday;
    NSDateComponents *_nonGregorianBirthday;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    NSString *_note;
    NSData *_imageData;
    CGRect _cropRect;
    NSData *_thumbnailImageData;
    NSData *_fullscreenImageData;
    NSData *_syncImageData;
    BOOL _imageDataAvailable;
    NSString *_linkIdentifier;
    BOOL _preferredForName;
    BOOL _preferredForImage;
    NSString *_phonemeData;
    NSInteger _contactType;
    NSArray *_phoneNumbers;
    NSArray *_emailAddresses;
    NSArray *_urlAddresses;
    NSArray *_dates;
    NSArray *_instantMessageAddresses;
    NSArray *_contactRelations;
    NSArray *_socialProfiles;
    NSArray *_postalAddresses;
    NSArray *_calendarURIs;
    NSString *_cardDAVUID;
    NSString *_externalIdentifier;
    NSData *_externalRepresentation;
    NSString *_externalModificationTag;
    NSString *_externalUUID;
    NSString *_externalImageURI;
    CNActivityAlert *_callAlert;
    CNActivityAlert *_textAlert;
    CNContact *_snapshot;
    NSArray *_linkedContacts;
    CNContactKeyVector *_availableKeyDescriptor;
    NSString *_mapsData;
    NSString *_searchIndex;
    NSString *_preferredLikenessSource;
    NSString *_preferredApplePersonaIdentifier;
    NSString *_ISOCountryCode;
    NSString *_downtimeWhitelist;
    NSString *_imageType;
    NSData *_imageHash;
    NSData *_memojiMetadata;
}


@property (readonly, copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy, nonatomic) NSDictionary *activityAlerts;
@property (readonly, nonatomic) NSObject<CNKeyDescriptor> *availableKeyDescriptor;
@property (readonly, nonatomic) NSSet *availableKeys;
@property (readonly, copy, nonatomic) NSDateComponents *birthday;
@property (readonly, copy, nonatomic) NSArray *calendarURIs;
@property (readonly, copy, nonatomic) CNActivityAlert *callAlert;
@property (readonly, copy, nonatomic) NSString *cardDAVUID;
@property (readonly, copy) NSString *companyName;
@property (readonly, copy, nonatomic) NSArray *contactRelations;
@property (readonly, nonatomic) NSInteger contactType;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) CGRect cropRect;
@property (readonly, copy, nonatomic) NSData *cropRectHash; // ivar: _cropRectHash
@property (readonly, copy, nonatomic) NSString *cropRectID; // ivar: _cropRectID
@property (readonly, copy, nonatomic) NSArray *dates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *departmentName;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayNameOrder; // ivar: _displayNameOrder
@property (readonly, copy, nonatomic) NSString *downtimeWhitelist;
@property (readonly, copy, nonatomic) NSArray *emailAddresses;
@property (readonly, copy, nonatomic) NSString *externalIdentifier;
@property (readonly, copy, nonatomic) NSString *externalImageURI;
@property (readonly, copy, nonatomic) NSString *externalModificationTag;
@property (readonly, copy, nonatomic) NSData *externalRepresentation;
@property (readonly, copy, nonatomic) NSString *externalURI;
@property (readonly, copy, nonatomic) NSString *externalUUID;
@property (readonly, copy, nonatomic) NSString *familyName;
@property (readonly, copy) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, copy, nonatomic) NSData *fullscreenImageData;
@property (readonly, copy, nonatomic) NSString *givenName;
@property (readonly, nonatomic) BOOL hasBeenPersisted;
@property (readonly, nonatomic) BOOL hasSuggestedProperties;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int iOSLegacyIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSData *imageData;
@property (readonly, nonatomic) BOOL imageDataAvailable;
@property (readonly, copy, nonatomic) NSData *imageHash;
@property (readonly, copy, nonatomic) NSString *imageType;
@property (readonly, copy, nonatomic) NSArray *instantMessageAddresses;
@property (readonly, copy, nonatomic) NSString *internalIdentifier; // ivar: _internalIdentifier
@property (readonly, copy, nonatomic) NSString *jobTitle;
@property (readonly, copy) NSString *lastName;
@property (readonly, copy, nonatomic) NSString *linkIdentifier;
@property (readonly, copy, nonatomic) NSArray *linkedContacts;
@property (readonly, copy) NSString *maidenName;
@property (readonly, copy, nonatomic) NSArray *mainStoreLinkedContacts;
@property (readonly, copy, nonatomic) NSString *mapsData;
@property (readonly, copy, nonatomic) NSData *memojiMetadata;
@property (readonly, copy, nonatomic) NSString *middleName;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, copy, nonatomic) NSString *namePrefix;
@property (readonly, copy, nonatomic) NSString *nameSuffix;
@property (readonly, copy) NSString *nameTitle;
@property (readonly, copy, nonatomic) NSString *nickname;
@property (readonly, copy, nonatomic) NSDateComponents *nonGregorianBirthday;
@property (readonly, copy, nonatomic) NSString *note;
@property (readonly, copy, nonatomic) NSString *organizationName;
@property (readonly, copy, nonatomic) NSArray *phoneNumbers;
@property (readonly, copy, nonatomic) NSString *phonemeData;
@property (readonly, copy, nonatomic) NSString *phoneticCompanyName;
@property (readonly, copy, nonatomic) NSString *phoneticFamilyName;
@property (readonly, copy) NSString *phoneticFirstName;
@property (readonly, copy, nonatomic) NSString *phoneticFullName;
@property (readonly, copy, nonatomic) NSString *phoneticGivenName;
@property (readonly, copy) NSString *phoneticLastName;
@property (readonly, copy, nonatomic) NSString *phoneticMiddleName;
@property (readonly, copy, nonatomic) NSString *phoneticOrganizationName;
@property (readonly, copy, nonatomic) NSArray *postalAddresses;
@property (readonly, copy, nonatomic) NSString *preferredApplePersonaIdentifier;
@property (readonly, copy, nonatomic) NSString *preferredChannel; // ivar: _preferredChannel
@property (readonly, nonatomic, getter=isPreferredForImage) BOOL preferredForImage;
@property (readonly, nonatomic, getter=isPreferredForName) BOOL preferredForName;
@property (readonly, copy, nonatomic) NSString *preferredLikenessSource;
@property (readonly, copy, nonatomic) NSString *previousFamilyName;
@property (readonly, copy, nonatomic) NSString *pronunciationFamilyName;
@property (readonly, copy, nonatomic) NSString *pronunciationGivenName;
@property (readonly, copy, nonatomic) NSArray *relatedNames;
@property (readonly, copy, nonatomic) NSString *searchIndex;
@property (readonly, copy, nonatomic) NSString *sectionForSortingByFamilyName;
@property (readonly, copy, nonatomic) NSString *sectionForSortingByGivenName;
@property (readonly, copy, nonatomic) NSArray *socialProfiles;
@property (readonly, copy, nonatomic) NSString *sortingFamilyName; // ivar: _sortingFamilyName
@property (readonly, copy, nonatomic) NSString *sortingGivenName; // ivar: _sortingGivenName
@property (readonly, copy, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (readonly, copy, nonatomic) NSDictionary *storeInfo; // ivar: _storeInfo
@property (readonly, copy, nonatomic) NSString *stringForIndexing;
@property (readonly, nonatomic, getter=isSuggested) BOOL suggested;
@property (readonly, nonatomic, getter=isSuggestedMe) BOOL suggestedMe;
@property (readonly, nonatomic) NSString *suggestionFoundInBundleId;
@property (readonly, nonatomic) SGRecordId *suggestionRecordId;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSData *syncImageData;
@property (readonly, copy, nonatomic) CNActivityAlert *textAlert;
@property (readonly, copy, nonatomic) NSData *thumbnailImageData;
@property (readonly, nonatomic, getter=isUnified) BOOL unified;
@property (readonly, copy, nonatomic) NSArray *urlAddresses;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


+(BOOL)isContactUTIType:(id)arg0 ;
+(BOOL)isVCardDataUTIType:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_contactWithContact:(id)arg0 createNewInstance:(BOOL)arg1 propertyDescriptions:(id)arg2 ;
+(id)alwaysFetchedKeys;
+(id)comparatorForNameSortOrder:(SEL)arg0 ;
+(id)contact;
+(id)contactFromPerson:(*void)arg0 keysToFetch:(id)arg1 ;
+(id)contactFromPerson:(*void)arg0 keysToFetch:(id)arg1 mutable:(BOOL)arg2 ;
+(id)contactFromPublicABPerson:(*void)arg0 keysToFetch:(id)arg1 ;
+(id)contactFromPublicABPerson:(*void)arg0 keysToFetch:(id)arg1 mutable:(BOOL)arg2 ;
+(id)contactFromSuggestion:(id)arg0 ;
+(id)contactIdentifierFromSuggestionID:(id)arg0 ;
+(id)contactPropertyKeyFromABPropertyID:(int)arg0 ;
+(id)contactPropertyKeyFromPublicABPropertyID:(int)arg0 ;
+(id)contactWithArchivedData:(id)arg0 error:(*id)arg1 ;
+(id)contactWithContact:(id)arg0 ;
+(id)contactWithDisplayName:(id)arg0 emailOrPhoneNumber:(id)arg1 ;
+(id)contactWithDisplayName:(id)arg0 handleStrings:(id)arg1 ;
+(id)contactWithIdentifier:(id)arg0 ;
+(id)contactWithIdentifierOnly:(id)arg0 ;
+(id)contactWithVCardData:(id)arg0 error:(*id)arg1 ;
+(id)descriptorForAllComparatorKeys;
+(id)descriptorForAllImageDataKeys;
+(id)descriptorForKeyDescriptors:(id)arg0 description:(id)arg1 ;
+(id)descriptorForRequiredKeysForSearchableItem;
+(id)descriptorWithKeyDescriptors:(id)arg0 description:(id)arg1 ;
+(id)emptyContact;
+(id)localizedStringForKey:(id)arg0 ;
+(id)makeContactAndMergeValuesFromAvailableKeysInContact:(id)arg0 ;
+(id)makeIdentifier;
+(id)makeIdentifierString;
+(id)newContactWithPropertyKeys:(id)arg0 withValuesFromContact:(id)arg1 ;
+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)os_log;
+(id)predicateForAllContacts;
+(id)predicateForContactMatchingEKParticipantWithName:(id)arg0 emailAddress:(id)arg1 URL:(id)arg2 predicateDescription:(id)arg3 ;
+(id)predicateForContactMatchingEmailAddress:(id)arg0 ;
+(id)predicateForContactMatchingLabeledValueIdentifier:(id)arg0 ;
+(id)predicateForContactMatchingMapString:(id)arg0 ;
+(id)predicateForContactMatchingPhoneNumber:(id)arg0 ;
+(id)predicateForContactMatchingPhoneNumberWithDigits:(id)arg0 countryCode:(id)arg1 ;
+(id)predicateForContactMatchingURLString:(id)arg0 ;
+(id)predicateForContactsInContainerWithIdentifier:(id)arg0 ;
+(id)predicateForContactsInGroupWithIdentifier:(id)arg0 ;
+(id)predicateForContactsLinkedToContact:(id)arg0 ;
+(id)predicateForContactsLinkedToContactWithIdentifier:(id)arg0 ;
+(id)predicateForContactsMatchingEmailAddress:(id)arg0 ;
+(id)predicateForContactsMatchingEmailAddress:(id)arg0 groupIdentifiers:(id)arg1 limitToOneResult:(BOOL)arg2 ;
+(id)predicateForContactsMatchingFullTextSearch:(id)arg0 containerIdentifiers:(id)arg1 groupIdentifiers:(id)arg2 ;
+(id)predicateForContactsMatchingHandleStrings:(id)arg0 ;
+(id)predicateForContactsMatchingHandleStrings:(id)arg0 inContainersWithIdentifiers:(id)arg1 ;
+(id)predicateForContactsMatchingInstantMessageAddress:(id)arg0 ;
+(id)predicateForContactsMatchingName:(id)arg0 ;
+(id)predicateForContactsMatchingName:(id)arg0 options:(NSUInteger)arg1 ;
+(id)predicateForContactsMatchingPhoneNumber:(id)arg0 ;
+(id)predicateForContactsMatchingPhoneNumber:(id)arg0 prefixHint:(id)arg1 ;
+(id)predicateForContactsMatchingPhoneNumber:(id)arg0 prefixHint:(id)arg1 groupIdentifiers:(id)arg2 limitToOneResult:(BOOL)arg3 ;
+(id)predicateForContactsMatchingPostalAddress:(id)arg0 ;
+(id)predicateForContactsMatchingPreferredChannel:(id)arg0 limitOne:(BOOL)arg1 ;
+(id)predicateForContactsMatchingSocialProfile:(id)arg0 ;
+(id)predicateForContactsMatchingString:(id)arg0 accountIdentifier:(id)arg1 containerIdentifier:(id)arg2 groupIdentifier:(id)arg3 ;
+(id)predicateForContactsWithIdentifiers:(id)arg0 ;
+(id)predicateForContactsWithNonUnifiedIdentifiers:(id)arg0 ;
+(id)predicateForContactsWithOrganizationName:(id)arg0 ;
+(id)predicateForFaultFulfillmentForLegacyIdentifier:(unsigned int)arg0 identifier:(id)arg1 ;
+(id)predicateForLegacyIdentifier:(unsigned int)arg0 ;
+(id)predicateForMeContact;
+(id)predicateForPreferredNameInContainersWithIdentifiers:(id)arg0 groupsWithIdentifiers:(id)arg1 ;
+(id)predicateForPreferredNameInRange:(struct _NSRange )arg0 ;
+(id)predicateForSuggestionIdentifier:(NSUInteger)arg0 ;
+(id)preferredImageComparator:(SEL)arg0 ;
+(id)previewURLForContact:(id)arg0 ;
+(id)readableTypeIdentifiersForItemProvider;
+(id)storeInfoFromCoder:(id)arg0 storeIdentifier:(id)arg1 key:(id)arg2 ;
+(id)suggestionIDFromContactIdentifier:(id)arg0 ;
+(id)unifyContacts:(id)arg0 ;
+(int)abPropertyIDfromContactPropertyKey:(id)arg0 ;
+(int)publicABPropertyIDFromContactPropertyKey:(id)arg0 ;
+(void)freezeIfInstancetypeIsImmutable:(id)arg0 ;
+(void)you_used_a_property_that_you_didnt_request_when_you_fetched_the_contact;
-(*void)detachedPerson;
-(*void)detachedPersonWithError:(*id)arg0 ;
-(BOOL)areAllAvailableKeysEqualToContact:(id)arg0 ignoringIdentifiers:(BOOL)arg1 ;
-(BOOL)areAllPropertiesButContactIdentifierEqualToContact:(id)arg0 ;
-(BOOL)areAllPropertiesEqualToContactIgnoringIdentifiers:(id)arg0 ;
-(BOOL)areKeysAvailable:(id)arg0 ;
-(BOOL)hasChanges;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualIgnoringIdentifiers:(id)arg0 ;
-(BOOL)isKeyAvailable:(id)arg0 ;
-(BOOL)isProperty:(id)arg0 equalToOtherIgnoreIdentifiers:(id)arg1 ;
-(BOOL)isUnifiedWithContactWithIdentifier:(id)arg0 ;
-(BOOL)overwritePerson:(*void)arg0 ;
-(BOOL)overwritePerson:(*void)arg0 error:(*id)arg1 ;
-(BOOL)overwritePublicABPerson:(*void)arg0 ;
-(BOOL)preferredForImage;
-(BOOL)preferredForName;
-(BOOL)updateNewPublicABPerson:(*void)arg0 inAddressBook:(*void)arg1 ;
-(id)_filteredArrayForValidValues:(id)arg0 ;
-(id)_searchableItemIncludingInternalAttributes:(BOOL)arg0 ;
-(id)areKeysAvailable:(id)arg0 useIgnorableKeys:(BOOL)arg1 findMissingKeys:(BOOL)arg2 ;
-(id)copyWithCachedExternalData;
-(id)copyWithCuratingAllSuggestions;
-(id)copyWithDistinctIdentifier;
-(id)copyWithPropertyKeys:(id)arg0 ;
-(id)copyWithSelfAsSnapshot;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)diffToSnapshotAndReturnError:(*id)arg0 ;
-(id)explicitDisplayName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 availableKeyDescriptor:(id)arg1 ;
-(id)keyVector;
-(id)linkedContactsFromStoreWithIdentifier:(id)arg0 ;
-(id)linkedIdentifierMap;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)searchableItemAttributeSetForUserActivity;
-(id)searchableItemForDragging;
-(id)searchableItemForIndexing;
-(id)selfOrMutableCopy;
-(id)shortDebugDescription;
-(id)snapshot;
-(void)assertKeyIsAvailable:(id)arg0 ;
-(void)assertKeysAreAvailable:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif