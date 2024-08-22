// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDPLACEREQUEST_H
#define GEOPDPLACEREQUEST_H

@class PBRequest, PBDataReader, PBUnknownFields, NSMutableArray, NSString, NSData;
@protocol NSCopying;


#import "GEOPDAnalyticMetadata.h"
#import "GEOPDClientMetadata.h"
#import "GEOPDPlaceRequestParameters.h"
#import "GEOPrivacyMetadata.h"

@interface GEOPDPlaceRequest : PBRequest <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAnalyticMetadata *_analyticMetadata;
    NSMutableArray *_auxiliaryTierRequestedComponents;
    GEOPDClientMetadata *_clientMetadata;
    NSMutableArray *_displayLanguages;
    NSString *_displayRegion;
    NSData *_handleData;
    GEOPDPlaceRequestParameters *_placeRequestParameters;
    GEOPrivacyMetadata *_privacyMetadata;
    NSMutableArray *_requestedComponents;
    NSMutableArray *_spokenLanguages;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _requestType;
    BOOL _needLatency;
    BOOL _suppressResultsRequiringAttribution;
    ? _flags;
}


@property (retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata;
@property (retain, nonatomic) NSMutableArray *auxiliaryTierRequestedComponents;
@property (retain, nonatomic) GEOPDClientMetadata *clientMetadata;
@property (retain, nonatomic) NSMutableArray *displayLanguages;
@property (retain, nonatomic) NSString *displayRegion;
@property (retain, nonatomic) NSData *handleData;
@property (readonly, nonatomic) BOOL hasAnalyticMetadata;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (readonly, nonatomic) BOOL hasHandleData;
@property (nonatomic) BOOL hasNeedLatency;
@property (readonly, nonatomic) BOOL hasPlaceRequestParameters;
@property (readonly, nonatomic) BOOL hasPrivacyMetadata;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) BOOL hasSuppressResultsRequiringAttribution;
@property (nonatomic) BOOL needLatency;
@property (retain, nonatomic) GEOPDPlaceRequestParameters *placeRequestParameters;
@property (retain, nonatomic) GEOPrivacyMetadata *privacyMetadata;
@property (nonatomic) int requestType;
@property (retain, nonatomic) NSMutableArray *requestedComponents;
@property (retain, nonatomic) NSMutableArray *spokenLanguages;
@property (nonatomic) BOOL suppressResultsRequiringAttribution;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)auxiliaryTierRequestedComponentType;
+(Class)displayLanguageType;
+(Class)requestedComponentType;
+(Class)spokenLanguageType;
+(id)collectionComponentInfoForReason:(NSUInteger)arg0 count:(unsigned int)arg1 traits:(id)arg2 ;
+(id)comingledPhotoLookupRequestWithCategoryIdentifier:(id)arg0 mapItemIdentifier:(id)arg1 range:(struct _NSRange )arg2 traits:(id)arg3 ;
+(id)componentInfoWithType:(int)arg0 count:(unsigned int)arg1 traits:(id)arg2 ;
+(id)createRequestedComponentsForReason:(NSUInteger)arg0 traits:(id)arg1 count:(unsigned int)arg2 ;
+(id)photoLookupRequestWithVendorIdentifier:(id)arg0 mapItemIdentifier:(id)arg1 range:(struct _NSRange )arg2 traits:(id)arg3 ;
+(id)publisherComponentInfoForReason:(NSUInteger)arg0 count:(unsigned int)arg1 traits:(id)arg2 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)hasResultProviderID;
-(BOOL)isBrandLookupRequest;
-(BOOL)isCanonicalLocationSearchRequest;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isForwardGeocoderRequest;
-(BOOL)isMerchantRequest;
-(BOOL)isPlaceRefinementRequest;
-(BOOL)readFrom:(id)arg0 ;
-(BOOL)shouldConsiderCaching;
-(CGFloat)localTimestamp;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)_initWithTraits:(id)arg0 includeHistoricalLocations:(BOOL)arg1 supportedMapsResultTypes:(id)arg2 ;
-(id)_initWithTransitScheduleRequestForStation:(NSUInteger)arg0 line:(NSUInteger)arg1 referenceTripId:(NSUInteger)arg2 includeAllDirectionNames:(BOOL)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)auxiliaryTierRequestedComponentAtIndex:(NSUInteger)arg0 ;
-(id)browseCategorySuggestionparametersWithTraits:(id)arg0 isFromNoQueryState:(BOOL)arg1 ;
-(id)cacheKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)displayLanguageAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initCitySelectorViewWithTraits:(id)arg0 batchSize:(unsigned int)arg1 ;
-(id)initForAutocompleteWithTraits:(id)arg0 count:(unsigned int)arg1 ;
-(id)initForBrandLookupWithIMessageUid:(id)arg0 traits:(id)arg1 ;
-(id)initForCategoryListWithTraits:(id)arg0 isFromNoQueryState:(BOOL)arg1 ;
-(id)initForCuratedCollectionItemLookupWithIdentifiers:(id)arg0 collectionIdentifier:(id)arg1 traits:(id)arg2 ;
-(id)initForCuratedCollectionLookupWithIdentifiers:(id)arg0 isBatchLookup:(BOOL)arg1 overrideSuppress:(BOOL)arg2 traits:(id)arg3 ;
-(id)initForDFRCategoryListWithTraits:(id)arg0 ;
-(id)initForDatasetCheckWithTraits:(id)arg0 ;
-(id)initForGeoIpLookupWithIpAddress:(id)arg0 traits:(id)arg1 ;
-(id)initForGuideLocationLookupWithIdentifiers:(id)arg0 traits:(id)arg1 ;
-(id)initForMapsHomeWithTraits:(id)arg0 ;
-(id)initForNearbyTransitPaymentLookupAtLocations:(id)arg0 traits:(id)arg1 ;
-(id)initForNearestTransitStationWithLine:(id)arg0 coordinate:(struct ? )arg1 traits:(id)arg2 ;
-(id)initForSearchFieldPlaceholderWithTraits:(id)arg0 ;
-(id)initForSearchHomeWithTraits:(id)arg0 ;
-(id)initForTerritoryForLatLngsE7:(id)arg0 traits:(id)arg1 ;
-(id)initForWifiFingerprintLookupWithLocations:(id)arg0 wifiAccessPoints:(id)arg1 maxLabels:(unsigned int)arg2 entryTime:(NSUInteger)arg3 exitTime:(NSUInteger)arg4 traits:(id)arg5 ;
-(id)initPlaceEnrichmentWithEnrichmentInfo:(id)arg0 mapsIdentifier:(id)arg1 traits:(id)arg2 ;
-(id)initPublisherViewWithPublisherIdentifier:(id)arg0 keywordFilter:(id)arg1 addressFilter:(id)arg2 batchSize:(unsigned int)arg3 withTraits:(id)arg4 ;
-(id)initWithAirportCode:(id)arg0 terminalCode:(id)arg1 gateCode:(id)arg2 traits:(id)arg3 ;
-(id)initWithAllCollectionViewWithBatchSize:(unsigned int)arg0 keywordFilter:(id)arg1 addressFilter:(id)arg2 withTraits:(id)arg3 ;
-(id)initWithAutocompleteFragment:(id)arg0 type:(int)arg1 traits:(id)arg2 filters:(id)arg3 retainedSearch:(id)arg4 tappedQuerySuggestion:(id)arg5 sessionData:(id)arg6 error:(*id)arg7 ;
-(id)initWithBatchReverseGeocodeLocations:(id)arg0 additionalPlaceTypes:(*int)arg1 additionalPlaceTypesCount:(NSUInteger)arg2 traits:(id)arg3 ;
-(id)initWithBrandMUID:(NSUInteger)arg0 traits:(id)arg1 ;
-(id)initWithCanonicalLocationSearchQueryString:(id)arg0 traits:(id)arg1 ;
-(id)initWithCategory:(id)arg0 maxResults:(unsigned int)arg1 traits:(id)arg2 ;
-(id)initWithCategory:(id)arg0 routeInfo:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3 ;
-(id)initWithCategoryMetadata:(id)arg0 parentMuid:(NSUInteger)arg1 traits:(id)arg2 ;
-(id)initWithComponents:(id)arg0 identifier:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithExternalBusinessID:(id)arg0 contentProvider:(id)arg1 traits:(id)arg2 ;
-(id)initWithExternalTransitStationCodes:(id)arg0 sourceID:(id)arg1 transactionDate:(id)arg2 transactionLocation:(id)arg3 traits:(id)arg4 ;
-(id)initWithForwardGeocodeAddress:(id)arg0 maxResults:(unsigned int)arg1 traits:(id)arg2 ;
-(id)initWithForwardGeocodeAddressString:(id)arg0 maxResults:(unsigned int)arg1 traits:(id)arg2 ;
-(id)initWithGuideHomeWithFilter:(id)arg0 guideLocation:(id)arg1 withTraits:(id)arg2 ;
-(id)initWithIdentifiers:(id)arg0 resultProviderID:(int)arg1 traits:(id)arg2 ;
-(id)initWithInitialRequestData:(id)arg0 traits:(id)arg1 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithMapItemToRefine:(id)arg0 coordinate:(struct ? )arg1 traits:(id)arg2 ;
-(id)initWithMapItemToRefine:(id)arg0 traits:(id)arg1 ;
-(id)initWithMerchantCode:(id)arg0 rawMerchantCode:(id)arg1 industryCategory:(id)arg2 industryCode:(id)arg3 paymentNetwork:(id)arg4 transactionDate:(id)arg5 transactionLocation:(id)arg6 traits:(id)arg7 ;
-(id)initWithMerchantCode:(id)arg0 rawMerchantCode:(id)arg1 relyingPartyIdentifier:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 terminalId:(id)arg8 transactionCurrencyCode:(id)arg9 transactionType:(int)arg10 transactionId:(id)arg11 warsawMerchantDomain:(id)arg12 warsawMerchantName:(id)arg13 warsawMerchantId:(id)arg14 adamId:(id)arg15 merchantId:(id)arg16 merchantDoingBizAsName:(id)arg17 merchantEnhancedName:(id)arg18 merchantCity:(id)arg19 merchantRawCity:(id)arg20 merchantState:(id)arg21 merchantRawState:(id)arg22 merchantZip:(id)arg23 merchantAddress:(id)arg24 merchantRawAddress:(id)arg25 merchantCountryCode:(id)arg26 merchantType:(id)arg27 merchantCleanConfidenceLevel:(id)arg28 merchantAdditionalData:(id)arg29 merchantCanl:(id)arg30 fuzzyMatched:(id)arg31 coarseLocationUsed:(id)arg32 traits:(id)arg33 ;
-(id)initWithNearbyTransitDeparturesWithLookupOrigin:(id)arg0 userLocation:(id)arg1 traits:(id)arg2 ;
-(id)initWithPlaceRefinementParameters:(id)arg0 traits:(id)arg1 ;
-(id)initWithReverseGeocodeCoordinate:(struct ? )arg0 floorOrdinal:(int)arg1 includeEntryPoints:(BOOL)arg2 preserveOriginalLocation:(BOOL)arg3 traits:(id)arg4 ;
-(id)initWithReverseGeocodeCoordinate:(struct ? )arg0 includeEntryPoints:(BOOL)arg1 preserveOriginalLocation:(BOOL)arg2 traits:(id)arg3 ;
-(id)initWithReverseGeocodeLocation:(id)arg0 includeEntryPoints:(BOOL)arg1 preserveOriginalLocation:(BOOL)arg2 placeTypeLimit:(int)arg3 traits:(id)arg4 ;
-(id)initWithSearchCategory:(id)arg0 venueIdentifier:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3 ;
-(id)initWithSearchQuery:(id)arg0 entryMetadata:(id)arg1 metadata:(id)arg2 autocompleteEntry:(id)arg3 retainedSearch:(id)arg4 maxResults:(unsigned int)arg5 filters:(id)arg6 suppressResultsRequiringAttribution:(BOOL)arg7 traits:(id)arg8 routeInfo:(id)arg9 error:(*id)arg10 ;
-(id)initWithSearchURLQuery:(id)arg0 coordinate:(struct ? )arg1 maxResults:(unsigned int)arg2 traits:(id)arg3 ;
-(id)initWithSearchURLQuery:(id)arg0 identifier:(id)arg1 resultProviderId:(int)arg2 contentProvider:(id)arg3 maxResults:(unsigned int)arg4 traits:(id)arg5 ;
-(id)initWithSpatialEventLookupParameters:(id)arg0 traits:(id)arg1 ;
-(id)initWithSpatialPlaceLookupParameters:(id)arg0 traits:(id)arg1 ;
-(id)initWithTransitDeparturesAtStation:(NSUInteger)arg0 line:(NSUInteger)arg1 referenceTripId:(NSUInteger)arg2 includeAllDirectionNames:(BOOL)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)initWithTransitScheduleAtStation:(NSUInteger)arg0 line:(NSUInteger)arg1 referenceTripId:(NSUInteger)arg2 includeAllDirectionNames:(BOOL)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)initWithTransitTripDetailsAtStation:(NSUInteger)arg0 line:(NSUInteger)arg1 referenceTripId:(NSUInteger)arg2 includeAllDirectionNames:(BOOL)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)initWithTripIds:(id)arg0 traits:(id)arg1 ;
-(id)initWithUpdatedTransitScheduleDetailsAtStation:(NSUInteger)arg0 line:(NSUInteger)arg1 referenceTripId:(NSUInteger)arg2 includeAllDirectionNames:(BOOL)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)initWithVendorSpecificPlaceRefinementParameters:(id)arg0 traits:(id)arg1 ;
-(id)jsonRepresentation;
-(id)pdSpatialEventLookupParametersArrayForParameters:(id)arg0 ;
-(id)pdSpatialEventLookupParametersForParameters:(id)arg0 ;
-(id)pdSpatialPlaceLookupParametersArrayForParameters:(id)arg0 ;
-(id)pdSpatialPlaceLookupParametersForParameters:(id)arg0 ;
-(id)requestTypeAsString:(int)arg0 ;
-(id)requestedComponentAtIndex:(NSUInteger)arg0 ;
-(id)searchOriginationInfoFromTraits:(id)arg0 ;
-(id)spokenLanguageAtIndex:(NSUInteger)arg0 ;
-(int)StringAsRequestType:(id)arg0 ;
-(int)autocompleteOriginationTypeFromTraits:(id)arg0 ;
-(int)geoUserPreferredTransportType;
-(int)resultProviderID;
-(int)userPreferredTransportTypeFromTransportType:(int)arg0 ;
-(void)addAuxiliaryTierRequestedComponent:(id)arg0 ;
-(void)addDisplayLanguage:(id)arg0 ;
-(void)addRequestedComponent:(id)arg0 ;
-(void)addRequestedComponents:(id)arg0 ;
-(void)addRequestedComponentsForReason:(NSUInteger)arg0 traits:(id)arg1 count:(unsigned int)arg2 ;
-(void)addSpokenLanguage:(id)arg0 ;
-(void)clearAuxiliaryTierRequestedComponents;
-(void)clearDisplayLanguages;
-(void)clearRequestedComponents;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearSpokenLanguages;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif