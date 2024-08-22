// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPDIRECTIONSSEARCH_H
#define MSPDIRECTIONSSEARCH_H

@class PBCodable, PBUnknownFields, GEOStorageRouteRequestStorage;
@protocol NSCopying;



@interface MSPDirectionsSearch : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _has;
}


@property (nonatomic) BOOL hasNavigationInterrupted;
@property (readonly, nonatomic) BOOL hasRouteRequestStorage;
@property (nonatomic) BOOL navigationInterrupted; // ivar: _navigationInterrupted
@property (retain, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage; // ivar: _routeRequestStorage
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif