// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOROUTEHYPOTHESISREQUEST_H
#define GEOROUTEHYPOTHESISREQUEST_H

@class PBCodable;
@protocol NSCopying;


#import "GEOMapItemStorage.h"

@interface GEORouteHypothesisRequest : PBCodable <NSCopying>

 {
    CGFloat _arrivalDate;
    GEOMapItemStorage *_destinationLocation;
    CGFloat _expirationDate;
    int _transportType;
    ? _flags;
}


@property (nonatomic) CGFloat arrivalDate;
@property (retain, nonatomic) GEOMapItemStorage *destinationLocation;
@property (nonatomic) CGFloat expirationDate;
@property (nonatomic) BOOL hasArrivalDate;
@property (readonly, nonatomic) BOOL hasDestinationLocation;
@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)transportTypeAsString:(int)arg0 ;
-(int)StringAsTransportType:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif