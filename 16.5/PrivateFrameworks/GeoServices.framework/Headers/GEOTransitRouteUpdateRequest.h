// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTRANSITROUTEUPDATEREQUEST_H
#define GEOTRANSITROUTEUPDATEREQUEST_H

@class PBRequest, PBDataReader, PBUnknownFields, NSData, NSMutableArray, NSString, NSArray, NSUUID;
@protocol NSCopying;


#import "GEOPDABClientDatasetMetadata.h"
#import "GEOAdditionalEnabledMarkets.h"
#import "GEOClientCapabilities.h"
#import "GEORouteAttributes.h"
#import "GEOPrivacyMetadata.h"

@interface GEOTransitRouteUpdateRequest : PBRequest <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOSessionID _sessionId;
    GEOPDABClientDatasetMetadata *_abClientMetadata;
    NSData *_directionsResponseId;
    GEOAdditionalEnabledMarkets *_originalAdditionalEnabledMarkets;
    GEOClientCapabilities *_originalClientCapabilities;
    GEORouteAttributes *_originalRouteAttributes;
    NSMutableArray *_originalWaypoints;
    GEOPrivacyMetadata *_privacyMetadata;
    NSString *_requestingAppId;
    NSMutableArray *_routeIdentifiers;
    NSMutableArray *_serviceTags;
    CGFloat _sessionRelativeTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata;
@property (readonly, nonatomic) NSArray *allClientRouteIDs;
@property (readonly, nonatomic) NSUUID *clientRouteID;
@property (retain, nonatomic) NSData *directionsResponseId;
@property (readonly, nonatomic) BOOL hasAbClientMetadata;
@property (readonly, nonatomic) BOOL hasDirectionsResponseId;
@property (readonly, nonatomic) BOOL hasOriginalAdditionalEnabledMarkets;
@property (readonly, nonatomic) BOOL hasOriginalClientCapabilities;
@property (readonly, nonatomic) BOOL hasOriginalRouteAttributes;
@property (readonly, nonatomic) BOOL hasPrivacyMetadata;
@property (readonly, nonatomic) BOOL hasRequestingAppId;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) BOOL hasSessionRelativeTimestamp;
@property (retain, nonatomic) GEOAdditionalEnabledMarkets *originalAdditionalEnabledMarkets;
@property (retain, nonatomic) GEOClientCapabilities *originalClientCapabilities;
@property (retain, nonatomic) GEORouteAttributes *originalRouteAttributes;
@property (retain, nonatomic) NSMutableArray *originalWaypoints;
@property (retain, nonatomic) GEOPrivacyMetadata *privacyMetadata;
@property (retain, nonatomic) NSString *requestingAppId;
@property (retain, nonatomic) NSMutableArray *routeIdentifiers;
@property (retain, nonatomic) NSMutableArray *serviceTags;
@property (nonatomic) GEOSessionID sessionId;
@property (nonatomic) CGFloat sessionRelativeTimestamp;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)originalWaypointType;
+(Class)routeIdentifierType;
+(Class)serviceTagType;
+(id)mergedTransitRouteUpdateRequests:(id)arg0 ;
+(id)splitTransitRouteUpdateRequests:(id)arg0 ;
+(id)transitRouteUpdateRequestWithDirectionsRequest:(id)arg0 directionsResponse:(id)arg1 ;
+(id)transitRouteUpdateRequestWithDirectionsRequest:(id)arg0 directionsResponse:(id)arg1 composedRoutes:(id)arg2 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)originalWaypointAtIndex:(NSUInteger)arg0 ;
-(id)routeIdentifierAtIndex:(NSUInteger)arg0 ;
-(id)serviceTagAtIndex:(NSUInteger)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addOriginalWaypoint:(id)arg0 ;
-(void)addRouteIdentifier:(id)arg0 ;
-(void)addServiceTag:(id)arg0 ;
-(void)clearOriginalWaypoints;
-(void)clearRouteIdentifiers;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearServiceTags;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif