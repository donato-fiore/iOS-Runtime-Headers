// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCHARGELOCATIONDETAILS_H
#define GEOCHARGELOCATIONDETAILS_H

@class PBCodable;
@protocol NSCopying;



@interface GEOChargeLocationDetails : PBCodable <NSCopying>

 {
    BOOL _arrivedAtChargeLocation;
    BOOL _routePaused;
    BOOL _routeResumed;
    ? _flags;
}


@property (nonatomic) BOOL arrivedAtChargeLocation;
@property (nonatomic) BOOL hasArrivedAtChargeLocation;
@property (nonatomic) BOOL hasRoutePaused;
@property (nonatomic) BOOL hasRouteResumed;
@property (nonatomic) BOOL routePaused;
@property (nonatomic) BOOL routeResumed;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif