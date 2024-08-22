// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMPANIONROUTEUPDATE_H
#define GEOCOMPANIONROUTEUPDATE_H

@class PBCodable, PBDataReader, NSData;
@protocol NSCopying;


#import "GEOTransitRouteUpdate.h"

@interface GEOCompanionRouteUpdate : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    CGFloat _lastUpdated;
    NSData *_routeID;
    GEOTransitRouteUpdate *_transitRouteUpdate;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _type;
    ? _flags;
}


@property (nonatomic) BOOL hasLastUpdated;
@property (readonly, nonatomic) BOOL hasRouteID;
@property (readonly, nonatomic) BOOL hasTransitRouteUpdate;
@property (nonatomic) BOOL hasType;
@property (nonatomic) CGFloat lastUpdated;
@property (retain, nonatomic) NSData *routeID;
@property (retain, nonatomic) GEOTransitRouteUpdate *transitRouteUpdate;
@property (nonatomic) int type;


+(BOOL)isValid:(id)arg0 ;
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
-(id)initWithTransitRouteUpdate:(id)arg0 ;
-(id)jsonRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif