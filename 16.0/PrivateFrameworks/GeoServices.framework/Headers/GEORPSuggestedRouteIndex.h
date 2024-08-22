// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPSUGGESTEDROUTEINDEX_H
#define GEORPSUGGESTEDROUTEINDEX_H

@class PBCodable;
@protocol NSCopying;



@interface GEORPSuggestedRouteIndex : PBCodable <NSCopying>

 {
    ? _clusteredRouteRideSelections;
    unsigned int _directionsResponseIndex;
    unsigned int _directionsResponseSuggestedRoutesIndex;
    ? _flags;
}


@property (readonly, nonatomic) *unsigned int clusteredRouteRideSelections;
@property (readonly, nonatomic) NSUInteger clusteredRouteRideSelectionsCount;
@property (nonatomic) unsigned int directionsResponseIndex;
@property (nonatomic) unsigned int directionsResponseSuggestedRoutesIndex;
@property (nonatomic) BOOL hasDirectionsResponseIndex;
@property (nonatomic) BOOL hasDirectionsResponseSuggestedRoutesIndex;


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
-(unsigned int)clusteredRouteRideSelectionsAtIndex:(NSUInteger)arg0 ;
-(void)addClusteredRouteRideSelections:(unsigned int)arg0 ;
-(void)clearClusteredRouteRideSelections;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif