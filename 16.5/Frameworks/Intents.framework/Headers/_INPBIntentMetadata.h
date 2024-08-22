// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBINTENTMETADATA_H
#define _INPBINTENTMETADATA_H

@class PBCodable, NSArray, NSData, NSString;
@protocol INJSONSerializable, _INPBIntentMetadata, NSSecureCoding, NSCopying;


#import "_INPBImageValue.h"
#import "_INPBString.h"

@interface _INPBIntentMetadata : PBCodable <INJSONSerializable, _INPBIntentMetadata, NSSecureCoding, NSCopying>

 {
    ? _requiredEntitlements;
    ? _shortcutAvailabilities;
    ? _has;
}


@property (copy, nonatomic) NSArray *airPlayRouteIds; // ivar: _airPlayRouteIds
@property (readonly, nonatomic) NSUInteger airPlayRouteIdsCount;
@property (copy, nonatomic) NSData *auditTokenData; // ivar: _auditTokenData
@property (nonatomic) BOOL backgroundLaunch; // ivar: _backgroundLaunch
@property (copy, nonatomic) NSString *categoryVerb; // ivar: _categoryVerb
@property (nonatomic) BOOL confirmed; // ivar: _confirmed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _INPBImageValue *defaultImageValue; // ivar: _defaultImageValue
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *endpointId; // ivar: _endpointId
@property (nonatomic) BOOL endpointMediaPlaybackEnabled; // ivar: _endpointMediaPlaybackEnabled
@property (nonatomic) int executionContext; // ivar: _executionContext
@property (copy, nonatomic) NSArray *forceNeedsValueForParameters; // ivar: _forceNeedsValueForParameters
@property (readonly, nonatomic) NSUInteger forceNeedsValueForParametersCount;
@property (readonly, nonatomic) BOOL hasAuditTokenData;
@property (nonatomic) BOOL hasBackgroundLaunch;
@property (readonly, nonatomic) BOOL hasCategoryVerb;
@property (nonatomic) BOOL hasConfirmed;
@property (readonly, nonatomic) BOOL hasDefaultImageValue;
@property (readonly, nonatomic) BOOL hasEndpointId;
@property (nonatomic) BOOL hasEndpointMediaPlaybackEnabled;
@property (nonatomic) BOOL hasExecutionContext;
@property (nonatomic) BOOL hasIdiom;
@property (nonatomic) BOOL hasIntentCategory;
@property (readonly, nonatomic) BOOL hasIntentDescription;
@property (readonly, nonatomic) BOOL hasIntentId;
@property (nonatomic) BOOL hasIsOwnedByCurrentUser;
@property (nonatomic) BOOL hasIsPrimaryDisplayDisabled;
@property (readonly, nonatomic) BOOL hasLaunchId;
@property (readonly, nonatomic) BOOL hasMediaRouteId;
@property (nonatomic) BOOL hasMsLimitReached;
@property (readonly, nonatomic) BOOL hasNanoLaunchId;
@property (readonly, nonatomic) BOOL hasOriginatingDeviceIdsIdentifier;
@property (readonly, nonatomic) BOOL hasOriginatingDeviceRapportEffectiveId;
@property (readonly, nonatomic) BOOL hasOriginatingDeviceRapportMediaSystemId;
@property (readonly, nonatomic) BOOL hasPreferredAudioOutputRouteId;
@property (nonatomic) BOOL hasShowsWhenRun;
@property (readonly, nonatomic) BOOL hasSuggestedInvocationPhrase;
@property (readonly, nonatomic) BOOL hasSystemExtensionBundleId;
@property (readonly, nonatomic) BOOL hasSystemUIExtensionBundleId;
@property (nonatomic) BOOL hasTriggerMethod;
@property (nonatomic) BOOL hasUserConfirmationRequired;
@property (readonly, nonatomic) BOOL hasUserUtterance;
@property (nonatomic) BOOL hasVersioningHash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) int idiom; // ivar: _idiom
@property (nonatomic) int intentCategory; // ivar: _intentCategory
@property (copy, nonatomic) NSString *intentDescription; // ivar: _intentDescription
@property (copy, nonatomic) NSString *intentId; // ivar: _intentId
@property (nonatomic) BOOL isOwnedByCurrentUser; // ivar: _isOwnedByCurrentUser
@property (nonatomic) BOOL isPrimaryDisplayDisabled; // ivar: _isPrimaryDisplayDisabled
@property (copy, nonatomic) NSString *launchId; // ivar: _launchId
@property (copy, nonatomic) NSString *mediaRouteId; // ivar: _mediaRouteId
@property (nonatomic) BOOL msLimitReached; // ivar: _msLimitReached
@property (copy, nonatomic) NSString *nanoLaunchId; // ivar: _nanoLaunchId
@property (copy, nonatomic) NSString *originatingDeviceIdsIdentifier; // ivar: _originatingDeviceIdsIdentifier
@property (copy, nonatomic) NSString *originatingDeviceRapportEffectiveId; // ivar: _originatingDeviceRapportEffectiveId
@property (copy, nonatomic) NSString *originatingDeviceRapportMediaSystemId; // ivar: _originatingDeviceRapportMediaSystemId
@property (copy, nonatomic) NSArray *parameterImages; // ivar: _parameterImages
@property (readonly, nonatomic) NSUInteger parameterImagesCount;
@property (copy, nonatomic) NSString *preferredAudioOutputRouteId; // ivar: _preferredAudioOutputRouteId
@property (readonly, nonatomic) *int requiredEntitlements;
@property (readonly, nonatomic) NSUInteger requiredEntitlementsCount;
@property (readonly, nonatomic) *int shortcutAvailabilities;
@property (readonly, nonatomic) NSUInteger shortcutAvailabilitiesCount;
@property (nonatomic) BOOL showsWhenRun; // ivar: _showsWhenRun
@property (copy, nonatomic) NSString *suggestedInvocationPhrase; // ivar: _suggestedInvocationPhrase
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *systemExtensionBundleId; // ivar: _systemExtensionBundleId
@property (copy, nonatomic) NSString *systemUIExtensionBundleId; // ivar: _systemUIExtensionBundleId
@property (nonatomic) int triggerMethod; // ivar: _triggerMethod
@property (nonatomic) BOOL userConfirmationRequired; // ivar: _userConfirmationRequired
@property (retain, nonatomic) _INPBString *userUtterance; // ivar: _userUtterance
@property (nonatomic) NSUInteger versioningHash; // ivar: _versioningHash


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)airPlayRouteIdsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)executionContextAsString:(int)arg0 ;
-(id)forceNeedsValueForParameterAtIndex:(NSUInteger)arg0 ;
-(id)idiomAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)intentCategoryAsString:(int)arg0 ;
-(id)parameterImagesAtIndex:(NSUInteger)arg0 ;
-(id)requiredEntitlementsAsString:(int)arg0 ;
-(id)shortcutAvailabilitiesAsString:(int)arg0 ;
-(id)triggerMethodAsString:(int)arg0 ;
-(int)StringAsExecutionContext:(id)arg0 ;
-(int)StringAsIdiom:(id)arg0 ;
-(int)StringAsIntentCategory:(id)arg0 ;
-(int)StringAsRequiredEntitlements:(id)arg0 ;
-(int)StringAsShortcutAvailabilities:(id)arg0 ;
-(int)StringAsTriggerMethod:(id)arg0 ;
-(int)requiredEntitlementAtIndex:(NSUInteger)arg0 ;
-(int)shortcutAvailabilityAtIndex:(NSUInteger)arg0 ;
-(void)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(void)addAirPlayRouteIds:(id)arg0 ;
-(void)addForceNeedsValueForParameter:(id)arg0 ;
-(void)addParameterImages:(id)arg0 ;
-(void)addRequiredEntitlement:(int)arg0 ;
-(void)addShortcutAvailability:(int)arg0 ;
-(void)clearAirPlayRouteIds;
-(void)clearForceNeedsValueForParameters;
-(void)clearParameterImages;
-(void)clearRequiredEntitlements;
-(void)clearShortcutAvailabilities;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif