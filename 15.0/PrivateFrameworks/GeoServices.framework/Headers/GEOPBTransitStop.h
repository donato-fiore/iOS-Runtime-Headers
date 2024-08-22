// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPBTRANSITSTOP_H
#define GEOPBTRANSITSTOP_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol GEOTransitNamedItem, NSCopying;


#import "GEOLatLng.h"
#import "GEOStyleAttributes.h"

@interface GEOPBTransitStop : PBCodable <GEOTransitNamedItem, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_latLng;
    NSUInteger _muid;
    NSString *_nameDisplayString;
    GEOStyleAttributes *_styleAttributes;
    NSString *_timezone;
    NSMutableArray *_zoomNames;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _hallIndex;
    unsigned int _stopIndex;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int hallIndex;
@property (nonatomic) BOOL hasHallIndex;
@property (readonly, nonatomic) BOOL hasLatLng;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) BOOL hasMuid;
@property (readonly, nonatomic) BOOL hasNameDisplayString;
@property (nonatomic) BOOL hasStopIndex;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (readonly, nonatomic) BOOL hasTimezone;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEOLatLng *latLng;
@property (nonatomic) NSUInteger muid;
@property (nonatomic) NSUInteger muid;
@property (retain, nonatomic) NSString *nameDisplayString;
@property (nonatomic) unsigned int stopIndex;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *timezone;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSMutableArray *zoomNames;


+(BOOL)isValid:(id)arg0 ;
+(Class)zoomNameType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)bestName;
-(id)bestNameWithLocale:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)identifier;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)zoomNameAtIndex:(NSUInteger)arg0 ;
-(void)addZoomName:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)clearZoomNames;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif