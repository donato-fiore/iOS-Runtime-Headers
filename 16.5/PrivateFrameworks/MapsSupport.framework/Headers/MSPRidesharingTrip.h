// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPRIDESHARINGTRIP_H
#define MSPRIDESHARINGTRIP_H

@class PBCodable, PBUnknownFields, GEOComposedWaypoint;
@protocol NSCopying;



@interface MSPRidesharingTrip : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
}


@property (retain, nonatomic) GEOComposedWaypoint *endWaypoint; // ivar: _endWaypoint
@property (readonly, nonatomic) BOOL hasEndWaypoint;
@property (readonly, nonatomic) BOOL hasStartWaypoint;
@property (retain, nonatomic) GEOComposedWaypoint *startWaypoint; // ivar: _startWaypoint
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