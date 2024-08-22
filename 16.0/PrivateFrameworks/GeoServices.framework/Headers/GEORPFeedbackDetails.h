// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPFEEDBACKDETAILS_H
#define GEORPFEEDBACKDETAILS_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEORPAddToMapFeedback.h"
#import "GEORPAddressFeedback.h"
#import "GEORPCuratedCollectionFeedback.h"
#import "GEORPDirectionsFeedback.h"
#import "GEORPGroundViewFeedback.h"
#import "GEORPIncidentFeedback.h"
#import "GEORPLocalityFeedback.h"
#import "GEORPMerchantLookupFeedback.h"
#import "GEORPPhotoAttributionPreferencesUpdate.h"
#import "GEORPPoiActivityFeedback.h"
#import "GEORPPoiEnrichmentUpdate.h"
#import "GEORPPoiFeedback.h"
#import "GEORPPoiImageFeedback.h"
#import "GEORPSearchFeedback.h"
#import "GEORPStreetFeedback.h"
#import "GEORPThirdPartyPhotoSharingPreferenceUpdate.h"
#import "GEORPTileFeedback.h"
#import "GEORPTransitPoiFeedback.h"

@interface GEORPFeedbackDetails : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAddToMapFeedback *_addMapFeedback;
    GEORPAddressFeedback *_addressPointFeedback;
    GEORPCuratedCollectionFeedback *_curatedCollectionFeedback;
    GEORPDirectionsFeedback *_directionsFeedback;
    GEORPGroundViewFeedback *_groundViewFeedback;
    GEORPIncidentFeedback *_incidentFeedback;
    GEORPLocalityFeedback *_localityFeedback;
    GEORPMerchantLookupFeedback *_merchantLookupFeedback;
    GEORPPhotoAttributionPreferencesUpdate *_photoAttributionPreferencesUpdate;
    GEORPPoiActivityFeedback *_poiActivityFeedback;
    GEORPPoiEnrichmentUpdate *_poiEnrichmentUpdate;
    GEORPPoiFeedback *_poiFeedback;
    GEORPPoiImageFeedback *_poiImageFeedback;
    GEORPSearchFeedback *_searchFeedback;
    GEORPStreetFeedback *_streetFeedback;
    GEORPThirdPartyPhotoSharingPreferenceUpdate *_thirdPartyPhotoSharingPreferenceUpdate;
    GEORPTileFeedback *_tileFeedback;
    GEORPTransitPoiFeedback *_transitPoiFeedback;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEORPAddToMapFeedback *addMapFeedback;
@property (retain, nonatomic) GEORPAddressFeedback *addressPointFeedback;
@property (retain, nonatomic) GEORPCuratedCollectionFeedback *curatedCollectionFeedback;
@property (retain, nonatomic) GEORPDirectionsFeedback *directionsFeedback;
@property (retain, nonatomic) GEORPGroundViewFeedback *groundViewFeedback;
@property (readonly, nonatomic) BOOL hasAddMapFeedback;
@property (readonly, nonatomic) BOOL hasAddressPointFeedback;
@property (readonly, nonatomic) BOOL hasCuratedCollectionFeedback;
@property (readonly, nonatomic) BOOL hasDirectionsFeedback;
@property (readonly, nonatomic) BOOL hasGroundViewFeedback;
@property (readonly, nonatomic) BOOL hasIncidentFeedback;
@property (readonly, nonatomic) BOOL hasLocalityFeedback;
@property (readonly, nonatomic) BOOL hasMerchantLookupFeedback;
@property (readonly, nonatomic) BOOL hasPhotoAttributionPreferencesUpdate;
@property (readonly, nonatomic) BOOL hasPoiActivityFeedback;
@property (readonly, nonatomic) BOOL hasPoiEnrichmentUpdate;
@property (readonly, nonatomic) BOOL hasPoiFeedback;
@property (readonly, nonatomic) BOOL hasPoiImageFeedback;
@property (readonly, nonatomic) BOOL hasSearchFeedback;
@property (readonly, nonatomic) BOOL hasStreetFeedback;
@property (readonly, nonatomic) BOOL hasThirdPartyPhotoSharingPreferenceUpdate;
@property (readonly, nonatomic) BOOL hasTileFeedback;
@property (readonly, nonatomic) BOOL hasTransitPoiFeedback;
@property (retain, nonatomic) GEORPIncidentFeedback *incidentFeedback;
@property (retain, nonatomic) GEORPLocalityFeedback *localityFeedback;
@property (retain, nonatomic) GEORPMerchantLookupFeedback *merchantLookupFeedback;
@property (retain, nonatomic) GEORPPhotoAttributionPreferencesUpdate *photoAttributionPreferencesUpdate;
@property (retain, nonatomic) GEORPPoiActivityFeedback *poiActivityFeedback;
@property (retain, nonatomic) GEORPPoiEnrichmentUpdate *poiEnrichmentUpdate;
@property (retain, nonatomic) GEORPPoiFeedback *poiFeedback;
@property (retain, nonatomic) GEORPPoiImageFeedback *poiImageFeedback;
@property (retain, nonatomic) GEORPSearchFeedback *searchFeedback;
@property (retain, nonatomic) GEORPStreetFeedback *streetFeedback;
@property (retain, nonatomic) GEORPThirdPartyPhotoSharingPreferenceUpdate *thirdPartyPhotoSharingPreferenceUpdate;
@property (retain, nonatomic) GEORPTileFeedback *tileFeedback;
@property (retain, nonatomic) GEORPTransitPoiFeedback *transitPoiFeedback;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif