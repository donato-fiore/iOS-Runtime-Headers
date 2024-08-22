// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDCLIENTMETADATA_H
#define GEOPDCLIENTMETADATA_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOABSecondPartyPlaceRequestClientMetaData.h"
#import "GEOAdditionalEnabledMarkets.h"
#import "GEOLocation.h"
#import "GEOLocalizationCapabilities.h"
#import "GEOPDMapsSuggestionsTouristInfo.h"

@interface GEOPDClientMetadata : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _clientRevisions;
    ? _knownClientResolvedTypeDeprecateds;
    ? _knownClientResolvedTypes;
    ? _supportedMapsResultTypes;
    GEOABSecondPartyPlaceRequestClientMetaData *_abClientMetadata;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    NSMutableArray *_businessChatPreflightIdentifiers;
    NSString *_debugApiKey;
    NSString *_deviceCountryCode;
    NSString *_deviceDisplayLanguage;
    GEOLocation *_deviceExtendedLocation;
    NSMutableArray *_deviceHistoricalLocations;
    NSString *_deviceKeyboardLanguage;
    NSString *_deviceSku;
    NSString *_deviceSpokenLanguage;
    NSString *_displayRegion;
    GEOLocalizationCapabilities *_localizationCapabilities;
    GEOPDMapsSuggestionsTouristInfo *_mapsSuggestionsTouristInfo;
    NSString *_preferredDisplayCurrencySymbol;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _clientRevision;
    unsigned int _dayOfWeek;
    unsigned int _hourOfDay;
    int _requiredVersion;
    int _resultListAttributionSupport;
    unsigned int _timeSinceMapEnteredForeground;
    BOOL _enablePreflightVenues;
    BOOL _siriUserConsentsForAnalysis;
    ? _flags;
}


@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *abClientMetadata;
@property (retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (retain, nonatomic) NSMutableArray *businessChatPreflightIdentifiers;
@property (nonatomic) int clientRevision;
@property (readonly, nonatomic) *int clientRevisions;
@property (readonly, nonatomic) NSUInteger clientRevisionsCount;
@property (nonatomic) unsigned int dayOfWeek;
@property (retain, nonatomic) NSString *debugApiKey;
@property (retain, nonatomic) NSString *deviceCountryCode;
@property (retain, nonatomic) NSString *deviceDisplayLanguage;
@property (retain, nonatomic) GEOLocation *deviceExtendedLocation;
@property (retain, nonatomic) NSMutableArray *deviceHistoricalLocations;
@property (retain, nonatomic) NSString *deviceKeyboardLanguage;
@property (retain, nonatomic) NSString *deviceSku;
@property (retain, nonatomic) NSString *deviceSpokenLanguage;
@property (retain, nonatomic) NSString *displayRegion;
@property (nonatomic) BOOL enablePreflightVenues;
@property (readonly, nonatomic) BOOL hasAbClientMetadata;
@property (readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
@property (nonatomic) BOOL hasClientRevision;
@property (nonatomic) BOOL hasDayOfWeek;
@property (readonly, nonatomic) BOOL hasDebugApiKey;
@property (readonly, nonatomic) BOOL hasDeviceCountryCode;
@property (readonly, nonatomic) BOOL hasDeviceDisplayLanguage;
@property (readonly, nonatomic) BOOL hasDeviceExtendedLocation;
@property (readonly, nonatomic) BOOL hasDeviceKeyboardLanguage;
@property (readonly, nonatomic) BOOL hasDeviceSku;
@property (readonly, nonatomic) BOOL hasDeviceSpokenLanguage;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (nonatomic) BOOL hasEnablePreflightVenues;
@property (nonatomic) BOOL hasHourOfDay;
@property (readonly, nonatomic) BOOL hasLocalizationCapabilities;
@property (readonly, nonatomic) BOOL hasMapsSuggestionsTouristInfo;
@property (readonly, nonatomic) BOOL hasPreferredDisplayCurrencySymbol;
@property (nonatomic) BOOL hasRequiredVersion;
@property (nonatomic) BOOL hasResultListAttributionSupport;
@property (nonatomic) BOOL hasSiriUserConsentsForAnalysis;
@property (nonatomic) BOOL hasTimeSinceMapEnteredForeground;
@property (nonatomic) unsigned int hourOfDay;
@property (readonly, nonatomic) *int knownClientResolvedTypeDeprecateds;
@property (readonly, nonatomic) NSUInteger knownClientResolvedTypeDeprecatedsCount;
@property (readonly, nonatomic) *int knownClientResolvedTypes;
@property (readonly, nonatomic) NSUInteger knownClientResolvedTypesCount;
@property (retain, nonatomic) GEOLocalizationCapabilities *localizationCapabilities;
@property (retain, nonatomic) GEOPDMapsSuggestionsTouristInfo *mapsSuggestionsTouristInfo;
@property (retain, nonatomic) NSString *preferredDisplayCurrencySymbol;
@property (nonatomic) int requiredVersion;
@property (nonatomic) int resultListAttributionSupport;
@property (nonatomic) BOOL siriUserConsentsForAnalysis;
@property (readonly, nonatomic) *int supportedMapsResultTypes;
@property (readonly, nonatomic) NSUInteger supportedMapsResultTypesCount;
@property (nonatomic) unsigned int timeSinceMapEnteredForeground;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)businessChatPreflightIdentifierType;
+(Class)deviceHistoricalLocationType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)businessChatPreflightIdentifierAtIndex:(NSUInteger)arg0 ;
-(id)clientRevisionAsString:(int)arg0 ;
-(id)clientRevisionsAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceHistoricalLocationAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithTraits:(id)arg0 ;
-(id)jsonRepresentation;
-(id)knownClientResolvedTypeDeprecatedsAsString:(int)arg0 ;
-(id)knownClientResolvedTypesAsString:(int)arg0 ;
-(id)requiredVersionAsString:(int)arg0 ;
-(id)resultListAttributionSupportAsString:(int)arg0 ;
-(id)supportedMapsResultTypesAsString:(int)arg0 ;
-(int)StringAsClientRevision:(id)arg0 ;
-(int)StringAsClientRevisions:(id)arg0 ;
-(int)StringAsKnownClientResolvedTypeDeprecateds:(id)arg0 ;
-(int)StringAsKnownClientResolvedTypes:(id)arg0 ;
-(int)StringAsRequiredVersion:(id)arg0 ;
-(int)StringAsResultListAttributionSupport:(id)arg0 ;
-(int)StringAsSupportedMapsResultTypes:(id)arg0 ;
-(int)clientRevisionsAtIndex:(NSUInteger)arg0 ;
-(int)knownClientResolvedTypeAtIndex:(NSUInteger)arg0 ;
-(int)knownClientResolvedTypeDeprecatedAtIndex:(NSUInteger)arg0 ;
-(int)supportedMapsResultTypeAtIndex:(NSUInteger)arg0 ;
-(void)addBusinessChatPreflightIdentifier:(id)arg0 ;
-(void)addClientRevisions:(int)arg0 ;
-(void)addDeviceHistoricalLocation:(id)arg0 ;
-(void)addKnownClientResolvedType:(int)arg0 ;
-(void)addKnownClientResolvedTypeDeprecated:(int)arg0 ;
-(void)addSupportedMapsResultType:(int)arg0 ;
-(void)clearBusinessChatPreflightIdentifiers;
-(void)clearClientRevisions;
-(void)clearDeviceHistoricalLocations;
-(void)clearKnownClientResolvedTypeDeprecateds;
-(void)clearKnownClientResolvedTypes;
-(void)clearLocations;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearSupportedMapsResultTypes;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif