// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CN_H
#define CN_H


#import <Foundation/Foundation.h>


@interface CN : NSObject



+(BOOL)areValidDayComponents:(id)arg0 error:(*id)arg1 ;
+(BOOL)areValidGregorianDayComponents:(id)arg0 error:(*id)arg1 ;
+(BOOL)areValidKeyPaths:(id)arg0 forObject:(id)arg1 expectedClasses:(id)arg2 allowNil:(id)arg3 error:(*id)arg4 ;
+(BOOL)areValidNonGregorianDayComponents:(id)arg0 error:(*id)arg1 ;
+(BOOL)hasContactChineseJapaneseKoreanName:(id)arg0 ;
+(BOOL)hasContactChineseJapaneseKoreanPhoneticName:(id)arg0 ;
+(BOOL)isEmptyNameContact:(id)arg0 phonetic:(BOOL)arg1 includingPrefixAndSuffix:(BOOL)arg2 ;
+(BOOL)shouldContactUseFamilyGivenNameOrder:(id)arg0 ;
+(Class)defaultDataMapperClass;
+(NSUInteger)indexOfPreferredContactsForUnifying:(id)arg0 includingMainStoreContacts:(BOOL)arg1 ;
+(NSUInteger)indexOfUnifiedIdentifier:(id)arg0 onNonUnifiedMultiValue:(id)arg1 withIdentifierMap:(id)arg2 ;
+(id)_unifyContacts:(id)arg0 includingMainStoreContacts:(BOOL)arg1 ;
+(id)allContactProperties;
+(id)allContactPropertyKeys;
+(id)allContainerProperties;
+(id)allImageDataProperties;
+(id)allImageDataPropertyKeys;
+(id)allNameComponentRelatedProperties;
+(id)allPhoneticNameComponentProperties;
+(id)alwaysFetchedProperties;
+(id)birthdayDescription;
+(id)calendarURIsDescription;
+(id)callAlertDescription;
+(id)contactPropertiesByKey;
+(id)contactRelationsDescription;
+(id)contactTypeDescription;
+(id)contactUnifyingContacts:(id)arg0 includingMainStoreContacts:(BOOL)arg1 allowMutableContactFreeze:(BOOL)arg2 ;
+(id)containerAccountIdentifierDescription;
+(id)containerConstraintsPathDescription;
+(id)containerEnabledDescription;
+(id)containerExternalIdentifierDescription;
+(id)containerExternalModificationTagDescription;
+(id)containerExternalSyncDataDescription;
+(id)containerExternalSyncTagDescription;
+(id)containerGuardianRestrictedDescription;
+(id)containerGuardianStateDirtyDescription;
+(id)containerIdentifierDescription;
+(id)containerLastSyncDateDescription;
+(id)containerMeIdentifierDescription;
+(id)containerNameDescription;
+(id)containerRestrictionsDescription;
+(id)containerTypeDescription;
+(id)containeriOSLegacyIdentifierDescription;
+(id)creationDateDescription;
+(id)cropRectDescription;
+(id)dateComponentsFromDictionaryTransform:(SEL)arg0 ;
+(id)dateComponentsToDictionaryTransform:(SEL)arg0 ;
+(id)datesDescription;
+(id)departmentDescription;
+(id)downtimeWhitelistDescription;
+(id)emailAddressesDescription;
+(id)explicitDisplayNameDescription;
+(id)externalIdentifierDescription;
+(id)externalImageURIDescription;
+(id)externalModificationTagDescription;
+(id)externalRepresentationDescription;
+(id)externalUUIDDescription;
+(id)familyNameDescription;
+(id)fullscreenImageDataDescription;
+(id)givenNameDescription;
+(id)groupIdentifiersByLabeledValue:(id)arg0 forProperty:(id)arg1 ;
+(id)iOSLegacyIdentifierDescription;
+(id)identifierDescription;
+(id)identifierMapForUnifiedContact:(id)arg0 backingContacts:(id)arg1 ;
+(id)identifierMapForUnifiedMultiValue:(id)arg0 backingMultiValues:(id)arg1 forProperty:(id)arg2 ;
+(id)imageDataAvailableDescription;
+(id)imageDataDescription;
+(id)imageHash;
+(id)imageType;
+(id)instantMessagAddressesDescription;
+(id)instantMessageAddressFromDictionaryTransform:(SEL)arg0 ;
+(id)instantMessageAddressToDictionaryTransform:(SEL)arg0 ;
+(id)jobTitleDescription;
+(id)joinNonEmptyContactProperties:(id)arg0 onContact:(id)arg1 ;
+(id)joinNonEmptyContactProperties:(id)arg0 onContact:(id)arg1 withDelimiter:(id)arg2 ;
+(id)keyVectorForAllUsedKeysForInternationalSupport;
+(id)linkIdentifierDescription;
+(id)localizedNameDelimiterForContact:(id)arg0 ;
+(id)localizedPhoneticNameDelimiterForContact:(id)arg0 ;
+(id)mapsDataDescription;
+(id)memojiMetadataDescription;
+(id)middleNameDescription;
+(id)modificationDateDescription;
+(id)multiValueContactProperties;
+(id)mutableContactUnifyingContacts:(id)arg0 includingMainStoreContacts:(BOOL)arg1 ;
+(id)namePrefixDescription;
+(id)nameSuffixDescription;
+(id)nicknameDescription;
+(id)nonGregorianBirthdayDescription;
+(id)noteDescription;
+(id)nullTransform:(SEL)arg0 ;
+(id)orderForContactName:(id)arg0 ;
+(id)orderForContactName:(id)arg0 phonetic:(BOOL)arg1 ;
+(id)orderForContactPhoneticName:(id)arg0 ;
+(id)organizationNameDescription;
+(id)phoneNumberFromStringTransform:(SEL)arg0 ;
+(id)phoneNumberToStringTransform:(SEL)arg0 ;
+(id)phoneNumbersDescription;
+(id)phonemeDataDescription;
+(id)phoneticFamilyNameDescription;
+(id)phoneticGivenNameDescription;
+(id)phoneticMiddleNameDescription;
+(id)phoneticOrganizationNameDescription;
+(id)postalAddressFromDictionaryTransform:(SEL)arg0 ;
+(id)postalAddressToDictionaryTransform:(SEL)arg0 ;
+(id)postalAddressesDescription;
+(id)preferredApplePersonaIdentifierDescription;
+(id)preferredChannelDescription;
+(id)preferredForImageDescription;
+(id)preferredForNameDescription;
+(id)preferredLikenessSourceDescription;
+(id)previousFamilyNameDescription;
+(id)pronunciationFamilyNameDescription;
+(id)pronunciationGivenNameDescription;
+(id)relatedContactFromStringTransform:(SEL)arg0 ;
+(id)relatedContactToStringTransform:(SEL)arg0 ;
+(id)requiredPropertiesForNameScriptDetection;
+(id)requiredPropertiesForPhoneticNameScriptDetection;
+(id)restrictedProperties;
+(id)sectionForSortingByFamilyNameDescription;
+(id)sectionForSortingByGivenNameDescription;
+(id)singleValueContactProperties;
+(id)socialProfileFromDictionaryTransform:(SEL)arg0 ;
+(id)socialProfileToDictionaryTransform:(SEL)arg0 ;
+(id)socialProfileToFoundationProfileTransform:(SEL)arg0 ;
+(id)socialProfilesDescription;
+(id)sourceContactForValue:(id)arg0 labeledValueIdentifier:(id)arg1 propertyKey:(id)arg2 inUnifiedContact:(id)arg3 ;
+(id)squashableContactCardProperties;
+(id)squashableContactCardPropertyKeys;
+(id)syncImageDataDescription;
+(id)textAlertDescription;
+(id)thumbnailImageDataDescription;
+(id)unifyContactMatchInfos:(id)arg0 linkedContacts:(id)arg1 ;
+(id)unifyMultivalues:(id)arg0 forProperty:(id)arg1 ;
+(id)urlAddressesDescription;
+(id)writableAlwaysFetchedProperties;
+(id)writableContactProperties;
+(id)writableContainerProperties;
+(id)writableMultiValueContactProperties;
+(id)writableSingleValueContactProperties;
+(void)addLinkedIdentifier:(id)arg0 toLabeledValue:(id)arg1 ;
+(void)resetRestrictedPropertiesOnMutableContact:(id)arg0 ;


@end


#endif