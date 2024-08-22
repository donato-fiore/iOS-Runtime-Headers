// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTERRITORYDATATERRITORYINFO_H
#define GEOTERRITORYDATATERRITORYINFO_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOTerritoryDataPolygon.h"

@interface GEOTerritoryDataTerritoryInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _interestedPartys;
    ? _territoryTypes;
    NSUInteger _featureId;
    NSString *_interestedPartyCountryCode;
    NSString *_name;
    GEOTerritoryDataPolygon *_polygon;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _nameId;
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
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif