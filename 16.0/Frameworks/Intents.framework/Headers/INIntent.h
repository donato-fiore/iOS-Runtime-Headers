// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ININTENT_H
#define ININTENT_H

@class NSMutableDictionary, NSArray, NSDictionary, NSString, NSOrderedSet, NSNumber, PBCodable, NSUUID;
@protocol INImageProxyInjecting, INIntentSlotComposing, INKeyImageProducing, INEnumerable, INIntentExport, INGenericIntent, INRuntimeObject, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INIntentCodableDescription.h"
#import "INImage.h"
#import "INIntentKeyParameter.h"
#import "_INPBIntentMetadata.h"
#import "INParameterContexts.h"
#import "INIntentDonationMetadata.h"

@interface INIntent : NSObject <INImageProxyInjecting, INIntentSlotComposing, INKeyImageProducing, INEnumerable, INIntentExport, INGenericIntent, INRuntimeObject, NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_intentInstanceDescriptionMapping;
    NSArray *_parameterImages;
    BOOL _hasLoadedKeyParameter;
    os_unfair_lock_s _keyParameterLock;
}


@property (readonly, nonatomic) NSDictionary *_JSONDictionaryRepresentation;
@property (readonly, nonatomic) NSString *_categoryVerb;
@property (readonly, nonatomic) NSArray *_codableAttributes;
@property (readonly, nonatomic) INIntentCodableDescription *_codableDescription;
@property (readonly, nonatomic, getter=_isConfigurable) BOOL _configurable;
@property (retain, nonatomic, setter=_setConfigurableParameterCombinations:) NSDictionary *_configurableParameterCombinations; // ivar: _configurableParameterCombinations
@property (retain, nonatomic, setter=_setDefaultImage:) INImage *_defaultImage;
@property (readonly, nonatomic) NSOrderedSet *_displayOrderedAttributes;
@property (readonly, nonatomic, getter=_isEligibleForSuggestions) BOOL _eligibleForSuggestions;
@property (readonly, nonatomic) NSString *_endpointId;
@property (retain, nonatomic, setter=_setEndpointMediaPlaybackEnabled:) NSNumber *_endpointMediaPlaybackEnabled;
@property (nonatomic, setter=_setExecutionContext:) NSInteger _executionContext;
@property (readonly, nonatomic) BOOL _hasTitle;
@property (nonatomic, setter=_setIdiom:) NSInteger _idiom;
@property (readonly, nonatomic) NSInteger _indexingHash; // ivar: _indexingHash
@property (readonly, nonatomic) NSInteger _intentCategory;
@property (readonly, nonatomic, getter=_intents_isExemptFromMulitWindowRequirementForInAppHandling) BOOL _intents_exemptFromMulitWindowRequirementForInAppHandling;
@property (readonly, nonatomic) BOOL _intents_hasSystemIntentHandler;
@property (readonly, nonatomic) ? _intents_preferredScaledImageSize;
@property (readonly) NSInteger _intents_toggleState;
@property (retain, nonatomic, setter=_setIsOwnedByCurrentUser:) NSNumber *_isOwnedByCurrentUser;
@property (readonly) INImage *_keyImage;
@property (readonly, nonatomic) INIntentKeyParameter *_keyParameter; // ivar: _keyParameter
@property (readonly, copy, nonatomic) NSString *_localizedVerb;
@property (readonly, nonatomic) NSString *_mediaRouteId;
@property (retain, nonatomic, setter=_setMetadata:) _INPBIntentMetadata *_metadata;
@property (retain, nonatomic, setter=_setMSLimitReached:) NSNumber *_msLimitReached;
@property (retain, nonatomic, setter=_setNanoLaunchId:) NSString *_nanoLaunchId;
@property (retain, nonatomic, setter=_setOriginatingDeviceIdsIdentifier:) NSString *_originatingDeviceIDSIdentifier;
@property (retain, nonatomic, setter=_setOriginatingDeviceRapportEffectiveIdentifier:) NSString *_originatingDeviceRapportEffectiveIdentifier;
@property (retain, nonatomic, setter=_setOriginatingDeviceRapportMediaSystemIdentifier:) NSString *_originatingDeviceRapportMediaSystemIdentifier;
@property (retain, nonatomic, setter=_setParameterCombinations:) NSDictionary *_parameterCombinations; // ivar: _parameterCombinations
@property (retain, nonatomic, setter=_setParameterContexts:) INParameterContexts *_parameterContexts; // ivar: _parameterContexts
@property (copy, nonatomic, setter=_setParametersForcedToNeedsValue:) NSArray *_parametersForcedToNeedsValue;
@property (readonly, nonatomic) NSString *_preferredAudioOutputRouteId;
@property (readonly, nonatomic) NSInteger _preferredInteractionDirection; // ivar: __preferredInteractionDirection
@property (nonatomic, getter=_isPrimaryDisplayDisabled, setter=_setPrimaryDisplayDisabled:) BOOL _primaryDisplayDisabled;
@property (readonly, nonatomic) NSDictionary *_resolvableParameterCombinations;
@property (nonatomic, setter=_setShouldForwardToAppOnSuccess:) BOOL _shouldForwardToAppOnSucccess; // ivar: _shouldForwardToAppOnSucccess
@property (readonly, copy, nonatomic) NSString *_subtitle;
@property (readonly, nonatomic) BOOL _supportsBackgroundExecution;
@property (readonly, copy, nonatomic) NSString *_title;
@property (readonly, nonatomic) NSInteger _type;
@property (retain, nonatomic, setter=_setUiExtensionBundleId:) NSString *_uiExtensionBundleId;
@property (nonatomic, getter=_isUserConfirmationRequired, setter=_setUserConfirmationRequired:) BOOL _userConfirmationRequired;
@property (readonly, nonatomic) NSDictionary *_validParameterCombinations;
@property (retain, nonatomic, setter=_setAirPlayRouteIds:) NSArray *airPlayRouteIds;
@property (nonatomic, setter=_setAudioSessionID:) unsigned int audioSessionID; // ivar: _audioSessionID
@property (copy, nonatomic) PBCodable *backingStore; // ivar: _backingStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) INIntentDonationMetadata *donationMetadata; // ivar: _donationMetadata
@property (retain, nonatomic, setter=_setExtensionBundleId:) NSString *extensionBundleId;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *intentDescription;
@property (readonly, nonatomic) NSString *intentId;
@property (retain, nonatomic, setter=_setLaunchId:) NSString *launchId;
@property (copy, nonatomic, getter=_parameterImages, setter=_setParameterImages:) NSArray *parameterImages;
@property (copy, nonatomic) NSDictionary *parametersByName;
@property (retain, nonatomic, setter=_setRecordDeviceIdentifier:) NSString *recordDeviceIdentifier; // ivar: _recordDeviceIdentifier
@property (retain, nonatomic, setter=_setRecordDeviceUID:) NSUUID *recordDeviceUID; // ivar: _recordDeviceUID
@property (copy, nonatomic, setter=_setRecordRoute:) NSString *recordRoute; // ivar: _recordRoute
@property (nonatomic) NSUInteger shortcutAvailability;
@property (readonly, copy, nonatomic, getter=_sortedParameterImages) NSArray *sortedParameterImages;
@property (copy, nonatomic) NSString *suggestedInvocationPhrase;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger triggerMethod;
@property (readonly, nonatomic) NSString *typeName;
@property (readonly, nonatomic) NSString *utteranceString;
@property (copy, nonatomic) NSString *verb;


+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_ignoredParameters;
+(id)_sharedExtensionContextUUIDForIntentClassName:(id)arg0 ;
+(void)_setSharedExtensionContextUUID:(id)arg0 forIntentClassName:(id)arg1 ;
+(void)initialize;
-(BOOL)_enumerateWithValueProcessingBlock:(id)arg0 ;
-(BOOL)_hasMatchingIntentHandlerIncludingRemoteExecution:(BOOL)arg0 ;
-(BOOL)_intents_enumerateObjectsOfClass:(Class)arg0 withBlock:(id)arg1 ;
-(BOOL)_isValidKey:(id)arg0 ;
-(BOOL)_isValueValidForKey:(id)arg0 unsupportedReason:(*id)arg1 ;
-(BOOL)_supportsBackgroundExecutionWithOptions:(NSUInteger)arg0 ;
-(BOOL)configureAttributeSet:(id)arg0 includingData:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGenericIntent;
-(BOOL)setValue:(id)arg0 forProperty:(id)arg1 ;
-(NSInteger)_compareSubProducerOne:(id)arg0 subProducerTwo:(id)arg1 ;
-(id)_JSONDictionaryRepresentationWithConfiguration:(id)arg0 ;
-(id)_className;
-(id)_currentParameterCombination;
-(id)_dictionaryRepresentation;
-(id)_displayOrderedNonNilParameters;
-(id)_emptyCopy;
-(id)_imageForParameter:(id)arg0 ;
-(id)_inCodable;
-(id)_init;
-(id)_initWithIdentifier:(id)arg0 backingStore:(id)arg1 schema:(id)arg2 error:(*id)arg3 ;
-(id)_initWithIdentifier:(id)arg0 schema:(id)arg1 name:(id)arg2 data:(id)arg3 ;
-(id)_intentInstanceDescription;
-(id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)arg0 context:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_intents_bestBundleIdentifier;
-(id)_intents_bundleIdForDisplay;
-(id)_intents_bundleIdForLaunching;
-(id)_keyCodableAttributes;
-(id)_localizedCombinationStringForKey:(id)arg0 value:(id)arg1 localizationTable:(id)arg2 bundleURL:(id)arg3 localizer:(id)arg4 ;
-(id)_nonNilParameters;
// -(id)_querySchemaWithBlock:(id)arg0 contentOptions:(unk)arg1  ;
-(id)_redactedDictionaryRepresentation;
-(id)_spotlightContentType;
-(id)_subtitleForLanguage:(id)arg0 ;
-(id)_subtitleWithLocalizer:(id)arg0 fromBundleURL:(id)arg1 ;
-(id)_titleForLanguage:(id)arg0 ;
-(id)_titleWithLocalizer:(id)arg0 fromBundleURL:(id)arg1 ;
-(id)_validParameterCombinationsWithSchema:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)imageForParameterNamed:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;
-(id)intentSlotDescriptions;
-(id)keyImage;
-(id)localizeValueOfSlotDescription:(id)arg0 withLocalizer:(id)arg1 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
// -(void)_injectProxiesForImages:(id)arg0 completion:(unk)arg1  ;
// -(void)_injectProxiesForImagesUsingCustomCodableStrategy:(id)arg0 completion:(unk)arg1  ;
// -(void)_injectProxiesForImagesUsingIntentSlotDescriptionStrategy:(id)arg0 completion:(unk)arg1  ;
// -(void)_injectProxiesForParameterImages:(id)arg0 completion:(unk)arg1  ;
// -(void)_injectProxyForDefaultImage:(id)arg0 completion:(unk)arg1  ;
-(void)_intents_allowAppToInitiatePlaybackForBundleIdentifier:(id)arg0 context:(NSUInteger)arg1 error:(*id)arg2 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setCategoryVerb:(id)arg0 ;
-(void)_setImage:(id)arg0 forParameter:(id)arg1 ;
-(void)_setIntentCategory:(NSInteger)arg0 ;
-(void)_updateWithJSONDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setImage:(id)arg0 forParameterNamed:(id)arg1 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)trimDataAgainstTCCForAuditToken:(struct ? )arg0 bundle:(id)arg1 ;


@end


#endif