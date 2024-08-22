// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPLACESEARCHREQUEST_H
#define GEOPLACESEARCHREQUEST_H

@class PBRequest, PBDataReader, PBUnknownFields, NSString, NSMutableArray, NSData;
@protocol NSCopying;


#import "GEOAdditionalEnabledMarkets.h"
#import "GEOAddress.h"
#import "GEOBusinessOptions.h"
#import "GEOClientCapabilities.h"
#import "GEOLatLng.h"
#import "GEOIndexQueryNode.h"
#import "GEOLocation.h"
#import "GEOMapRegion.h"
#import "GEOSearchSubstring.h"
#import "GEOSuggestionsOptions.h"

@interface GEOPlaceSearchRequest : PBRequest <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _additionalPlaceTypes;
    ? _businessIDs;
    ? _optionalSuppressionReasons;
    GEOSessionID _sessionGUID;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOAddress *_address;
    GEOBusinessOptions *_businessOptions;
    GEOClientCapabilities *_clientCapabilities;
    NSString *_deviceCountryCode;
    GEOLatLng *_deviceLocation;
    NSString *_deviceTimeZone;
    NSString *_deviceLocationCountryCode;
    NSMutableArray *_filterByBusinessCategorys;
    NSInteger _geoId;
    GEOIndexQueryNode *_indexFilter;
    NSString *_inputLanguage;
    NSUInteger _intersectingGeoId;
    GEOLatLng *_knownLocation;
    NSMutableArray *_limitToCountryCodeIso2s;
    GEOLocation *_location;
    GEOMapRegion *_mapRegion;
    NSString *_phoneticLocaleIdentifier;
    GEOAddress *_preserveFields;
    GEOSearchSubstring *_searchContextSubstring;
    NSString *_searchContext;
    GEOLatLng *_searchLocation;
    NSMutableArray *_searchSubstrings;
    NSString *_search;
    NSMutableArray *_serviceTags;
    GEOSuggestionsOptions *_suggestionsOptions;
    NSString *_suggestionsPrefix;
    CGFloat _timeSinceMapEnteredForeground;
    CGFloat _timeSinceMapViewportChanged;
    CGFloat _timestamp;
    NSString *_viewportCenterCountryCode;
    NSData *_zilchPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _businessSortOrder;
    int _knownAccuracy;
    int _localSearchProviderID;
    int _mapMode;
    int _maxBusinessReviews;
    int _maxResults;
    int _placeTypeLimit;
    int _searchSource;
    int _sequenceNumber;
    int _transportTypeForTravelTimes;
    BOOL _excludeAddressInResults;
    BOOL _includeBusinessCategories;
    BOOL _includeBusinessRating;
    BOOL _includeEntryPoints;
    BOOL _includeFeatureSets;
    BOOL _includeGeoId;
    BOOL _includeMatchedToken;
    BOOL _includeNameForForwardGeocodingResults;
    BOOL _includePhonetics;
    BOOL _includeQuads;
    BOOL _includeRoadAccessPoints;
    BOOL _includeSpokenNames;
    BOOL _includeStatusCodeInfo;
    BOOL _includeSuggestionsOnly;
    BOOL _includeTravelDistance;
    BOOL _includeTravelTime;
    BOOL _includeUnmatchedStrings;
    BOOL _isCanonicalLocationSearch;
    BOOL _isFromAPI;
    BOOL _isStrictGeocoding;
    BOOL _isStrictMapRegion;
    BOOL _isPopularNearbyRequest;
    BOOL _structuredSearch;
    BOOL _suppressResultsRequiringAttribution;
    ? _flags;
}


@property (retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (readonly, nonatomic) *int additionalPlaceTypes;
@property (readonly, nonatomic) NSUInteger additionalPlaceTypesCount;
@property (retain, nonatomic) GEOAddress *address;
@property (readonly, nonatomic) *NSUInteger businessIDs;
@property (readonly, nonatomic) NSUInteger businessIDsCount;
@property (retain, nonatomic) GEOBusinessOptions *businessOptions;
@property (nonatomic) int businessSortOrder;
@property (retain, nonatomic) GEOClientCapabilities *clientCapabilities;
@property (retain, nonatomic) NSString *deviceCountryCode;
@property (retain, nonatomic) GEOLatLng *deviceLocation;
@property (retain, nonatomic) NSString *deviceLocationCountryCode;
@property (retain, nonatomic) NSString *deviceTimeZone;
@property (nonatomic) BOOL excludeAddressInResults;
@property (retain, nonatomic) NSMutableArray *filterByBusinessCategorys;
@property (nonatomic) NSInteger geoId;
@property (readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
@property (readonly, nonatomic) BOOL hasAddress;
@property (readonly, nonatomic) BOOL hasBusinessOptions;
@property (nonatomic) BOOL hasBusinessSortOrder;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (readonly, nonatomic) BOOL hasDeviceCountryCode;
@property (readonly, nonatomic) BOOL hasDeviceLocation;
@property (readonly, nonatomic) BOOL hasDeviceLocationCountryCode;
@property (readonly, nonatomic) BOOL hasDeviceTimeZone;
@property (nonatomic) BOOL hasExcludeAddressInResults;
@property (nonatomic) BOOL hasGeoId;
@property (nonatomic) BOOL hasIncludeBusinessCategories;
@property (nonatomic) BOOL hasIncludeBusinessRating;
@property (nonatomic) BOOL hasIncludeEntryPoints;
@property (nonatomic) BOOL hasIncludeFeatureSets;
@property (nonatomic) BOOL hasIncludeGeoId;
@property (nonatomic) BOOL hasIncludeMatchedToken;
@property (nonatomic) BOOL hasIncludeNameForForwardGeocodingResults;
@property (nonatomic) BOOL hasIncludePhonetics;
@property (nonatomic) BOOL hasIncludeQuads;
@property (nonatomic) BOOL hasIncludeRoadAccessPoints;
@property (nonatomic) BOOL hasIncludeSpokenNames;
@property (nonatomic) BOOL hasIncludeStatusCodeInfo;
@property (nonatomic) BOOL hasIncludeSuggestionsOnly;
@property (nonatomic) BOOL hasIncludeTravelDistance;
@property (nonatomic) BOOL hasIncludeTravelTime;
@property (nonatomic) BOOL hasIncludeUnmatchedStrings;
@property (readonly, nonatomic) BOOL hasIndexFilter;
@property (readonly, nonatomic) BOOL hasInputLanguage;
@property (nonatomic) BOOL hasIntersectingGeoId;
@property (nonatomic) BOOL hasIsCanonicalLocationSearch;
@property (nonatomic) BOOL hasIsFromAPI;
@property (nonatomic) BOOL hasIsPopularNearbyRequest;
@property (nonatomic) BOOL hasIsStrictGeocoding;
@property (nonatomic) BOOL hasIsStrictMapRegion;
@property (nonatomic) BOOL hasKnownAccuracy;
@property (readonly, nonatomic) BOOL hasKnownLocation;
@property (nonatomic) BOOL hasLocalSearchProviderID;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasMapMode;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (nonatomic) BOOL hasMaxBusinessReviews;
@property (nonatomic) BOOL hasMaxResults;
@property (readonly, nonatomic) BOOL hasPhoneticLocaleIdentifier;
@property (nonatomic) BOOL hasPlaceTypeLimit;
@property (readonly, nonatomic) BOOL hasPreserveFields;
@property (readonly, nonatomic) BOOL hasSearch;
@property (readonly, nonatomic) BOOL hasSearchContext;
@property (readonly, nonatomic) BOOL hasSearchContextSubstring;
@property (readonly, nonatomic) BOOL hasSearchLocation;
@property (nonatomic) BOOL hasSearchSource;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) BOOL hasSessionGUID;
@property (nonatomic) BOOL hasStructuredSearch;
@property (readonly, nonatomic) BOOL hasSuggestionsOptions;
@property (readonly, nonatomic) BOOL hasSuggestionsPrefix;
@property (nonatomic) BOOL hasSuppressResultsRequiringAttribution;
@property (nonatomic) BOOL hasTimeSinceMapEnteredForeground;
@property (nonatomic) BOOL hasTimeSinceMapViewportChanged;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTransportTypeForTravelTimes;
@property (readonly, nonatomic) BOOL hasViewportCenterCountryCode;
@property (readonly, nonatomic) BOOL hasZilchPoints;
@property (nonatomic) BOOL includeBusinessCategories;
@property (nonatomic) BOOL includeBusinessRating;
@property (nonatomic) BOOL includeEntryPoints;
@property (nonatomic) BOOL includeFeatureSets;
@property (nonatomic) BOOL includeGeoId;
@property (nonatomic) BOOL includeMatchedToken;
@property (nonatomic) BOOL includeNameForForwardGeocodingResults;
@property (nonatomic) BOOL includePhonetics;
@property (nonatomic) BOOL includeQuads;
@property (nonatomic) BOOL includeRoadAccessPoints;
@property (nonatomic) BOOL includeSpokenNames;
@property (nonatomic) BOOL includeStatusCodeInfo;
@property (nonatomic) BOOL includeSuggestionsOnly;
@property (nonatomic) BOOL includeTravelDistance;
@property (nonatomic) BOOL includeTravelTime;
@property (nonatomic) BOOL includeUnmatchedStrings;
@property (retain, nonatomic) GEOIndexQueryNode *indexFilter;
@property (retain, nonatomic) NSString *inputLanguage;
@property (nonatomic) NSUInteger intersectingGeoId;
@property (nonatomic) BOOL isCanonicalLocationSearch;
@property (nonatomic) BOOL isFromAPI;
@property (nonatomic) BOOL isPopularNearbyRequest;
@property (nonatomic) BOOL isStrictGeocoding;
@property (nonatomic) BOOL isStrictMapRegion;
@property (nonatomic) int knownAccuracy;
@property (retain, nonatomic) GEOLatLng *knownLocation;
@property (retain, nonatomic) NSMutableArray *limitToCountryCodeIso2s;
@property (nonatomic) int localSearchProviderID;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) int mapMode;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) int maxBusinessReviews;
@property (nonatomic) int maxResults;
@property (readonly, nonatomic) *int optionalSuppressionReasons;
@property (readonly, nonatomic) NSUInteger optionalSuppressionReasonsCount;
@property (retain, nonatomic) NSString *phoneticLocaleIdentifier;
@property (nonatomic) int placeTypeLimit;
@property (retain, nonatomic) GEOAddress *preserveFields;
@property (retain, nonatomic) NSString *search;
@property (retain, nonatomic) NSString *searchContext;
@property (retain, nonatomic) GEOSearchSubstring *searchContextSubstring;
@property (retain, nonatomic) GEOLatLng *searchLocation;
@property (nonatomic) int searchSource;
@property (retain, nonatomic) NSMutableArray *searchSubstrings;
@property (nonatomic) int sequenceNumber;
@property (retain, nonatomic) NSMutableArray *serviceTags;
@property (nonatomic) GEOSessionID sessionGUID;
@property (nonatomic) BOOL structuredSearch;
@property (retain, nonatomic) GEOSuggestionsOptions *suggestionsOptions;
@property (retain, nonatomic) NSString *suggestionsPrefix;
@property (nonatomic) BOOL suppressResultsRequiringAttribution;
@property (nonatomic) CGFloat timeSinceMapEnteredForeground;
@property (nonatomic) CGFloat timeSinceMapViewportChanged;
@property (nonatomic) CGFloat timestamp;
@property (nonatomic) int transportTypeForTravelTimes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSString *viewportCenterCountryCode;
@property (retain, nonatomic) NSData *zilchPoints;


+(BOOL)isValid:(id)arg0 ;
+(Class)filterByBusinessCategoryType;
+(Class)limitToCountryCodeIso2Type;
+(Class)serviceTagType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)businessIDAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)additionalPlaceTypesAsString:(int)arg0 ;
-(id)businessSortOrderAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)filterByBusinessCategoryAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithTraits:(id)arg0 ;
-(id)jsonRepresentation;
-(id)knownAccuracyAsString:(int)arg0 ;
-(id)limitToCountryCodeIso2AtIndex:(NSUInteger)arg0 ;
-(id)mapModeAsString:(int)arg0 ;
-(id)optionalSuppressionReasonsAsString:(int)arg0 ;
-(id)placeTypeLimitAsString:(int)arg0 ;
-(id)searchSourceAsString:(int)arg0 ;
-(id)searchSubstringAtIndex:(NSUInteger)arg0 ;
-(id)serviceTagAtIndex:(NSUInteger)arg0 ;
-(id)transportTypeForTravelTimesAsString:(int)arg0 ;
-(int)StringAsAdditionalPlaceTypes:(id)arg0 ;
-(int)StringAsBusinessSortOrder:(id)arg0 ;
-(int)StringAsKnownAccuracy:(id)arg0 ;
-(int)StringAsMapMode:(id)arg0 ;
-(int)StringAsOptionalSuppressionReasons:(id)arg0 ;
-(int)StringAsPlaceTypeLimit:(id)arg0 ;
-(int)StringAsSearchSource:(id)arg0 ;
-(int)StringAsTransportTypeForTravelTimes:(id)arg0 ;
-(int)additionalPlaceTypeAtIndex:(NSUInteger)arg0 ;
-(int)optionalSuppressionReasonAtIndex:(NSUInteger)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addAdditionalPlaceType:(int)arg0 ;
-(void)addBusinessID:(NSUInteger)arg0 ;
-(void)addFilterByBusinessCategory:(id)arg0 ;
-(void)addLimitToCountryCodeIso2:(id)arg0 ;
-(void)addOptionalSuppressionReason:(int)arg0 ;
-(void)addSearchSubstring:(id)arg0 ;
-(void)addServiceTag:(id)arg0 ;
-(void)clearAdditionalPlaceTypes;
-(void)clearBusinessIDs;
-(void)clearFilterByBusinessCategorys;
-(void)clearLimitToCountryCodeIso2s;
-(void)clearOptionalSuppressionReasons;
-(void)clearSearchSubstrings;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearServiceTags;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif