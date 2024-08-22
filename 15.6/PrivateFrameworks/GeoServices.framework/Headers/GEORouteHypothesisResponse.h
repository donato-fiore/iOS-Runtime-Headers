// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOROUTEHYPOTHESISRESPONSE_H
#define GEOROUTEHYPOTHESISRESPONSE_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEODirectionsResponse.h"
#import "GEOETAResponse.h"

@interface GEORouteHypothesisResponse : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEODirectionsResponse *_directionsResponse;
    GEOETAResponse *_etaResponse;
    CGFloat _updatedTimeStamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEODirectionsResponse *directionsResponse;
@property (retain, nonatomic) GEOETAResponse *etaResponse;
@property (readonly, nonatomic) BOOL hasDirectionsResponse;
@property (readonly, nonatomic) BOOL hasEtaResponse;
@property (nonatomic) BOOL hasUpdatedTimeStamp;
@property (nonatomic) CGFloat updatedTimeStamp;


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
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif