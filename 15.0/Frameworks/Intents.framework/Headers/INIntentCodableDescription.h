// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ININTENTCODABLEDESCRIPTION_H
#define ININTENTCODABLEDESCRIPTION_H

@class NSString, NSArray, NSNumber;
@protocol NSSecureCoding, NSCopying;


#import "INRootCodableDescription.h"
#import "INCodableAttribute.h"

@interface INIntentCodableDescription : INRootCodableDescription <NSSecureCoding, NSCopying>



@property (copy, nonatomic, setter=_setInputAttributeName:) NSString *_inputAttributeName; // ivar: _inputAttributeName
@property (copy, nonatomic, setter=_setKeyAttributeName:) NSString *_keyAttributeName; // ivar: _keyAttributeName
@property (nonatomic, getter=isConfigurable) BOOL configurable; // ivar: _configurable
@property (copy, nonatomic) NSString *defaultImageName; // ivar: _defaultImageName
@property (nonatomic, getter=isDeprecated) BOOL deprecated; // ivar: _deprecated
@property (copy, nonatomic) NSString *descriptiveText; // ivar: _descriptiveText
@property (copy, nonatomic) NSString *descriptiveTextLocID; // ivar: _descriptiveTextLocID
@property (nonatomic, getter=isEligibleForSuggestions) BOOL eligibleForSuggestions; // ivar: _eligibleForSuggestions
@property (nonatomic, getter=isEligibleForWidgets) BOOL eligibleForWidgets; // ivar: _eligibleForWidgets
@property (copy, nonatomic) NSArray *entityVerbs; // ivar: _entityVerbs
@property (nonatomic, getter=isForeground) BOOL foreground; // ivar: _foreground
@property (readonly, nonatomic) INCodableAttribute *inputAttribute;
@property (nonatomic) NSInteger intentCategory; // ivar: _intentCategory
@property (readonly, nonatomic) INCodableAttribute *keyAttribute;
@property (readonly, copy, nonatomic) NSString *localizedDescriptiveText;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSArray *phrases; // ivar: _phrases
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *titleLocID; // ivar: _titleLocID
@property (nonatomic) BOOL userConfirmationRequired; // ivar: _userConfirmationRequired
@property (copy, nonatomic) NSString *verb; // ivar: _verb
@property (copy, nonatomic) NSNumber *versioningHash; // ivar: _versioningHash


+(BOOL)supportsSecureCoding;
+(id)__CategoryKey;
+(id)__ClassNameKey;
+(id)__ClassPrefixKey;
+(id)__ConfigurableKey;
+(id)__DefaultImageNameKey;
+(id)__DeprecatedKey;
+(id)__DescriptionIDKey;
+(id)__DescriptionKey;
+(id)__EligibleForWidgetsKey;
+(id)__EntityKey;
+(id)__ForegroundKey;
+(id)__HashKey;
+(id)__IneligibleForSuggestionsKey;
+(id)__InputKey;
+(id)__Key;
+(id)__KeyParameterKey;
+(id)__NameKey;
+(id)__NameKey;
+(id)__ParameterKey;
+(id)__ParametersKey;
+(id)__PhrasesKey;
+(id)__SummaryKey;
+(id)__TitleIDKey;
+(id)__TitleKey;
+(id)__UserConfirmationRequiredKey;
+(id)__VerbAssociationsKey;
+(id)__VerbKey;
+(id)_intentClassNameWithDictionary:(id)arg0 ;
-(id)_attributeKey;
-(id)_attributesKey;
-(id)_ignoredAttributeTags;
-(id)attributes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDescriptiveTextWithLocalizer:(id)arg0 ;
-(id)localizedTitleWithLocalizer:(id)arg0 ;
-(id)resolvableParameterCombinationsWithParameterCombinations:(id)arg0 ;
-(void)_establishReferencedCodableDescriptionsUsingTypes:(id)arg0 intentResponseCodableDescription:(id)arg1 ;
-(void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)arg0 intentResponseCodableDescription:(id)arg1 ;
-(void)_updateWithIntentCodableDescription:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif