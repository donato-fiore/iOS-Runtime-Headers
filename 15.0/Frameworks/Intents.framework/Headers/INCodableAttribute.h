// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INCODABLEATTRIBUTE_H
#define INCODABLEATTRIBUTE_H

@class NSMutableDictionary, NSDictionary, NSString, NSNumber, NSArray;
@protocol NSSecureCoding, NSCopying, INCodableCoding;

#import <Foundation/Foundation.h>

#import "INCodableDescription.h"
#import "INCodableAttributeMetadata.h"
#import "INCodableAttributeRelationship.h"

@interface INCodableAttribute : NSObject <NSSecureCoding, NSCopying, INCodableCoding>

 {
    NSMutableDictionary *_promptDialogsByType;
    NSDictionary *_arraySizesBySizeClass;
}


@property (readonly, nonatomic) NSString *_attributeDisplayPriorityKey;
@property (readonly, nonatomic) NSString *_attributeTagKey;
@property (weak, nonatomic, setter=_setCodableDescription:) INCodableDescription *_codableDescription; // ivar: _internalCodableDescription
@property (readonly, nonatomic) Class _relationshipValueTransformerClass; // ivar: __relationshipValueTransformerClass
@property (copy, nonatomic, setter=_setTypeString:) NSString *_typeString; // ivar: _typeString
@property (readonly, nonatomic) Class _unsafeObjectClass;
@property (nonatomic, getter=isConfigurable) BOOL configurable; // ivar: _configurable
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDefaultAttribute) BOOL defaultAttribute; // ivar: _defaultAttribute
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *displayNameID; // ivar: _displayNameID
@property (copy, nonatomic) NSNumber *displayPriorityRank; // ivar: _displayPriorityRank
@property (copy, nonatomic) NSString *entityKeypath; // ivar: _entityKeypath
@property (nonatomic, getter=isFixedSizeArray) BOOL fixedSizeArray; // ivar: _fixedSizeArray
@property (readonly, nonatomic) SEL getter;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (retain, nonatomic) INCodableAttributeMetadata *metadata; // ivar: _metadata
@property (nonatomic) NSInteger modifier; // ivar: _modifier
@property (readonly, nonatomic) Class objectClass;
@property (copy, nonatomic, setter=_setPromptDialogs:) NSArray *promptDialogs; // ivar: _promptDialogs
@property (copy, nonatomic) NSString *propertyName; // ivar: _propertyName
@property (retain, nonatomic) INCodableAttributeRelationship *relationship; // ivar: _relationship
@property (readonly, nonatomic) Class resolutionResultClass;
@property (readonly, nonatomic) SEL setter;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsDynamicEnumeration; // ivar: _supportsDynamicEnumeration
@property (nonatomic) BOOL supportsResolution; // ivar: _supportsResolution
@property (nonatomic) BOOL supportsSearch; // ivar: _supportsSearch
@property (copy, nonatomic, setter=_setUnsupportedReasons:) NSArray *unsupportedReasons; // ivar: _unsupportedReasons
@property (readonly, nonatomic) NSInteger valueType;
@property (nonatomic) NSInteger windowSize; // ivar: _windowSize


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)arraySizeForSizeClass:(id)arg0 ;
-(NSUInteger)indexForUnsupportedReason:(id)arg0 ;
-(id)__INCodableDescriptionArraySizeSizeClassKey;
-(id)__INCodableDescriptionArraySizeSizeKey;
-(id)__INCodableDescriptionArraySizesKey;
-(id)__INCodableDescriptionConfigurableKey;
-(id)__INCodableDescriptionDefaultKey;
-(id)__INCodableDescriptionDisplayNameIDKey;
-(id)__INCodableDescriptionDisplayNameKey;
-(id)__INCodableDescriptionDisplayPriorityKey;
-(id)__INCodableDescriptionEntityKeypathKey;
-(id)__INCodableDescriptionEnumTypeKey;
-(id)__INCodableDescriptionFixedSizeArrayKey;
-(id)__INCodableDescriptionMetadataKey;
-(id)__INCodableDescriptionNameKey;
-(id)__INCodableDescriptionPromptDialogsKey;
-(id)__INCodableDescriptionRelationshipKey;
-(id)__INCodableDescriptionSupportsDynamicEnumerationKey;
-(id)__INCodableDescriptionSupportsMultipleValuesKey;
-(id)__INCodableDescriptionSupportsResolutionKey;
-(id)__INCodableDescriptionSupportsSearchKey;
-(id)__INCodableDescriptionTagKey;
-(id)__INCodableDescriptionTypeKey;
-(id)__INCodableDescriptionUnsupportedReasonsKey;
-(id)__INCodableDescriptionWindowSizeKey;
-(id)__INIntentResponseCodableDescriptionArraySizeSizeClassKey;
-(id)__INIntentResponseCodableDescriptionArraySizeSizeKey;
-(id)__INIntentResponseCodableDescriptionArraySizesKey;
-(id)__INIntentResponseCodableDescriptionConfigurableKey;
-(id)__INIntentResponseCodableDescriptionDefaultKey;
-(id)__INIntentResponseCodableDescriptionDisplayNameIDKey;
-(id)__INIntentResponseCodableDescriptionDisplayNameKey;
-(id)__INIntentResponseCodableDescriptionDisplayPriorityKey;
-(id)__INIntentResponseCodableDescriptionEntityKeypathKey;
-(id)__INIntentResponseCodableDescriptionEnumTypeKey;
-(id)__INIntentResponseCodableDescriptionFixedSizeArrayKey;
-(id)__INIntentResponseCodableDescriptionMetadataKey;
-(id)__INIntentResponseCodableDescriptionNameKey;
-(id)__INIntentResponseCodableDescriptionPromptDialogsKey;
-(id)__INIntentResponseCodableDescriptionRelationshipKey;
-(id)__INIntentResponseCodableDescriptionSupportsDynamicEnumerationKey;
-(id)__INIntentResponseCodableDescriptionSupportsMultipleValuesKey;
-(id)__INIntentResponseCodableDescriptionSupportsResolutionKey;
-(id)__INIntentResponseCodableDescriptionSupportsSearchKey;
-(id)__INIntentResponseCodableDescriptionTagKey;
-(id)__INIntentResponseCodableDescriptionTypeKey;
-(id)__INIntentResponseCodableDescriptionUnsupportedReasonsKey;
-(id)__INIntentResponseCodableDescriptionWindowSizeKey;
-(id)__INTypeCodableDescriptionArraySizeSizeClassKey;
-(id)__INTypeCodableDescriptionArraySizeSizeKey;
-(id)__INTypeCodableDescriptionArraySizesKey;
-(id)__INTypeCodableDescriptionConfigurableKey;
-(id)__INTypeCodableDescriptionDefaultKey;
-(id)__INTypeCodableDescriptionDisplayNameIDKey;
-(id)__INTypeCodableDescriptionDisplayNameKey;
-(id)__INTypeCodableDescriptionDisplayPriorityKey;
-(id)__INTypeCodableDescriptionEntityKeypathKey;
-(id)__INTypeCodableDescriptionEnumTypeKey;
-(id)__INTypeCodableDescriptionFixedSizeArrayKey;
-(id)__INTypeCodableDescriptionMetadataKey;
-(id)__INTypeCodableDescriptionNameKey;
-(id)__INTypeCodableDescriptionPromptDialogsKey;
-(id)__INTypeCodableDescriptionRelationshipKey;
-(id)__INTypeCodableDescriptionSupportsDynamicEnumerationKey;
-(id)__INTypeCodableDescriptionSupportsMultipleValuesKey;
-(id)__INTypeCodableDescriptionSupportsResolutionKey;
-(id)__INTypeCodableDescriptionSupportsSearchKey;
-(id)__INTypeCodableDescriptionTagKey;
-(id)__INTypeCodableDescriptionTypeKey;
-(id)__INTypeCodableDescriptionUnsupportedReasonsKey;
-(id)__INTypeCodableDescriptionWindowSizeKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDisplayNameWithLocalizer:(id)arg0 ;
-(id)promptDialogWithType:(NSUInteger)arg0 ;
-(id)unsupportedReasonWithIndex:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif