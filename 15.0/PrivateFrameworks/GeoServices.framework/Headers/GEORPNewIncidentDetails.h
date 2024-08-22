// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPNEWINCIDENTDETAILS_H
#define GEORPNEWINCIDENTDETAILS_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEORPIncidentLocation.h"
#import "GEORPUserLocationDetails.h"

@interface GEORPNewIncidentDetails : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEORPIncidentLocation *_incidentLocation;
    GEORPUserLocationDetails *_userLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _type;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasIncidentLocation;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUserLocation;
@property (retain, nonatomic) GEORPIncidentLocation *incidentLocation;
@property (nonatomic) int type;
@property (retain, nonatomic) GEORPUserLocationDetails *userLocation;


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
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif