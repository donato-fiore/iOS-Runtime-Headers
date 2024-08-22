// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOCOMPANIONWAYPOINT_H
#define GEOCOMPANIONWAYPOINT_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOMapItemStorage.h"
#import "GEOWaypointTyped.h"
#import "GEOLocation.h"

@interface GEOCompanionWaypoint : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOMapItemStorage *_mapItem;
    NSString *_searchString;
    GEOWaypointTyped *_waypointTyped;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _isCurrentLocation;
    ? _flags;
}


@property (nonatomic) BOOL hasIsCurrentLocation;
@property (readonly, nonatomic) BOOL hasMapItem;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (readonly, nonatomic) BOOL hasWaypointTyped;
@property (nonatomic) BOOL isCurrentLocation;
@property (readonly, nonatomic) GEOLocation *location;
@property (retain, nonatomic) GEOMapItemStorage *mapItem;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) GEOWaypointTyped *waypointTyped;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithComposedWaypoint:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif