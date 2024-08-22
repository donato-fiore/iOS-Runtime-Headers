// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INCODABLEDESCRIPTION_H
#define INCODABLEDESCRIPTION_H

@class NSMutableDictionary, NSString, NSDictionary, NSOrderedSet, NSArray;
@protocol NSSecureCoding, INCodableCoding;

#import <Foundation/Foundation.h>

#import "INCodableLocalizationTable.h"
#import "INSchema.h"

@interface INCodableDescription : NSObject <NSSecureCoding, INCodableCoding>

 {
    NSMutableDictionary *_attributesByName;
}


@property (readonly, copy, nonatomic) NSString *_attributeKey;
@property (readonly, copy, nonatomic) NSString *_attributesKey;
@property (copy, nonatomic, setter=_setCustomLocalizationTable:) INCodableLocalizationTable *_customLocalizationTable; // ivar: _customLocalizationTable
@property (copy, nonatomic, setter=_setLocalizationTable:) INCodableLocalizationTable *_localizationTable; // ivar: _localizationTable
@property (copy, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (copy, nonatomic) NSString *className; // ivar: _className
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSOrderedSet *displayOrderedAttributes; // ivar: _displayOrderedAttributes
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *intentDefinitionNamespace; // ivar: _intentDefinitionNamespace
@property (copy, nonatomic) NSString *mainBundleIdentifier; // ivar: _mainBundleIdentifier
@property (readonly, nonatomic) NSArray *referencedCodableEnums;
@property (weak, nonatomic) INSchema *schema; // ivar: _schema
@property (copy, nonatomic) NSString *semanticRoot; // ivar: _semanticRoot
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *typeName; // ivar: _typeName


+(BOOL)supportsSecureCoding;
+(id)__INCodableAttributeArraySizeSizeClassKey;
+(id)__INCodableAttributeArraySizeSizeKey;
+(id)__INCodableAttributeArraySizesKey;
+(id)__INCodableAttributeConfigurableKey;
+(id)__INCodableAttributeDefaultKey;
+(id)__INCodableAttributeDialogFormatStringDictionaryKey;
+(id)__INCodableAttributeDialogFormatStringDictionaryLanguageCodeKey;
+(id)__INCodableAttributeDialogFormatStringIDKey;
+(id)__INCodableAttributeDialogFormatStringKey;
+(id)__INCodableAttributeDialogFormatStringLanguageCodeKey;
+(id)__INCodableAttributeDisplayNameIDKey;
+(id)__INCodableAttributeDisplayNameKey;
+(id)__INCodableAttributeDisplayPriorityKey;
+(id)__INCodableAttributeEntityKeypathKey;
+(id)__INCodableAttributeEnumTypeKey;
+(id)__INCodableAttributeFixedSizeArrayKey;
+(id)__INCodableAttributeMetadataKey;
+(id)__INCodableAttributeMetadataPlaceholderIDKey;
+(id)__INCodableAttributeMetadataPlaceholderKey;
+(id)__INCodableAttributeNameKey;
+(id)__INCodableAttributePromptDialogFormatStringDictionaryKey;
+(id)__INCodableAttributePromptDialogFormatStringDictionaryLanguageCodeKey;
+(id)__INCodableAttributePromptDialogFormatStringIDKey;
+(id)__INCodableAttributePromptDialogFormatStringKey;
+(id)__INCodableAttributePromptDialogFormatStringLanguageCodeKey;
+(id)__INCodableAttributePromptDialogKey;
+(id)__INCodableAttributePromptDialogTypeKey;
+(id)__INCodableAttributePromptDialogsKey;
+(id)__INCodableAttributeRelationshipKey;
+(id)__INCodableAttributeRelationshipParentNameKey;
+(id)__INCodableAttributeRelationshipPredicateNameKey;
+(id)__INCodableAttributeRelationshipPredicateValueKey;
+(id)__INCodableAttributeRelationshipPredicateValuesKey;
+(id)__INCodableAttributeSupportsDynamicEnumerationKey;
+(id)__INCodableAttributeSupportsMultipleValuesKey;
+(id)__INCodableAttributeSupportsResolutionKey;
+(id)__INCodableAttributeSupportsSearchKey;
+(id)__INCodableAttributeTagKey;
+(id)__INCodableAttributeTypeKey;
+(id)__INCodableAttributeUnsupportedReasonCodeKey;
+(id)__INCodableAttributeUnsupportedReasonFormatStringDictionaryKey;
+(id)__INCodableAttributeUnsupportedReasonFormatStringDictionaryLanguageCodeKey;
+(id)__INCodableAttributeUnsupportedReasonFormatStringIDKey;
+(id)__INCodableAttributeUnsupportedReasonFormatStringKey;
+(id)__INCodableAttributeUnsupportedReasonFormatStringLanguageCodeKey;
+(id)__INCodableAttributeUnsupportedReasonKey;
+(id)__INCodableAttributeUnsupportedReasonsKey;
+(id)__INCodableAttributeWindowSizeKey;
+(id)__INCodableBooleanAttributeMetadataDefaultValueKey;
+(id)__INCodableBooleanAttributeMetadataFalseDisplayNameIDKey;
+(id)__INCodableBooleanAttributeMetadataFalseDisplayNameKey;
+(id)__INCodableBooleanAttributeMetadataTrueDisplayNameIDKey;
+(id)__INCodableBooleanAttributeMetadataTrueDisplayNameKey;
+(id)__INCodableCurrencyAmountAttributeMetadataCurrencyCodeKey;
+(id)__INCodableCurrencyAmountAttributeMetadataCurrencyCodesKey;
+(id)__INCodableCustomObjectAttributeObjectTypeKey;
+(id)__INCodableCustomObjectAttributeObjectTypeNamespaceKey;
+(id)__INCodableDateComponentsAttributeMetadataDateStyleKey;
+(id)__INCodableDateComponentsAttributeMetadataFormatKey;
+(id)__INCodableDateComponentsAttributeMetadataTemplateIDKey;
+(id)__INCodableDateComponentsAttributeMetadataTemplateKey;
+(id)__INCodableDateComponentsAttributeMetadataTimeStyleKey;
+(id)__INCodableDateComponentsAttributeMetadataTypeKey;
+(id)__INCodableEnumAttributeEnumTypeKey;
+(id)__INCodableEnumAttributeEnumTypeNamespaceKey;
+(id)__INCodableEnumAttributeMetadataDefaultValueKey;
+(id)__INCodableEnumAttributeMetadataKey;
+(id)__INCodableFileAttributeMetadataCustomUTIsKey;
+(id)__INCodableFileAttributeMetadataTypeKey;
+(id)__INCodableMeasurementAttributeMetadataDefaultUnitKey;
+(id)__INCodableMeasurementAttributeMetadataDefaultValueKey;
+(id)__INCodableMeasurementAttributeMetadataSupportsNegativeNumbersKey;
+(id)__INCodableMeasurementAttributeMetadataUnitKey;
+(id)__INCodableNumberAttributeMetadataDefaultValueKey;
+(id)__INCodableNumberAttributeMetadataMaximumValueKey;
+(id)__INCodableNumberAttributeMetadataMinimumValueKey;
+(id)__INCodableNumberAttributeMetadataSupportsNegativeNumbersKey;
+(id)__INCodableNumberAttributeMetadataTypeKey;
+(id)__INCodableObjectAttributeKey;
+(id)__INCodableObjectAttributeTypeKey;
+(id)__INCodablePersonAttributeMetadataKey;
+(id)__INCodablePersonAttributeMetadataTypeKey;
+(id)__INCodablePlacemarkAttributeMetadataKey;
+(id)__INCodablePlacemarkAttributeMetadataTypeKey;
+(id)__INCodableScalarAttributeKey;
+(id)__INCodableScalarAttributeTypeKey;
+(id)__INCodableStringAttributeMetadataCapitalizationKey;
+(id)__INCodableStringAttributeMetadataDefaultValueIDKey;
+(id)__INCodableStringAttributeMetadataDefaultValueKey;
+(id)__INCodableStringAttributeMetadataDisableAutocorrectKey;
+(id)__INCodableStringAttributeMetadataDisableSmartDashesKey;
+(id)__INCodableStringAttributeMetadataDisableSmartQuotesKey;
+(id)__INCodableStringAttributeMetadataMultilineKey;
+(id)__INCodableTimeIntervalAttributeMetadataDefaultUnitKey;
+(id)__INCodableTimeIntervalAttributeMetadataDefaultValueKey;
+(id)__INCodableTimeIntervalAttributeMetadataMaximumUnitKey;
+(id)__INCodableTimeIntervalAttributeMetadataMaximumValueKey;
+(id)__INCodableTimeIntervalAttributeMetadataMinimumUnitKey;
+(id)__INCodableTimeIntervalAttributeMetadataMinimumValueKey;
+(id)__INCodableTimeIntervalAttributeMetadataUnitKey;
+(id)__INCodableURLAttributeMetadataDefaultValueKey;
+(id)__INCodableURLAttributeMetadataKey;
+(id)__INIntentCodablePhrasePhraseIDKey;
+(id)__INIntentCodablePhrasePhraseKey;
+(id)__INIntentCodablePhrasePronunciationHintIDKey;
+(id)__INIntentCodablePhrasePronunciationHintKey;
+(id)__INIntentResponseCodableCodeConciseFormatStringDictionaryKey;
+(id)__INIntentResponseCodableCodeConciseFormatStringDictionaryLanguageCodeKey;
+(id)__INIntentResponseCodableCodeConciseFormatStringIDKey;
+(id)__INIntentResponseCodableCodeConciseFormatStringKey;
+(id)__INIntentResponseCodableCodeConciseFormatStringLanguageCodeKey;
+(id)__INIntentResponseCodableCodeFormatStringDictionaryKey;
+(id)__INIntentResponseCodableCodeFormatStringDictionaryLanguageCodeKey;
+(id)__INIntentResponseCodableCodeFormatStringIDKey;
+(id)__INIntentResponseCodableCodeFormatStringKey;
+(id)__INIntentResponseCodableCodeFormatStringLanguageCodeKey;
+(id)__INIntentResponseCodableCodeNameKey;
+(id)__INIntentResponseCodableCodeSuccessKey;
+(id)_calculateReferencedCodableDescriptionsFromAttributes:(id)arg0 usingTypes:(id)arg1 ;
+(id)_calculateReferencedCodableDescriptionsFromAttributes:(id)arg0 usingTypes:(id)arg1 foundAttributes:(id)arg2 ;
+(id)_codableDescriptionForTypedObject:(id)arg0 inDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)highestAttributeTag;
-(id)_ignoredAttributeTags;
-(id)attributeByKeyPath:(id)arg0 ;
-(id)attributeByName:(id)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_updateAttributesByName;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif