// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDSPATIALEVENTLOOKUPRESPONSE_H
#define GEOPDSPATIALEVENTLOOKUPRESPONSE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEOLatLng.h"
#import "GEOPDMapsIdentifier.h"
#import "GEOTimezone.h"

@interface GEOPDSpatialEventLookupResponse : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _categorys;
    GEOLatLng *_center;
    NSMutableArray *_eventDateTimes;
    GEOPDMapsIdentifier *_eventId;
    GEOPDMapsIdentifier *_poiId;
    GEOTimezone *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) *int categorys;
@property (readonly, nonatomic) NSUInteger categorysCount;
@property (retain, nonatomic) GEOLatLng *center;
@property (retain, nonatomic) NSMutableArray *eventDateTimes;
@property (retain, nonatomic) GEOPDMapsIdentifier *eventId;
@property (readonly, nonatomic) BOOL hasCenter;
@property (readonly, nonatomic) BOOL hasEventId;
@property (readonly, nonatomic) BOOL hasPoiId;
@property (readonly, nonatomic) BOOL hasTimezone;
@property (retain, nonatomic) GEOPDMapsIdentifier *poiId;
@property (retain, nonatomic) GEOTimezone *timezone;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)eventDateTimeType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)categorysAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventDateTimeAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsCategorys:(id)arg0 ;
-(int)categoryAtIndex:(NSUInteger)arg0 ;
-(void)addCategory:(int)arg0 ;
-(void)addEventDateTime:(id)arg0 ;
-(void)clearCategorys;
-(void)clearEventDateTimes;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif