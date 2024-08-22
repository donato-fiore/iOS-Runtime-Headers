// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDRECENTROUTEINFO_H
#define GEOPDRECENTROUTEINFO_H

@class PBCodable, PBDataReader, PBUnknownFields, NSData, NSMutableArray;
@protocol NSCopying;



@interface GEOPDRecentRouteInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_etaFilter;
    NSData *_evChargingMetadata;
    NSData *_originalWaypointRoute;
    NSData *_routeId;
    NSData *_sessionState;
    NSMutableArray *_zilchPointSegments;
    NSData *_zilchPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _preferredTransportType;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif