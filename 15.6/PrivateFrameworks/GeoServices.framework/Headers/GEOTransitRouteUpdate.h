// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTRANSITROUTEUPDATE_H
#define GEOTRANSITROUTEUPDATE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEOTransitRouteDisplayStrings.h"
#import "GEOTransitRouteIdentifier.h"

@interface GEOTransitRouteUpdate : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_alerts;
    GEOTransitRouteDisplayStrings *_displayStrings;
    GEOTransitRouteIdentifier *_routeIdentifier;
    NSMutableArray *_stepUpdates;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _status;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *alerts;
@property (retain, nonatomic) GEOTransitRouteDisplayStrings *displayStrings;
@property (readonly, nonatomic) BOOL hasDisplayStrings;
@property (readonly, nonatomic) BOOL hasRouteIdentifier;
@property (nonatomic) BOOL hasStatus;
@property (retain, nonatomic) GEOTransitRouteIdentifier *routeIdentifier;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *stepUpdates;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)alertType;
+(Class)stepUpdateType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)_logDescription;
-(id)alertAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)statusAsString:(int)arg0 ;
-(id)stepUpdateAtIndex:(NSUInteger)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)addAlert:(id)arg0 ;
-(void)addStepUpdate:(id)arg0 ;
-(void)clearAlerts;
-(void)clearStepUpdates;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif